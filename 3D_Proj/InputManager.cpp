#include "InputManager.h"



InputManager::InputManager(){
	this->mDirectInput = 0;
	this->mKeyboard = 0;
	this->mMouse = 0;
	memset(mKeys, 0, sizeof(bool)*sNumKeys);
}


InputManager::~InputManager(){
	if (mMouse) {
		mMouse->Unacquire();
		mMouse->Release();
		mMouse = 0;
	}
	if (mKeyboard) {
		mKeyboard->Unacquire();
		mKeyboard->Release();
		mKeyboard = 0;
	}
	if (mDirectInput) {
		mDirectInput->Release();
		mDirectInput = 0;
	}
}

bool InputManager::Initialize(HMODULE hmodule, HWND hwnd, int screenWidth, int screenHeight)
{
	HRESULT result;

	this->mScreenWidth = screenWidth;
	this->mScreenHeight = screenHeight;

	mMouseX = 0;
	mMouseY = 0;
	//set interface for inputmanager
	result = DirectInput8Create(hmodule, DIRECTINPUT_VERSION, IID_IDirectInput8, (void**)&mDirectInput, NULL);
	if (FAILED(result))return false;
	//create interface for Keyboard
	result = mDirectInput->CreateDevice(GUID_SysKeyboard, &mKeyboard, NULL);
	if (FAILED(result))return false;
	//set dataformat for keyboard
	result = mKeyboard->SetDataFormat(&c_dfDIKeyboard);
	if (FAILED(result))return false;
	//set cooperative level so that the keyboard does not get shared by other applications while on foreground
	result = mKeyboard->SetCooperativeLevel(hwnd, DISCL_FOREGROUND | DISCL_EXCLUSIVE);
	if (FAILED(result))return false;
	//acquire said keyboard
	result = mKeyboard->Acquire();
	if (FAILED(result))return false;
	//initialize interface for mouse
	result = mDirectInput->CreateDevice(GUID_SysMouse, &mMouse, NULL);
	if (FAILED(result))return false;
	//set dataformat
	result = mMouse->SetDataFormat(&c_dfDIMouse);
	if (FAILED(result))return false;
	//set cooperative level, but since the mouse will be accessing the pixels on our screen, does not mean we need it exclusivly, since it won't use applications behind our application
	result = mMouse->SetCooperativeLevel(hwnd, DISCL_FOREGROUND | DISCL_NONEXCLUSIVE);
	if (FAILED(result))return false;
	//Acquire said mouse
	result = mMouse->Acquire();
	if (FAILED(result))return false;


	return true;

}

bool InputManager::Update()
{
	memcpy(mPrevKeys, mKeys, sizeof(bool)* sNumKeys);

	bool result;

	//reading

	result = readKeyboard();
	if (!result) return false;

	result = readMouse();
	if (!result) return false;

	//Update positions
	processInput();

}

bool InputManager::iskeyDown(unsigned int key)
{
	return mKeys[key];
}

bool InputManager::isKeyHit(unsigned int key)
{
	return mKeys[key] && !mPrevKeys[key];
}

void InputManager::getMousePosition(int & x, int & y)
{
	x = mMouseX;
	y = mMouseY;
}

bool InputManager::readKeyboard()
{
	HRESULT result;

	result = mKeyboard->GetDeviceState(sizeof(mKeys), (LPVOID)&mKeys);
	if (FAILED(result)) {
		if ((result == DIERR_INPUTLOST) || (result == DIERR_NOTACQUIRED))
			mKeyboard->Acquire();
		else
			return false;
	}

	return true;
}

bool InputManager::readMouse()
{
	if (mMouse == NULL) {
		mDirectInput->CreateDevice(GUID_SysMouse, &mMouse, NULL);
		return false;
	}

	HRESULT result;

	result = mMouse->GetDeviceState(sizeof(DIMOUSESTATE), (LPVOID)&mMouseState);
	if (FAILED(result)) {
		if ((result == DIERR_INPUTLOST) || (result == DIERR_NOTACQUIRED))
			mMouse->Acquire();
		else
			return false;
	}
	return true;
}

void InputManager::processInput()
{
	mMouseX += mMouseState.lX;
	mMouseY += mMouseState.lY;

	if (mMouseX < 0) mMouseX = 0;
	if (mMouseY < 0) mMouseY = 0;
	if (mMouseX > mScreenWidth) mMouseX = mScreenWidth;
	if (mMouseY > mScreenHeight) mMouseY = mScreenHeight;


}

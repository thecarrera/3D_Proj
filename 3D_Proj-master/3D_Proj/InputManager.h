#ifndef _INPUT_H
#define _INPUT_H


//preprocess directive
#define DIRECTINPUT_VERSION 0x0800

#include <dinput.h>

class InputManager
{
public:
	InputManager();
	~InputManager();

	bool Initialize(HMODULE hmodule, HWND hwnd, int screenWidth, int screenHeight);
	bool Update();

	bool iskeyDown(unsigned int key);
	bool isKeyHit(unsigned int key);
	void getMousePosition(int& x, int& y);

private:
	const static int sNumKeys = 256;

	bool readKeyboard();
	bool readMouse();
	void processInput();

	IDirectInput8 * mDirectInput;
	IDirectInputDevice8* mKeyboard;
	IDirectInputDevice8* mMouse;
	DIMOUSESTATE mMouseState;

	bool mKeys[sNumKeys];
	bool mPrevKeys[sNumKeys];

	int mScreenWidth, mScreenHeight, mMouseX, mMouseY;
};

#endif // !_INPUT_H
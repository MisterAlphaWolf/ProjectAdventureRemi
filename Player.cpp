#include "Player.h"

Player::Player()
{
	setXp(0);
	setLevel(0);
}

Player::Player(int x, int l)
{
	setXp(x);
	setLevel(l);
}

Player::Player(std::string n, int h, int d, int a, int x, int l)
{
	setName(n);
	setHealth(h);
	setDamage(d);
	setArmor(a);
	setXp(x);
	setLevel(l);
}

int Player::getXp()
{
	return XP;
}

void Player::setXp(int x)
{
	if (x < 0) XP = 0;
	else XP = XP + x;
}

int Player::getLevel()
{
	return Level;
}

void Player::setLevel(int l)
{
	if (l < 0) Level = 1;
	else Level = Level + l;
}

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg) {
	case WM_CLOSE:
		DestroyWindow(hWnd);
		break;

	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}

	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}


//Player::Player()
//	: m_hInstance(GetModuleHandle(nullptr))
//{
//
//	const wchar_t* CLASS_NAME = L"Window Class";
//	WNDCLASS wndClass = {};
//	wndClass.lpszClassName = CLASS_NAME;
//	wndClass.hInstance = m_hInstance;
//	wndClass.hIcon = LoadIcon(NULL, IDI_WINLOGO);
//	wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
//	wndClass.lpfnWndProc = WindowProc;
//
//	RegisterClass(&wndClass);
//
//	DWORD style = WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU;
//
//	int width = 640;
//	int height = 480;
//
//	RECT rect;
//	rect.left = 250;
//	rect.top = 250;
//	rect.right = rect.left + width;
//	rect.bottom = rect.top + height;
//
//	AdjustWindowRect(&rect, style, false);
//
//	m_hWnd = CreateWindowEx(0, CLASS_NAME, L"Inventory", style, rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top, NULL, NULL, m_hInstance, NULL);
//
//
//
//}
//
//Player::~Player()
//{
//
//	const wchar_t* CLASS_NAME = L"Window Class";
//
//	UnregisterClass(CLASS_NAME, m_hInstance);
//
//}
//
//bool Player::OpenInventory()
//{
//
//	MSG msg = {};
//
//	while (PeekMessage(&msg, nullptr, 0u, 0u, PM_REMOVE)) {
//
//		if (msg.message == WM_QUIT) {
//			return false;
//		}
//		ShowWindow(m_hWnd, SW_SHOW);
//		TranslateMessage(&msg);
//		DispatchMessage(&msg);
//	}
//
//	return true;
//
//}


#include <Windows.h>
#include <iostream>
#include "RecoilPatterns.h"

bool bRecoil = false;
float fFirerate = 101;

void __stdcall recoil()
{
	for (;;)
	{
		if (bRecoil) {
			int iCount = 0;
			while (GetAsyncKeyState(1) < 0) {
				if (iCount < RecoilPattern1::MAX_INDEX_RECOIL) {
					mouse_event(1, RecoilPattern1::recoilTableX[0][iCount], RecoilPattern1::recoilTableY[0][iCount], 0, 3);
				}
				if (iCount < RecoilPattern1::MAX_INDEX_RECOIL) 
					iCount++;
				Sleep(fFirerate);
			}
		}
		Sleep(1); //Reduce CPU usage
	}
}

void __stdcall keyhandler()
{
	for (;;)
	{
		if (GetAsyncKeyState(VK_INSERT) < 0) {
			bRecoil = !bRecoil;
			Sleep(500);
		}
		Sleep(1); //Reduce CPU usage
	}
}

int main()
{
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)recoil, 0, 0, 0);
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)keyhandler, 0, 0, 0);
	for (;;) {
		Sleep(1); //Reduce CPU usage
	}
	return 0;
}
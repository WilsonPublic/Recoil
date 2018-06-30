#pragma once
#include <Windows.h>

namespace RecoilPattern1
{
	const size_t MAX_INDEX_WEAPON = 1;
	const size_t MAX_INDEX_RECOIL = 29;
	DWORD recoilTableY[MAX_INDEX_WEAPON][MAX_INDEX_RECOIL] = {
		{ 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20 }
	};
	DWORD recoilTableX[MAX_INDEX_WEAPON][MAX_INDEX_RECOIL] = {
		{ -10, 15, 7, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
	};
}
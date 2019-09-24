// Screen.h

#pragma once
#include <iostream>
#include <string.h>
#include "MainChar.h"
#include "Map.h"

#ifndef SCREEN_H

#define SCREEN_H

#endif // !SCREEN_H

using namespace std;

class Screen {
public:
	void RenderScr (Map lay, MainChar mchar);
	void FillHelp ();
	void ClearScreen () {
		system ("cls");
	}

public:
	string help[21];
	string log;
	char Scr[50][50];
	int cordX, cordY;
};

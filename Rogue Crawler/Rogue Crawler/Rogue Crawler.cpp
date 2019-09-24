//Rogue Crawler.cpp

#include "pch.h"
#include "Map.h"
#include "MainChar.h"
#include "Screen.h"
#include <conio.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;


int main()
{
	bool quit = false;
	char key = ' ';
	Screen scr;
	Map map;
	MainChar mchar;

	scr.cordX = 39;
	scr.cordY = 39;

	scr.FillHelp ();
	map.Fill ();
	scr.RenderScr (map, mchar);

	while (!quit) {
		//Gameplay

			int const ch = _getch ();

			switch (ch)
			{
			case 0x64:
				if (scr.Scr[mchar.y][mchar.x + 1] == '#')
					scr.log = "There is a wall on my way";
				else
					scr.cordX++;
				break;
			case 0x61:
				if (scr.Scr[mchar.y][mchar.x - 1] == '#')
					scr.log = "There is a wall on my way";
				else
					scr.cordX--;
				break;
			case 0x77:
				if (scr.Scr[mchar.y - 1][mchar.x] == '#')
					scr.log = "There is a wall on my way";
				else
					scr.cordY--;
				break;
			case 0x73:
				if (scr.Scr[mchar.y + 1][mchar.x] == '#')
					scr.log = "There is a wall on my way";
				else
					scr.cordY++;
				break;
			case 0x1B:
				exit (0);
				break;
			}
		
		scr.RenderScr (map, mchar);
	}
}

#include "pch.h"
#include "Screen.h"
#include <string>
using namespace std;

void Screen::RenderScr (Map lay, MainChar mchar)
{
	ClearScreen ();
	for (int i = 0; i < 21; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			Scr[i][j] = lay.Layout[i + cordY][j + cordX];
			if (i == mchar.y && j == mchar.x) {
				Scr[i][j] = mchar.Symb;
			}
			cout << Scr[i][j];
		}
		cout << '\t' << '\t' << '\t'<< help[i] << '\n';
	}
	cout << log << '\n';
	log = " ";
}


void Screen::FillHelp ()
{
	help[0] = ".......-- Movement -- ...";         
	help[1] = "......................... ";
	help[2] = "...W... - Forward   - ... ";
	help[3] = "...A... -   Left    - ... ";
	help[4] = "...S... -   Right   - ... ";
	help[5] = "...D... - Backwards - ... ";
	help[6] = "..ESC... -   Exit   - ... ";
	help[7] = "......................... ";
	for (int i = 8; i < 21; i++)                  
		help[i] = " ";

}

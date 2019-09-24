#include "pch.h"
#include "Map.h"

void Map::Fill ()
{
	for (int i = 0; i < 120; i++)
	{
		for (int j = 0; j < 120; j++)
		{
			if (i == 40 || i == 80 || j == 40 || j == 80) {
				Layout[i][j] = '#';
			}
			else
				Layout[i][j] = '.';
		}
	}
}

#include "PrintSudoTable.h"
#include <stdio.h>
#include <assert.h>
#include "Cursor.h"

/**
 * 为打印数独盘面预先扩展空间
 */
static void ExpandSpace()
{
	for(int i = 0; i < 10; i++)
	{
		printf("\n");
	}
	MOVEUP(10);
}

static void ChangeLine(unsigned char offsetX)
{
	MOVEDOWN(1);
	MOVELEFT(9);
}

static void PrintBlock(const struct SudoTable* const table,
		               const unsigned char* index,
					   unsigned char offsetX,
					   unsigned char offsetY,
					   unsigned char color)
{
	MOVERIGHT(offsetX);
	MOVEDOWN(offsetY);
	SET_COLOR(color);
	for(unsigned char i = 0; i < 9; i++)
	{
		unsigned short  value = table->cell[index[i]];
		if(value != 0)
		{
			printf("%3d", value);
		}
		else
		{
			SET_COLOR(FORECOLOR_RED);
			printf("  ?");
			SET_COLOR(color);
		}
		if((i == 2)||(i == 5))
		{
			ChangeLine(offsetX);
		}
	}
	MOVEUP(2 + offsetY);
	MOVELEFT(9 + offsetX);
	return;
}


void PrintSudoTable(const struct SudoTable* const table)
{
	const unsigned char indexes[9][9] = 
	{
		{0, 1, 2, 9, 10, 11, 18, 19, 20},
		{3, 4, 5, 12, 13, 14, 21, 22, 23},
		{6, 7, 8, 15, 16, 17, 24, 25, 26},
		{27, 28, 29, 36, 37, 38, 45, 46, 47},
		{30, 31, 32, 39, 40, 41, 48, 49, 50},
		{33, 34, 35, 42, 4, 44, 51, 52, 53},
		{54, 55, 56, 63, 64, 65, 72, 73, 74},
		{57, 58, 59, 66, 67, 68, 75, 76, 77},
		{60, 61, 62, 69, 70, 71, 78, 79, 80},
	};
	ExpandSpace();
	PrintBlock(table, indexes[0], 0, 0, FORECOLOR_WHITE);
	PrintBlock(table, indexes[1], 9, 0, FORECOLOR_PURPLE);
	PrintBlock(table, indexes[2], 18, 0, FORECOLOR_WHITE);
	PrintBlock(table, indexes[3], 0, 3, FORECOLOR_PURPLE);
	PrintBlock(table, indexes[4], 9, 3, FORECOLOR_WHITE);
	PrintBlock(table, indexes[5], 18, 3, FORECOLOR_PURPLE);
	PrintBlock(table, indexes[6], 0, 6, FORECOLOR_WHITE);
	PrintBlock(table, indexes[7], 9, 6, FORECOLOR_PURPLE);
	PrintBlock(table, indexes[8], 18, 6, FORECOLOR_WHITE);
	MOVEDOWN(10);
	return;
}



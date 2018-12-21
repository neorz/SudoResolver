#include "PrintSudoTable.h"
#include <stdio.h>
#include <assert.h>

static void PrintBlock(const struct SudoTable* const table,
		               const unsigned char* index,
					   unsigned char offsetX,
					   unsigned char offsetY,
					   unsigned char color)
{
	printf("\e[%dC\e[%dB\e[%dm", offsetX, offsetY, color);
	for(unsigned char i = 0; i < 9; i++)
	{
		unsigned short  value = table->cell[index[i]];
		printf("%3d", value);
		if((i == 2)||(i == 5))
		{
			printf("\n");
			printf("\e[%dC", offsetX);
		}
	}
	printf("\n");
	printf("\e[1A");
	printf("\e[3A\e[10D\e[37m");
	printf("\e[%dD", offsetX);	
	printf("\e[%dA", offsetY);
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
	};
	printf("\n");
	PrintBlock(table, indexes[0], 0, 0, 37);
	PrintBlock(table, indexes[1], 10, 0,35);
//	PrintBlock(table, indexes[2], 19, 0, 37);
//	printf("\n");
//	PrintBlock(table, indexes[3], 0, 3, 35);
//	printf("\e[3B");
	printf("\n");
	return;
}



#include "PrintSudoTable.h"

int main(void)
{
	struct SudoTable table = {
		.cell = {1, 2, 3, 4, 5, 6, 7, 8, 9, 
		         2, 0, 4, 5, 6, 7, 8, 9, 1,
	             3, 4, 0, 6, 7, 8, 9, 1, 2,
	             4, 5, 6, 0, 8, 9, 1, 2, 3,
	             5, 6, 7, 8, 0, 1, 2, 3, 4,
	             6, 7, 8, 9, 1, 0, 3, 4, 5,
	             7, 8, 9, 1, 2, 3, 0, 5, 6,
	             8, 9, 1, 2, 3, 4, 5, 0, 7,
	             9, 1, 2, 3, 4, 5, 6, 7, 8}};
	PrintSudoTable(&table);
	return 1;
}


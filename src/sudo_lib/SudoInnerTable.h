#pragma once

enum ProbValue
{
	PROB_1 = 1 << 0,
	PROB_2 = 1 << 1,
	PROB_3 = 1 << 2,
	PROB_4 = 1 << 3,
	PROB_5 = 1 << 4,
	PROB_6 = 1 << 5,
	PROB_7 = 1 << 6,
	PROB_8 = 1 << 7,
	PROB_9 = 1 << 8,
};

struct SudoInnerTable
{
	unsigned short _probMatrix[81];
};


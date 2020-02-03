#include <stdio.h>
#include "rule.h"

int main(void)
{
	int map[9][9] = {
		{0, 2, 3, 4, 5, 6, 7, 8, 9},
		{2, 0, 4, 5, 6, 7, 8, 9, 1},
		{3, 4, 0, 6, 7, 8, 9, 1, 2},
		{4, 5, 6, 0, 8, 9, 0, 0, 3},
		{5, 6, 7, 8, 0, 1, 0, 0, 4},
		{6, 7, 8, 9, 1, 0, 0, 4, 5},
		{7, 8, 9, 1, 2, 3, 0, 5, 6},
		{8, 9, 1, 2, 3, 4, 5, 0, 7},
		{9, 1, 2, 3, 4, 5, 6, 7, 0},
	};

	printf(rule_horizontal(map) == 1 ? "horizontal_OK\n" : "horizontal_NG\n");
	printf(rule_vertical(map) == 1 ? "vertical_OK\n" : "vertical_NG\n");
}
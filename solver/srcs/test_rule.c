#include <stdio.h>
#include "rule.h"

int main(void)
{
	int map[9][9] = {
		{1, 2, 3, 4, 5, 6, 7, 8, 9},
		{4, 5, 6, 7, 8, 9, 1, 2, 3},
		{7, 8, 9, 1, 2, 3, 4, 5, 6},
		{2, 3, 4, 5, 6, 7, 8, 9, 1},
		{5, 6, 7, 8, 9, 1, 2, 3, 4},
		{8, 9, 1, 2, 3, 4, 5, 6, 7},
		{3, 4, 5, 6, 7, 8, 9, 1, 2},
		{6, 7, 8, 9, 1, 2, 3, 4, 5},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
	};

	printf(rule(map) == 1 ? "rule_OK\n" : "rule_NG\n");
	printf(rule_horizontal(map) == 1 ? "horizontal_OK\n" : "horizontal_NG\n");
	printf(rule_vertical(map) == 1 ? "vertical_OK\n" : "vertical_NG\n");
	printf(rule_block(map) == 1 ? "block_OK\n" : "block_NG\n");
}
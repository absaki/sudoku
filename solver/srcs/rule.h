#ifndef RULE_H
#define RULE_H

#include <stdio.h>

int rule(int map[9][9]);
int rule_horizontal(int map[9][9]);
int rule_vertical(int map[9][9]);
int rule_block(int map[9][9]);

#endif
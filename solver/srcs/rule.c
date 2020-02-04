#include "rule.h"

int rule_horizontal(int map[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (map[i][j] != 0)
            {
                for (int k = j + 1; k < 9; k++)
                {
                    if (map[i][j] == map[i][k])
                    {
                        return (0);
                    }
                }
            }
        }
    }
    return (1);
}

int rule_vertical(int map[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (map[j][j] != 0)
            {
                for (int k = j + 1; k < 9; k++)
                {
                    if (map[j][i] == map[k][i])
                    {
                        return (0);
                    }
                }
            }
        }
    }
    return (1);
}
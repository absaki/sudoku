#include "rule.h"

int rule_horizontal(int map[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (map[i][j] != 0)
            {
                // printf("j = %d\n", j);
                for (int k = 0; k < 9; k++)
                {
                    if (k != j && map[i][j] == map[i][k])
                    {
                        // printf("k = %d\n", k);
                        return (0);
                    }
                }
            }
        }
    }
    return (1);
}
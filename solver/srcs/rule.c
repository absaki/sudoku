#include "rule.h"

int rule(int map[9][9])
{
    if (rule_horizontal(map) && rule_vertical(map) && rule_block(map))
    {
        return (1);
    }
    return 0;
}

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
            if (map[j][i] != 0)
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

int rule_block(int map[9][9])
{
    int tmp_arr[9];

    for (int l = 0; l < 9; l++)
    {
        for (int i = 0; i < 3; i++)
        {
            tmp_arr[i + 0] = map[(l / 3) * 3 + 0][(l % 3) * 3 + i];
            tmp_arr[i + 3] = map[(l / 3) * 3 + 1][(l % 3) * 3 + i];
            tmp_arr[i + 6] = map[(l / 3) * 3 + 2][(l % 3) * 3 + i];
        }
        for (int j = 0; j < 9; j++)
        {
            if (tmp_arr[j] != 0)
            {
                for (int k = j + 1; k < 9; k++)
                {
                    if (tmp_arr[j] == tmp_arr[k])
                    {
                        return (0);
                    }
                }
            }
        }
    }
    return (1);
}


#include <stdio.h>
#include <unistd.h>

void set_map(char *argc, int map[9][9])
{
    for (int i = 0; i < 81; i++)
    {
        map[i / 9][i % 9] = argc[i] - '0';
    }
}

int main(int argc, char *argv[])
{
    int map[9][9];

    set_map(argv[1], map);
    for (int i = 0; i < 81; i++)
    {
        printf((i % 9 == 8 ? "%d\n" : "%d"), map[i / 9][i % 9]);
    }
}
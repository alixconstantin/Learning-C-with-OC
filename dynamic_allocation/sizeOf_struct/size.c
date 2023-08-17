#include <stdio.h>

typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x;
    int y;
};

int main(int argc, char *argv[])
{
    printf("Coordonnees : %zu octets\n", sizeof(Coordonnees));

    return 0;
}


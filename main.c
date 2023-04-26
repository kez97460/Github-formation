#include <stdio.h>

/* Initialisation des fonctions */
void fct();

/* Main */
int main(int argc, char const *argv[])
{
    fct();
    
    return 0;
}

/* Déclarations de fonctions */

void fct()
{
    int x[] = {0b01000110, 0x65, 117, 'r'};
    for(int i = 0; i < 4; i++)
        printf("%c",x[i]);
    printf("\n");
}
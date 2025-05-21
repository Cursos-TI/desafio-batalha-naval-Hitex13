#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main(){

    char Linha[10] ={'A','B','C','D','E','F','G','H','I','J'} ;
    int Naval[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            Naval[i][j] = 0;
        }
    }

    Naval[5][6] = 3;
    Naval[5][7] = 3;
    Naval[5][8] = 3;

    Naval[2][1] = 3;
    Naval[1][1] = 3;
    Naval[3][1] = 3;
    for (int q = 0; q < 1; q++)
    {
        for (int l = 0; l < 10; l++)
        {
            printf(" |%c|",Linha[l]);
        }

        for ( int f = 0; f < 10; f++)
        {
            printf("\n%d|",f);
            for (int h = 0; h < 10; h++)
            {
                //printf("%d ",Naval[f][h]);
                printf("%d   ",Naval[h][f]);
            }
            printf("\n");
        }
        
        
    }
    
return 0;

} 


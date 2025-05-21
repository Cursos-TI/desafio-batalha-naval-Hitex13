#include <stdio.h>

#define Linha 10
#define Coluna 10

int main(){

int Matriz[Linha][Coluna];
char Matriz2[10]; 
for (int i = 0; i < 10; i++)
{
    Matriz2[i]='A'+ i;
    
    printf("    |%c| ", Matriz2[i]);
}

for (int i = 0; i < Linha; i++)
{
    printf("\n%d| ",i);
    for  (int j = 0; j < Coluna; j++)
    {
        Matriz[i][j] = 0;
        Matriz[5][6] = 3;
        Matriz[5][7] = 3;
        Matriz[5][8] = 3;

        Matriz[2][1] = 3;
        Matriz[1][1] = 3;
        Matriz[3][1] = 3; 

        Matriz[9][0] = 3;
        Matriz[8][1] = 3;
        Matriz[7][2] = 3;
        printf("  %d     ", Matriz[i][j]);
    }
   
}



}
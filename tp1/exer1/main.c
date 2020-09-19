#include <stdio.h>
int factorial(int);
int main()
{
    int y =0;
    printf("\nIngresar un numero ");
    scanf("%d",&y);
    y = factorial(y);
    printf("\nSu factorial es %d", y);
    return 0;
}

#include <stdio.h>

int main(){
    int n, compteur;
    printf("Quel terme de la suite de Fibonacci veux-tu ?\n");
    scanf("%d", &n);
    int u0 = 1, u1 = 1;
    if (n == 0 || n == 1)
    {
        printf("%d", u0);
    }
    else
    {
        int u2;
        for (compteur = 2 ; compteur <= n ; compteur++)
        {
            u2 = u0 + u1;
            u0 = u1;
            u1 = u2;
        }
        printf("%d", u1);
    }

    return 0;
}
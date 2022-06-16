#include <stdio.h>
#include "module.h"

int main(){
    int x;
    printf("Quel entier veux-tu implémenter ?");
    scanf("%d", &x);
    int resultat = addone(x);
    printf("%d", resultat);
}
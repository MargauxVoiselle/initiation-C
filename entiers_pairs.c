#include <stdio.h>
void print_tableau(int *tableau, int longueur);

int main(){
    int compteur = 0, nombre = 0;
    int tableau[50];
    while (compteur < 50)
    {
        tableau[compteur] = 2 * compteur;
        compteur++;
    }
    print_tableau(tableau, 50);

    return 0;
}

void print_tableau(int *tableau, int longueur){
    int compteur;
    for (compteur = 0 ; compteur < longueur ; compteur ++)
    {
        printf("%d\n", tableau[compteur]);
    }
}
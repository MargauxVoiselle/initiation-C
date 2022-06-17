#include <stdio.h>  

int main(){
    int t[10], nombre, i;
    printf("Entrez le nombre à convertir : ");
    scanf("%d", &nombre);
    for (i = 0 ; nombre > 0 ; i++){
        t[i] = nombre % 2;
        nombre = nombre / 2;
    } // i porte la longueur du nombre en binaire
    int compteur = 0;
    printf("Le nombre de bits à 1 dans la représentation binaire de l'entier donnée par ");
    for (int k = 0; k < i ; k++){
        if (t[k] == 1){
            compteur++;
        }
        printf("%d", t[i - 1 - k]);
    }
    printf(" est %d", compteur);

  return 0;
}
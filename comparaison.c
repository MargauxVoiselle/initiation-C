#include <stdio.h>
int mylen (char s[]);
int comparaison(char s1[], char s2[], int longueur);

int main(){
    char s1[] = "Python", s2[] = "Programme";
    int longueur1 = mylen(s1), longueur2 = mylen(s2), result = 3;
    if (longueur1 >= longueur2){
        result = comparaison(s1, s2, longueur1);
    }
    else {
        result = comparaison(s1, s2, longueur2);
    }
    printf("Le résultat est %d", result);

    return 0;
}

int mylen (char s[]){
    int longueur = 0;
    char caractere = 0;
    do
    {
        caractere = s[longueur];
        longueur++;
    }
    while (caractere != '\0');
    longueur--;
    return longueur;
}

int comparaison (char s1[], char s2[], int longueur){
    int compteur = 0, result = 0;
    while (compteur < longueur){
        if (s1[compteur] == s2[compteur]){
            result = 0;
        }
        else if (s1[compteur] > s2[compteur]){
            result = 1;
            compteur = longueur;
        }
        else{
            result = -1;
            compteur = longueur;
        }
        compteur ++;
    }
    return result;
}

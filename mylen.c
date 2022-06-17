#include <stdio.h>
int mylen (char s[]);

int main(){
    int longueur;
    char s[100];
    scanf("%s", s);
    longueur = mylen(s);
    printf("La longueur de la chaîne de caractère est %d", longueur);

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
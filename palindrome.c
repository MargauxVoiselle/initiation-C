#include <stdio.h>
int palindrome (char s[], int longueur);

int main(){
    int is_palindrome;
    char s[] = "kayaka";
    is_palindrome = palindrome(s, 6);
    if (is_palindrome){
        printf("Vrai");
    }
    else {
        printf("Faux");
    }

    return 0;
}

int palindrome (char s[], int longueur){
    for (int i = 0 ; i < longueur ; i++ ){
        if (s[i] == s[longueur - 1 - i]){
            continue;
        }
        else {
            return 0;
        }
    }
    return 1;
}
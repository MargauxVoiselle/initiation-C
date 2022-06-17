#include <stdio.h>
void sum_array(int t1[], int t2[], int t3[], int longueur);

int main(){
    int longueur;
    printf("Quelle longueur de tableau souhaitée ?\n");
    scanf("%d", &longueur);
    int t1[longueur], t2[longueur], t3[longueur];
    for (int k = 0 ; k < longueur ; k++){
        t1[k] = k*k;
        t2[k] = k*k;
    }

    sum_array(t1, t2, t3, longueur);
    for (int i = 0 ; i < longueur ; i++){
        printf("t[%d] = %d\n", i, t3[i]);
    }

    return 0;
}

void sum_array(int t1[], int t2[], int t3[], int longueur){
    for (int i = 0 ; i < longueur ; i++){
        t3[i] = t1[i] + t2[i];
    }
}
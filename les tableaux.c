#include <stdio.h>
#include <stdlib.h>

 int main()
{
     float T[5];
    int i,j ;
    float S , M =0;
    for(i =0; i<6; i++){
        printf("Donner la note de l'etudiant num %d : ", i+1);
        scanf("%f",&T[i]);
    }
    S = 0 ;
    for(j =0; j<6; j++){
        S = S + T[j];
    }

    S/=6;
    printf("%f",S);
    return 0;

}





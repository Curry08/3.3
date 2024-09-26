#include <stdio.h>

int main(){
    int eta;
    char nome;
    printf("Inserisci iniziale del nome: ");
    scanf("%c",&nome);
    printf("Inserisci età: ");
    scanf("%d",&eta);
    printf("%c ",nome);
    if(eta>=18){
        printf("Maggiorenne");
    }
    else{printf("Minorenne");}
    return 0;
}

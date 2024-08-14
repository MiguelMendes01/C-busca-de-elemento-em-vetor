#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet [8], num, achei=0;
    for (int i=0; i<8; i++){
        printf("\n Digite o elemento da posição %d: ",i+1);
        scanf("%d", &vet[i]);
    }
    printf("\n\n Qual o número que deseja buscar? ");
    scanf("%d", &num);
    for (int i=0; i<8; i++){
        if(vet[i]==num){
            printf("\n 0 número %d apareceu na posição %d", num, i+1);
            achei=1;            
            }
            if (achei !=1){
                printf("\n Elemento não encontrado");
                system("pause");
                }
}
}
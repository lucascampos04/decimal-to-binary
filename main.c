#include <stdio.h>

void decimalParaBinario(int decimal){
    int binario[32];
    int indice = 0;

    if (decimal == 0){
        printf("O numero em binario e0\n");
        return;
    }

    while (decimal > 0){
        binario[indice] = decimal % 2;
        decimal = decimal / 2;
        indice++;
    }

    printf("O numero em binario e ");
    for (int i = indice - 1; i >= 0; i--){
        printf("%d", binario[i]); // Imprime os digitos binarios de tras para frente 
    }
    printf("\n");
}

int main(){
    int decimal;

    do{
        printf("Digite um numero decimal: ");
        scanf("%d", &decimal);
        decimalParaBinario(decimal);
    }
    while(1);
        
    return 0;
}
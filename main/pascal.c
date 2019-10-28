#include <stdio.h>
 
int main(){
    printf("Qual é o expoente do binômio?\t");
    int expoente;  
    scanf("%i", &expoente);
    unsigned int pascal[expoente + 1][expoente + 1];
    pascal[0][0] = 1;
    //preenche a primeira linha com zeros, exceto o primeiro elemento
    for (int i = 1; i < expoente + 1; i++) {
        pascal[0][i] = 0;
    }
    //preenche a primeira coluna com 1
    for (int i = 1; i < expoente + 1; i++) {
        pascal[i][0] = 1;
    }
   
    /**
 
        faz o preenchimento da matrix.:
 
        1 0 0 0 0           1 0 0 0 0           a = 1 + 0
        1 1 0 0 0           1 a b 0 0           d = a + b
        1 2 1 0 0           1 c d b 0           c = a + 1
        1 3 3 1 0    
 
    **/
    for (int i = 1; i < expoente + 1; i++) {
        for (int j = 1; j < expoente + 1; j++) {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }
    // imprime na tela a linha pedida pelo internauta
    printf("Temos na linha do triângulo de Pascal os seguintes números: \n");
    for (int i = 0; i < sizeof(pascal[expoente])/sizeof(int); i++) {    
        printf("%i ", pascal[expoente][i]);
    }
    printf("\n");
 
    return 0;
}

#include <stdio.h>

int main(){
    char linha[1001];
    int i,esquerda, direita;
    while(scanf("%s",&linha) != EOF){
       esquerda = 0;
       direita = 0;
       for(i = 0; linha[i] != '\0'; i++){
             if(linha[i] == '(') esquerda++;
             else if (linha[i] == ')'){
                  direita++;
                  if(esquerda > 0){
                         esquerda--;
                         direita--;
                  }
             }
       }
       if(esquerda == 0 && direita == 0) printf("correct\n");
       else printf("incorrect\n");
    }
    return 0;
}
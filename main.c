#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int i, j, rept = 0, diamantes;
    char solo[1010];
    scanf("%d", &rept);
    while (rept--){
        scanf("%s", solo);
        diamantes = 0;
        for (i = 0; i < strlen(solo); i++){
            if (solo[i] == '\0')
                break;
            if (solo[i] == '<'){
                for (j = i; j< strlen(solo); j++){
                    if (solo[j] == '>'){
                        diamantes++;
                        solo[j] = '0';
                        break;
                    }
                }
            }
        }
        printf("%d\n", diamantes);
    }
    return 0;
}
#include <stdio.h>
int main() {
    char arr[10000];
    gets(arr);
    int symb[256];
    for(int i = 0; arr[i]; i++)
        symb[arr[i]]++;
    for(int i=0; i<256; ++i){
        if(symb[i]){
            printf("%c",i);
            for(int j = 0; j < symb[i]; j++)printf(".");
            printf("\n");
        }
    }
    return 0;
}
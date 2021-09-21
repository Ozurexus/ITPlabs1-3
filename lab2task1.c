#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    int x;
    scanf("%s",a);
    //printf(a);
    x= strlen(a);
    //printf("%d \n",x);
    int i=x;
    while (i>0){

        printf("%c",*(a+i-1));
        i=i-1;
    }
    return 0;}
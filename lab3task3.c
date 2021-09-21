#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[10]={};
    int s;
    while(true){
        scanf("%d", &s);
        if(s == EOF) break;
        if(arr[s] ==0){
            arr[s] = 1;
            printf("%d ", s);
        }
    }
    return 0;
}
#include <stdio.h>

int factorial(int base,  int result){
    if(base == 1 || base == 0) return result;
    else return factorial(base-1, result*base);
}

int main(){
    int start,  end;
    int number;
    int OriginalNumber;
    int currentDigit;
    int sum = 0;
    printf("Starting range of number:");
    scanf("%d", &start);
    printf("Ending range of number:");
    scanf("%d", &end);
    printf("The strong numbers are:");
    for(; start <=end; start++){
        OriginalNumber = start;
        number = start;
        while(number > 0){
            currentDigit = number % 10;
            number = number / 10;
            sum += factorial(currentDigit, 1);
        }
        if(sum == OriginalNumber) printf("%d ", OriginalNumber);
        sum = 0;
    }
}

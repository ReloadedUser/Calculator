#include <stdlib.h>
#include <stdio.h>
#include <math.h>



long long int calc(const char sign[1],long long int firstNumber,long long int secondNumber) {
    long long int result;
    switch (*sign) {
        case '+':
            result=firstNumber+secondNumber;
            break;
        case '-':
            result=firstNumber-secondNumber;
            break;
        case '/':
            result=firstNumber/secondNumber;
            break;
        case '*':
            result=firstNumber*secondNumber;
            break;
        case '^':
            result=pow(firstNumber,secondNumber);
            break;
        case 'v':
            result = pow(firstNumber, 1.0 / secondNumber);
            break;

        default:
            printf("Error:please enter a valid operation sign.\n");
            return 0;
    }
    return result;



}


int main(void) {

    char sign[1];
    long long int firstNumber;
    long long int secondNumber;
    int check=0;


    printf("Enter the operation sign:\n");
    scanf("%s",sign);

    printf("Enter the first operation number:\n");
    scanf("%lld",&firstNumber);

    while (check == 0) {
        printf("Enter the second operation number:\n");
        scanf("%lld",&secondNumber);

        if (sign[0]=='/' && secondNumber==0){
            check=0;
            printf("Please enter a second number different from zero(0) at dividing\n");
        }else {
            check=1;
        }
    }
        printf("The result is: %lld\n", calc(sign,firstNumber,secondNumber));
    return 0;
}

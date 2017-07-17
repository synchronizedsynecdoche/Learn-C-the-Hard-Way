#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    long  firstNum, secondNum;
    
    printf("Enter the first number: \n> ");
    scanf("%ld", &firstNum);
    
    // checks for an entered value, doesn't work 
    if(!firstNum) return 1;
    
    printf("Your number plus 1 is %ld\n", firstNum +1);
    
    printf("Your number minus 1 is %ld\n", firstNum -1);
    
    printf("Enter the second number: \n> ");
    scanf("%ld", &secondNum);
    
    if(!secondNum) return 1;
    
    printf("%ld plus %ld is %ld\n", firstNum, secondNum, firstNum + secondNum);
    
        printf("%ld minus %ld is %ld\n", firstNum, secondNum, firstNum - secondNum);
        
    // I may change this to use functions, instead of perfoming arithmatic in the printf function
    
    return 0;
}

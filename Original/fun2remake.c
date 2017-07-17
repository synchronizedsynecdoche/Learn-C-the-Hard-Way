#include <stdio.h>
#include <stdlib.h>

long AddOne(long firstNum)
{
    long addedOne = firstNum + 1;
    
    return addedOne;
}

long SubOne(long firstNum)
{
    long subbedOne = firstNum -1;
    
    return subbedOne;
}

long AddDynamic(long firstNum, long secondNum)
{
    long addedDynamic = firstNum + secondNum;
    
    return addedDynamic;
}

long int SubDynamic(long firstNum, long secondNum)
{
    long subbedDynamic = firstNum - secondNum;
    
    return subbedDynamic;
}
int main(int argc, char *argv[])
{
    long  firstNum, secondNum;
    
    printf("Enter the first number: \n> ");
    scanf("%ld", &firstNum);
    
    // checks for an entered value, doesn't work 
    if(!firstNum) return 1;
    
    printf("Your number plus 1 is %ld\n", AddOne(firstNum));
    
    printf("Your number minus 1 is %ld\n", SubOne(firstNum));
    
    printf("Enter the second number: \n> ");
    scanf("%ld", &secondNum);
    
    if(!secondNum) return 1;
    
    printf("%ld plus %ld is %ld\n", firstNum, secondNum, AddDynamic(firstNum, secondNum));
    
        printf("%ld minus %ld is %ld\n", firstNum, secondNum, SubDynamic(firstNum, secondNum));
        
    // I may change this to use functions, instead of perfoming arithmatic in the printf function
    
    return 0;
}

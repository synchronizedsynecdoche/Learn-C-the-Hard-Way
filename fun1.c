/* This file tests what boolean identity
 * evaluates to 0, and which to 1, I will
 * use NULL in my tests, as I know NULL 
 * evaluates to 0. */
#include <stdio.h>
#include <assert.h>
int main(int argc, char *argv[])
{
    // sanity check
    assert(0 == NULL);
    
    // if(1)
    if(!NULL) {
        printf("!NULL (1) is True\n");
    } else {
        printf("!NULL (1) is False\n");
    }
    return 0;
}
    

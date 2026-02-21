#include <stdio.h>

int main() {
    /*
    
    + addition
    - subtraction
    / division
    * multiplication
    
    */ 
    int addition1 = 100 + 50;
    int subtraction2 = 100 - 50;
    int multiplication3 = 5 * 5;
    int division4 = 5 / 5;

    printf("sum1 is %d\n",addition1);
    printf("sum2 is %d\n",subtraction2);
    printf("sum3 is %d\n",multiplication3);
    printf("sum4 is %d\n",division4);

    //Arithmetic
    /*

    % modulus
    ++ increment
    -- decrement
    */

    int modulus5 = 100 % 24;
    int peopleIn = 1;
    int peopleOut = 2;

    ++peopleIn; //increase by 1
    --peopleOut; //decrease by 1

    printf("The modulus is of 100 \% 24 is %d\n", modulus5);
    printf("The incremented value was 1 and is now %d\n", peopleIn);
    printf("The decremented value was 2 and is now %d\n", peopleOut);

    /*
    Assignment operators

    = is x = 3
    += is x = x + 3
    -= is x = x - 3
    *= is x = x * 3
    /= is x = x / 3
    %= is x = x % 3
    &= is x = x & 3
    |= is x = x | 3
    ^= is x = x ^ 3
    >>= is x = x >> 3
    <<= id x = x << 3

    */

    int savings = 100;
    savings += 50;
    printf("Total savings %d\n",savings);
}
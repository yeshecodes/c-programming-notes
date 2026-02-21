#include <stdio.h>

int main(){
    /*
    Data type // The right type saves memory and improves performance, especially in space limitations.
    
    int = 1; // 2 or 4 bytes - specifier %d or %i
    float = 1.99; //4 bytes - specifier %f or %F, precision of 6-7 digits
    double = 1.99; // 8 bytes - specifier %lf, precision of 15 digits
    char = 'A'; // 1 byte e.g. 1000 A's = 1000 (KB) bytes - specifier %c , characters can be displayed using ASCII
    strings - char Name[] = "John" // - specifier %s
    sizeof - specifier %zu
    scientific numbers - e or E, this means 10 times the power of e.g. 35e3 means 35 x 10 to the power of 3

    Other types

    unsigned - Only able to store 0 or above.
    Size - size of types can differ between systems, based on age of system, 32 bit vs 64 bit

    short int - 2 bytes - range -32768 to 32767 - %hd
    unsigned int (uint) - 2 or 4 bytes, 0 to 65535(2 bytes), 0 to 4294967295 (4 bytes) - %u
    long int - 4 or 8 bytes, -2147483648 to 2147483647, -9223372036854775808 to 9223372036854775808 (8 bytes) - %ld
    long long int - 8 bytes, -9223372036854775808 to 9223372036854775808 (8 bytes) - %lld
    unsigned long int - 4 or 8 bytes - 0 to 4,294,967,295 (4 bytes), 0 to 18,446,744,073,709,551,615 (8 bytes) - %lu
    unsigned long long int - 8 bytes - 0 to 18,446,744,073,709,551,615 - %llu
    long double 8,12,16 byes, Implementation-dependent, but more precision than double %Lf
    */

    //char

    char a = 65,b = 70,c = 75, d = 'D';
    printf("ASCII - %c\n", a);
    printf("ASCII - %c\n", b);
    printf("ASCII - %c\n", c); 

    //Print AFK - The ASCII values

    //string
    char city[] = "New York";
    printf("The capital is %s\n",city);

    //double
    double price = 9.99;
    printf("The price is %lf.\n", price);

    //exponential
    float f1 = 2e3;
    printf("2 x 3 to the power of 10 = %f\n",f1); //2000.000000
    double f2 = 2E3;
    printf("2 x 3 to the power of 10 = %lf\n",f2); //2000.000000

    //remove the extra zeros using a . followed by the digits required.
    printf("2 x 3 to the power of 10 = %.2f\n",f1); //2000.00
    printf("2 x 3 to the power of 10 = %.3lf\n",f2); //2000.000

    // To find the size a memory occupies use sizeof e.g. sizeof(myInt). The type is size_t (unsigned integer), it is possible to use %d but %zu is safer.
    printf("The memory size occupied by f2 is %zu\n", sizeof(f2));
    printf("The memory size occupied by price is %zu\n", sizeof(d));
    printf("The memory size occupied by city is %zu\n", sizeof(city));
}
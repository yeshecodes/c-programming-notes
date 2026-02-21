#include <stdio.h>

int main() {
    //implicit conversion - This gets automatically converted to a float despite being an integer.
    float myFloat = 9;
    printf("My float amount is %f\n",myFloat);
    int myInt = 9.99;
    printf("My integer value is %d\n",myInt);

    //manual/explicit conversion
    int myNewInt = (int) 9.99;
    printf("My new integer value is %d\n",myNewInt);
    float myNewFloat = (float) 9/2;
    printf("My new Float value is %.1f\n",myNewFloat);

}
#include <stdio.h>
#include <stdbool.h> // necessary as bool is not  a built in type

int main(){
    /*
    yes/no
    on/off
    true/false

    bool - specifier is %d
    */

    bool lightBulb = true;
    bool roomOccupied = false;

    printf("%d\n", lightBulb);
    printf("%d\n", roomOccupied);

    //Comparing values
    printf("%d\n", 10>9); // prints true

    int num1 = 1;
    int num2 = 2;

    printf("%d\n", num1>2);
    printf("%d\n",10==11);

    //storing comparison results in a bool variable
    int requiredAmount = 50;
    int amount = 60;

    bool sufficientAmount = amount >= requiredAmount;
    printf("%d\n", sufficientAmount);
}
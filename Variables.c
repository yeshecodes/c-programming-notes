#include <stdio.h>

int main(){
    
    //Declared
    int age;
    float money;
    char grade;

    //Initialized

    age = 30;
    money = 20.99;
    grade = 'B';

    //Declared and initialized
    
    //int age = 30;
    //float money = 15.99;
    //char grade = "A";

    //Change variable value after  initialization

    age = 50;

    printf("The age is %d\n", age); //result will be 50 not 30

    //copy one variable into another

    int newAge = 40;
    newAge = age;

    printf("New age is %d\n", newAge); //print 50 not 40

    //add variable sums together
    int addAge = age + newAge;
    printf("The sum of age and newage is %d\n", age,newAge);

    //add non-declared variable sums together
    printf("The sum of undeclared ages is %d\n", 10 + 20);
    
    //add variable to itself
    int x = 5;
    x = x + 5;
    printf("The value of x is %d\n", x);

    //Multiple variables
    int a = 5, b = 6, c = 50;
    printf("%d\n", a + b + c);

    //assign multiple variables the same value at once
    int d,e,f;
    d = e = f = 100;
    printf("%d\n",d + e +f);

    //variable names must be unique
    int minutesPerHour = 60;//good descriptive name
    int M = 60; //A different name to that below
    int m = 60; //Ok, but non-descriptive name
    int _m = 60; //valid name
    printf("This is %d,%d,%d",M, m,_m);
}
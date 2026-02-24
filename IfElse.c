#include <stdio.h>
#include <stdbool.h>

int main(){
    /*
    a<b
    a<=b
    a>b
    a>=b
    a==b
    a!=b
    */

    /*
    if
    else
    else if
    switch
    */

    if (10 > 29)
    {
        printf("10 is greater\n");
    }

    int x = 50;
    int y = 55;

    if (x > y)
    {
        printf("x is greater than y\n");
    }
    
    int a = 44;
    int b = 20;

    bool isGreater = a > b;

    if (isGreater){
        printf("a is greater than b\n");
    }

    //Else

    if (a < b)
    {
        printf("A is lower\n");
    }
    else
    {
        printf("A is higher\n");
    }
    
    // else with bool
    int pizza = 30;

    bool isCheap = pizza < 40;

    if (isCheap)
    {
        printf("Eat pizza\n");
    }
    else
    {
        printf("Do not eat pizza\n");
    }
    
    //Else if

    int kilometers = 40;    

    if (kilometers < 80)
    {
        printf("Travel\n");
    }
    else if (kilometers < 60)
    {
        printf("Maybe travel\n");
    }
    else
    {
        printf("Do not travel\n");
    }
    
    bool far = kilometers > 100;
    bool near = kilometers < 50;

    if (far)
    {
        printf("Reject\n");
    }
    else if (near)
    {
        printf("Accept\n");
    }
    else
    {
        printf("Check distance\n");
    }
    
    //Ternary

    (kilometers < 5) ? printf("Close\n") : printf("Not close\n");

    // Nested if

    if (kilometers > 1000)
    {
        if (kilometers > 1500)
        {
            printf("International Travel\n");
        }
        else
        {
            printf("National Travel\n");
        }     
    } else
    {
        printf("Local travel\n");
    }

    /*
    AND &&
    OR ||
    NOT !*/
    
    if (kilometers < 50 && isCheap)
    {
        printf("Bingo! Let's get pizza\n");/* code */
    }
    
    if (kilometers > 50 || !isCheap)
    {
        printf("Sorry! No pizza\n");
    }    
}
#include <stdio.h>

int main(){
    int temp = 15;

    while (temp < 30)
    {   
        printf("Heating up temp is currently %d\n",temp);
        temp++;
    }

    printf("Temp complete %d\n", temp);

    //Do while
    int distance = 25;
    do
    {
        printf("Self driving car arriving current distance is %d\n", distance);
        --distance;
    } while (distance > 0);

    printf("Arrived!");
    
    
}
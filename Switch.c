#include <stdio.h>

int main(){
    int temp = 60;

    switch (temp)
    {
    case 10:
        printf("Turn up temperature\n");
        break;
    case 20:
        printf("Turn up temp\n");
        break;
    case 30:
        printf("Turn up temp\n");
        break;
    case 40:
        printf("Temp just right\n");
        break;
    default:
        printf("Check temp\n");
        break;
    }
}
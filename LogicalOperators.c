#include <stdio.h>

int main(){
    /*
    && - and
    || - or
    ! - not
    */

    int isLoggedIn = 1;
    int isAdmin = 0;

    printf("Standard user: %d\n", isLoggedIn && !isAdmin);
    printf("Has access: %d\n", isLoggedIn || isAdmin);
    printf("Not logged in: %d\n", !isLoggedIn);
}
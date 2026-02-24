#include <stdio.h>

int main(){
    int i;
    
    for (i=0;i<=10;i=i+2) {
        printf("%d\n",i);
    }
    
    //

    int j,k;

    for (j=1;j<=3;++j){
        printf("J is: %d\n",j);
        for (k=1;k<=3;++k){
            printf("K is; %d\n",k);
        }
    }
}
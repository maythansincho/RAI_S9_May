#include<stdio.h>
int main(){
    int i;
    int small ;
    int large ;
    int num[8];

    for (i = 0; i <8; i++){

        printf("Enter value %d  :", i+1);
        scanf("%d", &num[i] );
        large = num[0];
        small = num[0];
    
    }

    for(i=0; i<8; i++){
        if (num[i]>large){
            large = num[i];
        }
        else if (num[i]< small){
            small = num[i];
        }
    }
    printf("Smallest Number : %d\n", small);
    printf("largest Number ; %d", large);
        
    
    








    return 0;
}
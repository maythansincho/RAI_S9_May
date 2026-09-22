#include<stdio.h>
int main(){
    int number ;
    printf("Please enter number :");
    scanf("%d", &number);

    printf("Output\n");
    for(int i=0; i<number;i++){
        for(int j =0; j < number ; j++){
            if (i==0 || j==0 || i == number-1 || j==number-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }






    return 0;
}
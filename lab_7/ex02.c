#include<stdio.h>
int main(){
    int a = 10;
    int b =20;
    int c = 30;

    int *pA = &a;
    int *pB = &b;
    int *pC = &c;

    int temp = *pA;
    int temp_2 = *pB;

    printf("Before swap : a = 10, b = 20, c = 30");
    printf("\n");
     *pA = *pB;
     *pB = temp_2;
     *pC = temp;
    printf("After swap : a = %d, b= %d, c=%d", *pB, temp_2, temp);
    return 0; 
    
}
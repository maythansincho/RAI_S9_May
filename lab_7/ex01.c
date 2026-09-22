#include<stdio.h>
int main(){
    int test = 0;
    int *ptr = &test;

    printf("The address of test variable is at : %p\n",&test );
    printf("The new value of test via pointer is : %d\n", test);
    return 0;

}
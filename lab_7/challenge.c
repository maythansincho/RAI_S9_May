#include<stdio.h>
int main(){
    int user[5];
    int *ptr = user;

    printf("Enter 5 integers: ");

    for (int i = 0; i < 5; i++){
    scanf("%d", (ptr + i) );
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4-i ; j++){
            int *current = ptr + j;
            int *next = ptr + j + 1;

            if (*current < *next){
            int temp = *current;
            *current = *next;
            *next = temp;
            }
        }
    }

        printf("Sorted Descending : ");
        for (int i = 0; i < 5; i ++){
            printf("%d\t", *(ptr+i));
        }

        printf("\n");
    
    





    return 0;




}
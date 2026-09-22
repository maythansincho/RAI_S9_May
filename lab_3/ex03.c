
#include<stdio.h>
#include<stdbool.h>
int main()
{

    int num1;

    printf("Enter a number :");
    scanf("%d",&num1);

    switch (num1 >= 1 &&  num1 < 100) {
        case true:
        switch(num1%2==0){
            case 1:
                printf(" %d is even", num1);
                break;
            case 2:
                printf("%d is odd", num1);
                break;
        }

        case false:
            printf("%d is out of the range", num1);
            break;
    }
    return(0);
    }


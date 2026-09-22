#include<stdio.h>
int main()
{
    float total_sum = 0;
    int from_user;
    int i = 1;
     while (i <= 10){


        printf("Enter the number : ");
        scanf("%d", &from_user);
        total_sum += from_user;
        i++ ;
     }

    
    printf("Total sum is %.2f", total_sum);

      return 0;



}




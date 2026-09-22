#include<stdio.h>
int main()
{
    int from_user;
    float total_sum = 0;
    float average;
    for (int num = 1; num <=10; num++ )
    {

    printf("Enter the number : ");
    scanf("%d", &from_user);
    total_sum += from_user;
    }

    average = total_sum / 10;
    printf("Total sum is %.2f \n", total_sum);
    printf(" Average is %.2f \n", average);

return 0;

}
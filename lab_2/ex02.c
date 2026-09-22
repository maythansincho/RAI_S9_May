#include<stdio.h>
int main()
{
    int initial_min;
    int hour;
    int minute;

    printf ("Enter total minute: ");
    scanf("%d", &initial_min);

    hour = initial_min/ 60;
    minute = initial_min % 60;
    printf ("%d initial_min is %d hour and %d minute\n", initial_min, hour, minute );







}
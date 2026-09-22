#include<stdio.h>
int main()
{
    /*%f > %.2f float
    %d > integer 67, 23 , 1
    %s > string > %s, "apple";
    %c > character %c, 'A'; 

    scanf ("type", data);
    scanf (" %s", a);

    scanf("%f", &number)*/

    int int_value;
    float float_value;
    char character;

    printf (" Please enter an integer value :");
    scanf("%d", &int_value);
    printf(" You entered %d\n", int_value);
    printf("Please enter a float value; ");
    scanf("%f",&float_value);
    printf ("You enter %f\n", float_value);
    printf("Please enter a character; ");
    scanf(" %c", &character);
    printf ("You enter %c\n", character);

    return (0);
    

}

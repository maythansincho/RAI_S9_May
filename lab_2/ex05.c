#include<stdio.h>
int main()
{
    char name [20];
    int age;
    float height;
    char uni[50];

    printf("Enter your full name: ");
    scanf("%[^\n]", name);

    printf("Enter your age: ");
    scanf ("%d", &age);
    
    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your University Name: ");
    scanf("%s", uni);

    printf("Hi! Everyone. This is %s from %s. I am %d years old and my height is %.1f cm tall.\n", name, uni, age, height);

    return(0);


}




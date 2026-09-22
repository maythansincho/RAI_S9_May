#include<stdio.h>
int main()
{
    char name [30];
    int age;
    float height;
    float weight;
    char gender;
    char school [50];

    printf (" Enter your name :");
    scanf ("%s",name);

    printf ("Enter your age: ");
    scanf ("%d", &age);
    
    printf ("Enter your weight : ");
    scanf ("%f", &height);

    printf("Enter your height : ");
    scanf ("%f", &height);

    printf ("Enter your gender : ");
    scanf (" %c", &gender);

    printf("Enter your Education Qualification : ");
    scanf ("%s", school);

    printf (" Name:%s\n", name);
    printf("Age:%d\n", age);
    printf ("Weight: %f\n", weight);
    printf("Height; %f\n", height);
    printf ("Gender: %c\n", gender);
    printf ("Education: %s\n", school);


}
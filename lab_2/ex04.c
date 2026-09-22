#include<stdio.h>
int main()
{
    char  name[20];
    int id;
    float pro, phy, cal;
    float GPA;

    printf ("Enter your Name: ");
    scanf ("%[^\n]", name);
    printf("Enter your Student Id :");
    scanf ("%d", &id);

    printf ("Enter your Programming score :");
    scanf ("%f", &pro);

    printf("Enter yor Physics score :");
    scanf ("%f",&phy);

    printf("Enter your Calculus score :");
    scanf ("%f",&cal);

    GPA = (pro + phy + cal)/3.0;
    printf ("Hi %s (%d)! Your GPA is %.2f\n", name, id, GPA);

}


   

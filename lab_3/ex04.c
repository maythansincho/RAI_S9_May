#include<stdio.h>
int main()
{
    int cal, phy,programming;
    char grade;
    float aver;
    char name[50];

    printf("Enter your name : ");
    scanf("%s", name);
    printf("Enter your Calculus Score : ");
    scanf("%d", &cal);
    printf("Enter your Physics Score : ");
    scanf("%d", &phy);
    printf("Enter your Computer Programming Score : ");
    scanf("%d", &programming);

    aver = (cal + phy + programming) / 3.0;
    if (aver >= 80){
        grade = 'A';
    }else if (aver <= 80 && aver >= 70){
        grade = 'B';
    }else if (aver <= 70 && aver >= 60){
        grade = 'C';
    }else if (aver <= 60 && aver >= 50){
        grade = 'D';
    }else{
        grade = 'F';
    }

    printf("%s, your average is %.2f. You got grade %c.\n",name,aver,grade);

    return 0;
}






    




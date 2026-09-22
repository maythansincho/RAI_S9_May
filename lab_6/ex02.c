#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int age;
    float score;
};

int main(){
    struct student students[3];
    int i;

    for(i = 0; i < 3; i++){
        printf("Student %d's name:", i+1);
        scanf(" %[^\n]", students[i].name);

        printf("Student %d's age:", i+1);
        scanf("%d", &students[i].age);

        printf("Student %d's score:", i+1);
        scanf("%f", &students[i].score);
    }

        printf("\n");
        float highest = students[0].score;
        int max;
    
        for(i = 0; i<3; i ++){
            if (highest < students[i].score){
                highest = students[i].score;
                max = i;

            }
               
            
        }
         printf("The highest scores belong to %s at %.2f scores!", students[max].name, highest);
        
        return 0;
    }
    

#include<stdio.h>
int main(){
    int marks[5];
    int i;
    int max;
    int sum;

    
    for(i=0;i<5;i++){
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
        if(marks[i]>max){
            max = marks[i];
        }
    }
    
    printf("Total marks: %d\n", sum);
    printf("Highest marks: %d", max);





    return 0;
}
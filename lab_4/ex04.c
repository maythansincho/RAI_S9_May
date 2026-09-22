#include<stdio.h>
int main(){
    int from_user;
    int result;

    printf("Enter an number ; ");
    scanf("%d",&from_user);
    printf("Multiplication Table for %d", from_user);

    for(int i =1; i <= 12; i++){

    
    result = from_user * i;
    printf("%d * %d = %d \n", from_user,i, result);
    }
    return 0;

}
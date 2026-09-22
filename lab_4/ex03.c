#include<stdio.h>
int main(){
    
    int from_user;
    int x = 0;
    int y = 0;

    printf("Enter the Number ; ");
    scanf("%d", &from_user);
    x = from_user % 2 ;
    while(x==0 && from_user >=1){
        printf("%d is even", from_user);
        break;
    }
    while(x==1){
        printf("%d is odd", from_user);
        break;
    }


    while(from_user == y){
        printf("Exiting Program .... Bye ");
        break;
    }


    return 0;

    
        
}
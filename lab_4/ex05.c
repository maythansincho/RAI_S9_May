#include<stdio.h>
int main(){
    int from_user;
    int i;
    int result= 1;
    int calculation;
    
    printf("Enter a number :");
    scanf("%d", &from_user);
   
    for (i = 1 ; i <= from_user ; i++){
        result = result * i;
        }
       
        
          
        
  

    printf("Factorial of %d is %d", from_user, result);

    return 0;

    
}
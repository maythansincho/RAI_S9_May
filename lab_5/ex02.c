#include<stdio.h>
int main(){

int original[9]= {1,2,3,4,5,6,7,8,9};

printf("reversed Array: ");
for (int i =9 ; i>0; i--){
    if (i>0){
        printf("%d", original[i]);
    }
     else{
         printf("%d\n", original[i]);
    }
    printf("%d\t", original[i]);
    
}






    return 0;
}
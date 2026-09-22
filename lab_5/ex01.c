#include<stdio.h>
int main(){
    int value[10];
    

for (int i = 0; i <10 ; i++){
      
    printf("Enter the value %d here : ", i);
    scanf("%d", &value[i]);
    }
printf(" Values in array are ");
for (int i = 0; i <10; i ++){

    printf("%d, ", value[i]);
}

printf("\n");



    return 0;
}
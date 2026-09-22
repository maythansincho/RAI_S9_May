#include<stdio.h>
int main(){
    int size = 6;
    int array[]= {3,2,1,4,5,6};
    int *ptr = array;

  
    int sum =0;
    for (int i = 0; i < 6; i++){
        int result = *(ptr + i)%2;

        if (result == 0){
            sum += *(ptr+i);
        }
         //sum += *(ptr+i);
    }
    printf("The sum of even numbers is : %d\n", sum);

    return 0;

}

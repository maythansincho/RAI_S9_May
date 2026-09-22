#include<stdio.h>
int main(){
    int array[]= {3,1,2,4,5,6};
    int *ptr = array;

    int max = *ptr;
    for(int i = 0; i < 6; i++){
        //int max = *ptr;
        if (max < *(ptr +i)){
            max = *(ptr + i);
        }

        
    }
    int min = *ptr;
     for(int i = 0; i < 6; i++){
        //int min = *ptr;
        if (min > *(ptr +i)){
            min = *(ptr + i);
        }
     }
  printf("Max Value : %d\n", max);
  printf("Min Value : %d\n", min);

  return 0;
    }

        
   
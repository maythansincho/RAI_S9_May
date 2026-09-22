#include<stdio.h>
int isP(int num){
    int original = num;
    int rev = 0; 

    while (num > 0){
        rev = rev *10 + (num %10);
        num /= 10;

    }

    return (original == rev);

}

int main(){
    int start, end, total ;
    printf("Enter the start and end numbers : ");
    scanf(" %d %d", &start, &end);

    if (start > end){
    start = start + end;
    end = start - end;
   start = start - end;
}



    printf("The palindrome numbers within the interval [%d, %d] are : ", start, end );

    int count = 0, sum = 0;
    for(int i = start; i <= end; i++){
        if(isP(i)){
            printf("%d\n", i);
            count ++;
            sum +=i;
        }
    }

    printf("\n Total P numbers: %d\n", count);
    printf("Sum of P numbers: %d\n", sum);



 return 0;
}
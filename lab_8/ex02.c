#include<stdio.h>
int sum_odd (int start, int end){
    int sum = 0;
    for (int i = start; i <= end; i++){
        if ( i % 2 == 1){
            sum = sum + i * i;
        }
        

    }
return sum;
}

int main(){
    int start;
    int end;
    int sum;
    int result;
    printf ("Enter the two integers (start end): ");
    scanf("%d %d", &start, &end);

    result = sum_odd (start, end);

    printf("Sum of squares of odd numbers from %d to %d is %d", start, end, result);
    


}


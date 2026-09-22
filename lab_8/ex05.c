#include<stdio.h>

void calculateSums(int arr[], int n){
    int even_sum = 0, even_count = 0;
    int odd_sum = 0, odd_count = 0;

    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            even_sum += arr[i];
            even_count ++;

        }else{
            odd_sum += arr[i];
            odd_count ++;
        }
    }



    printf("Output : \n");

    printf("Even index elements ->  sum: %d\n", even_sum);
    if (even_count > 0){

    
    printf("Average : %.2f\n ", (float)even_sum / even_count);
    }

    printf("odd index elements ->  sum: %d\n", odd_sum);
    if (odd_count > 0){

    
    printf("Average : %.2f\n ", (float)odd_sum / odd_count);
    }
   
}

int main() {
    int n;
    printf("N: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }

    calculateSums(arr, n);

    return 0;
}



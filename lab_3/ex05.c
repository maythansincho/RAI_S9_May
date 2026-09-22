#include<stdio.h>
#define PI  3.14;
int main(){

    int base_rad, height;
    float volume;

    printf(" Enter cone base radius: ");
    scanf("%d", &base_rad);
    printf(" Enter cone height: ");
    scanf("%d", &height);

    printf("%d" , base_rad);

    volume =(1/3)*PI * base_rad * base_rad* height;
    printf("Cone Volume = %.1f", volume);

    if (volume < 260){
        printf("This cone is perfect for Supun Project");
    }else {
        printf(" This cone is not fit for this project");
    }
    return 0;
    }




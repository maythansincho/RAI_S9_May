#include<stdio.h>
#include<math.h>
#define PI 3.14
float deg_rad(float);

int main(){
    float deg, rad;
    printf("Enter Degree : ");
    scanf ("%f", &deg);
    rad = deg_rad(deg);
    printf("sin(%.2f) = %.3f\n", deg,sin(rad));
    return 0;
}

    float deg_rad(float num)
    {
        float ans;
        ans = num *PI / 180;
        return (ans);
    }


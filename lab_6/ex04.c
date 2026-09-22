#include<stdio.h>
#include<math.h>

struct vector{
    float x;
    float y;

};

int main(){    
    struct vector u,v,sum;
    printf(" Enter u_x : ");
    scanf("%f", &u.x);

    printf(" Enter u_y : ");
    scanf("%f", &u.y);

    printf(" Enter v_x : ");
    scanf("%f", &v.x);

    printf(" Enter v_y : ");
    scanf("%f", &v.y);

    sum.x = u.x + v.x;
    sum.y = u.y + v.y;

    printf("The resultant vector is equal to %gi + %gj", sum.x, sum.y);


}
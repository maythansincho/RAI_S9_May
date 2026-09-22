#include<stdio.h>
#include<math.h>

struct point{
    float x,y;


};

int main(){
    float result;
    float final_result;
    struct point p1,p2;
    float distance;

    printf("x1 ");
    scanf("%f",&p1.x);

    printf("y1 ");
    scanf("%f",&p1.y);
    
    printf("x2 ");
    scanf("%f",&p2.x);

    printf("y2 ");
    scanf("%f",&p2.y);


    distance = sqrt((pow(p2.x-p1.x,2))+pow(p2.y-p1.y,2));
    
   
  //distance = pow((p1.x - p2.x),2) + pow((dis[0].y - dis[1].y),2) ;
   //final_result = sqrt(result);
   printf("The distance betweeen (%g, %g) and (%g, %g) is %.3f units", p1.x, p1.y, p2.x, p2.y, distance);
   
   //pow(p.x - py),2
   //(p.x - py) * (p.x - py)
}

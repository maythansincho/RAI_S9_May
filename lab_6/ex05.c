#include<stdio.h>
struct time{
    int minute;
    int second;

};
int main(){
    int total_time;
struct time t1,t2,t3;

    printf(" Time Input (m:s): ");
    scanf("%d: %d", &t1.minute, &t1.second); 

    printf(" Time Input (m:s): ");
    scanf("%d: %d", &t2.minute, &t2.second); 

    printf(" Time Input (m:s): ");
    scanf("%d: %d", &t3.minute, &t3.second);


total_time = 60*(t1.minute + t2.minute + t3.minute) + 
             (t1.second +t2.second+t3.second );

printf("Total Time Elasped: %d seconds", total_time);




}


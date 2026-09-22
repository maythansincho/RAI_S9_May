#include<stdio.h>
struct customer{
    char name[100];
    int price;
    int discount;

};
int main(){
    int discount; 
struct customer cust_01;
printf("Enter Book Name: ");
scanf(" %[^\n]",cust_01.name );

printf("Enter Book Price: ");
scanf("%d", cust_01.price);

printf("Book: %s\n", cust_01.name);
printf("Price: %.2f",cust_01.price );

discount = cust_01.price * 0.1;
printf("Discount 10 percent: %.2f\n", discount);



}

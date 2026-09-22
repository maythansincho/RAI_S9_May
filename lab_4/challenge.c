#include<stdio.h>
int main(){

    int from_user;
    float deposit, withdraw;
    float balance;

    printf(" ======ATM MENU===== \n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    
    printf("Choose an Option;  ");
    scanf("%d", &from_user);

    switch(from_user){


        case 1:
          printf("Current Balance : \n");
          scanf("%f", &balance);
          break;
        case 2:
          printf("Enter amount to deposit: \n");
          scanf("%f", &deposit);
          balance += deposit;
          printf("%.2f", balance);
          break;
        case 3:
          printf("Enter amount to withdraw: \n");
          scanf("%f", &withdraw);
          balance -= withdraw;
          printf("Withdrawal successfful");
          printf("%.2f", balance);
          break;
        case 4:
          printf("Thank you for using the ATM.");
        default:
          printf("Invaild Option!! Please choose again.");
        


        }

    return 0;

}
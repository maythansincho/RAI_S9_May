/*#include<stdio.h>
int main()
{
    int  num1, num2, menu, ans;
    printf(" Enter num1 : ");
    scanf("%d", &num1);
    
    printf("Enter num2 : ");
    scanf("%d", &num2);

    printf("Calculate Menu: ");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %\n");

    printf("Choose Menu");
    scanf("%d", &menu);

    switch(menu){
        case 1:
        ans = num1 + num2;
        printf("Ans : Num1 + Num2 = %d", ans);
        break;

        case 2:
        ans = num1 - num2;
        printf("Ans : Num1 - Num2 = %d", ans);
        break;

        case 3:
        ans = num1 * num2;
        printf("Ans : Num1 * Num2 = %d", ans);
        break;

        case 4: 
        ans = num1 / num2;
        printf("Ans : Num1 / Num2 = %d", ans);
        break;
        
        case 5:
        ans = num1 % num2;
        printf("Ans : Num1 %Num2 = %d", ans);
        break;
    }
    return 0;
}*/

#include<stdio.h>
int main()
{

    int num1;

    printf("Enter a number :");
    scanf("%d",&num1);

   if (num1 < 1 || num1 > 100 ){
    printf("%d, is out of range", num1);
   } else if (num1 % 2 == 0){
    printf("%d, is even", num1);
   }else{
    printf("%d, is odd", num1);
   }




return 0;
    
}
    
    


        





   

     



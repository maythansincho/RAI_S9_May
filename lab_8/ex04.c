#include<stdio.h>
#include<ctype.h>
#include<string.h>

void count(char text[]){
    int letter = 0;
    int digits =0 ;
    int special_char = 0;

    for(int i = 0; text[i] != '\0'; i++ ){ 
        if(isalpha (text[i])){
            letter ++;

        } else if (isdigit(text[i])){
            digits ++;
        }else {
        special_char ++;
    }
    }
    printf(" Output: ");
    printf(" Letters : %d\n", letter);
    printf(" Digits: %d\n", digits);
    printf(" Special Characters / Symbols: %d\n", special_char);
}       
int main() {
    int letter, digits, special_char ;
    char text[100];
    printf("Input: ");
    scanf("%[^\n]", text);

    count(text);

    return 0;

}






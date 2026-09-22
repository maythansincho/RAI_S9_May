#include<stdio.h>


struct stu{
    char name[50];
    int age;
};

int main(){

struct stu members [10];
for(int i = 0; i < 10; i++){


printf(" Enter student %d's name; ", i+1 );
scanf(" %[^\n]", members[i].name);

printf(" Enter student %d's age; ", i+1 );
scanf("%d", &members[i].age);

}

int oldest= 20;
for(int i = 0; i < 10; i ++){
    if (members[i].age > oldest){
        printf("%s, %d\n", members[i].name, members[i].age);
    }

}

}






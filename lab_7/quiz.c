#include<stdio.h>

struct Address{
    char street[50];
    char district[50];
    char city [50];
};

struct student{
    char full_name[40];
    int id;
    struct Address address;
    char tel[20];
    
};

int main(){
struct student s= {
    "Poom Konghuayrob", 69011223, " 3 Moo 2, Chalongkrung Rd, Latkrabang, Bangkok", " 088 8888 888 "
};

printf(" Full Name : %s\n", s.full_name);
printf(" ID : %d\n", s.id);
printf("Address : %s, %s, %s\n",
       s.address.street,
       s.address.district,
       s.address.city);

printf(" Tel : %s\n", s.tel);


return 0;

}

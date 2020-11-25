#include <stdio.h>

typedef struct{
    int age;
    char phone_number[14];
} student;

int main(){
    student groom;
    printf("Age : ");
    scanf("%d", &groom.age);
    printf("Phone Number : ");
    scanf("%s", groom.phone_number);

    printf("Age : %d \nPhone Number : %s", groom.age, groom.phone_number);
    return 0;
}
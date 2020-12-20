#include <iostream>

int main(){
    char name[10], num[20];
    std::cout<<"이름 입력: ";
    std::cin>>name;
    std::cout<<"전화번호 입력: ";
    std::cin>>num;
    std::cout<<"이름: "<<name<<std::endl;
    std::cout<<"전화번호: "<<num<<std::endl;
    return 0;
}
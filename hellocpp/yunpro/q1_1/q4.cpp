#include <iostream>

int main(){
    double input, result;
    while(1){
        std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin>>input;
        if (input == -1) break;
        std::cout<<"이번 달 급여: "<<50.0 + (input * 0.12)<<"만원"<<std::endl;
    }
    std::cout<<"프로그램을 종료합니다.";
    return 0;
}
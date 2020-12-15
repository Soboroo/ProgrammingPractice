#include <iostream>

int main(){
    int n, sum = 0;
    for (int i = 0; i < 5; i++){
        std::cout<<i+1<<"번째 정수 입력: ";
        std::cin>>n;
        sum += n;
    }
    std::cout<<"합계: "<<sum;

    return 0;
}
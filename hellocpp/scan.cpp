#include <iostream>

int main(){
    int a, b;
    std::cin>>a;
    std::cin>>b;
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            std::cout<<i+1<<" * "<<j+1<<" = "<<(i+1) * (j+1);
            std::cout<<std::endl;
        }
    }
    return 0;
}
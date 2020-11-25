#include <stdio.h>

int main(){
    int money;
    char line[] = "==============================\n";
    int b;
    printf("돈을 널으세요! :");
    scanf("%d", &money);
    while(money >= 600){
        printf(line);
        printf("1. 커피 600 / 2. 우유 700 / 3. 쥬스 800 / -> ");
        scanf("%d", &b);
        switch(b){
            case 1: 
                money -= 600; 
                printf("[>> 커피 덜컹 / 남은돈 %d원 ]\n", money); 
                break;
            case 2: 
                if (money < 700){
                    printf("돈이 모자랍니다!\n");
                    break;
                }
                money -= 700; 
                printf("[>> 우유 덜컹 / 남은돈 %d원 ]\n", money); 
                break;
            case 3:
                if (money < 800){
                    printf("돈이 모자랍니다!\n");
                    break;
                } 
                money -= 800; 
                printf("[>> 쥬스 덜컹 / 남은돈 %d원 ]\n", money);
                break;
        }
    }
    printf(line);
    printf("잔돈이 모자랍니다.");
    return 0;
}
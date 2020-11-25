/*
Note
Selection Sort: 가장 작은 것을 앞으로!
Time: O(n^2)

10 + 9 + 8 ...
n * (n + 1) / 2
=> n * n : +1, /2는 n이 졸라 짱크면 무시!
=> O(n^2)

O(n^2): 데이터의 개수가 늘어날 수록 계산 시간이 **매우** 느림! (이차함수 그레프)
2020-08-04
                                    */

#include <stdio.h>

int main(){
    int i, j, min, index, temp; //i, j: for문 용, min: 최솟값, index: min 주소, temp 두 값 교환
    int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for (i = 0; i < 10; i++){
        min = 9999; // 모든 데이터보다 큰 값 선택
        for (j = i; j < 10; j++){ // 0 ~ 9 => 1 ~ 9 => 2 ~ 9 ... 으로 비교 후
            if (min > arr[j]){
                min = arr[j];
                index = j; // 최솟값 맟 주소 기록
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;  // 비교 범위의 가장 앞 숫자와 가장 작은 수 위치 스왑
    }
    for (i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
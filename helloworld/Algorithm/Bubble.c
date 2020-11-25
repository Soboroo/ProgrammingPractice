/*
Note
Bubble Sort: 옆의 값과 비교, 작은 것을 앞으로! 효율성 꽝!
Time: O(n^2)

한번 정렬할 대마다 가장 큰 값이 뒤로 차곡차곡
10 + 9 + 8 + ...
Selection Sort와 마찬가지로 O(n^2)
Selection -> 앞의 것과 뒤의 것들을 비교 후 마지막에 교체
Bubble -> 옆의 것과 계속 비교 및 교제
따라서 실제론 Selection 보다 Bubble이 더 느림!

2020-08-05
*/
#include <stdio.h>

int main(){
    int i, j, temp;
    int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for (i = 0; i < 10; i++){ //뒤에서 1번째에 1번째 큰수 2번째에 2번째 큰수 ...
        for (j = 0; j < 9 - i; j++) { //뒤쪽에서 정렬된 곳 앞까지만
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; //값 비교 후 스왑
            }
        }
    }
    for (i = 0; i < 10; i++) printf("%d ", arr[i]);
    return 0;
}
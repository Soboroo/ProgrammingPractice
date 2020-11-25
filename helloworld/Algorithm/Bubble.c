/*
Note
Bubble Sort: ���� ���� ��, ���� ���� ������! ȿ���� ��!
Time: O(n^2)

�ѹ� ������ �븶�� ���� ū ���� �ڷ� ��������
10 + 9 + 8 + ...
Selection Sort�� ���������� O(n^2)
Selection -> ���� �Ͱ� ���� �͵��� �� �� �������� ��ü
Bubble -> ���� �Ͱ� ��� �� �� ����
���� ������ Selection ���� Bubble�� �� ����!

2020-08-05
*/
#include <stdio.h>

int main(){
    int i, j, temp;
    int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for (i = 0; i < 10; i++){ //�ڿ��� 1��°�� 1��° ū�� 2��°�� 2��° ū�� ...
        for (j = 0; j < 9 - i; j++) { //���ʿ��� ���ĵ� �� �ձ�����
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; //�� �� �� ����
            }
        }
    }
    for (i = 0; i < 10; i++) printf("%d ", arr[i]);
    return 0;
}
/*
Note
Selection Sort: ���� ���� ���� ������!
Time: O(n^2)

10 + 9 + 8 ...
n * (n + 1) / 2
=> n * n : +1, /2�� n�� ���� ¯ũ�� ����!
=> O(n^2)

O(n^2): �������� ������ �þ ���� ��� �ð��� **�ſ�** ����! (�����Լ� �׷���)
2020-08-04
                                    */

#include <stdio.h>

int main(){
    int i, j, min, index, temp; //i, j: for�� ��, min: �ּڰ�, index: min �ּ�, temp �� �� ��ȯ
    int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for (i = 0; i < 10; i++){
        min = 9999; // ��� �����ͺ��� ū �� ����
        for (j = i; j < 10; j++){ // 0 ~ 9 => 1 ~ 9 => 2 ~ 9 ... ���� �� ��
            if (min > arr[j]){
                min = arr[j];
                index = j; // �ּڰ� �� �ּ� ���
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;  // �� ������ ���� �� ���ڿ� ���� ���� �� ��ġ ����
    }
    for (i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
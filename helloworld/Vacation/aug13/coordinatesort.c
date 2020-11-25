#include <stdio.h>

typedef struct{
    int x;
    int y;
}cood;

int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(struct cood *cood, int start, int end){
    if (start >= end){
        return;
    }

    int pivot = start;
    int i = pivot + 1;
    int j = end;

    while (i <= j){
        while (i <= end && i <= )
    }
}

int main(){

}
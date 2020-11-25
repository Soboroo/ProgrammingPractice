#include <stdio.h>
#include <stdlib.h>

void quicksort(int*, int*, int, int);
void ysort(int*, int*, int);
int static compare(const void*, const void*);


int main(){
    int n;
    scanf("%d", &n);
    int x[n], y[n];
    for (int i = 0; i < n; i++){
        scanf("%d %d", &x[i], &y[i]);
    }

    quicksort(x, y, 0, n-1);
    ysort(x, y, n);

    for (int i = 0; i < n; i++) printf("%d %d\n", x[i], y[i]);
    return 0;
}

void quicksort(int *data, int *data2, int start, int end){
    if (start >= end) {
        return;
    }
    
    int pivot = start;
    int i = pivot + 1;
    int j = end;
    int temp;

    while (i <= j){
        while (i <= end && data[i] <= data[pivot]){
            i++;
        }
        while (j > start && data[j] >= data[pivot]){
            j--;
        }
        if (i > j){
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;

            temp = data2[j];
            data2[j] = data2[pivot];
            data2[pivot] = temp;
        }
        else{
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;

            temp = data2[i];
            data2[i] = data2[j];
            data2[j] = temp;
        }
    }

    quicksort(data, data2, start, j-1);
    quicksort(data, data2, j+1, end);
}

void ysort(int *data, int *data2, int n){
    int i = 0, j = 0, ycindex = 0, ycood[n];
    for (i = 0; i < n;){
        while (data[j] == data[j+1]){
            ycood[ycindex] = data2[j];
            j++;
            ycindex++;
            if (data[j] != data[j+2]) ycood[ycindex] = data2[j];
        }
        qsort(ycood, ycindex, sizeof(int), compare);
        
    }
}

int static compare(const void *first, const void *second){
    if (*(int*)first > *(int*)second) return 1;
    else if (*(int*)first < *(int*)second) return -1;
    else return 0;
}
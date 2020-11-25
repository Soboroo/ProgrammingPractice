#include <stdio.h>

int main(){
    int i = 0, j = 12, s = 27, ans = 0;
    int arr[13] = {1, 3, 5, 6, 9, 11, 12, 16, 17, 19, 22, 25, 28};
    while(i <= j){
        if (arr[i] + arr[j] > s) j--;
        else if(arr[i] + arr[j] < s) i++;
        else {
            i++;
            j--;
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}
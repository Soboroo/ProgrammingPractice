#include <stdio.h>

int main(){
    char str1[100], str2[100], str[100];
    int i = 0, j;
    printf("Input 1st string: ");
    gets(str1);
    printf("Input 2nd string: ");
    gets(str2);
 
    j = 0;
    while(str1[j])
        str[i++] = str1[j++];
    j = 0;
    while(str2[j])
        str[i++] = str2[j++];
    str[i] = '\0';

    printf("%s", str);

    return 0;

}
#include <stdio.h>

void strcopy(char [], char *);
void strcpya(char [], char *);
void strcpyp(char *, char *);

int main(){
    char *src = "Hello, World!";
    char tar0[30], tar1[30], tar2[30];

    strcopy(tar0, src);
    printf(tar0); printf("\n");
    
    strcpya(tar1, src);
    printf(tar1); printf("\n");

    strcpyp(tar2, src);
    printf(tar2); printf("\n");
}

void strcopy(char t[], char *s){
    int i = 0;
    while (s[i]){
        t[i] = s[i]; i++;
    }
    t[i] = '\0';
}

void strcpya(char t[], char *s){
    int i = 0;
    while (t[i] = s[i]) i++;
}

void strcpyp(char *t, char *s){
    while(*t++ = *s++);
}
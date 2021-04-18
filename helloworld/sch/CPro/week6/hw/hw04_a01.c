#include <stdio.h>

int main(){
    int x1 = 0xAAAA, x2 = 0x5555;
    int y = 2017, m = 9, d = 1;
    char s1[] = "Hello", s2[] = ",", s3[] = "World!";
    double f1 = 3.141592;

    printf("0x%4X | 0x%4X = 0x%4x\n", x1, x2, x1 | x2);
    printf("(0x%4X ^ 0x%4X) >> 2 = 0x%4x\n", x1, x2, (x1 ^ x2) >> 2);
    printf("%04d\t%02d\t%02d\n", y, m, d);
    printf("%.4f %.4e\n", f1, f1);
    printf("%.8f %.8e\n", f1, f1);
    printf("%s%-2s%s\n", s1, s2, s3);
    printf("%.4s%-2s%s\n", s1, s2, s3);
    printf("\"%.2s\"%-2s\'%.2s\'\n", s1, s2, s3);
    printf("\x54\x68\x65\x20\x49\x6e\x74\x65\x72\x6e\x65\x74\x20\x6f\x66\x20\x54\x68\x69\x6e\x67\x73\n");
    printf("\104\145\160\164\040\157\146\040\111\157\124\054\040\123\103\110\n");
    
    return 0;
}
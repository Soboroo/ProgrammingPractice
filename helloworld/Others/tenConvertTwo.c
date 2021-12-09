#include <stdio.h>

int result[] = {0, 0, 0, 0};
void tenConvertTwo(int num) {
  for (int i = 0; i < 4; i++)
		result[i] = 0;
  for (int i = 0; num > 0; i++) {
    int binary = num % 2;
    result[i] = binary;
    num /= 2;
  }
}

int main() {
	for (int i = 0; i < 10; i++){
		tenConvertTwo(i);
		for (int j = 0; j < 4; j++) {
			printf("%d", result[j]);
		}
		printf("\n");
	}
}
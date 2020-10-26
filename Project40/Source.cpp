#include<stdio.h>
#include<string.h>
#include<math.h>
void arm(char a[]);
int main() {
	char a[10];
	scanf_s("%s", a, 10);
	arm(a);
	return 0;
}
void arm(char a[]) {
	int devine = 0;
	int i = 0, check = 0;
	int sumofDigit = 0;
	int len = strlen(a);
	for (int i = 0; i < len; i++) {
		sumofDigit += pow(a[i] - '0', len);
		while (len == 0) {
			break;
		}
	}
	int sumofDigit_arr[5];
	while (sumofDigit != 0) {
		sumofDigit_arr[len - i - 1] = sumofDigit % 10;
		devine++; i++;
		sumofDigit /= 10;
	}
	if (sumofDigit_arr[2] == a[2] - '0') {
		printf("This is arm Strong Number");
	}
	else {
		printf("This is n\'t arm Strong Number");
	}
}
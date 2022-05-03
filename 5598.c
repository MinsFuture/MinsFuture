#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 생각해 본 아이디어 : 입력받은 문자열을 10진수 정수로 변환 후 -3씩 해주어 아스키 코드로 출력
	// A B C 일때는 + 23 나머지는 - 3

	char input[1000];
	scanf("%s", &input);
	int len = 0;
	for (int i = 0; input[i] != 0; i++) {
		len += 1;
	}

	char output[1000];

	for (int i = 0; i < len; i++) {
		char c = input[i];

		if (input[i] == 'A' || input[i] == 'B' || input[i] == 'C')
		{
			output[i] = (int)c + 23;
		}
		else {
			output[i] = (int)c - 3;
		}
		
	}
	for (int i = 0; i < len; i++) {

		printf("%c", output[i]);
	}

	return 0;
}

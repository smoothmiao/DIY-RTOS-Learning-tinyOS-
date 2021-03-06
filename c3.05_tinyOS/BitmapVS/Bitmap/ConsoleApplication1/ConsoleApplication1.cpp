// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(int argc, const char * argv[])
{
	int num, bitPos;

	for (num = 0; num <= 255; num++) {
		if (num == 0) {
			printf("0xFF, ");
			continue;
		}
		for (bitPos = 0; bitPos <= 7; bitPos++) {
			if (num & (1 << bitPos)) {
				printf("%d, ", bitPos);
				break;
			}
		}
	}
	return 0;
}


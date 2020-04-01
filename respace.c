#include <stdio.h>
#include <stdlib.h>

int respace (unsigned char* A) {
	unsigned char i;
	i=0;
	while (A[i] != '\0'){
		if (A[i] == ' '){
			A[i]='_';
		}
		i++;
	}
	printf("%s\n",A);
	return i;
}


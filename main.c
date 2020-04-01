#include <stdio.h>
#include <stdlib.h>
#include "tool.h"

int main (){
	unsigned char* C;
	C=malloc(1000*sizeof(double));
	C[0]='T';
	C[1]='E';
	C[2]='S';
	C[3]='T';
	C[4]=' ';
	C[5]='2';
	C[6]=' ';
	C[7]='1';
	C[8]='\0';
	C[9]='D';

	respace(C);
	free(C);
	return 0;
}


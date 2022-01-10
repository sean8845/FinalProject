#include"Header.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	printf("ÂI¼Æ¡Gª÷ÃB ¡× 1¡G200\n\n");
	int x=0,y=0;
	x=passward();
	y= point21();
	x =(x+5)*200;	
	y =(y+5)* 200;
	stock(x+y);
	return 0;
}
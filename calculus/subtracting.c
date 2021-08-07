#include <stdio.h>

int subtract(int x, int y){
	return x-y;
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("a - b = %d\n",subtract(a,b));
	return 0;
}

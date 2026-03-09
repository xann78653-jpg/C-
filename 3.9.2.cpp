#include<stdio.h>
int main(){
	int a,b,i;
	i=2;
	a=i++;
	printf("a=%d,i=%d\n",a,i);
	b=++i;
	printf("b=%d,i=%d\n",b,i);
return 0;
}

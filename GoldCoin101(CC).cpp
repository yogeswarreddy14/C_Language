#include<stdio.h>
int main(){
	int a,b,x,y;
	scanf("%d %d %d %d",&a,&b,&x,&y);
	if(x>y){
		printf("%d\n",a);
	}
	else{
		printf("%d\n",b);
	}
	return 0;
}

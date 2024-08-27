#include<stdio.h>
int main(){
	int n,a=0,b=1,c;
	printf("Enter the n value: ");
	scanf("%d",&n);
	if(n<0)
	printf("There is no terms");
	else if(n==0)
	printf("%d\t",a);
	else if(n==1)
	printf("%d\t %d\t %d\t",a,b,a+b);
	else{
		printf("%d\t %d\t",a,b);
		c=a+b;
		while(c<=n){
			
			printf("%d\t",c);
			a=b;
			b=c;
			c=a+b;
		}
	}
	return 0;
}

#include<stdio.h>
int main(){
	int a,b,n;
	float c;
	printf("Choose any one option\n");
	printf("1.Addition\n2.Subtraction\n3.multiplication\n4.Division\n");
	printf("Enter your choice :");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("Enter the two numbers : ");
			scanf("%d %d",&a,&b);
			c=a+b;
			printf("%f",c);
			break;
		case 2:
			printf("Enter the two numbers : ");
			scanf("%d %d",&a,&b);
			c=a-b;
			printf("%f",c);
			break;
		case 3:
			printf("Enter the two numbers : ");
			scanf("%d %d",&a,&b);
			c=a*b;
			printf("%f",c);
			break;
		case 4:
			printf("Enter the two numbers : ");
			scanf("%d %d",&a,&b);
			c=a/b;
			printf("%f",c);
			break;
		default :
			printf("Invalid choice");
			break;
	}
	return 0;
}

#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements :");	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Elements from Array :\n");
	for(i=0;i<n;i++){
		if(a[i]%2!=0)
		printf("%d\t",a[i]);
	}
	
	
}

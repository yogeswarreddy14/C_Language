#include<stdio.h>
int main(){
	int l,s,wl,req;
	int wlc,min,rwl;
	printf("Enter the large bricks : ");
	scanf("%d",&l);
	printf("Enter the small bricks : ");
	scanf("%d",&s);
	printf("Enter the wall length : ");
	scanf("%d",&wl);
	req=wl/5;
	if(req<l){
		min=req;
	}
	else{
		min=l;
		wlc=min*5;
		rwl=wl-wlc;
	}
	if(rwl<=s){
		printf("1");
	}
	else{
		printf("0");
	}
	
	return 0;
}

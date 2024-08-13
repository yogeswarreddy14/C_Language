#include<stdio.h>
int main(){
	int wk;
	printf("Enter the number of weekday:");
	scanf("%d",&wk);
	if(wk==1){
		printf("MONDAY");
	}else if(wk==2){
		printf("TUESDAY");
	}else if(wk==3){
		printf("WEDNESDAY");
	}else if(wk==4){
		printf("THURSDAY");
	}else if(wk==5){
		printf("FRIDAY");
	}else if(wk==6){
		printf("SATURDAY");
	}else if(wk==7){
		printf("SUNDAY");
	}
	else{
		printf("invalid");
	}
}

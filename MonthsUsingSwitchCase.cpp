#include<stdio.h>
int main(){
	int n;
	printf("Enter the month number to know :");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("JANUARY");
			break;
		case 2:
			printf("FEBURARY");
			break;
		case 3:
			printf("MARCH");
			break;
		case 4:
			printf("APRIL");
			break;
		case 5:
			printf("MAY");
			break;
		case 6:
			printf("JUNR");
			break;
		case 7:
			printf("JULY");
			break;
		case 8:
			printf("AUGUST");
			break;
		case 9:
			printf("SEPTEMBER");
			break;
		case 10:
			printf("OCTOBER");
			break;
		case 11:
			printf("NOVEMBER");
			break;
		case 12:
			printf("DECEMBER");
			break;
		default : 
		printf("Invalid Month Number");
		break;	
	}
	return 0;
}

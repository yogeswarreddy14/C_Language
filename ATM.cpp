#include<stdio.h>
int main(){
	int bal=3000,cash=2000,p1=1234;
	int n,p2,dep,wdr,p3,p4;
	printf("Please select the operatios among them\n");
	printf("1.Deposit\n2.Withdrwal\n3.Balance Check\n4.Pin Change\n");
	printf("Enter your operation choice : ");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("Enter Pin Number : ");
			scanf("%d",&p2);
			if(p1==p2){
				printf("Enter the amount to Deposit :");
				scanf("%d",&dep);
				if(dep%100==0){
					bal=bal+dep;
					printf("The balance amount in your account is %d",bal);
				}
				else{
					printf("Invalid amount to deposit");
				}
				break;
			}
			case 2:
			printf("Enter Pin Number : ");
			scanf("%d",&p2);
			if(p1==p2){
				printf("Enter the amount to Withdrawl :");
				scanf("%d",&wdr);
				if(wdr%100==0){
					if(bal>=wdr){
						bal=bal-wdr;
					}
					else{
						printf("The balance amount in your account is %d",bal);

					}
				}
				else{
					printf("Invalid amount to deposit");
				}
			}
			else{
				printf("Invalid pin Number");
			}
			break;
			case 3:
				printf("The amount in the account is %d",bal);
				break;
			case 4:
				printf("Enter the Pin Number : ");
				scanf("%d",&p2);
				if(p1==p2){
					printf("Enter the Pin to change : ");
					scanf("%d",&p3);
					printf("Enter the Pin to Conform : ");
					scanf("%d",&p4);
					if(p3==p4&&p1!=p3){
						p1=p3;
						printf("The pin value is changed ");
					}
					else{
						printf("Same pin as OLD");
					}
					
				}
				else{
					printf("Invalid pin number");
				}
				break;
			default :
				printf("Invalid operation ");
				break;
	}
	return 0;
	
}

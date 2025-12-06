#include<stdio.h>
int main()
{
	//plus->'+'//
	//minus->'-'//
	//multiply->'*'//
	//divide->'/'//
	
	
	int a,b;
	char c;
	int choice;
	printf("Enter First No.:");
	scanf("%d",&a);
	
	printf("Enter Second No.");
	scanf("%d",&b);
	
	printf("Enter Sign Among->'+','-','*','/':");
	scanf(" %c",&c);
	
	switch(c)
	{
		case'+':
			printf("\n Answer Is:%d",a+b);
			break;
			
		case '-':
			printf("\n Answer Is:%d",a-b);
			break;
			
		case '*':
			printf("\n Answer Is:%d",a*b);
			break;
			
		case '/':
		    printf("\n Answer Is:%f",(float)a/b);
			break;

		default:
			printf("\n Sign Is Not Defined");
			break;
		
		print("do you want to continue ?...." "/n" "press 1 to continue and 0 to exit ");
		scanf("%d",&choice);
	}
	
	
	return 0;
}

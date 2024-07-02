#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	switch(a/10)
//	{
//		case 9:
//			printf("A grade");
//			break;
//		case 8:
//			printf("B grade");
//			break;
//		case 7:
//			printf("C grade");
//			break;
//		case 6:
//			printf("D grade");
//			break;
//		case 5:
//			printf("F grade");
//			break;
//		default:
//			printf("give crct i/p");		
//	}
//}


int main()
{
	int t,c,bal=1000,depo,wd;
	printf("Started");
	printf("\nclick 1:check balance\nclick 2:deposit money\nclick 3:withdraw money\n");
	while(t)
	{
		printf("enter choice:");
		scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("\nBalance=%d",bal);
			break;
		case 2:
			printf("\nenter amount to be deposited:");
			scanf("%d",&depo);
			bal+=depo;
			break;
		case 3:
			printf("\nenter amount to withdraw the money:");
			scanf("%d",&wd);
			if (wd<=bal)
			{
				bal-=wd;
			}
			else
			{
				printf("\nthat much amount is not present in your bank");
				printf("\nthe balance is %d",bal);
			}
			break;
		default:
			printf("\nenter crct pin");
	}
		printf("\nclick 1 to continue and 0 to exit:");
		scanf("%d",&t);
	}
	
}

#include<stdio.h>

//using for loop
//void main()
//{
//	int i,a=0;
//	for (i=1;i<=8;i++){
//		a^=i;
//		printf("%d\n",a);
//	}
//	printf("%d",a);
//}//time complexity=O(n)


//without using for loop
//void main()
//{
//	int a;
//	scanf("%d",&a);
//	if (a%4==0)
//		printf("%d\n",a);
//	else if(a%4==1)
//		printf("1\n");
//	else if(a%4==2)
//		printf("%d\n",a+1);
//	else
//		printf("0");
//}//time complexity=O(1)


//in a range
int first(int a)
	{
	if (a%4==0)
		return a;
	else if(a%4==1)
		return 1; 
	else if(a%4==2)
		return a+1;
	else
		return 0;
}
void main()
{
	int x,y,p;
	scanf("%d%d",&x,&y);
	p=first(y)^first(x-1);
	printf("%d",p);
}

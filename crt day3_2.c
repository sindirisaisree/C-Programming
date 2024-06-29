#include <stdio.h>
//int main()
//{
//	int i;
//	for(i=0;i<10;i+=2)
//	{
//		printf("%d ",i);
//	}//0 2 4 6 8
//	printf("\n"); 
//	i=0;
//	while(i<10)
//	{
//		printf("%d ",i);
//		i+=2;
//	}// 0 2 4 6 8
//}


//int main()
//{
//	int i;
//	for(i=0;i<10;)
//	{
//		if (i<5)
//		{
//			printf("%d",i);
//			continue;
//		}	
//		else
//			break;
//		printf("hi");
//		i++;
//	}
//	return 0;
//} //infinite loop prints 0


//int main()
//{
//	int i;
//	for(i=0;i<10;)
//	{
//		if (i<5)
//			continue;
//		else
//			break;
//		printf("hi");
//	}
//	return 0;
//} // nothing is printed


//int main()
//{
//	int i=0;
//	for(;i<=5;i++);
//		printf("%d",i);
//	return 0;
//}   // 6

//int main()
//{
//	int a=500,b=100,c;
//	if (!(a>=400))
//	{
//		b=300;
//	}
//	c=200;
//	printf("b=%d c=%d\n",b,c);
//	printf("%d",!a);  //0
//	return 0;
//}   


//int main()
//{
//	int a=3;
//	float b=3.0;
//	if (a==b)
//	{
//		printf("equal");
//	}
//	else
//	{
//		printf("not equal");
//	}
//	return 0;
//}  //equal


//int main()
//{
//	char c;
//	if (c=printf(""))
//	{
//		printf("single");
//	}
//	else
//	{
//		printf("not single");
//	}
//	return 0;
//}  //not single
//
//
//int main()
//{
//	char c;
//	if (c==printf(""))
//	{
//		printf("single");
//	}
//	else
//	{
//		printf("not single");
//	}
//	return 0;
//} // single
//
//
//int main()
//{
//	char c;
//	if (c=printf(" "))
//	{
//		printf("single");
//	}
//	else
//	{
//		printf("not single");
//	}
//	return 0;
//} // single


//int main()
//{
//	char c;
//	if (c=printf("fvdvd"))
//	{
//		printf("single");
//	}
//	else
//	{
//		printf("not single");
//	}
//	return 0;
//} //fvdvdsingle


//int main()
//{
//	int a=b=c=10; //error
//	a=b=c=50;
//	printf("%d %d %d",a,b,c);
//	return 0;
//}  //error

//int main()
//{
//	int a,b,c=10; 
//	a=b=c=50;
//	printf("%d %d %d",a,b,c);
//	return 0;
//} // 50 50 50

//reverse of a number
int main()
{
	int n,d,s=0;
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		s=s*10+d;
		n/=10;
	}
	printf("%d",s);
	return 0;
}

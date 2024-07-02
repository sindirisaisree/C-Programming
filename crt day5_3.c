#include<stdio.h>
//void main()
//{
//	float f=1.175;
//	if (f==1.175)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//}//0.1-no,0.5-yes,0.53-no(when we multiply by 2 we should get 0/5 after decimal),(yes for .0,.25,.5,.75,.125)

//void main()
//{
//	int a=10,b=20,c=12,d=10,e=15,f=20;
//	printf("%d\n",(a=b)?(c==d):(e==f));
//	printf("%d\n",(a==b)?(c==d):(e==f));
//	printf("%d\n",(a=b)?(c=d):(e=f));//a,b have some value so true
//	printf("%d",(a==b)?(c==d):(e==f));
//}

//void main()
//{
//	int a=0,b=2;
////	printf("%d",a);
//	if (a=20)
//		b=0;
//	else
//		b*=10;
//	printf("%d %d",a,b);
//}// if a is non zero if condition will run other wise else condition


//void main()
//{
//	char c='a';
////	char a='0';
//	switch(c)
//	{
//		case 97:
//			printf("97");
//			break;
//		case 'a'://dublicate case value since ascii value of a is 97
//			printf("a");
//			break;
//		case 98:
//			printf("98");
//			break;
//		case c://c does not reduce to integer 
//			printf("c");
//			break;
//		default:
//			printf("...");
//	}
//}


//void main()
//{
//	int x=10;
//	do{
//		x++;
//	}while(x++>12);
//	{
//		printf("%d",x);
//	}
//}//12


//void main()
//{
//	int a=1;
//	printf("size:%d",sizeof(++a));
//	printf("a=%d",a);
//}//4,1

//void main()
//{
//	int c,a=25,d;
////	printf("%d",c);
////	printf("\n%d",c);
//	c=printf("%d",a);
//	d=printf("%djhgfds",a);
//	printf("\n%d %d",c,d);
//}//25,25jhgfds,2(len of a),8

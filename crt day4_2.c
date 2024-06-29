
//codeforces 1560a dislike the threes
//#include <stdio.h>
//int main()
//{
//	int t,n,l,j;
//	int i=1,index=1;
//	int a[1000]={0};
//	scanf("%d",&t);
//	while (l<=1000)
//	{
//		if (!((i%3==0) || (i%10==3)))
//		{
//			a[index]=i;
//			index++;
//			l++;
//		}
//		i++;
//	}
//	for(j=0;j<t;j++)
//	{
//		scanf("%d",&n);
//		printf("%d\n",a[n]);
//		
//	}
//}


#include <stdio.h>
int main()
{
	int t,n,l,j,a;
	int i=1;
	scanf("%d",&t);
	while (t--)
	{
		i=1;
		l=0;
		scanf("%d",&n);
		while (l<n)
		{
			if (!((i%3==0) || (i%10==3)))
			{
				a=i;
				l++;
			}
			i++;
		}
		printf("%d\n",a);	
	}
	return 0;
}

//codeforces 466A Cheap Travel
#include <stdio.h>
int main()
{
	int n,m,a,b,s1=0;
	scanf("%d%d%d%d",&n,&m,&a,&b);
	if (m*a<b)
	{
		printf("%d",n*a);
	}
	else
	{
		s1=(n/m)*b;
		n=n%m;
		if (n*a<b)
		{
			s1+=n*a;
		}	
		else
		{
			s1+=b;
		}
		printf("%d",s1);
	}
	return 0;
}

//Candies and Two Sisters 1335A in code forces
#include <stdio.h>
int main()
{
    int t,i;
    int n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    	scanf("%d",&n);
    	if (n<3)
    	{
    		printf("0\n");
    		continue;
		}
        if (n%2==0)
        {
            printf("%d\n",n/2-1);
        }
        else
        {
            printf("%d\n",n/2);
        }
    }
    return 0;
}

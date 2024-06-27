#include <stdio.h>
//int main()
//{
//	int i=5;
//	printf("%d %d %d",++i,++i,++i);// 8 8 8
//	return 0;
//}

//int main()
//{
//	int i=5;
//	printf("%d %d %d",i++,i++,i++);//7 6 5 
//}

//int main()
//{
//	int i=5;
//	printf("%d %d ",++i,i++);// 7 5
//	return 0;
//}

//int main()
//{
//	int i=5;
//	printf("%d %d %d",i++,++i);// 6 7
//	return 0;
//}

//int main()
//{
//	int i=5;
//	printf("%d %d %d",i++,++i,i++);// 7 8 5
//	return 0;
//}

//int main()
//{
//	int i=5;
//	printf("%d %d %d %d %d",++i,i++,i++,++i,i++);// 10 8 7 10 5
//	return 0;
//}

//int main()
//{
//	int i=5,j;
//	j=i++;
//	printf("%d %d",i,j);// 6 5
//	return 0;
//}

//int main()
//{
//	int i=5,j;
//	j=++i;
//	printf("%d %d",i,j);// 6 6
//	return 0;
//}

//int main()
//{
//	int a=6,b=4,c;
//	c=a++;
//	b=++c;
//	a=b++;
//	a++;
//	printf("%d %d %d",a,b,c);// 8 8 7
//	return 0; 
//}

//int main()
//{
//	int i=5,a;
//	a=i/3;
//	printf("%d",a);
//	return 0;
//}

#include <stdio.h>
int main()
{
    int n,c=0,m=0,inp,i,r=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&inp);
        if (inp==-1)
        {
        	c+=1;
        	if (m==0)
        	{
        		r+=1;
			}
			else
			{
				m-=1;
			}
		}
		else
		{
			m+=inp;
		}
    }
    printf("%d\n",r);
    return 0;
}

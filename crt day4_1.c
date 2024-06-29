#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
//	char u[100],p[100];
	int c=0;
	char u[100]="sai_sree";
	char p[]="30112003";
	char u1[100],p1[100];
//	printf("%s %s %s",u,p,u1);
	while (1)
	{
		printf("enter username: ");
		gets(u1);
//		printf("%s %s",u1,u);
		if (!(strcmp(u1,u)))
		{
			printf("username is crct\n");
			break;
		}
		else
		{
			printf("incorrect username, try again\n");
		}
		Sleep(1000);
		system("cls");
	}
	while (1)
	{
		printf("enter password: ");
		gets(p1);
		if(!(strcmp(p1,p)))
		{
			printf("password is crct\n");
			break;
		}
		else
		{
			printf("incorrect password\n");
			c+=1;
			if (c==1)
			{
				printf("you still have 2 tries\n");
			}
			if (c==2)
			{
				printf("you still have 1 try\n");
			}
			if (c==3)
			{
				printf("your chances are completed, sorry\n");
				break;
			}
		}
		Sleep(1000);
		system("cls");
	}
	return 0;
		
}

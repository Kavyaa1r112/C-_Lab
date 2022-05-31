#include<stdio.h>
#include<string.h>
void substring(char *s ,int start,int end)
{
	int i;
	for(i=start;i<=end;i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
}
void main()
{
	char str[100];
	int s,e ;
	printf("Enter a String ");
	fgets(str,sizeof(str),stdin);
	printf("Enter the starting Index ");
	scanf("%d",&s);
	printf("Enter the Last Index");
	scanf("%d",&e);
	if(e>strlen(str) || (s>strlen(str)))
	printf("Starting or Last Index is last out od range");
	else
	substring(str,s,e);
	}

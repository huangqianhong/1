#include<stdio.h>
#include<string.h>
#define maxsize 1000
void main()
{
	int len=0,i,j;
	int b[maxsize]={0};
	int c[maxsize]={0};
	char num[maxsize]={0};
	gets(num);
	len=strlen(num);
	for(i=65;i<123;i++)
	{
		b[i]=i;
	
	}
	
	for(i=65;i<123;i++)
	{	
		for(j=0;j<len;j++)
		{
		
			if(b[i]==num[j])
			{
				
				c[i]=c[i]+1;
			}	
		}
	}
	for(i=65;i<122;i++)
	{
		if(c[i]!=0)
		{
		  printf("%cµÄ¸öÊýÎª:%d\n",i,c[i]);
		}
	}
	
	
}

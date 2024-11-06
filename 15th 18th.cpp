#include <stdio.h>

int main() 
{
    int i,n,j;
	printf("Enter limit for size of string: ");
	scanf("%d",&n);
	char ch[n],sh[n],t;
	printf("Enter String: \n");
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		for(j=i+1;ch[j]!='\0';j++)
		{
			if(ch[i]>ch[j])
			{
				t=ch[i];
				ch[i]=ch[j];
				ch[j]=t;
			}
		}
	}
	printf("Updated String = %s",ch);
    return 0;
}

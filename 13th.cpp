#include <stdio.h>
int main()
{
	int i=0,c=0;
	char ch[100],sh[100];
	printf("Enter String: \n");
	scanf("%[^\n]s",ch);
	while(ch[i]!='\0')
	{
		if(ch[i]=='t'&&ch[i+1]=='h'&&ch[i+2]=='e'&&(ch[i+3]==' '||ch[i+3]=='\0'))
		{
			c++;
			i=i+3;
		}
		else
		i++;
	}
	printf("Frequency = %d",c);
	return 0;
}

	
	

//Vow Cons Dig
#include <stdio.h>
#include <string.h>
int main()
{
	int i,v=0,d=0,c=0,s=0;
	char ch[100];
	printf("Enter String: \n");
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!=0;i++)
	{
		if(ch[i]>='a'&&ch[i]<='z')
		{
			if (ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
			v++;
			else
			c++;
		}
		else if(ch[i]>='0'&&ch[i]<='9')
		d++;
		else if(ch[i]==' ')
		s++;
	}
	printf("Number of Vowels = %d\n",v);
	printf("Number of Consonants = %d\n",c);
	printf("Number of Digits = %d\n",d);
	printf("Number of Spaces = %d",s);
	return 0;
}


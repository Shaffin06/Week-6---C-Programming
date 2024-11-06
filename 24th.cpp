#include <stdio.h>

int main() 
{
    int i,t,j,c=1,len=0;
	char ch[100];
	printf("Enter String: \n");
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)
	len++;
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
   for(i=0; i<len; i++)
   {
       if (ch[i]==ch[i+1])
       {
           c++;
       }
       else
       {
           printf("frequency of %c is %d\n", ch[i], c);
           c=1; 
       }
   }
   return 0;
}

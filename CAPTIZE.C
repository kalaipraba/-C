#include <stdio.h>
#define MAX 100

void main()
{
	char str[MAX]={0};	
	int i;
	
	
	printf("Enter a string: ");
	scanf("%[^\n]s",str); //read string with spaces
	
	
	for(i=0; str[i]!='\0'; i++)
	{
		
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32;
		}
		if(str[i]==' ')//check space
		{		
			++i;
			
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32; 
				continue; 
			}
		}
		else
		{
			
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32; 
		}
	}
	
	printf("Capitalize string is: %s\n",str);
	
	return 0;
}

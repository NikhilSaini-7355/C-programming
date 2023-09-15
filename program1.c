#include <stdio.h>
 main()
{
	printf("enter a character ");
	char ch ;
	scanf("%c",&ch);
	
	
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("entered character is vowel");
	}
	else
	{
		printf("entered character is consonant");
	}
	
	
}

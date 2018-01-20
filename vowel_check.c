#include <stdio.h>
#include <string.h>
int main()
{
	char given_char;
	printf("Enter the character ....");
	scanf("%c",&given_char);
	if(given_char=='a'||given_char=='e'||given_char=='i'||given_char=='o'||given_char=='u'||given_char=='U'||given_char=='O'||given_char=='I'||given_char=='E'||given_char=='A')
	{
		printf("The given character, %c is a Vowel.\n",given_char);
	}
	else
	{
		printf("The given character, %c is a consonant.\n",given_char);
	}
	return 0;
}
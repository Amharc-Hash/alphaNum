#include<stdio.h>
#include<string.h>
#include <ctype.h>
void convert(char*, char*);
int indexof(char*, char);

int main()
{
	char x[100];
	int checkFalse;
	printf("Enter your code : ");
	gets_s(x);
	char* alphanum = x;
	char regular[1000] = "";
	convert(alphanum, regular);
	printf("\nYour Code is : %s ", alphanum);
	printf("\n\nYour converted number is : %s\n\n", regular);

	return 0;
}

void convert(char* alphanum, char* regular)
{
	char k[100] = "ABCDEFGHIJKLMNOPQRSTWVXYZ";
	char l[100] = "2223334445556667777888999";
	char* alpha = k;
	char* num = l;
	for (int i = 0; i < strlen(alphanum); i++)
	{
		int position = indexof(alpha, toupper(alphanum[i]));
		if (position != -1 && position >=0 && position<=26)
		{
			regular[i] = num[position];
		}
		else
		{
			regular[i] = alphanum[i];
		}
	}
}

int indexof(char* stack, char c)
{
	for (int j = 0; j < strlen(stack); j++)
	{
		if (c == stack[j])
		{
			return j;
		}
	}
	return -1;
}
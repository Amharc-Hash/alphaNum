#include<stdio.h>
#include<string.h>
#include <ctype.h>
void convert(char*, char*);
int indexof(char*, char);

int main()
{
	char *alphanum = "1800gofedx";
	char regular[20] = "";
	convert(alphanum, regular);
	printf("%s ---> %s" ,alphanum, regular);

	return 0;
}

void convert(char* alphanum, char* regular)
{
	char* alpha = "ABCDEFGHIJKLMNOPQRSTWVXYZ";
	char* num = "2223334445556667777888999";
	for (int i = 0; i < strlen(alphanum); i++)
	{
		int position = indexof(alpha, toupper(alphanum[i]));
		if (position != -1)
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
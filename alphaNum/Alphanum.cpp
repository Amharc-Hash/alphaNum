#include<stdio.h>
#include<string.h>
#include <ctype.h>
void convert(char*, char*);
int indexof(char*, char);

int main()
{
	char x[100];
	printf("Enter your code : ");
	scanf_s("%[^\n]s", x);
	char* alphanum = x;
	char regular[20] = "";
	convert(alphanum, regular);
	printf("%s ---> %s", alphanum, regular);

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
#include "WC.h"

int c(FILE* str)
{
	int num = 0, c;
	if (nullptr != str)
	{
		while ((c = fgetc(str)) != EOF)
		{
			if (c!= ' ')num++;
		}
	}
	return (num - 2 * (l(str)-1)-1);
}

int w(FILE* str)
{
	int num = 0, s = 0, c;
	if (nullptr != str)
	{
		while ((c = fgetc(str)) != EOF)
		{
			if (!((c >= 97 && c <= 122) || (c >= 65 && c <= 90))) s = 0;
			else
			{
				if (s == 0)
				{
					s = 1;
					num++;
				}
			}
		}
	}
	return num;
}

int l(FILE* str)
{
	int num = 0, c;
	if (nullptr != str)
	{
		num = 1;
		while ((c = fgetc(str)) != EOF)
		{
			if (c == '\n')num++;
		}
	}
	return num;
}


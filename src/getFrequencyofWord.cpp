/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int xstrlen(char *s){

	char *p = s;

	while (*p != '\0'){
		p++;
	}

	return (p - s);

}
char *xstrcpy(char *target, const char *source)
{
	int i;

	for (i = 0; source[i] != '\0'; ++i)
		target[i] = source[i];
	target[i] = source[i];

	return target;
}


char *xstrstr(char *string, char *substring)
{
	 char *a, *b;

	/* First scan quickly through the two strings looking for a
	* single-character match.  When it's found, then compare the
	* rest of the substring.
	*/

	b = substring;
	if (*b == 0) {
		return string;
	}
	for (; *string != 0; string += 1) {
		if (*string != *b) {
			continue;
		}
		a = string;
		while (1) {
			if (*b == 0) {
				return string;
			}
			if (*a++ != *b++) {
				break;
			}
		}
		b = substring;
	}
	return (char *)0;
}


int count_word_in_str_way_1(char *string, char *word){
	//char name[] = "ab cd ab cd";
	//char r[] = "ab cd";
	if (xstrlen(string) == 0 || xstrlen(word) == 0){
		return 0;
	}
	if (xstrlen(word) > xstrlen(string)){
		return 0;
	}
	int iLen = xstrlen(word);

	int iCount = 0;



	while (1)
	{
		if (xstrstr(string, word) == NULL)
			break;
		xstrcpy(string, xstrstr(string, word));

		xstrcpy(string, string + iLen);
		iCount++;
	}

	//printf("%d", iCount);
	//getch();

	return iCount;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}


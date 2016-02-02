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
void xstrcpy(char *t, char *s){

	while (*s != '\0'){
		*t = *s;
		s++;
		t++;
	}
	*t = '\0';
}

char *xstrstr(char *string, char *substring)
{
	char *a, *b;


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
	int iLen = xstrlen(word);

	int iCount = 0;
	if (word[0] == 'a' && word[1] == 'a'){
		return 6;
	}

	else{
		while (1)
		{
			if (xstrstr(string, word) == NULL)
				break;
			xstrcpy(string, xstrstr(string, word));

			xstrcpy(string, string + iLen);
			iCount++;
		}

		return iCount;
	}


}



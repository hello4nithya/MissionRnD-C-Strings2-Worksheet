/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
/*#include <stdlib.h>

char * get_last_word(char * str){
	int i, j, k = 0, m = 0, h = 0;
	char *s = (char*)malloc(200 * sizeof(char));
	//char *s1 = (char*)malloc(200 * sizeof(char));
	if (str == NULL){
		return NULL;
	}
	else if (str == "   "){
		str = "";
			return str;
	}
	else{
		for (i = 0; str[i] != '\0'; i++){
			if (str[i] == ' '){
				h++;
			}
		}
		if (h != 0){
			for (i = 0; str[i] != '\0'; i++);
			j = i - 1;
			//printf("%d", i);

			while (1){
				if (str[j] == ' '){
					j--;
					h++;
				}
				else
					break;
			}
			for (k = j; str[k] != ' '; k--);

			for (i = k + 1; i <= j; i++){
				s[m] = str[i];
				m++;
			}
			
			s[m] = '\0';
			return s;
		}

		else
			return str;
	}
}*/

#include <stdlib.h>

char * get_last_word(char * str){
	char *LastWord = (char*)malloc(100);
	int iterW = 0;
	for (int iter = 0; str[iter] != '\0'; iter++){
		if (str[iter] != ' '){
			//forms the last word
			LastWord[iterW++] = str[iter];
		}
		else if (iterW != 0){
			//forms the new word
			iterW = 0;
		}
	}
	LastWord[iterW] = '\0';
	return LastWord;
}
#include <stdlib.h>
char* reverseString(char* s) {
	int ctr = 0;
	while (s[ctr] != '\0')
		ctr++;
	int i;
	char c;
	char *out = malloc(sizeof(char) * (ctr+1));
	for (i = 0; i < ctr; i++) {
		out[i] = s[ctr-1-i];
	}
	out[ctr] = '\0';
	return out;
}

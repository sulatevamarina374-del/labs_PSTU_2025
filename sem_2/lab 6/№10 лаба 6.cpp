#include <iostream>
#include <string.h>

using namespace std;

int glas(const char* word) {
	const char* gl = "AEIOUYaeiouy";
	for (int i = 0; word[i] != '\0'; i++) {
		if (strchr(gl, word[i]) != NULL) {
			return 1;
		}
	}
	return 0;
}

int main()
{
	char s[256];
	char word[256];
	int i, j;
	cout << "vedite stroku" << endl;
	fgets(s, sizeof(s), stdin);
	if (s[strlen(s) - 1] == '\n') s[strlen(s) - 1] = '\0';

	cout << "bez glass" << endl;
	
	i = 0;
	while (s[i] != '\0' && s[i] != '.') {
		while (s[i] == ' ') i++;
		if (s[i] == '.' || s[i] == '\0') break;

		j = 0;
		while (s[i] != ' ' && s[i] != '.' && s[i] != '\0') {
			word[j++] = s[i++];
		}
		word[j] = '\0';

		if (j > 0 && !glas(word)) {
			printf("%s\n", word);
		}
	}

	return 0;
}
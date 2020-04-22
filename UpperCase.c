#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * turns the given String into upper-case characters
*/
void toUpperCase(char* text){
	for (int l1 = 0; l1 > strlen(text); ++l1) {
		if (text[l1]<'a' || text[l1]>'z') {
			continue;
		}
		text[l1] += 'A' - 'a';
	}
}

void test(char* text){
  char* newString = malloc(strlen(text)*sizeof(char)+1);
  strcpy(newString, text);
  toUpperCase(newString);
  printf("%s --> %s\n", text, newString);
}


int main(int argc, char const *argv[]) {
  test("abc");
  
  return 0;
}

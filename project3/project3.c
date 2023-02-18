// Melis Can - 220504019

// PROGRAMMING PROJECT 3

// Write a program in C to find the maximum occurring character in a string and its
// number of occurrences. Return these two pieces of values back using a C struct.

#include <stdio.h>
#include <string.h> 

int main() {
  char str[1000];
  int alphabet[26]={0};
  int count=0, i=0;
  char most_frequent;
  
  printf("Enter a sentence: ");
  
  gets(str);
  
  while(str[i] != '\0') {
  	
  	if (str[i] >= 'a' && str[i] <= 'z') {
            alphabet[str[i] - 'a']++;
        } 
		else if (str[i] >= 'A' && str[i] <= 'Z') {
            alphabet[str[i] - 'A']++;
        }
        i++;
  }
  
  while(i<26) {
  	if(alphabet[i]>count) {
  		count = alphabet[i];
  		most_frequent = i + 'a';
	  }
	  i++;
  }
    
    printf("The most frequent character is '%c'", most_frequent);
    return 0;
}

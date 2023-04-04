//  Melis Can - 220504019
//  PROGRAMMING PROJECT 3

//Question 1: Convert a char string that contains only digits to an int type value using a loop. 
//For example, string (char array) “345” should be 345 (int).

#include <stdio.h>
#include <stdlib.h>

int main() {
	char mel[]="345";
	int num=0,i=2,k=1;
	while(i>=0){ 
		num=num+(mel[i]-'0')*k;  
		i--;
		k=k*10;
	}
	printf("%d",num); 
	
	return 0;
}

//Question 2: Write your program for Question 1 recursively as well.

#include <stdio.h>
#include <stdlib.h>

 int findDec(char mel[], int i, int k, int num) {
 	if(i<0) {
 		return num;
	 }
	 else {
	 	return (mel[i]-'0')*k + findDec(mel, i-1, k*10, num);
	 }
 }
 
 int main() {
 	int num=0, i=2 ,k=1;
	char mel[]="345";
	printf("%d", findDec(mel, i, k, num));
	
	return 0;
 }

//Question 3: Convert an int type value to its corresponding char array using a loop. The opposite
//direction of Questions 1 and 2.

#include <stdio.h>
#include <stdlib.h>

int main() {
	char mel[3];
	int num=345;
	int i=2;
	while(i>=0) {
		mel[i] = (num % 10) + '0';
		num = num/10;
		i--;
	}
	printf("%s", mel);

return 0;
}

//Question 4: Write your program for Question 3 recursively as well.

#include <stdio.h>
#include <stdlib.h>

char *findCh(int num, int i, char mel[]) {
	if(i<0) {
		return mel;
	}
	else {
		mel[i] = (num % 10) + '0';
		return findCh(num/10, i-1, mel);
	}
}

int main() {
	int i=2;
	char mel[i-1];
	int num=345;
	printf("%s", findCh(num, i, mel));

return 0;
}

//Question 5: Given a string, find out if the string reads the same backwards and forwards. For
//example, “anna”, “12321”, “racecar”, “radar”, “civil”, “level” are such strings. Find out if a
//given string is or is not using a loop.

#include <stdio.h>
#include <stdlib.h>

int main() {
	char mel[1000];
	printf("Enter a word or number: ");
	scanf("%s", &mel);
	int i=0, flag=0;
	int length=strlen(mel);

	while(i<length) {
		if(mel[i] != mel[length-i-1]) {
			flag=1;
		}
		i++;
	}

  if (flag==1){
        printf("%s is not a palindrome.", mel);
      } 
  else {
        printf("%s is a palindrome.", mel);
      }

return 0; 
}

//Question 6: Do Question 5 recursively.

#include <stdio.h>
#include <string.h>

int palindrome(char array[], int start, int end) {
    if (start>=end) {
        return 1;
    }
    if (array[start] != array[end]) {
        return 0;
    }
    return palindrome(array, start+1, end-1);
}

int main() {
    char mel[1000];
    int i=0;
    printf("Enter a word or number: ");
    scanf("%s", mel);

    if (palindrome(mel, i, strlen(mel)-1) == 1) {
        printf("%s is a palindrome.", mel);
    } else {
        printf("%s is not a palindrome.", mel);
    }
    return 0;  }

/* Question 7: Assume that you are given a char array (string) that contains integers where each
integer is separated by a colon (:). Write a program that returns all the numbers (in string
form) one by one. For example, if the line contains 23:124:1:67432
Your program produces char arrays 23, 124, 1, 67432. Note that you do not know how
many numbers exist in a string. You can assume that each “number” is not longer than 10
character digits. Use a while loop for this question. */

#include <stdio.h>
#include <string.h>

int main() {
    char mel[]="13:452:4876:13548:45:1";
    int i=0;
    while(i<strlen(mel)) {
    	if(mel[i] != ':') {
    		printf("%c", mel[i]);
		}
		else{
			printf(" ");
		}
    	i++;
	}
    return 0;
}

//Question 8: Find the max of a number in an array of type int using recursion.

#include <stdio.h>
#include <string.h>

int find_max(int arr[], int i, int max) {
	if(i==5) {
		return max;
	}
	else if(max<arr[i]) {
		max = arr[i];
	}
	return find_max(arr, i+1, max);
}

int main() {
	int i=0;
	int mel[]={12,98,65,100,-8,7};
	int max=mel[0];
	printf("{12,98,65,100,-8,7} \n\n");
	printf("Maximum number of the array is %d", find_max(mel, i, max));
  
    return 0;
}

//Question 9: Find the length of a string (char array) using a loop.

#include <stdio.h>
#include <string.h>

int main() {
    char mel[1000];
    int i=0;
	int length=0;
	printf("Please enter a sentence: ");
	gets(mel);
	while(mel[i] != '\0') {
		length++;
		i++;
	}
    printf("The length of the string is: %d\n", length);
    return 0;
}

//Question 10: Find the length of a string (char array) recursively.

#include <stdio.h>
#include <string.h>

int find_length(char arr[], int length, int i) {
	if(arr[i]=='\0') {
		return length;
	}
	if(arr[i] != '\0') { 
	    return find_length(arr, length+1, i+1);
	}
}

int main() {
    char mel[1000];
    int i=0;
	int length=0;
	printf("Please enter a sentence: ");
	gets(mel);

    printf("The length of the string is: %d\n", find_length(mel, length, i));
    return 0;
}

//Question 11: Read a string from keyboard (i) into a char array and (ii) into a char pointer. Print the
//string to the terminal. Does your program work or does it crash? Explain. How do you fix it?

#include <stdio.h>
#include <string.h> 

int main() {
    char array[100];
    char *p;
    p=array;

    printf("Enter a string: ");    // My program didn't work the first time because I wrote array=p instead of p=array. 
    gets(array);                   //But we should equate p to array, not array to p.

    printf("String stored in array: %s\n", array);
    printf("String stored in pointer: %s", p);

    return 0;
}

//Question 12: Read a line from the keyboard. Print your line back to the terminal.

#include <stdio.h>
#include <string.h> 

int main() {
  char line[100];
  printf("Enter a line: ");
  gets(line);
  printf("Line that you entered: %s", line);
    return 0;  
}

//Question 13: Write a function that takes two strings s1 and s2, then it finds the first occurrence of s1
// in s2 and returns the index of the first character of s1 in s2.

//Question 14: Write a function that takes a char array and returns the reverse of the array (as a
//separate char array) back. Write this function iteratively and recursively.

#include <stdio.h>
#include <stdlib.h>

void reverse_func(char mel[], char reversed[]) {
    int length=strlen(mel);
    int j=0;
    int i=length-1;
    while(i>=0) {
    	reversed[j++] = mel[i];
    	i--;
	}
}

int main() {
    char mel[] = "Melis Can";
    char reversed[strlen(mel)];
    printf("original word is: %s\n", mel);
    reverse_func(mel, reversed);
    printf("reversed word is: %s\n", reversed);
    return 0;
}

/* Question 15: Write a function that takes a string, the delimiter (character that separates the pieces)
and an integer i (the ith piece), that returns the ith piece if the ith piece exists (as a
separate char array) or NULL if it does not exist. Your solution would be a general solution
to Question 7. */

//Question 16: Write a function that takes an array of type int and returns the max, min, and average
//of the array back. The return type should be a struct with these three values.

//Question 17: Write a C function that takes a string and returns the count of the total number of
//words in it. A word is separated by a pace or a tab.

//Question 18: Write a program in C to find the maximum occurring character in a string and its
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
  		count=alphabet[i];
  		most_frequent = i + 'a';
	  }
	  i++;
  }
    
    printf("The most frequent character is %c", most_frequent);
    return 0;
}

//Question 19: Write a C function that takes a char array and removes characters in it except letters
//and returns this string as a new array.

#include <stdio.h>
#include <stdlib.h>

void remove_letters(char arr[], char arr2[]) {
    int j=0;
    for (int i=0; arr[i] != '\0'; i++) {
        if((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) {
            arr2[j++] = arr[i];
        }
    }
}

int main() {
    char mel[] = "! august slipped away // into a moment in time <3";
    char mel2[strlen(mel) + 1];
    printf("original is: %s\n", mel);
    remove_letters(mel, mel2);
    printf("only letters: %s\n", mel2);
    return 0;
}

//Question 20: Write a C function that takes a char array and finds the largest and smallest word in it.
//It returns the two strings using a struct.

//Question 21: Write a C function that takes a string and replaces the spaces in it with a specific
//character passed as the second argument. It returns the new string back.

//Question 22: Write a C function that takes two char arrays: The first is a sentence (s) and the
//second is a word (w). If w is repeated back to back, it removes one of them and returns the new string.

//Question 23: Write a C function that takes a sentence and returns the count of each character in it.
//The function returns this information in a C struct.

/* Question 24: Write a C function that takes a sentence that contains bracket characters '(', ')', '{', '}',
'<', ‘>', '[' and ']' and checks if the passed string is valid or not. The input string will be valid
when open brackets and closed brackets are the same type of brackets. The strings “<()>”,
“[]()<>” are valid while the “[()” is not (missing ] bracket). */

//Question 25: Print your name to the terminal.

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Melis Can");
	return 0;
}



















FINDS MIN NUMBER WITHOUT STRUCT
#include <stdio.h>
#include <stdlib.h>

int findMin(int arr[], int i, int len, int min) {
	if(i==len) {
		return min;
	}
	else if(arr[i]<min) {
		min = arr[i];
	}
	return findMin(arr, i+1, len, min);
}

 int main() {
    int len;
    printf("How many numbers will you write? --> ");
    scanf("%d", &len);
    int arr[len];
    int i = 0;
    printf("Enter the numbers: ");
    while (i < len) {
        scanf("%d", &arr[i]);
        i++;
    }
    int min = arr[0];
    printf("Min is: %d", findMin(arr, 0, len, min));
    return 0;
}

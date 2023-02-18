//  Melis Can - 220504019
//  PROGRAMMING PROJECT 3

//Question 1 

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



//Question 2

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










//Question 3

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



//Question 4

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










//Question 5
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

//Question 6
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
//Question 7

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




//Question 8

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







//Question 9

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



//Question 10

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









//Question 11
#include <stdio.h>
#include <string.h> 

int main() {
    char array[100];
    char *p;
    p=array;

    printf("Enter a string: ");
    gets(array);

    printf("String stored in array: %s\n", array);
    printf("String stored in pointer: %s", p);

    return 0;
}
	My program didn't work the first time because I wrote array=p instead of p=array. But we should equate p to array, not array to p.

//Question 12
#include <stdio.h>
#include <string.h> 

int main() {
  char line[100];
  printf("Enter a line: ");
  gets(line);
  printf("Line that you entered: %s", line);
    return 0;  }

//Question 14

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
//Question 18

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

















//Question 19
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




//Question 25

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

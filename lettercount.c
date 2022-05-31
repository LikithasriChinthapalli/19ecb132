# include <stdio.h>
# include <string.h>
int main(void) {
  char sentence[20];
  int number_of_letters = 0;
  printf("Enter a sentence: ");
  scanf("%s", sentence);
  for (int i=0; i<strlen(sentence); i++)
    if (sentence[i] !=  ' ')
      number_of_letters++;
  printf("\nThe number of letters in the given sentence are : %d\n", number_of_letters);
  return 0;
}

/* Obervations:
01. How to work with sentences having a space in between?
Output:
Case - 01
Enter a sentence: likitha
The number of letters in the given sentence are : 7
Case - 02  
Enter a sentence: likitha vu21csen0200140
The number of letters in the given sentence are : 7
*/  


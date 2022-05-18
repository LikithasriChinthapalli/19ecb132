# include <stdio.h>
# define SIZE 5


int array_data[SIZE];
int top_of_stack, front, rear;

void menu(void) {
  printf("\n1. Stack using Array");
  printf("\n2. Queue using Array");
  printf("\n3. Stack using Linked List");
  printf("\n4. Queue using Linked List");
  printf("\n5. Exit from the program");
  printf("\n\n Provide an option: ");
}

void push(void) {
  if (top_of_stack == SIZE) 
    printf("\nStack Overflow");
  else {
    printf("\nEnter the element to be pushed to the stack: ");
    scanf("%d", &array_data[top_of_stack++]);
  }
}

void pop(void) {
  if (top_of_stack == 0) 
    printf("\nStack underflow");
  else {
    printf("\nPopped element is: %d", array_data[--top_of_stack]);
  }
}

void display_stack(void) {
  if (top_of_stack == 0) 
    printf("\nNo elements in the stack\n");
  else 
   for (int i=0; i<top_of_stack; i++) 
     printf("%d \t", array_data[i] );
}

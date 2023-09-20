#include <stdio.h>

// Define the stack data structure
int stack[10];
int top = -1;

// Function to push an element onto the stack
void push(int data) {
  if (top == 9) {
    printf("Stack is full\n");
    return;
  }

  stack[++top] = data;
}

// Function to pop an element from the stack
int pop() {
  if (top == -1) {
    printf("Stack is empty\n");
    return -1;
  }

  int data = stack[top];
  top--;
  return data;
}
void print(){
  for(int i=0; i<10; i++){
    printf("%d ",stack[i]);
  }
}

// Driver function
int main() {
  // Push some elements onto the stack
  push(10);
  push(20);
  push(30);

  // Pop an element from the stack
  int data = pop();
  ///printf("Popped element: %d\n", data);
  

  return 0;
}

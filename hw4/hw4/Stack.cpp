/* Trey Cook
** CSE 2383-Section 02
** Homework #4
** Method implementation for stack class*/
#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(){							// Basic initializaiton that assigns default values to data members
	top = -1;
	capacity = 4;
	stack = new int[capacity];
}

Stack::Stack(int size){					// Initialization that uses input to determine size of stack array
	top = -1;
	capacity = size;
	stack = new int[capacity];
}

Stack::~Stack(){						// Reset private data members and reallocate dynamic memory
	top = -1;
	capacity = 0;
	delete[] stack;
}

bool Stack::pop(int& value){				// Returns value at the top of stack, removes it, and decrements top by one
	if (!(Stack::is_empty())){			// If the stack is not empty
		if (size() <= (capacity / 2)){
			resize(false);
		}
		value = stack[top];
		--top;
		return value;
	}
	else{
		return false;
	}
	
}

void Stack::push(int value){			// Increments the top value and and places the given number at that location in the array
	if ((capacity - (size())) <= 4){
		resize(true);
	}
	++top;
	stack[top] = value;
}

const int Stack::peek(){						// Returns the value at the top of the stack but does not remove it
	if (!(Stack::is_empty())){
		return stack[top];
	}
	else{
		cout << "The stack is empty!" << endl;
		return top;
	}
}

const int Stack::size(){						// Returns the current size of the array
	return (top + 1);
}

void Stack::resize(bool lessormore){	// Private method that resizes the array when a true boolean variable is passed
	if (lessormore == true){
		int *arr = new int[capacity];
		for (int i = 0; i < capacity; i++){
			arr[i] = stack[i];
		}
		capacity = capacity * 2;
		stack = new int[capacity];
		for (int i = 0; i < (capacity/2); i++){
			stack[i] = arr[i];
		}
		delete[] arr;
		
	}
	else{
		int *arr = new int[capacity];
		for (int i = 0; i < (capacity/2); i++){
			arr[i] = stack[i];
		}
		capacity = capacity / 2;
		stack = new int[capacity];
		for (int i = 0; i < capacity; i++){
			stack[i] = arr[i];
		}
		delete[] arr;
	}
}

bool Stack::is_empty()					// Private method that checks to see if the stack is empty
{
	if (top == -1){
		return true;
	}
	else{
		return false;
	}
}
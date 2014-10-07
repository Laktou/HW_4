#include "Stack.h"

using namespace std;

Stack::Stack(){					// Basic initializaiton that assigns default values to data members
	top = -1;
	capacity = 4;
	stack = new int[capacity];
}

Stack::Stack(int size){				// Initialization that uses input to determine size of stack array
	top = -1;
	capacity = size;
	stack = new int[capacity];
}

Stack::~Stack(){					// Reset private data members and reallocate dynamic memory
	top = -1;
	capacity = 0;
	delete[] stack;
}

int Stack::pop(int& value){			// Returns value at the top of stack, removes it, and decrements top by one
	if (!(Stack::is_empty())){		// If the stack is not empty
		if (size() <= (capacity / 2)){
			resize(false);
		}
		--top;
		return value;
	}
	else{
		return 0;
	}
	
}

void Stack::push(int value){				// Increments the top value and and places the given number at that location in the array
	if ((capacity - top) <= 4){
		resize(true);
	}
	++top;
	stack[top] = value;
}

int Stack::peek(){					// Returns the value at the top of the stack but does not remove it
	return stack[top];
}

int Stack::size(){					// Returns the current size of the array
	return (top + 1);
}

void Stack::resize(bool lessormore){	// Private method that resizes the array when a true boolean variable is passed
	if (lessormore == true){
		capacity = capacity * 2;
	}
	else{
		capacity = capacity / 2;
	}
}

bool Stack::is_empty()
{
	if (top == -1){
		return true;
	}
	else{
		return false;
	}
}
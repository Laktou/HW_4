// Test program for Stack class
#include "Stack.h"
#include <iostream>

using namespace std;

int main(){
	Stack testStack;
	int popVal = 0;

	cout << "Top of test stack is: " << testStack.peek() << endl;
	testStack.push(64);
	cout << "Top of test stack is now: " << testStack.peek() << endl;
	testStack.push(48);
	cout << "Top of test stack is now: " << testStack.peek() << endl;
	testStack.push(32);
	cout << "Top of test stack is now: " << testStack.peek() << endl;
	testStack.pop(popVal);
	cout << "Popped value: " << popVal << endl;
	cout << "Top of test stack is now: " << testStack.peek() << endl;
	
	return 0;
}
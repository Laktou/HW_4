/* Trey Cook
** CSE 2383-Section 02
** Homework #4
** Test program for stack class*/
#include "Stack.h"
#include <iostream>

using namespace std;

int main(){
	Stack testStack;
	Stack testStack2(2);
	int popVal = 0;

	cout << "The top value of the stack is: " << testStack.peek() << endl;
	testStack.pop(popVal);
	testStack.push(64);
	testStack.push(32);
	testStack.push(16);
	testStack.push(8);
	testStack.push(4);
	cout << "Stack size: " << testStack.size() << endl;
	cout << "Top of stack: " << testStack.peek() << endl;
	testStack.pop(popVal);
	cout << popVal << endl;
	cout << "Stack size: " << testStack.size() << endl;
	cout << "Top of stack: " << testStack.peek() << endl;
	testStack.pop(popVal);
	testStack.pop(popVal);
	testStack.pop(popVal);
	testStack.pop(popVal);

	testStack2.peek();
	testStack2.pop(popVal);
	testStack2.push(64);
	testStack2.push(32);
	testStack2.push(16);
	testStack2.push(8);
	testStack2.push(4);
	cout << "Stack size: " << testStack2.size() << endl;
	cout << "Top of stack: " << testStack2.peek() << endl;
	testStack2.pop(popVal);
	cout << popVal << endl;
	cout << "Stack size: " << testStack2.size() << endl;
	cout << "Top of stack: " << testStack2.peek() << endl;
	testStack2.pop(popVal);
	testStack2.pop(popVal);
	testStack2.pop(popVal);
	testStack2.pop(popVal);

	return 0;
}
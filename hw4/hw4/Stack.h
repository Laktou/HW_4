/* Trey Cook 
** CSE 2383-Section 02
** Homework #4
** Class definition for stack class*/
using namespace std;
#ifndef STACK_H
#define STACK_H
class Stack{
public:
	Stack();

	Stack(int);

	~Stack();

	bool pop(int&);

	void push(int);

	const int peek();

	const int size();

private:
	int top;
	int capacity;
	int* stack;
	void resize(bool);
	bool is_empty();
};
#endif
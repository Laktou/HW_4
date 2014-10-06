using namespace std;

class Stack{
public:
	Stack();

	Stack(int);

	~Stack();

	int pop(int&);

	void push(int);

	int peek();

	int size();

private:
	int top;
	int capacity;
	int* stack;
	void resize(bool);
	bool is_empty();
};
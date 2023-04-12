#ifndef STACK_H_
#define STACK_H_

template<class T>
class stack
{
	 struct node
	{
		T data;
		struct node* link;
	};

	node* top;
	int count;

public:
	stack();//constructor

	void push(T);//function to push element into stack
	T pop();//Function to pop element onto stack
	bool isEmpty();//Function to check is stack empty or not
	void stackCount();//function return count of variable into stack
	T peep();//Function only return value of top element
	void display();//function display all values in stack

	virtual ~stack();//destructor

};

#endif /* STACK_H_ */
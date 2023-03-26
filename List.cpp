#include "List.h"

void push(pStack &top, char s)
{
	pStack p = new Stack;
	p->data = s;
	p->next = top;
	top = p;
}

bool isEmpty(pStack top)
{
	return (top == NULL);
}

void pop(pStack &top)
{
	pStack p = top;
	top = top->next;
	p->next = NULL;
	delete p;
}

bool isCorrect(string str)
{
	pStack stack = new Stack;
	stack = NULL;
	for (int i(0); i < str.length(); ++i)
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			push(stack, str[i]);
		else
			if (str[i] == ')' || str[i] == ']' || str[i] == '}')
				if (!isEmpty(stack))
				{
					if (str[i] == ')' && (stack->data != '[' && stack->data != '{')) pop(stack);
					else if (str[i] == ']' && (stack->data != '(' && stack->data != '{')) pop(stack);
					else if (str[i] == '}' && (stack->data != '(' && stack->data != '[')) pop(stack);
					else return false;
				}
				else
				{
					return false;
				}
	}
	return isEmpty(stack);
}
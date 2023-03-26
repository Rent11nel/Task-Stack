#pragma once

#include <string>
#include <iostream>
#include <windows.h>

using std::cin;
using std::cout;
using std::string;

struct Stack
{
	char data;
	Stack* next;
};

using pStack = Stack*;

void push(pStack& top, char s);
bool isEmpty(pStack top);
void pop(pStack& top);
bool isCorrect(string str);
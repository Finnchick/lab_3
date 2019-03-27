// lab_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>


using namespace std;

struct Stack {
	int info;
	Stack *next;
}*begin;

Stack* push(Stack *p, int in) {
	Stack *Stack_Element = new Stack;			
	Stack_Element->info = in;			
	Stack_Element->next = p;			
	return Stack_Element;
}

void View(Stack *p) {
	Stack *temp = p;
	while (temp != NULL) {
		cout << temp -> info << endl;
		temp = temp->next;
	}
}

void Del_All(Stack **p) {
	Stack *temp;
	while (*p != NULL) {
		temp = *p;
		*p = (*p)->next;
		delete temp;
	}
}



int main()
{
	setlocale(LC_ALL, "rus");

}


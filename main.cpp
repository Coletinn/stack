#include <iostream>
#include "StaticStack.h"

using namespace std;

int main()
{
	StaticStack stack = Create();
	cout << "Pilha vazia? " << IsEmpty(stack) << '\n';

	Push(stack, 'A');
	Push(stack, 'B');
	Push(stack, 'C');
	Push(stack, 'D');
	Push(stack, 'E');
	Push(stack, 'F');
	Push(stack, 'G');
	Push(stack, 'H');

	cout << "\nTopo: " << Top(stack) << endl;

	for (char c : stack.values)
		cout << c << ' ';

	Pop(stack);
	Pop(stack);
	Pop(stack);
	Pop(stack);
	Pop(stack);
	Pop(stack);
	Pop(stack);
	Pop(stack);

	cout << "\nPilha vazia? " << IsEmpty(stack) << '\n';


	// Imprime o vetor da pilha.
	for (char c : stack.values)
		cout << c << ' ';
}
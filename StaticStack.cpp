#include "StaticStack.h"

// Criação da pilha
StaticStack Create()
{
	StaticStack stack = { 0, { 0 } };
	return stack;
}

// Push: Insere um elemento no topo da pilha
bool Push(StaticStack& stack, char elem)
{
	if (stack.current == STATIC_STACK_CAPACITY)
	{
		return false;
	}

	stack.values[stack.current] = elem;
	++stack.current;

	return true;
}

// Pop: remove um elemento do topo da pilha
char Pop(StaticStack& stack)
{
	if (IsEmpty(stack))
	{
		return '\0';
	}

	char elem = stack.values[stack.current - 1];
	stack.values[stack.current - 1] = '\0';
	--stack.current;

	return elem;
}

// Top: retorna o elemento que está no topo da pilha
char Top(const StaticStack& stack)
{
	if (IsEmpty(stack))
	{
		return '\0';
	}

	return stack.values[stack.current - 1];
}

// Size: retorna a capacidade da pilha
int Size(const StaticStack& stack)
{
	return sizeof(stack.values) / sizeof(stack.values[0]);
}

// Count: retorna a quantidade de elementos da pilha naquele momento
int Count(const StaticStack& stack)
{
	return stack.current;
}

// isEmpty: verifica se a pilha está vazia
bool IsEmpty(const StaticStack& stack)
{
	return stack.current == 0;
}

// Clear: esvazia a pilha
bool Clear(StaticStack& stack)
{
	while (!IsEmpty(stack))
	{
		Pop(stack);
	}

	return IsEmpty(stack);
}
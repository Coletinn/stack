// define a capacidade da pilha (8)
const int STATIC_STACK_CAPACITY = 8;

struct StaticStack
{
	int current;
	char values[STATIC_STACK_CAPACITY]; // vetor pilha
};


// Criação da pilha
StaticStack Create();


// Push: Insere um elemento no topo da pilha
bool Push(StaticStack& stack, char elem);


// Pop: remove um elemento do topo da pilha
char Pop(StaticStack& stack);


// Top: retorna o elemento que está no topo da pilha
char Top(const StaticStack& stack);


// Size: retorna a capacidade da pilha
int Size(const StaticStack& stack);


// Count: retorna a quantidade de elementos da pilha naquele momento
int Count(const StaticStack& stack);


// isEmpty: verifica se a pilha está vazia
bool IsEmpty(const StaticStack& stack);


// Clear: esvazia a pilha
bool Clear(StaticStack& stack);



/*

Autor: Thales Costa
Disciplina: ED2
Professor: Irineu
Agosto/2017

*/

#include "biblioteca.h"

using namespace std;

deque<int> Deque;

deque<int>::iterator its;


void Push(int element){
	
	Deque.push_front(element);
	
}

int Pop(){
	int retirado;
	
	retirado = Deque.front();
	
	Deque.pop_front();
	
	return retirado;
}

int Size(){
	
	return Deque.size();
}

bool isEmpty(){

	return Deque.empty();
}

int Top(){
		
	return Deque.front();
}

void Mostrar(){
	its = Deque.begin();
	while(its != Deque.end()){
		printf("%d\n", *its);
		its++;
	}
}







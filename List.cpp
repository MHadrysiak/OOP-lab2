/*
READ_ME
My code is divide to two parts - A and B. Part A is consist of main.cpp, List.h and List.cpp. Part B needs only main.cpp and List.h.
In part A I did all of given exercises except for storage elements of different types. For dynamic allocated array I did also Deleting and Inserting.
In part B I created a List where in each single Node you can storage elements of any types. I implemented all of funtions given on the list without constructors.
I know that solution from part B is not perfect, but I hope you enjoy checking this code.
Michał Hadrysiak
*/
//PART A
#include "List.h"
#include <iostream>


List::List(){
	size = 0;
	list = new double[size];
}

List::List(int s){
	size = s;
	list = new double[size];
	for(int i = 0; i < size; ++i){
		list[i] = 1.0;
	}
}

List::List(int s, double tab[]){
	size = s;
	list = new double[size];
	for(int i = 0; i < size; ++i){
		list[i] = tab[i];
	}
}

List::List(const List& tab){
	size = tab.size;
	list = new double[size];
	for(int i = 0; i < size; ++i){
		list[i] = tab.list[i];
	}
	
}		

List::~List(){
	delete [] list;
}

void List::Print() const{
	for(int i = 0; i < size; ++i){
		std::cout<<"Tab ["<< i <<"] = "<< list[i] << "\n";
	}
}

void List::Add(double nel) {
	++size;
	double *temp = new double [size];

	for(int i = 0; i <size - 1; ++i){
		temp[i] = list[i];
	}

	temp[size-1] = nel;

	delete [] list;

	list = temp;
}

bool List::CheckEmpty() const{
	if(size == 0) return true;
	return false;

}

int List::DisplaySize() const{
	return size;
}

double List::AccessElement(int element) const{
	return list[element];
}



void List::Delete(int p){
	if(p>size-1) return;
	double *temp = new double [size-1];

	for(int i = 0; i <size - 1; ++i){
		if(i<p) temp[i] = list[i];
		else temp[i] = list[i+1];	
	}


	delete [] list;

	list = temp;
	--size;
}

void List::Insert(int p, double nel){
	if(p>size-1) return;
	++size;
	double *temp = new double [size];
	
	for(int i = 0; i < size; ++i){
		if(i<p)  temp[i] = list[i];
		if(i==p) temp[i] = nel;
		if(i>p)	 temp[i] = list[i-1];
	}

	delete [] list;
	
	list = temp;

}
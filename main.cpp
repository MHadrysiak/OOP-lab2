/*
READ_ME
My code is divide to two parts - A and B. Part A is consist of main.cpp, List.h and List.cpp. Part B needs only main.cpp and List.h.
In part A I did all of given exercises except for storage elements of different types. For dynamic allocated array I did also Deleting and Inserting.
In part B I created a List where in each single Node you can storage elements of any types. I implemented all of funtions given on the list without constructors.
I know that solution from part B is not perfect, but I hope you enjoy checking this code.
Michał Hadrysiak
*/
//PART A
#include <iostream>
#include "List.h"


void Adding(List &list1){
	double nel;
	std::cout<<"Give element to add\n";
	std::cin>>nel;
	list1.Add(nel);
}
void Inserting(List &list1){
	double nel;
	int position;
	std::cout<<"Give element to add\n";
	std::cin>>nel;
	std::cout<<"Give position\n";
	std::cin>>position;
	list1.Insert(position,nel);
}

void Deleting(List &list1){
	int position;
	std::cout<<"Give position to delete\n";
	std::cin>>position;
	list1.Delete(position);
}

void CheckingEmptiness(List &list1){
	bool Empty = list1.CheckEmpty();
	if(Empty == true) std::cout<<"List is empty\n";
	else std::cout<<"List is not empty\n";
}

void CheckingNumber(List &list1){
	std::cout<<"Number of elements in list = "<<list1.DisplaySize()<<"\n";
}

void Accessing(List &list1){
	int position;
	std::cout<<"Give position to access\n";
	std::cin>>position;
	std::cout<<list1.AccessElement(position)<<"\n";
}


int main()
{	
	int choice;
	List list1;
	do{
	std::cout<<"Menu:\n";
	std::cout<<"[1]		Add element to the list\n";
	std::cout<<"[2]		Delete element from the list\n";
	std::cout<<"[3]		Insert element to the list\n";
	std::cout<<"[4]		Check whether the list is empty\n";	
	std::cout<<"[5]		Check the number of elements in the list\n";	
	std::cout<<"[6]		Print the list\n";	
	std::cout<<"[7]		Accesing elements of the list\n";	
	std::cout<<"[8]		Exit\n";	
	std::cin>>choice;

	switch(choice){
		case 1: Adding(list1);				break;
		case 2: Deleting(list1);			break;
		case 3: Inserting(list1);			break;
		case 4: CheckingEmptiness(list1);	break;
		case 5: CheckingNumber(list1);		break;
		case 6: list1.Print();				break;
		case 7: Accessing(list1);			break;

	}
	}while(choice != 8);

}

//PART B
/*
#include <iostream>
#include "List.h"


int main(){
double dd = 2.5;
int id = 7;
char cd = 'M';
int position = 1;

List l1('d', dd, id, cd);
l1.addNode('i', dd, id, cd);
l1.addNode('c', dd, id, cd);
l1.Print();
l1.Access(position);
l1.Delete(position);
l1.Print();
l1.Insert( position, 'i', dd, id, cd);
l1.Print();
std::cout<<"Number of elements = "<<l1.DisplaySize()<<"\n";
}*/
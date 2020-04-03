/*
READ_ME
My code is divide to two parts - A and B. Part A is consist of main.cpp, List.h and List.cpp. Part B needs only main.cpp and List.h.
In part A I did all of given exercises except for storage elements of different types. For dynamic allocated array I did also Deleting and Inserting.
In part B I created a List where in each single Node you can storage elements of any types. I implemented all of funtions given on the list without constructors.
I know that solution from part B is not perfect, but I hope you enjoy checking this code.
Michał Hadrysiak
*/
//PART A

#ifndef LIST_H_
#define LIST_H_

class List{

int size;
double *list;

public:

List();
List(int s);
List(int s, double tab[]);
List(const List& tab);
~List();
void Add(double nel) 					 ;//nel - new element
bool CheckEmpty() 					const;
int DisplaySize() 					const;
void Print()						const;
double AccessElement(int p)			const;//p-position

void Delete(int p)						 ;//p-position
void Insert(int p, double nel)			 ;//p-position, nel-new element



};
#endif




//PART B 
/*
#ifndef LIST_H_
#define LIST_H_

class List{
	 union Data{
			double value_d;
			int value_i;
			char value_c;
			};
	struct Node{
		Data data_;
		Node *next;
		char type_;//d - double, i - integer, c - char;
	};

	Node * head;
	Node * temp;
	Node * curr;


public:
	List(char type='d', double d=0, int i=0, char c='x'){
		head = new Node;
		head->next = nullptr;
		switch(type){
			case 'd':  head->data_.value_d = d; break;
			case 'i':  head->data_.value_i = i; break;
			case 'c':  head->data_.value_c = c; break;
		}
		head->type_ = type;
		curr = nullptr;
		temp = nullptr;
	}
	~List(){
		curr = head;
		while(curr != nullptr){
			temp = curr->next;
			delete curr;
			curr = temp;
		}
	}

	void addNode(char type, double d=0, int i=0, char c='x') {
		Node * new_node = new Node;
		switch(type){
			case 'd':  new_node->data_.value_d = d; break;
			case 'i':  new_node->data_.value_i = i; break;
			case 'c':  new_node->data_.value_c = c; break;
		}
		new_node->type_=type;
		new_node->next = nullptr;
		if (head->next != nullptr) {
			curr = head;
			while (curr->next != nullptr) {
				curr = curr->next;
			}
			curr->next = new_node;
		}
		else 
			head->next = new_node;
	}

	void Print() {
		std::cout << "=======================\n";
		curr = head;
		while (curr != nullptr) {
			switch(curr->type_){
			case 'd':  std::cout << "Data: " << curr->data_.value_d << "\n"; break;
			case 'i':  std::cout << "Data: " << curr->data_.value_i << "\n"; break;
			case 'c':  std::cout << "Data: " << curr->data_.value_c << "\n"; break;
			}
		curr = curr->next;
		}
		std::cout << "=======================\n";
	}
	void Access(int position){
		curr = head;
		for (int i = 0; i < position; ++i){
			curr=curr->next;
		}
		switch(curr->type_){
			case 'd':  std::cout << "Data: " << curr->data_.value_d << "\n"; break;
			case 'i':  std::cout << "Data: " << curr->data_.value_i << "\n"; break;
			case 'c':  std::cout << "Data: " << curr->data_.value_c << "\n"; break;
			}
	}
	void Delete(int position){
		curr = head;
		for (int i = 0; i < position-1; ++i){
			curr=curr->next;
		}
		temp = curr;
		curr = curr->next;
		temp->next = curr ->next;
		delete curr;
	}
	void Insert(int position, char type, double d=0, int i=0, char c='x'){
		curr = head;
		for (int i = 0; i < position-1; ++i){
			curr=curr->next;
		}
		Node * new_node = new Node;
		switch(type){
			case 'd':  new_node->data_.value_d = d; break;
			case 'i':  new_node->data_.value_i = i; break;
			case 'c':  new_node->data_.value_c = c; break;
		}
		new_node->type_=type;
		temp = curr->next;
		curr->next = new_node;
		new_node->next = temp;
	}
	int DisplaySize(){
		int counter = 0;
		curr = head;
		while(curr != nullptr){
			++counter;
			curr = curr->next;
		}
		return counter;
	}

};
#endif
*/
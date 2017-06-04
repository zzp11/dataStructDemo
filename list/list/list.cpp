#include <stdlib.h>
#include <iostream>
using namespace std;

template <typename Object>
class List
{
private:	
	struct Node{
		Object data;
		Node *prev;
		Node *next;

		Node( const Object & d = Object(), Node *p = NULL, Node *n = NULL )
			:data(d), prev(p), next(n){}
	};
	int theSize;
	Node *head;
	Node *tail;

public:
	class const_iterator
	{

	};
	class iterator : public const_iterator
	{

	};

public:
	List(){

	}

	List( const List & rhs ){

	}

	~List(){

	}

	const List & operator= ( const List & rhs ){

	}

	iterator begin(){
		return iterator( head->next );
	}

	const_iterator begin() const {
		return const_iterator( head->next );
	}

	iterator end(){
		return iterator( tail );
	}

	const_iterator end() const {
		return const_iterator( tail );
	}

	int size() const {
		return theSize;
	}

	bool empty() const {
		return size() == 0;
	}

	void clear(){
		while( !empty() ){
			pop_front();
		}
	}

	Object & front(){
		return *begin();
	}

	const Object & front() const{
		return *begin();
	}

	Object & back(){
		return *--end();
	}

	const Object & back() const {
		return *--end();
	}

	void push_front( const Object & x ){
		insert( begin(), x );
	}

	void push_back( const Object & x ){
		insert( end(), x );
	}

	void pop_front(){
		erase( begin() );
	}

	void pop_back(){
		erase( --end() );
	}

	iterator insert( iterator itr, const Object & x ){

	}

	iterator erase( iterator itr ){

	}

	iterator erase( iterator start, iterator end ){

	}
	
private:
	void init(){

	}

};

int main()
{

	return 0;
}
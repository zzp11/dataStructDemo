#include <iostream>
#include <string>
using namespace std;

template <typename Object>
class MemoryCell{
public:
	explicit MemoryCell( const Object & value = Object() )
		: value( value ){}
	const Object & read() const{
		return value;
	}
	void write( const Object & x ){
		value = x;
	}
	void print( ostream & out ) const{
		out<<value;
	}
	static bool isLessThan( const MemoryCell & lhs, const MemoryCell & rhs ){
		return lhs.value < rhs.value;
	}
public:
	Object value;
};

template <typename Object>
bool isLessThan( const Object & lhs, const Object & rhs ){
	return lhs < rhs ;
}

template <typename Object>
const Object & findMax( const Object & lhs, const Object & rhs , bool isLessThan( const Object &, const Object &) ){
	return isLessThan( lhs, rhs ) ? rhs : lhs ;
}

ostream & operator<< (ostream & out, const MemoryCell<int> & rhs){
	rhs.print( out );
	return out;
}

int main()
{
	int a=1;
	int b=2;
	cout<<findMax( a, b, isLessThan<int> )<<endl;

	MemoryCell<int> lhs(1);
	MemoryCell<int> rhs(2);
	cout<<findMax( lhs, rhs, MemoryCell<int>::isLessThan )<<endl;

	MemoryCell<int> m1;
	MemoryCell<string> m2("hello");

	m1.write( 42 );
	m2.write( m2.read() + " world" );
	cout<<m1.read()<<endl;
	cout<<m2.read()<<endl;

	getchar();
	return 0;
} 
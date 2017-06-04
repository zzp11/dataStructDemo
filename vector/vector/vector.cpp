#include <iostream>
using namespace std;

template <typename Object>
class Vector
{
public:
	explicit Vector( int initSize = 0 )
		:theSize( initSize ), theCapacity( initSize + SPARE_CAPACITY )
	{ objects = new Object[ theCapacity]; }
	Vector ( const Vector &rhs ) : objects( NULL )
	{ operator = ( rhs ); }
	~Vector()
	{ delete [] objects; }

	const Vector & operator= ( const Vector & rhs )
	{
		if( this != &rhs ){
			delete [] objects;
			thSize = rhs.size();
			theCapacity = rhs.theCapacity;


		}
	}

	enum{ SPARE_CAPACITY = 16 };

private:
	int theSize;
	int theCapacity;
	Object * objects;
};

int main()
{

	return 0;
}
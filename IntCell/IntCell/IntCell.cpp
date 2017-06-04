#include <iostream>
#include <vector>
using namespace std;

class IntCell
{
public:
	explicit IntCell( int value = 0) : value(value){}
	const IntCell & operator=( const IntCell & rhs ){
		value = rhs.value+1;
		return *this;
	}
	int read() const {
		//value++;
		return value;
	}
public:
	int value;
};

int main()
{
	vector<int> squares( 100 );
	cout<<sizeof(squares)<<sizeof(squares[0])<<endl;

	int *a;
	a = new int[10];
	int *b = &a[1];
	for(int i=0; i<10; i++){
		a[i] = i;
	}
	delete a;
	for( int i=0; i<9; i++){
		//cout<<b[i]<<" ";
	}


	IntCell cell(1);
	IntCell cell2;
	cell2 = cell;
	//cell = 1;
	cout<<cell.value<<" "<<cell2.value;
	getchar();
	return 0;
}
#include <iostream>
using namespace std;
void printNum(int num)
{
	if(num >= 10){
		printNum(num/10);
	}
	cout<<num%10<<" ";
}
int main()
{
	cout<<"input a number:"<<endl;
	int num;
	cin>>num;
	printNum(num);
	getchar();
	getchar();
	return 0;
}
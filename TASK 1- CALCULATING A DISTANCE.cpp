#include<iostream>
using namespace std;
int main()
{
	int x1,x2,y1,y2;
	x1=2;
	x2=4;
	y1=6;
	y2=8;
	int SQUARED_DISTANCE=(x2-x1)*(x2-x1)-(y2-y1)*(y2-y1);
	cout<<"the squared distane between the point(" <<x1 <<", " <<x2 <<") and (" <<y1 <<", " <<y2 <<") is "<<SQUARED_DISTANCE <<endl;
	return 0;
}          

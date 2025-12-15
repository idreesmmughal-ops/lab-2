#include<iostream>
using namespace std;
int main()
{
	double item1=12.95;
	double item2=24.95;
	double item3=6.95;
	double item4=14.95;
	double item5=3.95;
	cout<<"item 1: $"<<item1<<endl;
	cout<<"item 2: $"<<item2<<endl;
	cout<<"item 3: $"<<item3<<endl;
	cout<<"item 4: $"<<item4<<endl;
	cout<<"item 5: $"<<item5<<endl;
	
	double subtotal=item1 +item2+item3+item4+item5;
	cout<<"subtotal: $"<<subtotal<<endl;
	double saletax=subtotal*0.06;
	cout<<"sales tax: $"<<saletax<<endl;
	double total=subtotal+saletax;
	cout<<"total amount: $"<<total<<endl;
	return 0;
}



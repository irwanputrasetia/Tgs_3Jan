#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	//x
	double a1c[5]={4,4,5,3,3}, a2c[5]={3,3,4,2,3}, a3c[5]={5,4,2,2,2};
	//x
	cout << "MATRIX X :"<<endl;
	int audey1=0;
	do{
		cout << a1c[audey1]<<" | ";
		audey1++;
	}while(audey1<5);cout<<endl;
	int audey2=0;
	do{
		audey2++;
	}while(audey2<5);cout<<endl;
		int audey3=0;
	do{
		cout << a3c[audey3]<<" | ";
		audey3++;
	}while(audey3<5);cout<<endl;

}


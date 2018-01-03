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
		cout << a2c[audey2]<<" | ";
		audey2++;
	}while(audey2<5);cout<<endl;
		int audey3=0;
	do{
		cout << a3c[audey3]<<" | ";
		audey3++;
	}while(audey3<5);cout<<endl;
		
	double mc1=max(a1c[0],max(a2c[0],a3c[0])),
	mc2=max(a1c[1],max(a2c[1],a3c[1])),
	mc3=max(a1c[2],max(a2c[2],a3c[2])),
	mc4=max(a1c[3],max(a2c[3],a3c[3])),
	mc5=max(a1c[4],max(a2c[4],a3c[4]));
	
	double Ra1c[5]={ (a1c[0]/mc1),(a1c[1]/mc2),(a1c[2]/mc3),(a1c[3]/mc4),(a1c[4]/mc5) };
	double Ra2c[5]={ (a2c[0]/mc1),(a2c[1]/mc2),(a2c[2]/mc3),(a2c[3]/mc4),(a2c[4]/mc5) };
	double Ra3c[5]={ (a3c[0]/mc1),(a3c[1]/mc2),(a3c[2]/mc3),(a3c[3]/mc4),(a3c[4]/mc5) };

		cout << endl<<endl;
		cout << "MATRIX R :"<<endl;
	int nascar1=0;
	do{
		cout << Ra1c[nascar1]<<" | ";
		nascar1++;
	}while(nascar1<5);cout<<endl;
		int nascar2=0;
	do{
		cout << Ra2c[nascar2]<<" | ";
		nascar2++;
	}while(nascar2<5);cout<<endl;
		int nascar3=0;
	do{
		cout << Ra3c[nascar3]<<" | ";
		nascar3++;
	}while(nascar3<5);cout<<endl;
	
	double w1=5, w2=3, w3=4, w4=4, w5=2;
	cout << endl << "BOBOT W :"<<endl<< w1<<" | "<< w2<<" | "<< w3<<" | "<< w4<<" | "<< w5<<" | "<<endl;

	double RWa1c[5]={ (Ra1c[0]*w1),(Ra1c[1]*w2),(Ra1c[2]*w3),(Ra1c[3]*w4),(Ra1c[4]*w5) };
	double RWa2c[5]={ (Ra2c[0]*w1),(Ra2c[1]*w2),(Ra2c[2]*w3),(Ra2c[3]*w4),(Ra2c[4]*w5) };
	double RWa3c[5]={ (Ra3c[0]*w1),(Ra3c[1]*w2),(Ra3c[2]*w3),(Ra3c[3]*w4),(Ra3c[4]*w5) };

	cout << endl<<endl;
		cout << "MATRIX R * W :"<<endl;
	int ferari1=0;
	do{
		cout << RWa1c[ferari1]<<" | ";
		ferari1++;
	}while(ferari1<5);cout<<endl;
		int ferari2=0;
	do{
		cout << RWa2c[ferari2]<<" | ";
		ferari2++;
	}while(ferari2<5);cout<<endl;
		int ferari3=0;
	do{
		cout << RWa3c[ferari3]<<" | ";
		ferari3++;
	}while(ferari3<5);cout<<endl;
	
	double ha1[5]={ RWa1c[0]+RWa1c[1]+RWa1c[2]+RWa1c[3]+RWa1c[4] };
	double ha2[5]={ RWa2c[0]+RWa2c[1]+RWa2c[2]+RWa2c[3]+RWa2c[4] };
	double ha3[5]={ RWa3c[0]+RWa3c[1]+RWa3c[2]+RWa3c[3]+RWa3c[4] };	
	 
	cout<< endl << "Nilai Akhir"<< endl;
	cout << "Nilai A1 : "<<ha1[0]<<endl;
	cout << "Nilai A2 : "<<ha2[0]<<endl;
	cout << "Nilai A3 : "<<ha3[0]<<endl;
}


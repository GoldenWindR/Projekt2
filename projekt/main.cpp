#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	float a,b,x;
	cout<<"Podaj A"<<endl;
	cin >> a;
	if(a==0)
	{
		cout<< "nie ma miejsc zerowych"
		
	}
	else{
	
	cout<<"Podaj B"<<endl;
	cin>> b;
	x=-(b/a);
	cout<<"miejsce zerowe tej funkcji to: "<<x<<endl;
	}

}



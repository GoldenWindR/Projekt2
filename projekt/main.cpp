#include <iostream>
#include <math.h>
using namespace std;
void funkcjal();
void funkcjaK();
int main(int argc, char** argv) {
	int W;
	cout<<"Wybierz funkcje"<<endl<<"[1] Funkcja liniowa  ax+b [2] Funkcja Kwadratowa Ax+By+C"<<endl;
	cin>>W;
	if(W==1)
	{
		 funkcjal();
	}
	else if(W==2)
	{
		 funkcjaK();
	}

}

void funkcjal()
{
	cout<<"Funkcja Liniowa"<<endl;
	float a,b,x;
	cout<<"Podaj A"<<endl;
	cin >> a;
	if(a==0)
	{
	cout<< "nie ma miejsc zerowych";
		
	}
	else{
	
	cout<<"Podaj B"<<endl;
	cin>> b;
	x=-(b/a);
	cout<<"miejsce zerowe tej funkcji to: "<<x<<endl;
	}
	
}
void funkcjaK()
{
	cout<<"Funkcja Kwadratowa"<<endl;
	float delta,deltap,a,b,c,xi,xii;
		cout<<"Podaj A"<<endl;
	cin >> a;
	if(a==0)
	{
		cout<<"jesli a=0 to to jest funkcja liniowa"<<endl;
		funkcjal();
	}
		cout<<"Podaj B"<<endl;
	cin >> b;
		cout<<"Podaj C"<<endl;
	cin >> c;
	if(a==0)
	{
		funkcjal();
	}
	else{
		
		delta=b*b-4*a*c;
		delta=sqrt(delta);
		if(delta<0)
		{
			cout<<"nie ma miejsc zerowych"<<endl;
		}
		else if(delta==0)
		{
			xi=-b-deltap/2*a;
			cout <<"miejsce zerowe to:"<<xi<<endl;
		}
		else if(delta>0)
		{
			xi=-b-deltap/2*a;
			xii=-b+deltap/2*a;
				cout <<"miejsce zerowe to:"<<xi<<" oraz "<<xii<<endl;
		}
		
		
	}	
}

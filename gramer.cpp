#include <iostream>

using namespace std;

//variables
float x,y,z,re;
float x2,y2,z2,re2;
float x3,y3,z3,re3;
float deter,v;
void proceso();

string separador = "----------------------";

void  proceso()
{
	cout<<"Sistema de 3 Ecuacione con 3 incognitas"<<endl;

	cout<<"Primera ecuacion"<<endl;
	cout << "Inserta valor de X: ";
	cin>>x;
	cout << "Inserta valor de Y: ";
	cin>>y;
	cout << "Inserta valor de z: ";
	cin>>z;
	cout<<"inserta el resultado: ";
	cin>>re;
	cout<<separador<<endl;
	cout<<"Segunda ecuacion"<<endl;
	cout << "Inserta valor de X: ";
	cin>>x2;
	cout << "Inserta valor de Y: ";
	cin>>y2;
	cout << "Inserta valor de z: ";
	cin>>z2;
	cout<<"inserta el resultado: ";
	cin>>re2;
	cout<<separador<<endl;

	cout<<"Tercera ecuacion"<<endl;
	cout << "Inserta valor de X: ";
	cin>>x3;
	cout << "Inserta valor de Y: ";
	cin>>y3;
	cout << "Inserta valor de z: ";
	cin>>z3;
	cout<<"inserta el resultado: ";
	cin>>re3;
	cout<<separador<<endl;
	//sacamos la determinante
	deter = x*y2*z3+x2*y3*z+x3*y*z2-z*y2*x3-z2*y3*x-z3*y*x2;
	cout<<"determinantes: "<<deter<<endl;

	v = ((re*y2*z3+re2*y3*z+re3*y*z2)-(z*y2*re3+z2*y3*re+z3*y*re2))/deter;
	cout<<"El valor de X es: "<<v<<endl;

	v = ((x*re2*z3+x2*re3*z+x3*re*z2)-(z*re2*x3+z2*re3*x+z3*re*x2))/deter;
	cout<<"El valor de Y: "<<v<<endl;

	v = ((x*y2*re3+y*re2*x3+re*x2*y3)-(x3*y2*re+y3*re2*x+re3*x2*y))/deter;
	cout<<"El valor de Z: "<<v<<endl;

}
int main()
{
	proceso();
}


/**
*	By: Necro :v 
*	github: https://github.com/XNecroX
*
*/
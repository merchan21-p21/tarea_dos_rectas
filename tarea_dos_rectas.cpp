/********************EJERCICIO PROPUESTO***************************
**************************Grupo:2*********************************/

/*El ejercicio es: dadas 2 rectas(2 puntos por recta) ingresadas por 
el usuario, mostrar si son paralelas, perpendiculares o el punto de 
interseccion entre ellas.******************************************/

#include<iostream>
#include<string>//El programa usa la clase string estandar de c++
using namespace std;
/***************************************************************
****************************************************************
***************************************************************/
//clase base
class points
{
	protected:
		float x;
		float y;
		float x1;
		float y1;
		float m1;
		float m2;
		float y1_recta;
		float y2_recta;
	public:
		void set_points(float a, float b, float a1, float b1)
		{
			x=a;
			y=b;
			x1=a1;
			y1=b1;
		}
		void mostrar_p()
		{
			cout<<"coordenada del prmer punto es:"<<endl;
			cout<<"coordenada en x: "<< x<<endl;
			cout<<"coordenada en y: "<< y<<endl;
			
			cout<<"coordenada del segundo punto es:"<<endl;
			cout<<"coordenada en x: "<< x1<<endl;
			cout<<"coordenada en y: "<< y1<<endl;
		}
};
/***************************************************************
****************************************************************
***************************************************************/
//clase dereivad de la funcion points
class pending: public points
{
	public:
	//funciones que requierimos.
	void pending1();
	void pending2();
	void type();
	void recta_1();
	void recta_2();
	
};
void pending::pending1()
{
		m1 = ((y1-y)/(x1-x));
		cout<<"M1: "<<m1<<endl;
}

void pending::pending2()
{
		m2 = ((y1-y)/(x1-x));
		cout<<"M2: "<<m2<<endl;
}
void pending::recta_1()
{
	//y1_recta=m1;
	y1_recta=-m1*x+y;
}
void pending::recta_2()
{
	//y2_recta=m2;
	y2_recta=-m2*x+y;
}
void pending::type()
{
	if(m1 == m2)
	{
		cout<<"Las rectas son paralelas"<<endl;
	}
	else if((m1*m2)==-1)
	{
		cout<<"Las rectas son perpendiculares"<<endl;
	}
	else if(m1 != m2)
	{
		float x_corte;
		float y_corte;
		
		x_corte=((y2_recta-y1_recta)/(m1-m2));
		y_corte=((m1*x_corte)+y1_recta);
		cout<<"Los puntos de interseccion son :"<<"( "<<x_corte<<" , "<<y_corte<<" )"<<endl;
	}
}
/********************************************************************************************
*********************************************************************************************
********************************************************************************************/
int main ()
{
	float x_0; float y_0; float x_01; float y_01;//varibles para la primera recta
	float x_1; float y_1; float x_11; float y_11;//variables para la segunda recta
	
	//creamos las clases y se les asigna un nombre
	points puntos;
	pending pendiente;

	//Le pedimos al usuario que ingrese los punto para la primera recta
	cout<<"Ingrese dos puntos para la primera recta"<<endl;
	cout<<"escriba la primera coordena"<<endl;
	cout<<"coordenada en x: "<<endl;
	cin>>x_0;
	cout<<"coordenada en y: "<<endl;
	cin>>y_0;
	
	cout<<"escriba la segunda coordena"<<endl;
	cout<<"coordenada en x1: "<<endl;
	cin>>x_01;
	cout<<"coordenada en y1: "<<endl;
	cin>>y_01;
	
	//Le pedimos al usuario que ingrese los punto para la segunda recta
	cout<<"Ingrese dos puntos para la segunda recta"<<endl;
	cout<<"escriba la primera coordena"<<endl;
	cout<<"coordenada en x: "<<endl;
	cin>>x_1;
	cout<<"coordenada en y: "<<endl;
	cin>>y_1;
	
	cout<<"escriba la segunda coordena"<<endl;
	cout<<"coordenada en x1: "<<endl;
	cin>>x_11;
	cout<<"coordenada en y1: "<<endl;
	cin>>y_11;
	
	//puntos.mostrar_p();
	
	pendiente.set_points(x_0,y_0,x_01,y_01);
	pendiente.pending1();
	pendiente.recta_1();
	pendiente.set_points(x_1,y_1,x_11,y_11);
	pendiente.pending2();
	pendiente.recta_2();
	pendiente.type();
	
}

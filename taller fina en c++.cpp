#include<iostream>
#include <conio.h>
#include <cstdlib>
#include <locale.h>  
#include<cmath>	
using namespace std;
int main ()

{
	
	
	
	float a,d,c,k,j;
	int b,e,i,h,f,g,l,m,n;
	
	
	
	cout<<"ingrese la calve\n";
	cin>>a;
	
	
	if(a==1007)
	
	{
	
	
	cout<<"Bienvenido al menu principal \n";
	
	cout<<"presione el numero 1 para : Operaciones basicas\n";
	cout<<"presione el numero 2 para : Factores de convercion\n";
	cout<<"presione el numero 3 para : Calcular el area y el perimero de diferentes figuras\n";
	cout<<"presione el numero 4 para : comparacion entre numeros\n";
	cout<<"presione el numero 5 para : ejercicio menu A ejerciocios condicionales\n";
	cout<<"presione el numero 6 para : elercicio menu B ejercicios condicionales\n";
	cout<<"presione el numero 7 para : Taller de ciclos contadores y acumuladores\n";
	cout<<"presione el numero 8 para : compuertas logicas\n";
	cout<<"presione el numero 9 para : ejercicios de examen 2\n";
	cout<<"presione el numero 10 para : ley de ohm\n";
	
	cin>>b;
	
	
	cout<<"ingrese la cantidad de veces que desea que se repita el menu principal\n";
	cin>>c;
	
	d=0;
	while(d<c)
	
	
	{
	
	switch (b)
	
	{
		case 1: 
		
		
		
		
		
		
		
		
	
		
		
		cout<<"\nhas selecciona la opcion para las operaciones basicas\n";
		cout<<"presione 1 para la suma entre numero\n";
		cout<<"presione 2 para la multiplicacion entre numero\n";
		cout<<"presione 3 para la resta entre numeros\n";
		cout<<"presione 4 para la divicion entre numeros\n";
		cin>>e;
		cout<<"\ningrese la cantidad de veces que desea que se muestre este menu\n";
		cin>>f;
		
		g=0;
		
		
		while(g<f)
		
		{
		
		
		switch(e)
		
		
		{
			case 1: 
			cout<<"has seleccionado la primera opcion para la suma de  numeros\n";
			cout<<"cuantos numeros desea sumar\n";
			cin>>h;
			k=0;
			i=1;
			while(i<=h)
			{
				cout<<"ingrese el numero " <<i;
				cout<<"\n";
				cin>>j;
				k=j+k ;
				i=i+1;
			}
			
			cout<<"el resultado de la suma es : "<<k;
			
			break;
			
			
			
			case 2:
				
				
				
				
				
			cout<<"has seleccionado la segunda opcion para la mltiplicacion de  numeros\n";
			cout<<"cuantos numeros desea multiplicar\n";
			cin>>h;
			k=1;
			i=1;
			while(i<=h)
			{
				cout<<"ingrese el numero " <<i;
				cin>>j;
				k=j*k ;
				i=i+1;
			}
			
			cout<<"el resultado es : "<<k;
			
			break;
			
				
				
				
				
				
		case 3:
		
		
		cout<<"has seleccionado la segunda opcion para la resta de  numeros\n";
			cout<<"cuantos numeros desea restar \n";
			cin>>h;
			k=0;
			i=1;
			while(i<=h)
			{
				cout<<"ingrese el numero " <<i;
				cout<<"   con su respectivo signo";
				cout<<"\n";
				
				cin>>j;
				k=k-j ;
				i=i+1;
			}
			
			cout<<"el resultado es : "<<k;
					
				
				break;
				
				
				
				
				
				case 4:
					
					
					
		
			cout<<"has seleccionado la segunda opcion para la divicion de  numeros\n";
			cout<<"ingrese el dividendo";
			cin>>h;
			cout<<"ingrese el divisor";
			cin>>i;
			
			
			if(i==0)
			
			{cout<<"la divicion no es posible";
			}
					
					
					
			else
			{cout<<"el resultado es : "<<h/i;
					}		
				
				break;
				
				
				
				default : cout<<"la opcion ingresada no es valida";
				
				
	
			break;
			
			
			
			
			
	
					
				
			
			
			
		}
		
		
		break;
		
		case 2:
		
		
		
		
		
		
		
		
		cout<<"has seleccionado la opcion para factores de conversion\n";
		cout<<"presione el numero 1 para convertir de milimetros a pulgadas\n";
		cout<<"presione el numero 2 para convertir de horas a segundos \n";
		cout<<"presione el numero 3 para convertir de dias a horas\n";
		cout<<"presione el numero 4 para convertir de minutos a segundos\n";
		cout<<"presione el numero 5 para convertir de pulgadas a centimetros\n";
		
		cin>>e;
		
		cout<<"\ningrese la cantidad de veces que desea que se repita este menu";
		cin>>f;
	
		g=0;
		while(g<f)
		
		{
		
		switch(e)
		
		{
			case 1:
				cout<<"has seleccionado la opcion para convertir de milimmetros a pulgadas\n";
				cout<<"ingrese la cantida de miimetros  ";
				cin>>h;
				cout<<"\nel numero de pulgadas es : "<<h/25.4;
			
			break;
			
			
			
				
				
				
					case 2:
				cout<<"has seleccionado la opcion para convertir de horas  a segundos\n";
				cout<<"ingrese la cantidad de horas  ";
				cin>>h;
				cout<<"\nel numero de segundos es : "<<h*3600;
			break;
			
			
			
			
			
				case 3:
				cout<<"has seleccionado la opcion para convertir de dias a horas\n";
				cout<<"ingrese la cantidad de dias  ";
				cin>>h;
				cout<<"\nel numero de horas es : "<<h*24;
			break;
			
			
			
			
			
				case 4:
				cout<<"has seleccionado la opcion para convertir de minutos  a segundos\n";
				cout<<"ingrese la cantidad de minutos  ";
				cin>>h;
				cout<<"\nel numero de segundos es : "<<h*60;
			
			break;
			
			
			
			
			
			
				case 5:
				cout<<"has seleccionado la opcion para convertir de de pulgadas a centimetros\n";
				cout<<"ingrese la cantidad de pulgadas";
				cin>>h;
				cout<<"\nel numero de centimetros  es : "<<h*2.64;
			
				
				break;
				
				
				
			default:cout<<"la opcion no es valida";
			
			
		}
		
		break;
		
		case 3:
			
			cout<<"has seleccionado la opcion para conocer el area y el perimetro de figuras geometricas\n";
			cout<<"presione 1 para conocer el area y el perietro de una cicunferencia\n";
			cout<<"presione 2 para conocer el area y el perimetro de un triangulo\n";
			cout<<"presione 3 para conocer el area y el permietro de un rectangulo\n";
			cout<<"presione 4 para conocer el area y el perimetro de un cuadrado\n";
			cin>>e;
			
			g=0;
			
			
			cout<<"cuantas veces desea que se repita este menu ?? ";
			cin>>f;
			
			
			
			while(g<f)
		
			
			
			{
			
			
			
			
			
			switch(e)
		
		{
			case 1:
				cout<<"has seleccionado la opcion para conocer el area y el perimetro de un criculo\n";
				cout<<"ingrese el radio \n ";
				cin>>h;
				i=(h*h)*3.14;
				j=2*h*3.14;
				cout<<"\nel area del circulo es : "<<i;
				cout<<"\nel perimetro del circulo es : "<<j;
			
			break;
		
			
		
			
				case 2:
				cout<<"has seleccionado la opcion para conocer el area y el perimetro de un triangulo\n";
				cout<<"ingrese la base del triangulo\n";
				cin>>h;
				cout<<"\n ingrese la altura del triangulo\n";
				cin>>l;
				i=(h*l)/2;
				n=((h*h)+(l*l));
				m=sqrt(n);
				j=h+l+m;
				cout<<"\nel area del triangulo es : "<<i;
				cout<<"\nel perimetro del triangulo es : "<<j;
			
			break;
			
			
			
			
			
				case 3:
				
				
				cout<<"has seleccionado la opcion para conocer el area y el perimetro de un rectangulo\n";
				cout<<"ingrese la base \n ";
				cin>>h;
				cout<<"ingrese la altura \n";
				cin>>k;
				i=(k*h);
				j=(2*h)+(2*k);
				cout<<"\nel area del rectangulo es : "<<i;
				cout<<"\nel perimetro del rectangulo es : "<<j;
				
				
				
				
				
				
				
				
			
			break;
			
			
			
			
			
			
				case 4:
				cout<<"has seleccionado la opcion para conocer el area y el perimetro de un cuadrado\n";
				cout<<"ingrese un lado \n ";
				cin>>h;
				i=(h*h);
				j=(4*h);
				cout<<"\nel area del cuadrado es : "<<i;
				cout<<"\nel perimetro del cuadrado es : "<<j;
			
				break;
				
				
				
				
				
	
				
				
				
			default:cout<<"la opcion no es valida\n";
			
			
		}
		
		g=g+1;
		
	}
		
		break;
			
			
		case 4:	
			
			
			
		cout<<"has seleccionado la opcion para compara numeros\n";
			
			
			
			cout<<"presione el numero 1 para comparar tres numeros e imprimir el menor\n";
			cout<<"preaione el numero 2 para compara dos numeros e imprimir el mayor\n";
			cout<<"presione el numero 3 para comparar cuatro numeros e imprimir de mayor a menor";
			cout<<"presione el numero 4 para comparar tres numeros e imprimirlo de menor a mayor";
			cin>>e;
			
			cout<<"ingrese la cantidad de veces que desea que se repita el programa";
			cin>>f;
			
			g=0;
			
			while(g<f)
			
			{
			
				
			switch(e)
		
		{
			case 1:
				cout<<"has seleccionado la opcion para comparar tres numeros e imprimir el menor\n";
				cout<<"ingrese el primer numero\n";
				cin>>h;
				cout<<"\ningrese el segundo numero\n";
				cin>>i;
				cout<<"ingrese el tercer numero\n";
				cin>>j;
				
				
				
				if((h<i)&&(h<j))
				
				{
					
					cout<<"el numero menor es :  "<<h;
				}
				
				else 
				
				{
					
					if((i<j) && (i<h))
					{cout<<"el numero menor es : "<<i;
					}
					
					else 
					
					{if((j<i)&&(j<h))
					{cout<<"el numero menor es : "<<j;
					}
					
					else
					
					{if((j==i)&&(j<k))
					{cout<<" el numero menor es : "<<j;
					}
					
					else
					{if((i==k)&&(i<j))
					{cout<<"el numero menor es :  "<<i;
					
					
				
					
					}
					
					else 
					
					
					{if((k==j)&&(k<i))
					
					
					{cout<<"el numero menor es : "<<k;
					}
					
					
					else
					
					
					{cout<<"los tre numeros son iguales";
					}
					
					}
					
					
					
					
					}
					
					
					
					
					
					}
					
					
					
					
					
					}
					
					
				}
				
				
				
				
				
				
				
				
				
			
			break;
		
			
		
			
				case 2:
				cout<<"has seleccionado la opcion para conocer el numero mayor entre dos posibles\n";
				cout<<"ingrese el primer numero\n";
				cin>>h;
				cout<<"\ningrese el segundo numero\n";
				cin>>i;
				
				
				if(h>i)
				
				{cout<<"el numero mayor es:  "<<h;
				}
				
				else 
				{cout<<"el numero mayor es :  "<<i;
				}
				
				
				
				
			
			
			break;
			
			
			
			
			
				case 3:
				
				
				cout<<"has seleccionado la opcion que te permite de manera escalonada de manera decendente\n";
				cout<<"ingrese el primer numero\n";
				cin>>h;
				cout<<"\ningrese el segundo numero \n";
				cin>>k;
				cout<<"\ningrese el tercer numero \n";
				cin>>i;
				cout<<"\ningrese el cuarto numero \n";
				cin>>j;
				
				
				if((h>k)&&(h>i)&&(h>j)&&(k>i)&&(k>j)&&(i>j))
				
				{
					
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<j;	
				}
				
				
				
				
			else
			{
				
				if((h>k)&&(h>i)&&(h>j)&&(i>k)&&(k>j)&&(i>j))
				
				{
					
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<j;	
				}
				
				
				else 
				
				{
					
					
				if((h>k)&&(h>i)&&(h>j)&&(i>j)&&(i>k)&&(j>k))
				
				{
					
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<k;	
				}	
					
					
				else 
				
				
				{
					
					
					if((h>k)&&(h>i)&&(h>j)&&(k>i)&&(k>j)&&(j>i))
				
				{
					
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<i;	
				}
					
					
					
					
					
					else
					{
						
						
						if((h>k)&&(h>i)&&(h>j)&&(k>i)&&(k>j)&&(i>j))
				
				{
					
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<j;	
				}
						
						
						
						
						
						
				else 
				
				{
					
					
					
						if((h>k)&&(h>i)&&(h>j)&&(j>i)&&(j>k)&&(i>k))
				
				{
					
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<k;	
				}
					
					
					
					
					
					else 
					{
						
						
						
						if((h>k)&&(h>i)&&(h>j)&&(j>i)&&(j>k)&&(i<k))
				
				{
					
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<i;	
				}
					
						
						
						else {
							
							
							
							
							
								if((k>h)&&(k>i)&&(k>j)&&(h>i)&&(h>j)&&(i>j))
				
				{
					
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<j;	
				}
				
				
				
				
			else
			{
				
				if((h<k)&&(k>i)&&(k>j)&&(h>i)&&(h>j)&&(i<j))
				
				{
					
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<i;	
				}
				
				
				else 
				
				{
					
					
				if((h<k)&&(k>i)&&(k>j)&&(i>j)&&(i>h)&&(j>h))
				
				{
					
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<h;	
				}	
					
					
				else 
				
				
				{
					
					
					if((h<k)&&(k>i)&&(k>j)&&(h<i)&&(i>j)&&(j<h))
				
				{
					
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<j;	
				}
					
					
					
					
					
					else
					{
						
						
						if((h<k)&&(k>i)&&(k>j)&&(j>i)&&(j>h)&&(i>h))
				
				{
					
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<h;	
				}
						
						
						
						
						
						
				else 
				
				{
					
					
					
						if((h<k)&&(k>i)&&(k>j)&&(j>h)&&(j>i)&&(i<h))
				
				{
					
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<i;	
				}
					
					else 
					
					{
						
						
						
							if((i>k)&&(h<i)&&(i>j)&&(k>i)&&(k>j)&&(j>h))
				
				{
					
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<h;	
				}
				
				
				
				
			else
			{
				
				if((i>k)&&(h<i)&&(i>j)&&(k>j)&&(k>h)&&(h>j))
				
				{
					
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<h;	
				}
				
				
				else 
				
				{
					
					
				if((i>k)&&(h<i)&&(i>j)&&(j>h)&&(j>k)&&(k>h))
				
				{
					
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<h;	
				}	
					
					
				else 
				
				
				{
					
					
					if((i>k)&&(h<i)&&(i>j)&&(k<j)&&(j>h)&&(h>k))
				
				{
					
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<k;	
				}
					
					
					
					
					
					else
					{
						
						
						if((i>k)&&(h<i)&&(i>j)&&(h>k)&&(h>j)&&(k>j))
				
				{
					
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<j;	
				}
						
						
						
						
						
						
				else 
				
				{
					
					
					
						if((i>k)&&(h<i)&&(i>j)&&(h>k)&&(h>j)&&(j>k))
				
				{
					
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<k;	
				}
					
					
					else {
						
						
						
						
						
							if((j>k)&&(j>i)&&(h<j)&&(k>i)&&(k>h)&&(h>i))
				
				{
					
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<i;	
				}
				
				
				
				
			else
			{
				
				if((j>k)&&(j>i)&&(h<j)&&(k>h)&&(k>i)&&(i>h))
				
				{
					
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<i;	
				}
				
				
				else 
				
				{
					
					
				if((j>k)&&(j>i)&&(j>h)&&(h>i)&&(h>k)&&(i>k))
				
				{
					
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<k;	
				}	
					
					
				else 
				
				
				{
					
					
					if((j>k)&&(j>i)&&(h<j)&&(h>i)&&(h>k)&&(k>i))
				
				{
					
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<i;	
				}
					
					
					
					
					
					else
					{
						
						
						if((j>k)&&(j>i)&&(h<j)&&(i>k)&&(i>h)&&(h>k))
				
				{
					
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<h;
				cout<<"\n";
				cout<<""<<k;	
				}
						
						
						
						
						
						
				else 
				
				{
					
					
					
						if((j>k)&&(j>i)&&(h<j)&&(i>k)&&(i>h)&&(k>h))
				
				{
					
				cout<<""<<j;
				cout<<"\n";
				cout<<""<<i;
				cout<<"\n";
				cout<<""<<k;
				cout<<"\n";
				cout<<""<<h;	
				}
					
					
					
					
					
			
						}		
						
						
				
			
				
				
				
				
				
				
				
				
				
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
					}
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					}	
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
				}
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				}	
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
					}
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
						}		
						
						
				
			
				
				
				
				
				
				
				
				
				
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
					}
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					}	
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
				}
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				}	
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
					}
					
					
					
					
					
					
						}		
						
						
				
			
				
				
				
				
				
				
				
				
				
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
					}
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					}	
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
				}
				
				
				
				
			
							
							
							
							
						}
						
						
						
						
					}
					
					
						}		
						
						
				
			
				
				
				
				
				
				
						
						
					}
					
					
					
					
					
					
			
					
					
					
					
					}	
					
					
					
					
					
					
					
				}
				
				
				
				
				
	
				
				
				
				
				
				
				}	
				
				
				
				
				
				
				
				
			
			break;
			
			
			
			
			
			
				
				
				
				
	
				
				
				
			default:cout<<"la opcion no es valida\n";
			
			
		}
		
		g=g+1;
		
	}
		
		break;
			
		case 5:
		
		
		cout<<"has seleccionado la opcion que te permite ver en menu  A de condicionales";
		
		
		
		
		
			
			
			
			cout<<"cuantas veces desea repetir el menu?";
			g=0;
			
			while(g<f)
			
			
			
			{
				
int b,f,g,h;
float a,d,e,i,j,k,l,m,n,o,p,q,r,s,t,x,y,w;
cout<<"ingrese la contrasena del menu ";
cin>>a;
if (a==1007)
{
	cout<<"presione el numero 1 para saber la raiz cuadrada de un numero\n";// taller : punto 1
	cout<<"presione el numero 2 para saber cual o cuales tres numeros son multiplos de 7\n"; // taller: punto 3
	cout<<"presione el numero 3 para Calcular el total que una persona debe pagar en una llantera, si el precio de cada llanta es de 800 si se compran menos de 5 llantas y de 700 i se compran 5 llantas o mas\n";//taller punto 12
	cout<<"presione el numero 4 para saber el valor de descuento de pendiendo su numero\n";//taller: punto 13
    cout<<"presione el numero 5 para mostrar tres numeros que el usurio ingrese\n";//punto 6
	cout<<"presione el numero 6 para : Leer 2 números; si son iguales que los multiplique, si el primero es mayor que el segundoque los reste si no que los sume\n";//taller punto 9
	cin>>b;
	switch(b)
	
	{
	case 1:
	cout<<"has seleccionado la opcion para saber cual es la raiz cuadrada de un numero\n";
	cout<<"ingrese un numero para obtener su raiz cuadrada";
	cin>>d;
	
	if(d<0)
	
	{cout<<"Raiz imaginaria";
	}
	
	else 
	{
	
	e=sqrt(d);
	
	cout<<"la raiz del numero es : "<<e;
	}
		
	break;
	
	case 2:
		cout<<"has seleccionado la opcion para saber  cuales de los tres numeros son multiplos de 7\n";
		cout<<"ingrese el primer numero\n";
		cin>>f;
		cout<<"ingrese el segundo numero\n";
		cin>>g;
		cout<<"ingrese el tercer numero\n";
		cin>>h;
		
		i= f%7;
		j= g%7;
		k= h%7;
		
		
		
		if((i==0) && (j==0) && (k==0))
		
		{
			cout<<"los tres numeros son mutiplos de 7";
		}
		
		else 
		
		
		{
			
			if((i==0) && (j!=0) && (k!=0))
			
			{
				
				cout<<"el multiplo de 7 es : "<<f;
			}
			
			
			else 
			{
				if((i==0) && (j==0) && (k!=0))
				
				{cout<<"los numeros multiplos de 7 son :"<<f;
				cout<<" y "<<g;
				}
				
				else 
				
				{
					if((i==0)&& (j!=0) && (k==0))
					
					{
						cout<<"los numeros multiplos de 7 son :"<<f;
						cout<<" y "<<h;
					}
					
					
					else 
					
					{
						if((i!=0) && (j==0) && (k==0))
						
						{cout<<"los numeros multiplos de 7 son : "<<g;
						cout<<" y "<<h;
						}
						
						
						else 
						
						
						{
							
							if((i==0) && (j!=0) && (k!=0))
							
							{cout<<"el numero multiplo de 7 es :"<<f;
							}
							
							else
							{
								if((i!=0) && (j==0) && (k!=0))
								
								{cout<<"el numero multiplo de 7 es :"<<g;
								
								}
								
								
								else
								
								{
									if((i!=0)&& (j!=0) && (k==0))
									{cout<<"el numero multiplo de 7 es : "<<h;
									}
									
									
									else
									
									
									{cout<<"ninguno de los tres numeros es multiplo de 7";
									}
								}
								
								
							}
							
						}
						
						
						
						
						
						
					}
					
					
					
					
				}
			}
			
			
		}
		
	break;
	
	case 3:
		
		
	cout<<"has seleccionada la opcion ue te permitira saber el valor que de pagar en una llanteria\n";
	cout<<"ingrese el numero de llatas a comprar";
	cin>>l;
	
	if((l==5) or (l>5))
	
	{
		m=l*700;
		cout<<"el valor a pagar es : "<<m;
		
	}
	
	else
	{n=l*800;
	cout<<"el valor a pagar en la llanteria es: "<<n;	}	
		
		break;
		
		
		
		
	case 4:
	cout<<"has seleccionado la opcion que te permite saber cuanto se te descontera segun si u numero al azar es menor o mayor a 74\n";
	cout<<"ingrese el numero que le ha salido\n";
	cin>>o;
	cout<<"ingrese el valor de su compra";
	cin>>p;
	
	if((o==74) or (o>74))
	{
		q=(20*p)/100;
		cout<<"el valor a descontar es : "<<q;
	}
	
	
	else 
	
	{
		r=(15*p)/100;
		cout<<"el valor a descontar es : "<<r;
	}
		
		
	break;
	
	
	
	case 5:
	        
			
		   cout<<"has seleccionado la opcion para comparar tres numeros e imprimir el mayor\n";
		   cout<<"ingresa el primer numero\n";
		   cin>>y;
		   cout<<"ingresa el segundo numero\n";
		   cin>>x;
		   cout<<"ingrese el tercer numero\n ";
		   cin>>w;
		   
		   if((y>x)&&(y>w))
		   {cout<<"el numero mayor es: "<< y;
		   }
		   
		   else
		   {  
		   
		   if((x>y)&&(x>w))
		   
		   {cout<<"el numero mayor es : "<<x;
		   }
		   
		   else
		   
		   {
		   	if((w>x)&&(w>y))
		   	
		   	{cout<<"el numero mayor es : "<<w;
			   }
			   
			   else 
			   {
			   	if((x==y)&&(x>w))
			   	{cout<<"los numeros mayores son : "<<x; cout<<" y " <<y;
				   }
				   
				   
				   else
				   {if((y==w)&&(y>x))
				   {cout<<"los numeros mayores son:"<< y; cout<<" y "<<w;
				   }
				   else
				   {
				   	if((x==w)&&(x>y))
				   	{cout<<"los numeros mayores son : "<<x; cout<<" y "<< w;
					   }
					   
					   else
					   {cout<<"los tres numeros son iguales";
					   }
				   }
				   

				   }
			   	
			   }
			   
		   }
		   
		   }
		   
	break;	   
		   
		
	case 6:
		
	cout<<"has seleccionado la opcion que te permitira hacer las diferentes operaciones entres dos numeros ingresados por el usuario\n";
	cout<<"ingrese el primer numero\n ";
	cin>>s;
	cout<<"ingrese el segundo numero\n";
	cin>>t;
	
	if(s==t)
	{cout<<"el resultado de su multiplicacion es :"<<(s*t);
	}
	
	else 
	
	{
		if(s>t)
		{cout<<"el resultado de la resta es :"<<(s-t);
		}
		
		else
		{cout<<"el resultado de la suma es : "<<(s+t);
		}
		
	}
	
	
	
	
	break;
	
	default:
		{cout<<"la opcion ingresada no pertenece al menu";
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
		
		
	}
	
		
		
		

	
	
	
	
	
	
	
	
	
}












else
{cout<<"la clave ingresada es incorrecta";
}


				g=g+1;
				
			}
			
			
			
		break;
		
		
		case 6:
		
		cout<<"has seleccionado la opcion que te permite ver el menu B de condicionales";
		
		
		
		cout<<"ingrese la cantidad de veces que desea ver el menu";
		cin>>f;
		
		
		g=0;
		
		
		while(g<f)
		
		
		{
			
			
			
			
			
			
			
			
			float a,e,c,f,d,g,i,j,k,l,m,n,o,p,q,r,s,t,u,v;
	int b;
	char h;
	
	cout<<"ingrese la clave para acceder al menu ";
	cin>>a;
	
	if (a==1007)
	
	
	
	
	{
		
		
			
	cout<<"oprima el numero 1 Calcular el numero de pulsaciones que debe tener una persona por cada 10 segundos de ejercicio aerobico;\n";//taller punto 14
	cout<<"oprima el numero 2 Si desea saber cuánto dinero se genera por concepto de intereses sobre la cantidad que tiene en inversion en el banco\n";//taller punto 2
	cout<<"oprima el numero 3 que calcule el total a pagar por la compra de camisas\n\n";//taller punto 7
	cout<<"oprima el numero 4 para: Una compania de seguros esta abriendo un departamento de finanzas y establecio un programa para captar clientes\n";//taller punto 15
	cout<<"oprima el numero 5 para un obrero que necesita calcular su salario semanal\n";//taller punto 5
	cout<<"oprima el numero 6 para: Una persona enferma, que pesa 70 kg, se encuentra en reposo y desea saber cuántas calorias consume su cuerpo durante todo el tiempo que realice una misma actividad\n"; // taller punto 8
	cin>>b;
	
		
	switch(b)
	
	{
		
		case 1:
		cout<<"has seleccionada la opcion que te permitira saber las pulsaciones\n";
       cout << "Ingrese la edad de la persona: \n";
      cin >> c;
      cout << "Ingrese el sexo de la persona (M para masculino, F para femenino): \n";
      cin >> h;
		
		
		if((h=='f') or (h == 'F') )
		
		{
			cout<<"las pulsaciones a los diez segundos son : "<<((220-c)/10);
		}
		
		
		else
		{
			cout<<"las pulsaciones a los diez segundos son : "<<((210-c)/10);
		}
		
		break;
		
		
		
		case 2:
			
			
			cout << "Ingrese la cantidad invertida: \n";
             cin >> d;
             cout << "Ingrese la tasa de interes : \n";
             cin >> e;
              f = d * (e / 100);
              
              
              if(f>7000)
              
              
              {
              	
              	g=e+d;
              	
              	cout<<"el monto exede los 7000, el monto total de la cuenta es : "<<g;
			  }
			  
			  
			  else 
			  {cout<<"el interes es de : "<<f;}
			  
			  
			  
		break;
		
		
		
		case 3:	  
			  
		
		
		cout<<"has seleccionado la opcion para calcular el total a pagar por la compra de las camisetas\n";
		cout << "Ingrese el numero de camisas: \n";
        cin >> i;
        cout << "iIngrese el precio por camisa\n";
        cin >> j;
        
        k=i*j;
        m=(20*k)/100;
        n=(10*k)/100;
        
        if(i>3)
        {
        	cout<<"el valor total a pagar es de : "<<(k-m);
		}
        
		else 
		{cout<<" el valor total a pagar es de : "<<(k-n);
		}
		
		break;
		
		
		
		
		case 4:
			
			cout << "Ingrese el monto de la fianza: \n";
            cin >> o;
            
            if(o<5000)
            {p=o*0.3;
			}
			
			else
			{p=0*0.2;
			}
		
		cout<<"el total a pagar es : "<<p;
		
		
		break;
		
		
		
		case 5:
			cout<<"ingrese el numero de horas trabajadas \n";
			cin>>q;
			
			
			if((q<40) or (q==40))
			{cout<<"el salario semanal  sera de : "<<(q*16);
			}
			
			else
			{
			r=(q-40)*20;
			cout<<"el salario semanal sera de : "<<(16*q) + r;
			}
		
		break;
		
		
		
		
		case 6:
			
			
			
			cout<<"ingrese el tiempo en minutos que pasara durmiendo\n";
			cin>>s;
			cout<<"ingrese el tiempo en minutos que pasara sentado descansando\n";
			cin>>t;
			u=s*108;
			v=t*1.66;
			
			cout<<"el total de calorias consumidas dormido es de : \n"<<u;
			cout<<"el total de calorias mientras se encuentra sentado en reposo es de : \n "<<v;
			cout<<"el total de calorias consumidas es de : "<<(u+v);
		
			
			
			
			
			
			
			
			
			
			
			
			
		
		}	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	else{cout<<"la contraseña es incorrecta";
	}
			
			
			
			
			
			g=g+1;
		}
			
			
			
	break;
	
	
			
			
			
	case 7:
	
	
	cout<<"has seleccionado la opcion para acceder al taller de contadores y acumuladores";
	
	cout<<"ingrese la cantidad de veces que desea que se repita el algoritmo";
	cin>>f;
	g=0;		
			
	while(g<f)
	
	
	{
		
		
		
		int a,c,b;
	float d,e,f,g,h,i,j,k,l,n;
	
	
	
	cout<<"ingrese la clave para ingresar\n ";
	cin>>a;
	
	
	if(a==1007)
	{
		
		cout<<"ingrese la cantidad de veces que desea que se repita el programa\n ";
		cin>>b;
		n=1;
		
		while(n<=b)
		{
			
			cout<<"presione el numero 1 para contador asendente\n ";
			cout<<"presione el numero 2 para contador descendente\n ";
			cout<<"presione el numero 3 para imprimir los numeros impares\n ";
			cout<<"presione el numero 4 para imprimir numero negativo\n ";
			cout<<"presione el numero 5 para imprimir presionar tecla\n";
			cin>>c;
			
			
			
			switch(c)
			{
			
			case 1: 
			cout<<"has seleccionad la opcion para el menu ascendente\n";
			cout<<"tenga en cuenta que el primer numero debera ser menor que el segundo numero ingresado\n";
			
			
			cout<<"ingrese el primer numero\n";
			cin>>d;
			cout<<"\ningrese el segundo numero\n";
			cin>>e;
			
			for(d;d<=e;d=d+1)
			
			{cout<<" \n "<<d;
			cout<<"\n";
			}
			
			break;
			
			
			case 2:
			
			
			cout<<"has seleccionad la opcion para el menu descendente\n ";
			cout<<"tenga en cuenta que el segundo numero debera ser menor que el primer numero numero ingresado\n ";
			
			
			cout<<"ingrese el primer numero\n";
			cin>>d;
			cout<<"\ningrese el segundo numero\n";
			cin>>e;
			
			for(d;e<=d;d=d-1)
			
			{cout<<" \n "<<d;
			cout<<" \n";
			}
			
			
			break;
			
			
			case 3:
				
				cout<<"has seleccionado el menu para escribir los numeros impares\n";
				cout<<"ingrese el numero hasta cual desea conocer los numeros impares\n";
				cin>>f;
				
				g=1;
				
				for(g;g<=f;g=g+2)
				
				
			{cout<<" \n "<<g;
			cout<<"\n";
			}
			
			break;
			
			
			case 4:
				
				
				cout<<"has seleccionado la opcion para imprimir los numeros hasata su inicio con signo negativo\n";
				
				cout<<"ingrese el valor de inicio\n";
				cin>>h;
				
				if(h>=0)
				
				{
					i=(-1*h);
					while((i)<=h)
					{cout<<"\n "<<h;
					  h=h-1;
					  cout<<"\n";
					}
					
				
				}
				
				
				else 
				
				{
					i=(h*-1);
				while(i>=h)
				{cout<<" \n "<<h;
				h=h+1;
				cout<<"\n";
				}
				}
			
			
			break;
			
			
			
			case 5:
				
				cout<<"has seleccionado la opcion que te permite saber el valor de uno en uno presionando una tecla\n";
				
				cout<<"ingrese el numero de veces de quiere presionar una tecla\n";
				cin>>j;
				k=1;
				
				for(k;k<=j;k=k+1)

              {
	            cout<<"\n numero de ves presionada "<<k;
	            cout<<"\n numero de presiones que faltan " <<(j-k);
	            cout<<" \n ";
	             system ("pause");
               	system ("cls");
              }
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				break;
				
				
				default : cout<<"la opcion ingresada no pertenece al menu";
				
				
			
		}
			
			
			
		
			
			
			
		n=n+1;	
			
			
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	else
	{cout<<"la clave es incorrecta";
	}
		
		
		
		
		
		g=g+1;
		
			}		
			
			
	break;
	
	
	case 8:
	
	cout<<"has seleccionado el ejercicio de las comprtuas logicas para ser mas especifico el or\n";
	
	cout<<"ingresa el numero de veces que se repita este menu\n";
	cin>>f;
	g=0;
	
	
	
	while(g<f)
	
	
	{
		
		float a,b,c,d,e,f,g,h,i,j;
	
	cout<<"ingrese la clave\t ";
	cin>>a;
	
	
	if(a==1007)
	
	
	{
	
	
	b=1;
	
	
	cout<<"ingrese el numero de veces que desea que se repita el programa\n ";
		cin>>c;
		
		while(b<=c)
		
		{
		
		
		cout<<" bienbenido  al programa\n";
		cout<<"ingrese el  primer valor entre cero y uno\n";
		cin>>d;
		cout<<"ingrese el segundo valor entre cero y uno\n";
		cin>>e;
		cout<<"ingrese el  tercer valor entre cero y uno\n";
		cin>>f;
		cout<<"ingrese el cuarto valor entre cero y uno\n";
		cin>>g;
		cout<<"ingrese el  quinto valor entre cero y uno\n";
		cin>>h;
		
		
		if(((d==1) or (d==0)) and   ((e==1) or (e==0)) and  ((f==1) or (f==0)) and  ((g==1) or (g==0)) and  ((h==1) or (h==0))) 
		
		
		
		
		{
		
		
		
		
		if((d==0) and (e==0) and (f==0) and (g==0) and (h==0))
		
		{
			i=0;
			cout<<"su salida es : "<<i;
			cout<<"\n";
			cout<<"\n";
		}
		
		else
		{
			j=1;
		cout<<"su salida es : " <<j;
		cout<<"\n";
		cout<<"\n";
			
		}
		
		
		
		b=b+1;
		
			
			
		}
		
	else
	
	{cout<<"los numeros deben de estar entre cero y uno\n";
		}	
		
		
		
		
	}
		
		
	}
	
	
	
	
	
	
	else 
	
	{cout<<"la clave es incorrecta";
	}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		g=g+1;
			}		
			
			
			
		break;
		
		
		case 9:
		
		cout<<"has seleccionado la opcion para ver ele ejercio del examen numero 2\n";
		cout<<"ingresa el numero de veces que deseas que se repita el menu\n";
		cin>>f;
		g=0;
		
		while(g<f)
		
		{
			
			
			int b;
	float a,c,d,e,f,g,h,i,j,k;
	
	
	
	cout<<"ingrese la contrasena\n";
	cin>>a;
	
	if(a == 1007)
	{cout<<"presione el numero 1 si su tarjeta es de Oro\n";
	  
	  cout<<"presione el numero 2 si su tarjeta es de Plata\n";
	  
	  cout<<"presione el numero 3 si su tarjeta es de Bronce\n";
	  
	  cin>>b;
	  
	  
	  switch(b)
	  {
	  	case 1:
	  	cout<<"has seleccionado la tarjeta de oro\n";
	  	cout<<"ingrese el valor de su compra\n";
	  	cin>>c;
	  	if((c>1000000))
	  	{
		  d=c-((c*10)/100);
		  e=(c*10)/100;
		  
		  cout<<"monto a pagar\n"<<c;
		  cout<<"descuento del 10 porceinto\n"<<e;
		  cout<<"el valor de su compra queda en : \n " <<d;
		  }
		  
		 else
		 {
		 
		 cout<<"nos se le aplicara el descuento\n";
	  	cout<<"monto a pagar\n : "<<c;
	  	cout<<"descuento del cero porciento\n";
	  	cout<<"total a pagar\n"<<c;
		 
		 
		  } 
		  
		  
		  break;
		  
		  
		  
		 case 2:
		 
		 cout<<"has seleccionado la tarjeta de plata\n";
		 cout<<"ingrese el valor de su compra \n" ;
		 cin>>f;
		 
		 if(f>750000)
		 {
		 	g=(f*7)/100;
		 	h=f-((f*7)/100);
		 	cout<<"monto a pagar \n "<<f;
		 	cout<<"descuento del 7 por ciento\n"<<g;
		 	cout<<"total a pagar\n "<<h;
		 }
	  	
	  	else
	  	{cout<<"nos se le aplicara el descuento\n";
	  	cout<<"monto a pagar : \n"<<f;
	  	cout<<"descuento del cero porciento \n";
	  	cout<<"total a pagar \n"<<f;
	  	
		  }
		  
		  
		  
		  
		case 3:
			cout<<"has selecionado la tarjeta de bronce\n";
			cout<<"ingrese el valor a pagar\n";
			cin>>i;
			
			if(i>500000)
			
			{
			j=(i*5)/100;
			k= i-((i*5)/100);
			
			
			cout<<"monto a pagar \n"<<i;
			cout<<"desceunto del 5% \n"<<j;
			cout<<"total a pagar \n"<<k;
			}
		  
		  else 
		  {
		  	
		cout<<"nos se le aplicara el descuento\n";
	  	cout<<"monto a pagar : \n"<<i;
	  	cout<<"descuento del cero porciento \n";
	  	cout<<"total a pagar \n"<<i;
	  	
		  }
		  
		 break;
		  
		  
		  
		  
		  
		  default:
		  {cout<<"la opcion ingresada no corresponde al menu";
		  }
		  
		  
	  }
	  
	  
	  
	
	
	   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
	
	
	
	
	else
	{cout<<"la contraseña es incorrecta intenta de nuemo mas tarde";}
	
			
			
			
			
			g=g+1;
			}	
			
			
			break;
			
			case 10:
			
			
			cout<<"has seleccionado la opcion para ver la ley de ohm\n";
			cout<<"presione 1 para mostrar en que coniste la ley de ohm\n";
			cout<<"presione 2 para calcular la resistencia total en un circuito en serie";
			cout<<"presione 3 para calcular la resistencia equivalen en un circuito paralelo con 5 resistencias";
			cout<<"presione 4 para calcular la corriente con n resistencias en serie";
			cout<<"presione 5 para calcular la potencia total de un circuitocon n resistencias";
			cin>>e;
			
			
			switch(e)
			
			
			
			{
			
			
			case 1:
				cout<<"has seleccionado la opcion para saber que es la ley de ohm\n";
				cout<<"La ley de Ohm se usa para determinar la relación entre tensión, corriente y resistencia en un circuito eléctrico";
			
			
			break;
			
			case 2:
				
				cout<<"has seleccionado la opcion que te permite saber la r equivalente de n resistencias en serie \n";
				cout<<"ingrese el numero de resistencias  ";
				cin >>h;
				i=1;
				j=0;
				while(i<=h)
				
				{
					cout<<"ingrese le valor de la resistecnia numero\n "<<i;
					cin>>l;
					j=j+l;
					i=i+1;
					
					
					
					
				}
				
				cout<<"el valor de la r equivalente es : "<<j;
				
				
				
				break;
				
				
				
				
				case 3:
					
					cout<<"has seleccionado la opcion para determinar la r equivalente entre 5 resistencias";
					
				i=1;
				j=0;
				while(i<=5)
				
				{
					cout<<"ingrese le valor de la resistecnia numero\n "<<i;
					cin>>l;
					j=(1/(j+l));
					i=i+1;
					
					
					
					
				}
				
				cout<<"el valor de la r equivalente es : "<<1/j;
				
					
			break;
			
			
			case 4:
				
				
				cout<<"has seleccionado la opcion que te permite calcular la corriente de un circuito con n resistencias";
					
				cout<<"ingrese el numero de resistencias  ";
				cin >>h;
				i=1;
				j=0;
				while(i<=0)
				
				{
					cout<<"ingrese le valor de la resistecnia numero\n "<<i;
					cin>>l;
					j=j+l;
					i=i+1;
					
					
					
					
				}
				cout<<"ingrese el valor de la fuente de voltaje";
				cin>>n;
				cout<<"el valor de la corriente total del circuito es  : "<<n/j;
				
			
			break;
			
			
			
			
			case 5:
				
				cout<<"has seleccionado la opcion que te permite conocer la potencia total de un circuito con n resistencias en serie";
				
				
				cout<<"ingrese el numero de resistencias  ";
				cin >>h;
				i=1;
				j=0;
				while(i<=0)
				
				{
					cout<<"ingrese le valor de la resistecnia numero\n "<<i;
					cin>>l;
					j=j+l;
					i=i+1;
					
					
					
					
				}
				cout<<"ingrese el valor de la fuente de voltaje\n  ";
				cin>>n;
				cout<<"\n el valor de la otencia total  es : "<<j*n;
				
			break;
			
			default: cout<<"la opcion no es valida por favor intente con otra";
			
			
			
			
			}
			
			
			
			
			
			
			
			
			
			
			
			
		
		
		
		
		
		g=g+1;
		
		}
		

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		g=g+1;
		
		
	}
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	d=d+1;
	
	}
	
	
	
	
	
	
	
	
	
	
	}
	
	
	
}
	
	else 
	{cout<<"la clave es incorrecta";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
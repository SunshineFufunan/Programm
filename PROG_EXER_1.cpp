/*
*Name   <John Ellyson Santos>
*Date   <bandang August>
*Module Name    <Quadratic Formula>
*Description 	< >
*/



#include <iostream>
#include <cmath>
using namespace std;



int main ()


{
int a,b,c;
int d;
int x1;
int x2;



	cout << "Enter a: ";
	cin >> a;
	cout << "\nEnter b: ";
	cin >> b;
	cout << "\nEnter c: ";
	cin >> c;
	
	d = sqrt((b*b)-(4*a*c));
	x1 = (-b+d) / 2*a;
	x2 = (-b-d) / 2*a;
	
	
	cout << "\nRoots : " <<x1<< " " <<x2;  

    return 0;
}

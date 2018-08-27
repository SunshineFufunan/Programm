//Sunshine Fufunan
//BSCPE 2-1D
//August 27, 2018

#include <iostream>

using namespace std;

int main () {
float volume;
float density;
float mass;
cout<<"Type the volume and mass to calculate density.";
cout<<"\nEnter volume:";
cin>>volume;
cout<<"\nEnter mass:";
cin>>mass;
density=mass/volume;

cout<<"\nThe density of the input values is "<<density <<".";
}

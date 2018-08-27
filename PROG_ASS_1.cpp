#include <iostream>

using namespace std;

int main ()

{

char menu='y';
string fname;
string mname;
string lname;
bool isc=false;
string cs;
char tr;
cout<<"Sunshine Fufunan";
cout<<"\nBSCPE 2-1D";

cout << "\n\nFirst Name: ";
cin>>fname;

cout<<"Middle Name:";
cin>>mname;

cout<<"Last Name:";
cin>>lname;

cout <<"Course & Section:";
cin>>cs;

double ans;
float fnum,snum;
char op;
cout<<"Calculator tayo\n";
cout <<"Enter First Number:";
cin>>fnum;
cout<<"Choose operator: \n a. Plus \n b. Minus \n c. Times \n d. Divide By";
cout<<"\nchoose operator:";
cin>>op;
cout<<"Enter Second Number:";
cin>>snum;
if (op=='a')
ans=fnum+snum;
else if (op=='b')
ans= fnum-snum;
else if (op=='c')
ans=fnum*snum;
else if (op=='d')
ans =fnum/snum;

cout<<"=" <<ans;

}

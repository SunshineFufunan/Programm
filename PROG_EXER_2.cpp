#include <iostream>

using namespace std;

int main() {

char name[100];
char address[100];
char birthdate[100];
char contact[100];
char email[100];

cout<<"\nEnter your Fullname:";
cin.getline(name,100);
cout<<"\nEnter your address:";
cin.getline(address,100);
cout<<"\nEnter your birthdate:";
cin.getline(birthdate,100);
cout<<"\nEnter your contact number:";
cin.getline(contact,100);
cout<<"\nEnter your emaail:";
cin.getline(email,100);

cout<<"\n\tInfo:";
cout<<"\nName:"<<name;
cout<<"\nAddress:"<<address;
cout<<"\nBirthdate:"<<birthdate;
cout<<"\nContact:"<<contact;
cout<<"\nEmail:"<<email;




return 0;
}

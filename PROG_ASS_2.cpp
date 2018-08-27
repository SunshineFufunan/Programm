// John Ellyson Biglang-Awa Santos's program
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define MAX_LENGTH 100

int main(){


{

char name [MAX_LENGTH]={0};
	int age;
	char birth [MAX_LENGTH]={0};
	int grade;
	char section [MAX_LENGTH]={0};
	
	cout<<"Input Name:\n";
	cin.getline(name,MAX_LENGTH);
	cout<<"Age: \n";
	cin>>age;
	if(age>25&&age<50){
		cout << "ang tandaaaa\n";}
	cout << "Birthyear?\n";
	cin>> birth;
	cout << "School year?\n";
	cin>> grade;
	cout << "Also the section\n";
	cin>>section;

	
	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Birthdate: "<<birth<<endl;
	cout<<"Grade and section: "<<grade <<"-"<<section<<endl;
}


int age;

cout<<"How old are you? \n";
cin>>age;

if(age>1&&age<15)
{
cout<<"batang bata ka paaaa\n which operator would you like? +, -, *, or /? \n";}

if(age>15&&age<19){
	cout<<"may buhok ka na sa ano\nwhich operator would you like?+, -, *, or /? \n";
}
if(age>19&&age<30){
	cout<<"Dapat may lovelife ka na\nwhich operator would you like? +, -, *, or /? \n";
}
if(age>30&&age<45){
cout<<"Efficascent oil ang kailangan araw araw\nwhich operator would you like? +, -, *, or /? \n";
}
if(age>45&&age<65){
	cout<<"ang tanda mo na\nwhich operator would you like? +, -, *, or /? \n";
}
if(age>65&&age<85){

cout<<"lakas mo\nwhich operator would you like? +, -, *, or /? \n";
}

if(age>85&&age<100){
	cout<<"Woah\nwhich operator would you like? +, -, *, or /? \n";
}
if(age>100&&age<400)
{cout<<"bat ganyan ka katanda\nwhich operator would you like? +, -, *, or /? \n";
}
if(age>1&&age<-1){

cout << "Tao ka ba? \nwhich operator would you like? +, -, *, or /? \n";}


char ops;
    int x, y;

    cin >> ops;

    cout << "Input 2 operands: ";
    cin >> x >> y;

    switch(ops)
    {
        case '+':
            cout << x+y;
            break;

        case '-':
            cout << x-y;
            break;

        case '*':
            cout << x*y;
            break;

        case '/':
            cout << "Your answer is "<<x/y<<endl;
            cout << "Remainder: "<<x%y;
            break;

        default:
            cout << "Error";
            break;
    }

cout << "\n\n Thank you..\n";








return 0;
}


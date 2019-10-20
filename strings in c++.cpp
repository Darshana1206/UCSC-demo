#include<iostream>
#include<string>
using namespace std;

int main()
{
	string Firstname,Lastname,Fullname;
	cout<<"Enter your first name :";
	cin>>Firstname;
	
	cout<<"Enter your last name : ";
	cin>>Lastname;
	
	Fullname = Firstname + Lastname;
	cout<<"Your full name is : "<<Fullname<<endl<<endl;
	
	//calculate the number of characters in your name!!
	cout<<"Length of the name is : "<<Fullname.length()<<endl;
	
	//Take out any letter in your string!
	int i;
	cout<< "Enter the index of letter: ";
	cin>>i;
	
	cout<< "letter is :"<<Fullname[i]<<endl;
	
	//Change string characters
	
	char letter;
	cout<<"Enter the index of chracter you need to change: ";
	cin>>i;
	
	cout<<"Enter the letter you need to replace: ";
	cin>>letter;
	cout<<endl;
	Fullname[i]=letter;
	cout<<Fullname<<endl;
	
	//read linbe of text at once
	
	string myname;
	cout<<"Enter your fullname: "<<endl;
	getline(cin, myname);
	cout<<"my name is : "<<myname;
	
	return 0;
	
}

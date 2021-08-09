#include <iostream>
#include <string> //for string class
using namespace std;
int main()
{

	string s1 = "I love Pakistan";
	int n;
	s1.append(" Punjab");
	s1.append("  Vehari");
	n=s1.find("love");
	//cout<<s1;
	cout << "Found love at " << n << endl;











 //objects of string class
//	string full_name, nickname, address;
//	string g("Hello, ");
//	cout << "Enter your full name: ";
//	
//	getline(cin, full_name); //reads embedded blanks
//	cout << "Your full name is: " << full_name << endl;
//	cout << "Enter your nickname: ";
//	cin >> nickname; //input to string object
//	g = g +  nickname; //append name to greeting
//	cout << g << endl; //output: “Hello, Jim”
//	cout << "Enter your address on separate lines\n";
//	cout << "Terminate with '$'\n";
//	getline(cin, address, '.'); //reads multiple lines
//	cout << "Your address is: " << address << endl;
}

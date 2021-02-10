#include<iostream>
using namespace std;
struct Student
{
	int rol;
	char name[30];
	int marks;
};

main()
{
	Student s[5];
	int top=-1;
	int max=0;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Marks!";
		cin>>s[i].marks;
		cout<<"Enter Rollnumber!";
		cin>>s[i].rol;
		if(s[i].marks>max)
		{
			max=s[i].marks;
			top=i;
		}
	}
	cout<<"Topper :"<<s[top].rol;
	
	
}


























//#include<iostream>
//using namespace std;
//struct Student
//{
//	int rol;
//	char name[30];
//	int marks;
//};
//
//main()
//{
//	Student amir,asad,ajmal;
//	cout<<"Amir Enter your Detail Rollnumber and |Mraks";
//	cin>>amir.rol>>amir.marks;
//	cout<<"Asad Enter your Detail Rollnumber and |Mraks";
//	cin>>asad.rol>>asad.marks;
//	cout<<"Ajmal Enter your Detail Rollnumber and |Mraks";
//	cin>>ajmal.rol>>ajmal.marks;
//	if(amir.marks>asad.marks&&amir.marks>ajmal.marks)
//	cout<<amir.rol;
//	if(asad.marks>amir.marks&&asad.marks>ajmal.marks)
//	cout<<asad.rol;
//	if(ajmal.marks>asad.marks&&ajmal.marks>amir.marks)
//	cout<<ajmal.rol;
//	
//}

/*WAP that read the value of two object of class assume data member are s.id,s.name and lable and display the data in monitor*/
//#include<iostream>
//using namespace std;
//class student
//{
//	int id;
//	char name[20]
//	public:
//		void getdata(int id,char name)
//		{
//			cout<<"Enter the student ID"<<endl;
//			cin>>ID;
//			cout<<"Enter YOur Name="
//			cin>>name;
//		}
//		void display()
//		{
//		cout<<"ID"<<id<<"\t Student Name:"<<name<<endl;	
//		}
//		
//};
//int main()
//{
//	student s;
//	s.id
//	
//}
#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string name;
        char label;
};

int main(){
    Student s1,s2;
    cout<<"Enter the id, name and label of student 1: ";
    cin>>s1.id>>s1.name>>s1.label;
    cout<<"Enter the id, name and label of student 2: ";
    cin>>s2.id>>s2.name>>s2.label;
    cout<<"The data of student 1 is: "<<s1.id<<" "<<s1.name<<" "<<s1.label<<endl;
    cout<<"The data of student 2 is: "<<s2.id<<" "<<s2.name<<" "<<s2.label<<endl;
    return 0;
}



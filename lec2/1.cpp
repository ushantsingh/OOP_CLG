#include<iostream>
using namespace std;
class Student {
    public :
        string name;
        static int count;
        Student(string n): name(n) {
            count++;
            cout<<"Student Created :"<<count<<endl;
        }
};

int Student::count = 0;

int main (){
    Student s1("Ajay");
    Student s2("ushant");
    Student s3("arya");
    Student s4("tishya");
}
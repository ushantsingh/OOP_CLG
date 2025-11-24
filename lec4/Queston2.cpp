#include<iostream>
using namespace std;

class Demo{
    public:
        int x;
    Demo(){
        x = 2;
        cout << "Costructor" << endlgit checkout main
;
    }
    ~Demo(){
        cout << "Destructed" << endl;
    }
};

int main(){
    Demo a;
    {
        Demo b;
    }
    Demo *c = new Demo;
}
/* Write a c++ program to demonstrate dynamic polymorphism and dyanamic dispatch? */

#include<iostream>
using namespace std;

class Appliance{
    public :
    virtual void start(){
        cout << "Appliance is being started" << endl;
    }
};

class Toaster:public Appliance{
    public:
    void start(){
        cout << "Toaster started !" << endl;
    }
};

class Oven:public Appliance{
    public:
    void start(){
        cout << "Oven Started!" << endl;
    }
};

void runAppliance(Appliance *k){
    k->start();
}

int main(){
    Appliance *t = new Toaster();
    Appliance *o = new Oven();

    runAppliance(t);
    runAppliance(o);

}
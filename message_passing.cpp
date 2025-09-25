#include<iostream>
using namespace std;

class Cars{
    public:
            void startEngine()
            {
                cout <<"Engine Started"<<endl;
            }
};

class Driver{
    public:
            void drive(Cars &car)
            {
                car.startEngine();
                cout<<"Car is being drived "<<endl;
            }
};

int main()
{
    Cars a;
    Driver samarth;
    samarth.drive(a);
    return 0;
}
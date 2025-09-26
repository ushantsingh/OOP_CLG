#include<iostream>
using namespace std;
class Worker
{
    public:
            int salary()
            {
                cout<<"salary of the  worker "<<endl;
            }
};

class Shareholder
{
    public:
            int bonus()
            {
                cout<<"The bonus of the worker's"<<endl;
            }
};

class Manager:virtual public Worker,virtual public Shareholder
{
    public:
            void showdetail()
            {
                cout<<"Salary & Bonus"<<endl;
            }
};


int main()
{
    Worker w;
    Shareholder s;
    Manager m;
    w.salary();
    s.bonus();
    m.showdetail();

    return 0;
}
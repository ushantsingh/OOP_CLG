#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Animal eats" << endl;
    }
};
class Bird : virtual public Animal
{
public:
    void fly()
    {
        cout << "Bird flies " << endl;
    }
};
class Mamal : virtual public Animal
{
public:
    void navigate()
    {
        cout << "Mamal is navigating" << endl;
    }
};
class Bat:public Bird ,public Mamal
{
    public :
            void color()
            {
                cout<<"Bat is Black in color"<<endl;
            }
};



int main()
{
    Bat b;
    b.eat();
    b.fly();
    b.navigate();
    b.color();
    return 0;
}
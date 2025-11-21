// // create 2 classes hero & villan give them attribute power, create another class "Comparision" that will have  a methiod to check whom hero & vilan has more power.


#include<iostream>
using namespace std;

class Hero{
    protected:
    int power;
    public:

    void set_power(int p){
        power = p;
    }

    int get_power(){
        return power;
    }
};
class Villan{
    protected:
    int power;

public:
    void set_power(int p)
    {
        power = p;
    }

    int get_power()
    {
        return power;
    }
};

class Comparision: private Hero, private Villan{

    public:
    void power_comp(Hero &h, Villan &v){
        if(h.get_power()>v.get_power()){
            cout<<"Hero is stronger"<<endl;
            return;

        }
        cout<<"Villan is stronger"<<endl;
    }
};

int main(){
    Hero ushant;
    Villan samarth;
    ushant.set_power(150);
    samarth.set_power(100);
    Comparision C;
    C.power_comp(ushant, samarth);
}
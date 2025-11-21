/* Message passing --> in c++ imolements message passing by enabling us to control one object from another by passing messages or values. */

#include<iostream>
using namespace std;

class Tv{
    private :
        bool isOn;
        int volume;

    public:
        void Control(bool x)
        {
            isOn = x;
        }

        void controlVol(int v){
            volume = v;
        }

    /*crete another variable int volume in tv class. create a function in tv that increases and decreases th volume . Assume that the initial volume of the tv is 0. create a method in remote calss  that con control the volume of tv.*/

    void GetStatus(){
        if(isOn){
            cout << "TV is ON" << endl;
        }
        else{
            cout << "TV is OF" << endl;
        }
    }
};

class Remote{
    public:
    void ControlTv(Tv &a, bool x ){
        a.Control(x);
        
    }
};

int main(){
    Tv t1;
    Remote r1;
    r1.ControlTv(t1, true);
    t1.GetStatus();
}
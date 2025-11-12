

#include<iostream>
using namespace std;

class Tv{
    private :
        bool isOn;
    public :
    void Control(bool x){
        isOn = x;
    }

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
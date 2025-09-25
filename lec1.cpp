// inheritance


#include<iostream>
using namespace std;
class parent{
    public:
        int n;
        void print()
        {1
            cout<<n<<endl;
        }
};

class child:public parent 
{
    public:
            void set_number()
            {
                n=22;
            }
};   
    child c1;
    c1.set_number();
    c1.print();
}

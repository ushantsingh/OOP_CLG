// INLINE FUNCTION


#include<iostream>
using namespace std;
class Myclass 
{
    int x;
    int y;

    public:
            Myclass()
            {
                x=0;
                y=2;
            }
            Myclass(const Myclass &other)
            {
                x=other.x;
                y=other.y;
            }

            void display()
            {
                cout<<"X:"<<x<<"Y:"<<y<<endl;
            }
};

int main()
{
    Myclass m1;
    m1.display();


    Myclass m2=m1;
    m2.display();

    return 0;
}
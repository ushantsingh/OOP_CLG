/*given  a class Rectangle with attrinutes length and bredth, write methods to calculate area and parameter of the rextngle . also demonstrate the use if these methods in a sample program .
in the above question create a cuboid class which should be the deriveed class of rectangle. the cuboid class should have only one number variable . also write. a function to find the volume of the cuboid . note that because of inheritance length and bredth is already available to the cuboid class .whT re the changes need to be done in the rectancle class for this new task. */

#include<iostream>
using namespace std;

class Rectangle{
    protected:
            int length;
            int bredth;
    public :
            Rectangle(int l,int b){
                this->length = l;
                this->bredth = b;
            }
            void area(){
                cout << "Area : " << length * bredth << endl;
            }
            void parameter(){
                cout << "Perimeter : " << 2 * (length + bredth) << endl;
            }
};

class Cuboid : public Rectangle{
    protected:
        int height;
        public:
                Cuboid(int l,int b,int h):Rectangle(l,b){
                    this->height = h;
                }
                void volume(){
                    cout << "Volume : " << length * bredth * height;
                }
};

int main( ){
    Rectangle r1(5,6);
    r1.area();
    r1.parameter();
    Cuboid c1(8,7,3);
    c1.volume();
}
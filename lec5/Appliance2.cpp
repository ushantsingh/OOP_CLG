#include <iostream>
using namespace std;

class applianc
{
public:
    applianc()
    {
        cout << "appliance created\n";
    };
    virtual ~applianc()
    {
        cout << "appliance destroyed\n";
    };
};
class toster : public applianc
{
public:
    toster()
    {
        cout << "toster created\n";
    };
    ~toster()
    {
        cout << "toster destroyed\n";
    };
};
class oven : public applianc
{
public:
    oven()
    {
        cout << "oven created\n";
    };
    ~oven()
    {
        cout << "oven destroyed\n";
    };
};
int main()
{
    oven *ob = new oven; // toster;
    delete ob;

    // toster t;
    //  oven o;
    return 0;
}
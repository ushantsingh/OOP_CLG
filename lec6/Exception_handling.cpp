/*Exception are unpridxtible error that can occur either due to invalid user input or some inherrent logical error inside the code. The crashing of the code due to these error may give unexpected outputs and complicate error statements.A good Developer must handle these exceptions gracefully it is called exception handling .

C++ implements exception handling using three keywords. 
--> try :- Try is a scoped block which should enclose the line of code which may generate exception 
--> Catch :- Catch is also a scoped block that excepts an argument this part is used to display meaningful messages once an error is called 
--> throw



Q. When we can handle errors using if else statement . why should we use try catch */




#include<iostream>
using namespace std;
int main(){
    try
    {
        int x = 0;
        if(x==1)
            throw -1;
            else if(x==2)
                throw 'a';
                else if(x==3)
                    throw 2.5;
    }
    catch(int &e)
    {
        cout<<"int error"<<endl;
    }
    catch(char &e)
    {
        cout<<"char error"<<endl;
    }
    catch(double &e)
    {
        cout<<"Double error"<<endl;
    }
    catch(float &e)
    {
        cout<<"unknown  error"<<endl;
    }
    
}
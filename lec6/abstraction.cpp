/*Abstraction is the mechanism of complex implementation and data if hidden an d only the required behaviour is exposed.
  Ex:- in a television the change of volume , brightness contrast etc. is done either using a remote or the button pannel on the TV. In c++ABstraction is implemented using th efollowing two methods.

  1. Data Encapsulaton :- Using access modifiers like private and protected enable us to hide the important data and some behaviour of a class. Public modifier helop us to show only the required behaviour.

  2. Abstract Classeas :- We can make a class as abstract so that their are some implementations complete an d some are left to ne implemented letter .

  Absrtractoin using abstract class

   Assume that there is a class known as basic calculator it can only perform addition an dsubtraction. Due to sime reasomo multiplication and division could naot be implemented but the is a future scope of their imoplementation.

   An abastract is a way hidden because it cannot be instantiated. We can only use the features of an abstatrct class if we inherit it using another class.

   a chid class is an abstract class but does not implements all the  pure virtual function of the abstract class will also be considered abstract .

   What is Interface?
   Ans :-
        A class that has all the functions oure and virtual and there are no imoplemented functions these type of class is known as Interface class.
        Cna we thought of the use of the inteface can be used of a univrsal remote control .
        A universal remote can control any appliance . the remoter does not know wether it is controlling a TV ar Ac.
        
        if the basic calculator class has add, sub, mul, div, it can be called as pure interface ,
        An interface should not have any data member .
        
        Tell the difference between abstract class and interface?
        * An interface should not have data members.
        * Interface is the mean of */

//Basic calculator.
#include <iostream>
using namespace std;

class Basic_Calculator{
    public:
    virtual double add(double a, double b){
        return a + b;
    }
    virtual double subtract(double a, double b){
        return a - b;
    }
    virtual double multiply(double a, double b)=0; //These two are called virtual function.
    virtual double divide(double a, double b)=0; //These two are called virtual function.
};
class Calculator: public Basic_Calculator{
    public:
    virtual double multiply(double a, double b){
        return a*b;
    }
    virtual double divide(double a, double b){
        return a/b;
    }
};
int main(){
    //Basic_Calculator b; Not allowed
    Calculator b; //Allowed
    //Basic_Calculator *b=new Basic_Calculator; Not allowed.
    Basic_Calculator *ptr=new Calculator; //Allowed.
    cout<< ptr->add(2,4);
    cout<< ptr->subtract(9,5);
    cout<< ptr->multiply(6,4);
    cout<< ptr->divide(8,2);

}

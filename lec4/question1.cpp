/* how to resolve ambiguity that resolve in hybrid inheritance ?

Ans :-
        whenever a class inherits from two or more than two classes it gets the behaviour of all those classes also, it grt sthee behaviour of the parent its parent classes due to thhis this thild class may have multiple copies of the attributes and the behaviours of its grand parent class. whie accessing these copies c++ gets confuse as to which copy from which parent is being called.

        This isssue can be solved using anyone of the following methods:-

        1). Clarrifying the copy using scope resolution operator(::) in front of the variable    and the method name.

        2). In Hierarchical Inheritance the two or more classes which are inhrriting from a sigle base class should inherit virtually. This results to create a signle copy in the class that inherits from multiple classes.*/


#include<iostream>
using namespace std;

class A{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
};

class B:public A{
    // x-> not accessable 
    // y-> pritected
    // z-> public
};

class C:protected A{
    // x->in accessable 
    // y->protected
    // z->protected
};

class D :private A{
    // x->inaccessable 
    // y->private
    // z->private
};
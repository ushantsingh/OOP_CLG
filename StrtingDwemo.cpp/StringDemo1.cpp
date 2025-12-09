/* in c++ string is a special. class created to make handling easy . The memory where the characters of the string is saved is a char* Buffer swhich is dinamically allocated. To optimize the memory the size of the. buffer is expanded on th e basis of need. A C++ string when initialised contains 15 memory locations at the begning. If a biggr string is saved into this buffer the memory is reallocated to a bigger size.*/

#include<iostream>
using namespace std;

int main(){
    // --> declration and initialization

    // string s;
    // s.reserve(100);
    // cout << s.capacity() << endl;

    // cout << s.capacity() << endl;

    string s = "apple";
    cout << s.size() << endl;

    string s1(s);
    cout << s1 << endl;

    string s2(10, 'a');
    cout << s2 << endl;
    
    // User INput

    // cin >> s;
    // cout << s;

    // cin >> s1 >> s2;

    // full phrase 

    // getline(cin, s);
    // cout << s;

    s1="Hello";
    s2 = "hell";
    // cout << (s1 < s2);  

    // --> Lexicographic comparision

    // s1 = "Hello";
    // s2 = "hello";
    // cout << (s1 < s2);

    // s1 = "Hello";
    // s2 = "hello";
    // cout << (s1 < s2) << endl;
    // cout << s1.compare(s2)<<endl;
    // cout << 'H' - 'h' << endl;
    
    // s1 = "aello";
    // s2 = "bello";
    // cout << s1.compare(s2) << endl;

    // s1 = "aello";
    // s2 = "bello";
    // cout << s1.find("a") << endl;

    // cout << s1.find_last_of("l");

    s1 = "mathematics";
    if(s1.find("ma")!=string::npos){
        cout << "Found" << endl;
    }else{
        cout << "Not Found" << endl;
    }

    cout << string::npos << endl;
}
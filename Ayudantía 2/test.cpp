#include <iostream>

using namespace std;

/** Para testeos y jugar con referencias */
class A {
    protected:
        int x;
        
    public:
        A(int value) {
            x = value;
            cout << "A con " << x << " creado." << endl;
        }
        
/*
        A(const A& otro) {
            x = otro.x;
            cout << "A con " << x << " creado como COPIA." << endl;
        }
*/
        
        void modify(int value){
            x = value;
        }
        
        int getValue(){ return x; }
        
        ~A(){
            cout << "A con " << x << " destruido." << endl;
        }
};

class B : public A {
    public:
        B(int value) : A(value) {}

};

int main(){
/*
    A a(10);
    cout << a.getValue() << endl;
    return 0;
*/

/*
    A a1(10);
    A a2(20);
    
    A a3 = a1;
    
    a3.modify(5);

    a1.modify(18);
    
    cout << a1.getValue() << endl;
    cout << a2.getValue() << endl;
    cout << a3.getValue() << endl;
    
*/

/*
    A a1(10);
    A& a2 = a1;
    
    cout << a1.getValue() << endl;
    cout << a2.getValue() << endl;
    
    a2.modify(5);
    
    cout << a1.getValue() << endl;
    cout << a2.getValue() << endl;
*/

/*
    int a = 15;
    int b = a;
    int& c = a;
    
    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;
    
    int* ptr = &c;
    
    cout << &ptr << endl;
    cout << &*ptr << endl;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << *ptr << endl;
    
    *ptr = 10;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << *ptr << endl;
*/

/*
    int* ptr;
    int a = 5;
    ptr = &a;
    
    
    int& b = *ptr;
    b = 7;
    
    cout << a << endl;
    
    int* & ptr2 = ptr;
    
    *ptr2 = 10;
    
    cout << &*ptr << endl;
    cout << &*ptr2 << endl;
    cout << &a << endl;
    cout << a << endl;
*/  
    
};




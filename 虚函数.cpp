#include <iostream>
using namespace std;

class base1{
    public:
      virtual void display() const; 
};

void base1::display() const{
    cout<<"base1::display"<<endl;
}

class base2:public base1{
    public:
      void display() const;
};

void base2::display() const{
    cout<<"base2::display"<<endl;
}

class derived:public base2{
    public:
      void display() const;
};

void derived::display() const{
    cout<<"derived::display";
}

void fun(base1 *b){
    b->display();
}

int main(){
    base1 b1;
    base2 b2;
    derived de;
    fun(&b1);
    fun(&b2);
    fun(&de);
    return 0;
}

/*base1::display
base2::display
derived::display*/
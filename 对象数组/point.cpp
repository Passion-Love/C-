#include <iostream>
#include "point.h"
using namespace std;

point::point(){
    x=y=0;
    cout<<"default constructor called."<<endl;
}

point::point(int x,int y):x(x),y(y){
    cout<<"constructor called."<<endl;
}

point::~point(){
    cout<<"destructor called."<<endl;
}

void point::move(int newx,int newy){
    cout<<"moving the point to("<<newx<<", "<<newy<<")"<<endl;
    x=newx;
    y=newy;
}
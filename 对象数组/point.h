#ifndef _point_h
#define _point_h

class point{
    public:
    point();
    point(int x,int y);
    ~point();
    void move(int newx,int newy);
    int getx() const {return x;}
    int gety() const {return y;}
    static void showcount();
    private:
    int x,y;
};

#endif
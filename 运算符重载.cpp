/*设计一个钟表类Clock，具有hour、minute和second三个私有数据成员，具有相应的构造函数和设置时间的函数setTime和显示时间的
函数showTime。重载运算符”>”和”<”为成员函数，以实现比较两个钟表对象时间的大小（时间早的定义为小），请编写主函数进行测试。*/

#include <iostream>
using namespace std;

class clock{
    public:
      clock(int hour,int minute,int second){
          this->hour=hour;
          this->minute=minute;
          this->second=second;
      }
      void settime(int hour,int minute,int second){
          this->hour=hour;
          this->minute=minute;
          this->second=second;
      }
      void showtime(){
          cout<<hour<<":"<<minute<<":"<<second<<endl;
      }

      bool operator >(clock a){
          if(hour!=a.hour){
              return hour>a.hour;
          }
          else{
              if(minute!=a.minute){
                  return minute>a.minute;
              }
              else{
                   if(second!=a.second){
                      return second>a.second;
                   }
                   else{
                      return a.second>second; 
                   }
              }
          }
      }

      bool operator <(clock a){
          return !(*this>a);
      }
    private:
      int hour;
      int minute;
      int second; 
};

int main(){
    clock a(2,2,6);
    clock b(3,2,8);
    a.showtime();
    b.showtime();
    cout<<(a>b);
    return 0;
}
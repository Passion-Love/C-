//定义一个整形数集合类Set，请通过创建动态分配的整数数组（使用new运算符）存放整数值，且数组的大小要能够根据包含元素的个数动态的变化。
//集合中，元素的顺序无关紧要，每个元素至多出现一次。实现如下函数：(1) 构造函数创建一个空集；(2) 复制构造函数实现深复制；
//(3) add 函数向集合中插入一个整数； (4) 析构函数。在main函数中对上述函数进行测试。

#include <iostream>
using namespace std;

class set{
    public:
      set(int size=0){
          this->size=size;
          a=new int[size];
      }
      void ni(int i,int n){
        a[i]=n;
      }
      ~set(){};
      set(set &sx){
         size=sx.size;
         a=new int[size];
         for(int i=0;i<size;i++){
           a[i]=sx.a[i];
         }
      }
      set add(int n){
        set ns;
        ns.size=size+1;
        ns.a=new int[ns.size];
        for(int i=0;i<ns.size-1;i++){
          ns.a[i]=a[i];
        }
        ns.a[size]=n;
        delete[] a;
        return ns;
      }
      void show(){
        for(int i=0;i<size;i++){
          cout<<a[i]<<endl;
        }
      }
    private:
      int size;
      int *a;
};

int main(){
  set sx(4);
  sx.ni(0,0);
  sx.ni(1,1);
  sx.ni(2,2);
  sx.ni(3,3);
  set nx(sx);
  nx.show();
  nx=nx.add(4);
  nx.show();
  return 0;
}

/*0
1
2
3
0
1
2
3
4*/
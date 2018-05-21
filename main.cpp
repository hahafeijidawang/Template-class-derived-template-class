/*
模板类派生模板类
*/
#include <iostream>

using namespace std;

template <typename T>
class A
{
public:
    A(T a= 0) {

        this->a = a;

    }

    void printA(){

        cout<<"a:"<<a<<endl;

    }

protected:
    T a;
};

class B :public A<int>
{
public:
    B(int a=10,int b=20):A<int>(a){

        this->b = b;
    }
  void  printB(){

        cout<<"a:"<<a<<"b:"<<endl;

    }
private:
    int b;

};
void UseA(A<int> &a){

    a.printA();

}
//从模板类 派生模板类。
template <typename T>
class C:public A<T>
{
public:
    C(T c,T a):A<T>(a){

        this->c=c;

    }
 void printC(){

       cout<<"c:"<<c<<endl;

   }
 protected:

   T c;
};
int main()
{   int c=10;
    A<int> a1(c);//必须写类型<>
    a1.printA();
    UseA(a1);

    B b1(1,3);

    b1.printB();

    C<int> c1(1,3);
    c1.printC();


    return 0;
}



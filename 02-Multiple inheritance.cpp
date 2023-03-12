#include<iostream>
using namespace std;

class A{
    public:
    void show(){
    cout<<"My name is khushal !\n";
     }

};

class B {
public :
void show2(){
    cout<<"My name is Vishal !\n";
     }
};

class C:public A , public B{

};
int main (){


 C obj;
 obj.show();
 obj.show2();
    return 0;
}
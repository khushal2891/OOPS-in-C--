#include<iostream>
using namespace std;

class A{
    public:
    void show(){
    cout<<"My name is khushal !";
     }

};

class B :public A{

};


int main (){


 B obj;
 obj.show();
    return 0;
}
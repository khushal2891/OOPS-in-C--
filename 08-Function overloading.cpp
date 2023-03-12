#include<iostream>
using namespace std;
class book{
    public:
    void fun(){
        cout<<"I am a function with no argument!\n";
    }   
    void fun(int x){
        cout<<"I am a function with argument value! : "<<x<<endl;
    }
     void fun(double x){
        cout<<"I am a function with double argument value! : "<<x<<endl;
    }
};

int main(){

     book obj;
     obj.fun();
     obj.fun(3);
     obj.fun(6.3);

    return 0;
}
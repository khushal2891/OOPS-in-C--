#include<iostream>
using namespace std;

class con{
    public:

    con(){
        cout<<"constructor called";
    }
     void print(){
    cout<<"I am a function";
}

};
   

int main(){

     con c1;
     c1.print();


    return 0;
}
#include<iostream>
using namespace std;

class books{
     public:
     void setname(string x){
        name = x;
     }

     string getname(){
        return name;

     }

     private:
     string name;
     
};

int main (){

    books b1;
    b1.setname("khushal");
    b1.getname();
    cout<<b1.getname();

    return 0;

}
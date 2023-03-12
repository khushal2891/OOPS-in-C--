#include<iostream>
using namespace std;

class salary{

    private:
    // public: 
    int sal;
    
    friend int increment(salary s);

};

int increment(salary s){
    
    s.sal= s.sal+7000;
    return s.sal;

}

int main(){

    salary s;
     cout<<"Increment: \n";
     
    cout<<increment(s);

    return 0;
}
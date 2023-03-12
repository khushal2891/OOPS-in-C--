#include<iostream>
using namespace std;
class ok{
    public:
     ok(){

     }

    void oka(){
        cout<<"copy constructor called";

     }

};
int main(){

    ok obj;
    obj.oka();


    return 0;
}
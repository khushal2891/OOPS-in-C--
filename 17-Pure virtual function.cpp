#include<iostream>
using namespace std;
// Abstract class 
class shape{
    public :
    virtual void draw()=0;

};

class rectangle : shape{
    public:
    void draw(){
        cout<<"rectangle"<<endl;
    }

};

class square : shape{

    public:
    void draw(){
        cout<<"Square"<<endl;

    }
};
int main(){

    rectangle rec;
    square sq;
    rec.draw();
    sq.draw();
    
    return 0;
}
// without new keyword object store in stack memory 
// with new keyword object store in heap memory 


#include<iostream>
using namespace std;

class student{
         public:
         int roll;
        
         void setroll( int rn){
            roll=rn;
         }

        void showroll(){
            cout<<"Roll number is: "<<roll<<endl;
                }

};


int main(){

     student s1;
     student s2;
     s1.setroll(21);
     s1.showroll();

     s2.setroll(34);
     s2.showroll();

    student *bunty = new student();
    bunty->roll=100;
    bunty->showroll();

    return 0;
}
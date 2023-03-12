// // Over riding means= 
// // same function is present in parent class and base class 

// #include<iostream>
// using namespace std;
// class base{
//     public:
//     void msg(){

//         cout<<"base class";
//     }

// };

// class derived : public base{
//     public:
//     void msg(){

//         cout<<"derived class";
//     }
// };

// int main(){

//        derived c;
//        c.msg();

//     return 0;

// }


// now we want msg from base class

// Over riding means= 
// same function is present in parent class and base class 

#include<iostream>
using namespace std;
class base{
    public:
    void msg(){

        cout<<"base class";
    }

};

class derived : public base{
    public:
    void msg(){

        cout<<"derived class";
        base::msg();
    }
};

int main(){

       derived c;
       c.msg();

    return 0;

}
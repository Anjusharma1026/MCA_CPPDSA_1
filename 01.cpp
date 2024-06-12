#include<iostream>
using namespace std;

class Students{
    public:
    string name;//data members
    int age;
    int rollNumber;

    void printName(){
        cout<< name<<endl;
        cout<< age<<endl;
        cout<< rollNumber;
    }
};
int main(){
    Students s1;
    s1.name = "huyjni";
    s1.age = 23;
    s1.rollNumber = 70;
   
   s1.printName();

}


//when a class is define only specification for  the object is defined no memory allocated.
/*class Calculation{
    public:
    double length = 5;
    double height;
    double breadth;

    double calculateArea(){
        return length * breadth;

    }

};
int main(){
    Calculation c1;
    c1.length;

}*/
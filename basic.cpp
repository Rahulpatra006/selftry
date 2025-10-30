#include<iostream>
using namespace std;

class Complex{
    int a,b;
    friend Complex sumComplex(Complex o1, Complex o2);
    public:
    void setData(int a1, int b1){
        a = a1;
        b = b1;
    }
    void sumData(){
        cout<<"Your output is: "<<a<<"+"<<b<<"i"<<endl;
    }

};

Complex sumComplex(Complex o1, Complex o2){
    cout<<"Your output is: "<<(o1.a+o2.a)<<"+"<<(o1.b+o2.b)<<"i"<<endl;
}

int main(){
    cout<<"Hello World";

    Complex c1,c2,c3;
    c1.setData(1,3);
    c2.setData(4,5);
    c3 = sumComplex(c1,c2);
    return 0;
}
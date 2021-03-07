#include<iostream>
using namespace std;
int main()
{
    int a=4 , b=5;
    cout<<"operators"<<endl;
    cout<<"logical arithmetic and comparison"<<endl;
    cout<<"arithmetic:"<<endl;
    cout<<"sum of a and b is:"<<a+b<<endl;
    cout<<"subtraction of a and b is:"<<a-b<<endl;
    cout<<"product of a and b is:"<<a*b<<endl;
    cout<<"quotient of a and b is:"<<a/b<<endl;
    cout<<"modulus of a and b is:"<<a%b<<endl;
    cout<<"value of a++ is"<<a++<<endl;
    cout<<"value of a-- is"<<a--<<endl;
    cout<<"value of ++a is:"<<++a<<endl;
    cout<<"value of --a is"<<--a<<endl;
    
    
    
    cout<<"comparison:"<<endl;
    cout<<"is a > b :"<<(a>b)<<endl;
    cout<<"is a < b :"<<(a<b)<<endl;
    cout<<"is a == b :"<<(a==b)<<endl;
    cout<<"is a != b :"<<(a!=b)<<endl;
    cout<<"is a >= b :"<<(a>=b)<<endl;
    cout<<"is a <= b :"<<(a<=b)<<endl;

    
    cout<<"logical"<<endl;
    cout<<"is ((a==b)&&(a>b))"<<((a==b)&&(a>b))<<endl;
    cout<<"is ((a==b)||(a<b))"<<((a==b)||(a<b))<<endl;
    cout<<"is (!(a==b))"<<(!(a==b))<<endl;
    
    
}
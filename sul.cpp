#include"Trapzint.h"
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    myfunction f;
    myintegration tran(f);
    cout<<tran(0,2,0.001);
    cout<<"hello"<<endl;



    return 0;
}
#include"Trapzint.h"
#include<cmath>
double myfunction::operator()(double x)const
{
    return log(1.0+x)/(1.0+x*x);
    //return x;
}


double myintegration::operator()(double a,double b,double eps)const
{
    double t2n=0,tn=0;
    double dis=b-a;//wrong1
    int n=1;
    bool done=0;
    tn=dis*(f(a)+f(b))/2.0;
    do
    {
        //cout<<tn<<" ";
        /* code */
        double sum=0;
        //double x=a;
        for(int i=0;i<n;i++)
        {
            double x=a+(0.5+i)*dis;//wrong2
            sum+=f(x);
        }
        t2n=0.5*tn+sum*dis/2.0;
        if(fabs(t2n-tn)>=eps)
        {
            tn=t2n;//wrong3
            n=n*2;
            dis/=2.0;
        }
        else
        {
            done=1;
        }
    } while (!done);
    return t2n;

}
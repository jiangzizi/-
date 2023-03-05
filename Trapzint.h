//#ifndef TRAPZINT_H
//#define TRAPZINT_H
class function
{
    public:
        virtual double operator()(double x)const=0;
        virtual ~function(){};
};


class myfunction:public function
{
    public:
        virtual double operator()(double x)const;
       // ~myfunction(){};
};

class integration
{
    public:
        virtual double operator()(double a,double b,double eps)const =0;
        virtual ~integration(){};
};

class myintegration:public integration
{
    public:
        myintegration(const function &f):f(f){};
        virtual double operator()(double a,double b,double eps)const;
    private:
        const function &f;
};









//#endif
#include "Multi.h"

int main()
{
    Calc result;

    num = 5;
    denum = 10;

    std::cout<<calc(num,denum)<<std::endl;
    std::cout<<result.calcMult(num,denum)<<std::endl;

    return 0;
}

Calc::Calc(){
    std::cout<<"Object Dibuat"<<std::endl;
}

double calc(int num, int denum){
    return (double)num/denum;
}

double Calc::calcMult(int pemb, int peny){
    return (double)pemb * peny;
}
#include <iostream>
#include <cmath>

using namespace std;

int mul(int a, int b = 2)
{
    int result = a * b;

    return result;
}

int power(int a);
int power(int a, int b);

float squareRoot(int a)
{
    float result = sqrt(a);

    return result;
}

int main()
{

    int pow = power(2, 2);
    int sqrt = squareRoot(4);
    int pow2 = mul(5);
    int pow3 = power(2);

    cout << "power : " << pow << endl;
    cout << "sqrt : " << sqrt << endl;
    cout << "power 2 : " << pow2 << endl;
    cout << "power 3 : " << pow3 << endl;
}

int power(int a, int b)
{

    int result = a * b;

    return result;
}

int power(int a)
{
    int result = a * a * a;

    return result;
}
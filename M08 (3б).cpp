#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int get_angle(int a,int b,int c)
{
    // проверка на корректность значений аргументов (>0).
    if (a<=0 || b<=0 || c<=0 ){

        cout << "Error you entered incorrectly!";
        return 0;

}
    else {

    //  формула будет использоваться с  аrccos!
    float d,rad;
    int grad;

    d=((b*b)+(c*c)-(a*a))/(2*b*c); //РАСЧИТАЛИ УГОЛ В РАДИАНАХ
    rad=acos(d);
    grad=rad*180/3.14;
    return grad;
}
}

int main()
{
cout<< get_angle(5.,4.,3.);

    return 0;
}


#include <iostream>
#include <cmath>

using namespace std;

int ploshad(int a, int n){
//Формулу расчета площади многоугольника я использую по длине стороны
    int s;
    s=(n*(a*a))/(4 * tan(180/n));
    return s;

}

int main() {
cout << ploshad(4,6);

    return 0;
}

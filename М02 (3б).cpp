
#include <iostream>
#include <cmath>

using namespace std;

int ploshad(int a, int n){
    //Ôîðìóëó ðàñ÷åòà ïëîùàäè ìíîãîóãîëüíèêà ÿ èñïîëüçóþ ïî äëèíå ñòîðîíû
    int s;
    s=(n*(a*a))/(4 * tan((180*180/3.14)/n));
    return s;

}

int main() {
cout << ploshad(4,6);

    return 0;
}

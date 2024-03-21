#include <iostream>
using namespace std;
int reverse(){
    string s;
    s="Testing";
    for (int i = 6; i > -1; i--) {
        cout << s[i];
}
}
int main() {
    reverse();
    return 0;
}

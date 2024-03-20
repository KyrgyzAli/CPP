#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;

    int a,b,i;
    cout <<"first number ";
    cin >> a;
    cout <<"second number ";
    cin >> b;
    for (a;i!=b;i++){
        cout << (i+1)*3 << endl;
    }
    file.open("output.txt");
    file << (i+1)*3 << endl;
    file.close();
    cin.get();
    return 0;
}

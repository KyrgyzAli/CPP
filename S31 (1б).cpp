#include <iostream>
#include <string>
using namespace std;


int main(){
    setlocale(0,"Russian");
    int n;
    string numbers[10]={"����","����","���","���","������","����","�����","����","������","������"};
    cout <<"������� ����� �� 0 �� 9"<<::endl;
    cin >> n ;
    cout << numbers[n];


    return 0;
}

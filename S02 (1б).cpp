#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RU");
    int number=10;

    // ��������� ������� �� �������
    int ans=number % 8;
    cout << "Otvet ostatka:";
    cout << ans <<std::endl;
    cout << "";
    // ���������  �������
    int ans_2=number / 2 ;
    cout << ans_2;

    return 0;
}


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int size = 10;
    int arr[size] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    // ���������� �� �������� � �������������� ���������
    // ��� ��� ���������� ��������� � ��� ���� ����� ������
    sort(arr, arr + size,greater<int>());
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}

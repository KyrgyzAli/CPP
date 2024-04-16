// данный код я писал в онлайн с++ так как у меня code blocks не работает,по этому я не знаю запуститься он через code blocks 
#include <iostream>
using namespace std;

class Bucket
{
public:
    int c;
    int volume;
    int used;
    Bucket(int x, int y)
    {
        volume=x;
        used=y;
    }
    int flush()
    {
        used=used * 0;
        //cout << used;
    }
    int fill(int a)
    {
        if (a <= volume)
        {
            used=used +a;
            return 0;
        }
        else if (a > volume)
        {
            c=a - volume;
            c=c+used;
            used=volume;
          //  c=a - volume;
           // c=c+used;
            return c;
            //cout<<c;
        }
    }
};
int main()
{
    Bucket test_01(12, 3);
    cout << "1) " << test_01.volume << ", " << test_01.used << "\n"; // 12, 3
    int rest = test_01.fill(14);
    cout << "2) " << test_01.used << ", " << rest << "\n";  // 12, 5
    test_01.flush();
    rest = test_01.fill(8);
    cout << "3) " << test_01.used << ", " << rest << "\n";   // 8, 0
    return 0;
}

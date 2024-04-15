#include <iostream>
using namespace std;

class Bucket
{
public:
    int c;
    int volume=12;
    int used=0;
    int flush()
    {
        used=used * 0;
        cout << used << "litrov";
    }
    int ffill(int a){
        if (a<=volume)
        {
            used=used +a;
            //cout<<used;
            return 0;
        }
        else if (a>volume)
        {
            c=a - volume;
            cout<<c;// остаток литров
        }
    }
};
int main()
{
    Bucket vedro;
    cout<<vedro.ffill(12);

    return 0;
}

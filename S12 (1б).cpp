#include <iostream>

using namespace std;

int main(){
    int _count=0;
    for (int i = 1; i <1000 ; i+=4){
            if (i%7==0){
                _count+=i;
                //cout<<i<<endl<<"VSEGO::"<<_count<<endl;
            }

    }
    cout<<_count;
    return 0;
}

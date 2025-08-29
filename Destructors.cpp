//Destructors
#include <iostream>
using namespace std;
int count=0;

class destruct
{
    public:
    destruct()
    {
        count++;
        cout<<"Objects Created : "<<count<<endl;
    }
    ~destruct()
    {
        count--;
        cout<<"Objects Destroyed : "<<count<<endl;
    }
};

int main()
{
    destruct aa,bb,cc;
    {
        destruct dd;
    }
    return 0;
}

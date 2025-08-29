//parametrized constructors
#include <iostream>
using namespace std;
class construct{
    int a,b;
    public:
    construct(int m, int n){
        a=m;
        b=n;
    }
    void inputdata(){
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};
int main() {
   construct aa(m=5,n=10) ;
   aa.inputdata();
    return 0;
}

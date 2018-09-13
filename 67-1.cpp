#include <iostream>

using namespace std;

class Test
{
public:
    Test()
    {
    }
    virtual ~Test()
    {
    }
};


template <typename T>
char IsPtr(T* v);

int IsPtr(...);

#define ISPTR(p) (sizeof(char) == sizeof(IsPtr(p))? "Pointer":"Value")

int main()
{
    int i = 0;
    int *pi = &i;
    
    cout << ISPTR(i) << endl;
    cout << ISPTR(pi) << endl;


    Test t;
    Test *pt = &t;
    cout << ISPTR(t) << endl;
    cout << ISPTR(pt) << endl;

    return 0;
}


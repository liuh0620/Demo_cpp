#include <iostream>
#include "Array.h"
#include "HeapArray.h"

using namespace std;

int main()
{
    Array<int, 5> a;
    for(int i=0; i<5; ++i)
    {
        a[i] = i + 1;
        cout<<a[i]<<endl;
    }
    cout<<endl;

    Array<char, 5> ca;
    for(int i=0; i<5; ++i)
    {
        ca[i] = i + 'a';
        cout<<ca[i]<<endl;
    }
    /* ****************** HeapArray ******************** */
    cout<<endl;
    
    HeapArray<int>* ha = HeapArray<int>::NewInstance(7);
    if(ha != NULL)
    {
        HeapArray<int> array = ha->self();
        for(int i=0; i<7; i++)
        {
            array[i] = i + 1;
            cout<<array[i]<<endl;
        }
    }
    return 0;
}


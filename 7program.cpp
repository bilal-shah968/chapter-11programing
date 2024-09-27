#include <iostream>
using namespace std;
void get(int*);
void dbl(int*);
int main()
{
    int num;
    get(&num);
    cout<<"You entered "<<num<<endl;
    dbl(&num);
    cout<<"it's double is "<<num<<endl;
    getc;
      
    }
    void get(int*x)
    {
        cout<<"Enter an integer:";
        cin>>*x;
    }
    void dbl(int *y)
    {
      *y = *y * 2;

    }
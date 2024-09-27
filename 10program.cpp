#include <iostream>
using namespace std;
void get(int*, int);
int main()
{
    int n,j,*ptr;
    cout<<"Enter the length of array:";
    cin>>n;
    ptr = new int[n];
    get(ptr,n);
    cout<<"You entered the following values:\n";
    for(j=0; j<n; j++)
    cout<<*ptr++<<"\t";
    delete[] ptr;
    getc;
}
void get(int *p, int ls)
{
    int i;
    for(i=0; i<1; i++)
    {
        cout<<"Enter an integer:";
        cin>>*p++;
    }
}

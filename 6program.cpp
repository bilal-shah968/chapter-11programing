
 #include <iostream>
 using namespace std;
 int main()
 {
    int *ptr[3],a,b,c;
    int i;
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;
    cout<<"Enter three integers: "<<endl;
    cin>>a>>b>>c;
    cout<<"You entered the following values: \n";
    for(i=0; i<3; i++)
    cout<<*ptr[i]<<endl;
    return 0; 
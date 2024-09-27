#include <iostream>
using namespace std;

struct book
{
    char author[30];
    int pages;
    int prices;
};

int main()
{
    book rec, *ptr;
    ptr = &rec;

    cout << "Enter author name: ";
    cin.get(ptr->author, 30);

    cout << "Enter pages: ";
    cin >> ptr->pages;

    cout << "Enter price: ";
    cin >> ptr->prices;

    cout << "Author: " << ptr->author << endl;
    cout << "Pages: " << ptr->pages << endl;
    cout << "Price: " << ptr->prices << endl;
    return 0;
}

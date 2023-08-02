#include <stdio.h>
#include <windows.h>
#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

void showMenus()
{
    cout << "******************" << endl;
    cout << "**1.新建联系人22222**** " << endl;
    cout << "**2.????????**** " << endl;
    cout << "**3.????????**** " << endl;
    cout << "**4.?????????**** " << endl;
    cout << "**5.????????**** " << endl;
    cout << "**6.????????**** " << endl;
    cout << "**7.???????**** " << endl;
    cout << "******************" << endl;

}

struct Contact
{
    /* data */
    string name;
    string phone;
    int sex;//??? 1??? 2??
    int age;
    string address;
};

struct ContactBooks
{
    /* data */
    struct Contact contact[MAX];
    int size;
    
    
    
};



void printContactInfo(ContactBooks *cb,int index)
{
    cout << "??????"<< cb->contact[index].name << "/t";
    cout << "???"<< (cb->contact[index].sex==1?"??":"?") << "/t";
    cout << "????"<< cb->contact[index].age << "/t";
    cout << "?绰??"<< cb->contact[index].phone << "/t";
    cout << "????"<< cb->contact[index].address << "/t";


}


void assembleInfo(ContactBooks *cb,int index)
{
    cout << "?????????????"<< endl;
    string name;
    cin; name ;
    cin >> name;
    cb->contact[index].name=name;
}


void addContact(ContactBooks *cb){
    
    
    assembleInfo(cb,cb->size);
    
    cb->size++;
    cout << "????????"<< endl;
}









int main(){

    ContactBooks mContactBooks;
    mContactBooks.size=0;

    while (true)
    {
    showMenus();

    int selectNum=0;
    cin>>selectNum;
        switch (selectNum)
        {
        case 1:
            /* code */
            addContact(&mContactBooks);
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        
        default:
            break;
        }
    }
}
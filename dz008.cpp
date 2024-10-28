#include <iostream>
#include <string>
using namespace std;

class MyString 
{
    string data;
    static int objectCount; 
public:
    MyString(const string& str) : data(str) 
    {
        ++objectCount; 
    }

    ~MyString() 
    {
        --objectCount;  
    }

    static int getObjectCount() 
    {
        return objectCount;
    }
};

int MyString::objectCount = 0;

int main() 
{
    MyString str1("Hello");
    MyString str2("World");
    cout << "Numbers: " << MyString::getObjectCount() << endl;
    {
        MyString str3("People");
        cout << "Numbers: " << MyString::getObjectCount() << endl;
    }
    cout << "Numbers: " << MyString::getObjectCount() <<  endl;

}
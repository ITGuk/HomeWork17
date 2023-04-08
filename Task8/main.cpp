//Implement a function that replaces all occurrence of a substring
//in a string on another substring. For example, for the string "hello world",
//replacing the substring "llo" with "y" should return the string "hey world".


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string rec = "Hello World";
    string rec1 = "y";
    rec.replace(2, 3, rec1);
    cout << rec << endl;
}

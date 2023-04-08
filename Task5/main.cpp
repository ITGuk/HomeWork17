//Implement a function that converts a string into capitalized form.
//For example, the string "hello world" should be converted to the string "HELLO WORLD".
//The task can be implemented using the <string> library.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string rec = "hello world";
    cout << rec << endl;
    for(int i = 0; i < rec.length(); i++)
    {
        if(rec[i] > 96 and rec[i] < 123) //ASCII Code a = 97, z = 122
        {
            rec[i] -= 32;
        }
    }
    cout << rec << endl;
}

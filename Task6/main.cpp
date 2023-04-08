//Implement a function that finds the most repeated character in a string.
//For example, for string "hello world" the most repeated character is "l".

#include <iostream>

using namespace std;

int main()
{
    int cont = 0;
    int max = 0;
    char sym = 0;
    string rad = "Hello World";
    for(int i = 0; i < rad.length(); i++)
    {
        cont = 0;
        for(int j = 0; j < rad.length(); j++)
        {
            if(rad[i] == rad[j + 1])
            {
                cont++;
            }
            if (max < cont)
            {
                max = cont;
                sym = rad[i];
            }
        }
    }
    cout << "The most repeated symbol: " << "'" << sym << "'" << endl;
    cout << "Count: " << max << endl;
}

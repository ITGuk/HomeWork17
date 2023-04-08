//Implement a function that finds all unique characters in a string.
//For example, for the string "hello world", the unique characters are "he wrd".

#include <iostream>

using namespace std;

int main()
{
    int cont;
    string rad = "Hello World";
    for(int i = 0; i < rad.length(); i++)
    {
        cont = 0;
        for(int j = i; j < rad.length(); j++)
        {
            if(rad[i] == rad[j])
            {
                cont++;
                if(cont > 1)
                {
                    rad[j] = 0;//delete symvol
                }
            }
        }
        if (cont > 1)
        {
            rad[i] = 0;//delete symvol
        }
    }
    cout << rad << endl;
}

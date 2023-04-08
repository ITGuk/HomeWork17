//Write a function that checks whether an array is a palindrome
//(that is, whether it can be read from left to right and from
//right to left and get the same result).

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    int arr1[SIZE]{1, 2, 3, 3, 2, 1};
    int arr2[SIZE]{5, 4, 3, 2, 1, 8};
    int cont = 0;
    
    for(int i = 0, j = SIZE - 1; i < SIZE/2; i++, j--)
    {
        if (arr1[i] == arr1[j])
        {
            cont++;
        }
    }

    if(cont == 3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

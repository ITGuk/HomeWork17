//Check if one array contains all
//elements of another array and evaluate the complexity
//algorithm

#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    int arr_one[SIZE]{1, 2, 3, 4, 5};
    int arr_two[SIZE]{5, 4, 3, 2, 1};
    int arr_three[SIZE]{12, 44, 76, 88, 5};
    int count = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (arr_one[i] == arr_three[j])
            {
                count++;
            }
        }
    }
    
    if (count == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

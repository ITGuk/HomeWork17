//Write a function that removes duplicates in an array,
//truncates the array, and returns a new array with no duplicates.

#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 7;
    int arr_old[SIZE]{9, 4, 5, 9, 1, 2, 4};
    int* arr_new = new int [SIZE];
    int cont = 0;
    
    for(int i = 0;i < SIZE;i++)
    {
        for(int j = i + 1;j < SIZE;j++)
        {
            if (arr_old[i] == arr_old[j])
            {
                arr_old[i] = 0;
                cont++;
            }
        }
    }
    
    for(int i = 0, a = 0;i < SIZE;i++)
    {
        if(arr_old[i] != 0)
        {
            arr_new[a] = arr_old[i];
            a++;
        }
    }
        
    for(int i = 0;i < SIZE;i++)
    {
        cout << arr_old[i] << " ";
    }
    
    cout << endl;
    
    for(int i = 0;i < SIZE - cont;i++)
    {
        cout << arr_new[i] << " ";
    }
    
    cout << endl;
}

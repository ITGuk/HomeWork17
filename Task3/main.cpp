//Find the number of common elements in two arrays
//and estimate the complexity of the algorithm.

#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    int arr1[SIZE]{12, 45, 33, 2, 1};
    int arr2[SIZE]{35, 9, 5, 33, 45};
    int cont = 0;
    
    for(int i = 0;i < SIZE;i++)
    {
        for(int j = 0; j < SIZE;j++)
        {
            if(arr1[i] == arr2[j])
            {
                cont++;
            }
        }
    }
    cout << "Common elements: " << cont << endl;
}

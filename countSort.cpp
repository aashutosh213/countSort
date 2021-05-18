//Time complexity => O(n + maxELement) === "O(n)": liner time complexity with space proptional to maxElement
#include <bits/stdc++.h>

using namespace std;

void print(int arr[], int n)
{
    for (int i{0}; i < n; i++)
        cout << arr[i] << " | ";
    cout << endl;
}

void countSort(int arr[], int n)
{
    int max{0}, i{0}, j{0};
    int *c;
    max = *max_element(arr, arr + n);

    

    c = new int[max + 1]{0};

    // for(int k{0}; k<max+1;k++)
    //     c[k] = 0;
    
    

    

    for (int k{0}; k < n; k++)
        c[arr[k]] = c[arr[k]] +1;

    


    while (i < max + 1 && j<n)
    {
       
        if (c[i] > 0)
        {
            arr[j++] = i;
            c[i]--;
        }
        else
        {
            i++;
        }
    }


     delete [] c;
}

int main()
{
    int arr[]{7,2,1,3,7,5,4,8,7,1,2,5,8,7,2,5,4,2,3,9,6,4,5,9,8,1,3,2,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << " =======================================" << endl;

    print(arr, n);

    countSort(arr, n);

    cout << " =======================================" << endl;

    print(arr, n);

    return 0;
}
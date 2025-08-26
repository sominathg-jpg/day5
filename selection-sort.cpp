#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> a = {64, 34, 25, 5, 22, 11, 90, 12};

    // implementaton of the sorting using selection sort
    int j, i;
    for (i = 0; i < a.size() - 1; i++)
    {

        int min = i;
        for (j = i + 1; j < a.size(); j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for (int i = 0; i < a.size(); i++)
    {

        cout << a[i] << endl;
    }
    return 0;
}
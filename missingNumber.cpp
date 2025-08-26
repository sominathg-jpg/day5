#include <iostream>
#include "vector"
using namespace std;

int missing(vector<int> a)
{

    int largest = a[0];
    for (int i = 0; i < a.size(); i++)
    {
        if (largest < a[i])
            largest = a[i];
    }

    int n = a.size(); // array has n numbers, range is 0..n
    int expectedSum = n * (n + 1) / 2;
    int arraysum = 0;
    for (int k = 0; k <= a.size(); k++)
    {
        arraysum += a[k];
    }
    cout << expectedSum - arraysum; return expectedSum - arraysum;
}
int main()
{
    // nums = [2,7,11,15], target = 9
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    missing(nums);
    return 0;
}
#include <iostream>
#include "vector"
using namespace std;

vector<int> twosum(vector<int> a, int target)
{

    vector<int> output = {};

    for (int i = 0; i < a.size(); i++)
    {

        int results = target - a[i];
        // cout << results;
        for (int j = i+1; j < a.size(); j++)
        {
            if (a[j] == results)
            {
               output.push_back(i);
               output.push_back(j);
            }
        }
    }

    return output;
}
int main()
{
    // nums = [2,7,11,15], target = 9
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> output = twosum(nums, target);

    for (int i = 0; i < output.size(); i++)
    {

        cout << output[i] << " ";
    }

    return 0;
}
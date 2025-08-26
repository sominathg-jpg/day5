#include <iostream>
#include <vector>
using namespace std;

void printarray(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}

vector<int> reverce(vector<int> a)
{
    vector<int> rvs = {};
    for (int i = a.size()-1; i >= 0; i--)
    {
        rvs.push_back(a[i]);
    }
    return rvs;
}
int main()
{

    vector<int> a = {5, 3, 4, 1};
    vector<int> result = reverce(a);
    printarray(result);
     return 0;
}
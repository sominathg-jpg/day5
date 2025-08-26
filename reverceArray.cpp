#include <iostream>
#include "vector"

using namespace std;

vector<int> reverce_array(vector<int> a)
{

    vector<int> rvs = {};
    for (int i = a.size()-1; i >=0 ; i--)
    {

        rvs.push_back(a[i]);
    }

    return rvs;
}
int main()
{

    vector<int> a = {5, 3, 4, 1};

    vector<int> rv = reverce_array(a);

    for (int i = 0; i < rv.size(); i++)
    {

        cout << rv[i] << " ";
    }
    return 0;
}
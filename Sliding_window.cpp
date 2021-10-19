// Find duplicates within a range `k` in an array

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
bool hasDuplicate(vector<int> &input, int k)
{
    // stores (element, index) pairs as (key, value) pairs
    unordered_map<int, int> map;
 
    // traverse the vector
    for (int i = 0; i < input.size(); i++)
    {
        // if the current element already exists in the map
        if (map.find(input[i]) != map.end())
        {
            // return true if the current element repeats within range of `k`
            if (i - map[input[i]] <= k) {
                return true;
            }
        }
 
        // store elements along with their indices
        map[input[i]] = i;
    }
 
    // we reach here when no element repeats within range `k`
    return false;
}
 
int main()
{
    vector<int> input = { 5, 6, 8, 2, 4, 6, 9 };
    int k = 4;
 
    if (hasDuplicate(input, k)) {
        cout << "Duplicates found";
    }
    else {
        cout << "No duplicates were found";
    }
 
    return 0;
}
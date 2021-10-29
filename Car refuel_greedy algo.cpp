#include <iostream>
#include <vector>

using namespace std;

int compute_min_refills(int dist, int tank, vector<int> &stops)
{
    int numref = 0, curref = 0, lastref;
    while (curref < stops.size() - 1)
    {   lastref = curref;
        if (tank >= dist)
            return 0;
        while (curref < stops.size() - 1 && stops[curref + 1] - stops[lastref] <= tank)
          curref += 1;
          if (lastref == curref)
            {
             return -1;
             break;
            }
          if (curref < stops.size() - 1) 
             numref += 1;     
    }
    return numref;
}

int main() 
{
    int d, m, n;
    cin >> d >> m >> n;

    vector<int> stops(n + 1);
    stops[0] = 0;
    for (int i = 1; i < n + 1; i++)
        cin >> stops.at(i);
    stops.push_back(d);
    cout << compute_min_refills(d, m, stops) << "\n";
    //for (int i = 0; i < n + 2; i++)
        //cout << stops.size() << endl;
        //cout << stops[0] << stops[1] << stops[2] << stops[3] << stops[4] << stops [5];
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, faces = 0;
    cin>>n;
    string a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == "Tetrahedron")
            faces += 4;
        if (a == "Cube")
            faces += 6;
        if (a == "Octahedron")
            faces += 8;
        if (a == "Dodecahedron")
            faces += 12;
        if (a == "Icosahedron")
            faces += 20;
    }
    cout<<faces;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    enum polyhedrons
    {
        Tetrahedron = 4,
        Cube = 6,
        Octahedron = 8,
        Dodecahedron = 12,
        Icosahedron = 20
    };
    int n, cnt = 0;
    string chr;
    cin >> n;
    while (n)
    {
        cin >> chr;
        if (chr == "Tetrahedron")
            cnt += polyhedrons::Tetrahedron;
        else if (chr == "Cube")
            cnt += polyhedrons::Cube;
        else if (chr == "Octahedron")
            cnt += polyhedrons::Octahedron;
        else if (chr == "Dodecahedron")
            cnt += polyhedrons::Dodecahedron;
        else if (chr == "Icosahedron")
            cnt += polyhedrons::Icosahedron;
        n--;
    }
    cout << cnt << endl;
    return 0;
}
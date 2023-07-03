// You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

// **Example 1**
#include <bits/stdc++.h>
using namespace std;
bool checkStraightLine(vector<vector<int>> &c)
{
    int x1 = c[0][0];
    int y1 = c[0][1];
    int x2 = c[1][0];
    int y2 = c[1][1];
    for (int i = 2; i < c.size(); i++)
    {
        int curx = c[i][0];
        int cury = c[i][1];
        if ((curx - x1) * (y2 - y1) != (cury - y1) * (x2 - x1))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<vector<int>> temp = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    bool ans = checkStraightLine(temp);
    cout << ans;
}
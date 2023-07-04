#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;

    char arr[r+1][c+1];
    //  if i=1 and i<=a ,then 3*3 matrix will  be 4*4 then it will help.
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x, y;
    cin >> x >> y;

    // [x - 1][y - 1]   [x - 1][y]      [x - 1][y + 1]
    // [x][y - 1]       [x][y]          [x][y + 1]
    // [x + 1][y - 1]   [x + 1][y]      [x + 1][y + 1]

    if (arr[x - 1][y - 1]  != '.' && arr[x - 1][y] != '.' && arr[x - 1][y + 1]  != '.'&&
        arr[x][y - 1] != '.' && arr[x][y + 1] != '.' &&
        arr[x + 1][y - 1] != '.' && arr[x + 1][y] != '.' && arr[x + 1][y + 1] != '.' )
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}

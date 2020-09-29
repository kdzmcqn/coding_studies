#include <iostream>
#include <vector>
using namespace std;

/* Head ends here */
void nextMove(int m, vector<string> grid)
{
    int x, y, posx, posy, f = 0;
    posx = m / 2;
    posy = m / 2;
    if (grid[0][0] == 'p')
    {
        x = 0;
        y = 0;
    }
    if (grid[0][m - 1] == 'p')
    {
        x = 0;
        y = m - 1;
    }
    if (grid[m - 1][0] == 'p')
    {
        x = m - 1;
        y = 0;
    }
    if (grid[m - 1][m - 1] == 'p')
    {
        x = m - 1;
        y = m - 1;
    }
    while ((x != posx) || (y != posy))
    {
        if (y > posy)
        {
            posy += 1;
            cout << "RIGHT\n";
        }
        else if (y < posy)
        {
            posy -= 1;
            cout << "LEFT\n";
        }
        else if (x < posx)
        {
            posx -= 1;
            cout << "UP\n";
        }
        else
        {
            posx += 1;
            cout << "DOWN\n";
        }
    }
}
/* Tail starts here */
int main()
{

    int m;
    vector<string> grid;

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        grid.push_back(s);
    }

    nextMove(m, grid);

    return 0;
}
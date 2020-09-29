#include <iostream>
#include <vector>
using namespace std;
void find(int &mx, int &my, int &px, int &py, vector<string> grid, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((grid[i][j] != '-') && (grid[i][j] != 'p'))
            {
                mx = i;
                my = j;
            }
            if (grid[i][j] == 'p')
            {
                px = i;
                py = j;
            }
        }
    }
}

/* Head ends here */
void nextMove(int m, vector<string> grid)
{
    //your logic here
    int m_x = 0, m_y = 0, p_x = 0, p_y = 0, x, y;
    find(m_x, m_y, p_x, p_y, grid, m);
    x = m_x - p_x;
    y = m_y - p_y;

    m_x = 1;
    m_y = 1;

    if (x < 0)
    {
        m_x = 0;
        x = x * -1;
    }
    if (y < 0)
    {
        m_y = 0;
        y = y * -1;
    }

    for (int sa = 0; sa < x; sa++)
    {
        if (m_x == 0)
        {
            cout << "DOWN" << endl;
        }
        else
        {
            cout << "UP" << endl;
        }
    }
    for (int ss = 0; ss < x; ss++)
    {
        if (m_y == 0)
        {
            cout << "RIGHT" << endl;
        }
        else
        {
            cout << "LEFT" << endl;
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
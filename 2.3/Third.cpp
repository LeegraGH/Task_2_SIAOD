//«адано множество точек на плоскости.
//Ќайти все четверки точек, €вл€ющихс€ вершинами квадратов.
//Ќайти квадрат, внутри которого лежит наибольшее количество точек множества.

#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

const int Rows = 3;
const int Cols = 2;

void inputKB(vector <vector <int>>& plenty, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int h;
            cin >> h;
            plenty[i].push_back(h);
        }
    }
}

void inputR(vector <vector <int>>& plenty, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            plenty[i].push_back(rand() % 21 - 10);
        }
    }
}

void output(vector <vector <int>>& plenty, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << plenty[i][j] << " ";
        }
        cout << endl;
    }
}



int main()
{
    srand(time(NULL));
    vector <vector <int>> plenty;
    inputKB(plenty, Rows, Cols);
    //cout << endl;
    output(plenty, Rows, Cols);
    //cout << endl;
    inputR(plenty, Rows, Cols);
    //cout << endl;
    output(plenty, Rows, Cols);
    return 0;
}

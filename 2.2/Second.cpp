//Дано множество точек на плоскости, точки заданы своими координатами. Найти наибольшее расстояние между этими точками.

#include <iostream>
#include <ctime>

using namespace std;

void inputKB(int**& plenty, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int h;
            cin >> h;
            plenty[i][j] = h;
        }
    }
}

void inputR(int**& plenty, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            plenty[i][j] = rand() % 21 - 10;
        }
    }
}

void output(int**& plenty, int r, int c)
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

double dist(int**& plenty, int r, int c)
{
    double maximum = 0;
    for (int i = 0; i < r - 1; i++)
    {
        for (int j = 1; j < r; j++)
        {
            double way = sqrt(pow(plenty[i][0] - plenty[j][0], 2) + pow(plenty[i][1] - plenty[j][1], 2));
            if (way > maximum) maximum = way;
        }
    }
    return maximum;
}

int main()
{
    srand(time(NULL));
    int Rows, Cols = 2;
    cin >> Rows;
    int** plenty = new int* [Rows];
    for (int i = 0; i < Rows; i++)
    {
        plenty[i] = new int[Cols];
    }
    inputKB(plenty, Rows, Cols);
    cout << endl;
    output(plenty, Rows, Cols);
    cout << endl;
    inputR(plenty, Rows, Cols);
    cout << endl;
    output(plenty, Rows, Cols);
    cout << endl;
    cout << dist(plenty, Rows, Cols);
    for (int i = 0; i < Rows; i++)
    {
        delete[]plenty[i];
    }
    return 0;
}

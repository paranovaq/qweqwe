c#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    COORD c;
    HANDLE hnd = GetStdHandle(STD_OUTPUT_HANDLE);
    float A[10][10], B[10][10];
    int i, j, n;
ya sosu clen
    // Ââîä èñõîäíûõ äàííûõ
    cout << "Input the size of the matrix n" << endl;
    cin >> n;
    cout << "Input matrix À" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c.X = 5 + j * 5;
            c.Y = 3 + i;
            SetConsoleCursorPosition(hnd, c);
            cin >> A[i][j];
        }
    }

    // Îáðàáîòêà äàííûõ
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] < 0)
            {
                B[i][j] = 2 * A[i][j];
            }
            else
            {
                B[i][j] = A[i][j];

            }
        }
    }

    // Âûâîä ðåçóëüòàòà
    cout << "Matrix B" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c.X = 5 + j * 5;
            c.Y = 7 + i;
            SetConsoleCursorPosition(hnd, c);
            cout << B[i][j];
        }
    }

    return 0;
}


#include <iostream>
using namespace std;
int main()

{
    // input 1

    int n, sum = 0;
    cout << "Number of Students : ";
    cin >> n;

    // intput 2

    int students[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << " = ";
        cin >> students[i];
        sum = sum + students[i];
    }

    // output 1

    cout << "Total Marks -" << sum << endl;

    float avg = (float)sum / n;

    cout << "Average Marks - " << avg << endl;

    // output 2

    int max = students[0];
    int min = students[0];

    for (int i = 1; i < n; i++)
    {
        if (max < students[i])
        {

            max = students[i];
        }

        if (min > students[i])
        {

            min = students[i];
        }
    }

    cout << "Maximun Marks - " << max << endl;
    cout << "Minmum Marks - " << min << endl;

    return 0;
}
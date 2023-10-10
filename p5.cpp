#include <iostream>
using namespace std;

int main()
{
    int totalDays, years, months, days;
    cin >> totalDays;
    y = totalDays / 365;
    m = (totalDays % 365) / 30;
    d = (totalDays % 365) % 30;
    cout << years << endl;
    cout << months << endl;
    cout << days << endl;

    return 0;
}
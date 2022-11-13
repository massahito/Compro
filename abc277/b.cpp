#include <iostream>
using namespace std;


int main()
{
    int N;
    int i;
    static int ans[10000];
    char str[3];

    cin >> N;
    i = 0;
    while (i < N)
    {
        cin >> str;
        if(str[0] != 'H' && str[0] != 'D' && str[0] != 'C' && str[0] != 'S')
            break;
        if(str[1] != 'A' && (str[1] < '2' && 9 <= str[1]) && str[1] != 'T' && str[1] != 'J' && str[1] != 'Q' && str[1] != 'K')
            break;
        if(ans[str[0] * 100 + str[1]])
            break;
        ans[str[0] * 100 + str[1]] = 1;
        i++;
    }
    if(i == N)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
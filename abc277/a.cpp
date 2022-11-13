#include <iostream>
using namespace std;

int main()
{
    int N, X;
    int i, tmp;;

    cin >> N >> X;
    i = 0;
    while (i < N)
    {
        cin >> tmp;
        if(tmp == X)
            break;
        i++;
    }
    cout << i + 1 << endl;
}
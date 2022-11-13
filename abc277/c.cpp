#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int bfs(vector<int> *lst, queue<int> que, int *done, int max);
int main()
{
    int a, b, N;
    int max;
    vector<int> lst[1000000010];
    static int done[1000000010];
    queue<int> que;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        lst[a].push_back(b);
        lst[b].push_back(a);  
    }
    que.push(1);
    max = bfs(lst, que, done, 1);
    cout << max << endl;
}

int bfs(vector<int> *lst, queue<int> que, int *done, int max)
{
    int index;

    if(que.empty())
        return (max);
    index = que.front();
    que.pop();
    for(auto x : lst[index])
    {
        if(done[x] == 1)
            continue;
        if(max < x)
            max = x;
        que.push(x);
    }
    done[index] = 1;
    max = bfs(lst, que, done, max);
    return (max);
}
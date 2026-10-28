#include<iostream>
using namespace std;
int G[20][20], visited[20],n;
void DFS(int i)
{
    int j;
    cout<<i<<"";
    visited[i]=1;
    for(j=1;j<n;j++)
    {
        if(!visited[j] && G[i][j]==1)
        {
            DFS(j);
        }
    }
}
int main()
{
    int i,j;
    cout<<"\nEnter number of vertices:";
    cin>>n;
    cout<<"\nEnter adjacency matrix:\n";
    for(i=1;i<n;i++)
        for(j=1;j<n;j++)
            cin>>G[i][j];
    for(i=0;i<n;i++)
        visited[i]=0;
    cout<<"\nDFS starting from vertex 1:\n";
    DFS(0);
    return 0;
}

//Output:
PS D:\YashRathi> g++ vertices.cpp
PS D:\YashRathi> ./vertices

Enter number of vertices:4

Enter adjacency matrix:
0 1 1 1
0 0 0 1
0 0 0 1

DFS starting from vertex 1:
0
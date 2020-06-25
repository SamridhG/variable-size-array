#include<iostream>
#include<vector>
using namespace std;
int main()
{
int A,B;
cin>>A>>B;
vector<int>V[A];

int C,i,j;
for(i=0;i<A;i++)
{
    cin>>C;
    for(j=0;j<C;j++)
    {
        int r;
        cin>>r;
        V[i].push_back(r);
    }
   
 
}
int W,R;
for(i=0;i<B;i++)
{
    cin>>W>>R;
    cout<<V[W][R]<<endl;
}
}

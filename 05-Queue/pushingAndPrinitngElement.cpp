#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
   { queue<int>q;
    for(int i=1;i<=5;i++)
    { q.push(i);
    }
       queue<int>temp=q;
    
    while(!temp.empty())
    { cout<<temp.front()<<endl;
    temp.pop();
    }
     return 0;
}
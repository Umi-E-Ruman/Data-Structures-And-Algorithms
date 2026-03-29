#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
   { queue<int>q;
    for(int i=1;i<=5;i++)
    { q.push(i);
    }
      stack<int>s;
      while(!q.empty())
      { s.push(q.front());
      q.pop();
      }
      while(!s.empty())
      {cout<<s.top()<<endl;
      s.pop();
          
      }
      
     return 0;
}
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main() {
    queue<int> q;
    stack<int> s;
    int n;
    
    cout << "Enter the number you want the binary till: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int num = i;
        
 
        while(num > 0) {
            int remainder = num % 2;
            q.push(remainder);
            num = num / 2;
        }
        
   
        while(!q.empty()) {
            s.push(q.front());
            q.pop();
        }
        
     
        while(!s.empty()) {
            cout << s.top();
            s.pop();
        }
        
      
        if(i < n) {
            cout << ", ";
        }
    }
    
    cout << endl;
    return 0;
}
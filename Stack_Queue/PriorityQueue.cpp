#include<iostream>
#include<queue>
using namespace std;

// Priority Queue by default maxheap hota hai.

int main(){
    
    // maxheap
    priority_queue<int > pq;

    pq.push(12);
    pq.push(16);
    pq.push(20);

    cout<<" top element is "<<pq.top()<<endl;
    pq.pop();
    cout<<" top element is "<<pq.top()<<endl;

    // minheap
     
    priority_queue<int, vector<int>, greater<int> > minheap;

   minheap.push(12);
    minheap.push(16);
   minheap.push(20);

    cout<<" top element is "<<minheap.top()<<endl;
   minheap.pop();
    cout<<" top element is "<<minheap.top()<<endl;
    
    return 0;
}
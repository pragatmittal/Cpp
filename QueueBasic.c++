#include<iostream>
#include<deque>
#include <queue>
#include<algorithm>

using namespace std;
int main()
{
    
    queue<int>q;
    q.push(11);
    cout<<"queue front is"<<q.front()<<endl;
    cout<<"queue rear is"<<q.back()<<endl;
    q.push(13);
        cout<<"queue front is"<<q.front()<<endl;
    cout<<"queue rear is"<<q.back()<<endl;

    q.push(15);
        cout<<"queue front is"<<q.front()<<endl;
    cout<<"queue rear is"<<q.back()<<endl;

    q.push(17);
        cout<<"queue front is"<<q.front()<<endl;
    cout<<"queue rear is"<<q.back()<<endl;


    cout<<"the size of the queue is "<<q.size()<<endl;

    q.pop();
    cout<<"the size of the queue is "<<q.size()<<endl;

    return 0;
}
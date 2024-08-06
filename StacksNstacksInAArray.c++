#include <iostream>
#include <vector>
#include <climits>
#include <stack>


int main(){
	int n = 9;
	int k = 3;
	vector<int>arr(n);
	int t1 = -1 ,t2=2,t3=5;
	int b1=t1+3,b2=t2+3,b3=t3+3;
	//Suppose we are pushing element 11 in stack 0
	push(11,0,t1,t2,t3,b1,b2,b3,arr);
	push(13,0,t1,t2,t3,b1,b2,b3,arr);
	cout<<"Element popoed from the stack "<<pop(0,arr,t1,t2,t3);
	return 0;
}
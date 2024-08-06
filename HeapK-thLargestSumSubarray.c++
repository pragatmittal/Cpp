#include<queue>
int getKthLargest(vector<int> &arr, int k)
{
	priority_queue<int,vector<int>,greater<int>>miniheap;
	int n =arr.size();
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			if(miniheap.size()<k)
				miniheap.push(sum);
			else{
				if(sum>miniheap.top()){
					miniheap.pop();
					miniheap.push(sum);

				}
				
			}
		}
	}
	return miniheap.top();
	//	Write your code here.
}
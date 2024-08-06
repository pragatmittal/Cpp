int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {

    // Write Your Code Here

    int n = arr.size();

    int sum = 0, cnt = 0, cur = 0, prev = 0;

    

    for(int i = 0; i < n; i++){

        sum += arr[i];

        while(prev <= cur && sum > k){

            sum -= arr[prev];

            prev++;

        }

        if(sum == k) cnt++;

        cur++;

    }

    return cnt;

}

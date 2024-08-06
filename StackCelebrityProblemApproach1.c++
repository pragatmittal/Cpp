#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    #include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) {
    int Celebrity=-1;
    for(int i=0;i<n;i++){
        bool knowtoany=false;
        bool knowntoall=true;

    
    for( int j=0;j<n;j++){
        if(knows(i,j)){
            knowtoany=true;
            break;
        }
    }
    for (int j = 0; j < n; j++) {
        if(i!=j and !knows(j,i)){
            knowntoall=false;
            break;
        }
    }

    if (!knowtoany && knowntoall) {
        Celebrity = i;
        break;
    }

}
    return Celebrity;
        // Write your code here.
}

    return 0;
}
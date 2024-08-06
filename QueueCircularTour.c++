#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;
struct PetrolPump {
    int petrol; // Petrol available at the pump
    int distance; // Distance to the next pump
};
int firstCircularTour(vector<int>& petrol, vector<int>& distance, int N) {
    int start = 0; // Starting point of the tour
    int end = 1; // Next pump to consider

    int curr_petrol = petrol[start] - distance[start]; // Petrol available at the starting pump

    // Loop until all pumps are not visited and we have reached the first pump again with 0 or more petrol
    while (end != start || curr_petrol < 0) {
        // If current amount of petrol in truck becomes less than 0, then remove the starting petrol pump from tour
        while (curr_petrol < 0 && start != end) {
            // Remove starting petrol pump and update the current petrol amount
            curr_petrol -= petrol[start] - distance[start];
            start = (start + 1) % N; // Move to the next pump
            // If we have reached the initial start again, it means there's no possible solution
            if (start == 0) 
                return -1;
        }

        // Add petrol from the next pump to the current tour
        curr_petrol += petrol[end] - distance[end];
        end = (end + 1) % N; // Move to the next pump
    }

    // Return the starting point of the circular tour
    return start;
}
int main()
{

    return 0;
} 



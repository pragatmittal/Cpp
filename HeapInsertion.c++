#include<iostream>
using namespace std;

class heap{
public:
    int arr[1000];
    int size = 0;

    void insert(int val){
        size += 1;
        int index = size;
        arr[index] = val;
        while(index > 1){
            int parent = index / 2;
            if (arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i = 1; i <= size; ++i){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    heap h;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        h.insert(x);
    }
    cout << "Heap elements: ";
    h.print();
    return 0;
}

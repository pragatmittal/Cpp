#include <bits/stdc++.h> 

class Queue {

    int arr[100000];

    int qfront;

    int rear;

public:

    Queue() {

        qfront =0;

        rear=0;

    }

 

    /*----------------- Public Functions of Queue -----------------*/

 

    bool isEmpty() {

        if(qfront==rear){

            return true;

        }

        else{

            return false;

        }

    }

 

    void enqueue(int data) {

        if(rear==100000){

            return;

        }

        else{

            arr[rear++]=data;

        }

    }

 

    int dequeue() {

        if(isEmpty()){

            return -1;

        }

        else{

            int ans=arr[qfront];

            arr[qfront++]=-1;

            if(isEmpty()){

                qfront=0;

                rear=0;

            }

            return ans;

        }

    }

 

    int front() {

        if(isEmpty()){

            return -1;

        }

        else{

            return arr[qfront];

        }

    }

};

#include <string>
#include<vector>
using namespace std;

 

class myHashMap 

{

    public:

    vector<pair<string,int>>v;

 

    myHashMap() 

    {

        // Write your code here.

        //cout<<"hello";

        

    }

 

    void insert(string key, int value) 

    {

        // Write your code here.

        

        for(auto i:v){

            if(i.first==key){

                i.second=value;

                return;

            }

        }

        

            v.push_back({key,value});

        

    }

 

    bool search(string key) 

    {

        for(auto i:v){

            if(i.first==key)return true;

        }

        return false;

        // Write your code here.

    }

 

    int get(string key) 

    {

        for(auto i:v){

            if(i.first==key) return i.second;

        }

        return -1;

        // Write your code here.

    }

 

   void remove(string key) 

{

    for (auto it = v.begin(); it != v.end(); ++it) {

        if (it->first == key) {

            v.erase(it);

            return;

        }

    }

}

 

    int getSize() 

    {

        return v.size();

        // Write your code here.

    }

 

    bool isEmpty() 

    { 

        return v.empty();

        // Write your code here.

    }

};
#include<iostream>
#include<cstring>
// #include"OopsHero.c++"
#include<algorithm>

using namespace std;

// class hero{
//     char name[100];
//     public:
//     int health;
//     char level;

// }; 
class Paul{
    //properties
    public:
    char name[100];
    int health;
    char level;
};
int main()
{
    Paul payal;
    payal.health=70;
    strcpy(payal.name,"Pragat");
    // payal.health=70;

    cout<<"name is "<<payal.name<<endl;
    cout<<"Health is "<<payal.health<<endl;
    cout<<"Size of "<<sizeof(payal)<<endl;
//     hero h1;
//     h1.health = 100;  // Initialize health
//     h1.level = 'A'; 
//     cout<<"the hero of h1 is "<<sizeof(h1)<<"bytes"<<endl;
//     cout<<"the health of h1 is "<<h1.health<<endl;
//     cout<<"the health of h1 is "<<h1.level<<endl;
    return 0;
}

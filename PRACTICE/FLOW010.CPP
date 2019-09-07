

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    char ch;
    while(t--){
        cin>>ch;
        if(ch=='b'|| ch=='B'){
            cout<<"BattleShip"<<endl;
        }
         if(ch=='c'|| ch=='C'){
            cout<<"Cruiser"<<endl;
        }
         if(ch=='d'|| ch=='D'){
            cout<<"Destroyer"<<endl;
        }
         if(ch=='f'|| ch=='F'){
            cout<<"Frigate"<<endl;
        }
    }

    return 0;
}

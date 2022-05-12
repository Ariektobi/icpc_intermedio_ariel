#include <iostream>
//asd
#include <vector>
#include <algorithm>

using namespace std;
//memoria mas grande 
int main(){
    vector<pair<int,string>> posiciones;
    
    posiciones.push_back(make_pair(456,"Ignacio Illanes"));
    posiciones.push_back(make_pair(123,"Sebas Selmante"));
    posiciones.push_back(make_pair(1234,"RAdomir Vla"));
    sort(posiciones.begin(),posiciones.end());
    //sort(reverse(posiciones.begin()),reverse(posiciones.end()));
    
    for(pair<int,string> p:posiciones){//auto
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    return 0;
}
#include <iostream>
//pair stdlib algorithm
using namespace std;

int main(){
    pair<int, string> par;//declaracion del pair
    par=make_pair(1,"Ariel");
    //par=make_pair(2,"Andres");
    
    par.first=1;
    par.second="Ariel";
    
    cout<<"llave: "<< par.first<<endl<<"valor: "<<par.second<<endl;

    return 0;
}
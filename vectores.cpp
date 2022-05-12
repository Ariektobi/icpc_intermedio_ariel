#include <iostream>
#  include <vector>//libreria que nos deja usar vectores
#include <algorithm>

using namespace std;


int main(){
    vector<int>enteros;//inicializacion de vector       mejor este
    //vector<int>enteros2(4);// == int enteros2[4]; solo que este es estatico 
    
//    enteros.push_back(1);//list.append
    //arraylist.append
    //enteros.push_front(2);//a[0]=valor
    
/*    for(int i=0; i<2;i++){
        cout<< enteros[i]<<" ";
    }
    cout<<endl;*/
    /*for(int i=0; i<100;i++){
        enteros.push_back(i);
    }
    /*    vector<int>::iterator it;
for(it= enteros.begin();it!=enteros.end();it++){
        //[1,2,3,4,5]
        cout<<*it<<endl;
    }*/
    /*for(auto entero;enteros){ // auto c++11  c++ 17
        cout<<entero<<" ";
    }*/

vector<int> numeros;
numeros.push_back(5);
numeros.push_back(3);
numeros.push_back(11);
numeros.push_back(7);

sort(numeros.begin(),numeros.end());//ordenamiento ascendente

sort(numeros.rbegin(),numeros.rend());//ordenamiento desendente

//reverse(numeros.begin(),numeros.end());
for(int numero:numeros){
    cout<<numero<<" ";
}
cout<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
        cin >> n;
            if (n > 2 &&  n <=100){
                if (n % 2 ==0 ){
                cout << "Yes";
                }else{
                cout << "No";
                } 
            }else{
                cout << "No";
            }       
}
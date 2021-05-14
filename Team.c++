#include <bits/stdc++.h>

using namespace std;

int main(){
    //count solvable prob
    int count=0;
    //No of problme
    int n =0; 
    
    cin >> n;

    //first person
    int first;
    //second person
    int second;
    //third person
    int third;
    
    if (n>= 1 && n <=1000){
        for(int i = 0; i<n; i++){
            cin>> first>>second>>third;
            if (first && second == 1 or first && third ==1 or second && third==1 ){
                count++;
            }
        }
        cout<<count;
    }
}
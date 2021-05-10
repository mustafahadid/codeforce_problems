#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    int arrayLenght = 1;
    string temp;
    cin >> arrayLenght;
    string input[arrayLenght];
    int count=1;
    for(int i=0; i<arrayLenght; i++)
    {
        cin >> input[i];
    }
    
    for (int j=0; j<arrayLenght; j++ ){
        if ( input[j].length()<=10){
            
            
            cout<<input[j]<<endl;
        }else{
            count = input[j].length()-2;
         
            cout<<input[j].front()<<count<<input[j].back()<<endl;
            }
    }
}

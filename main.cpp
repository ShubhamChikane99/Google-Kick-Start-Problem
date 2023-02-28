#include<iostream>
using namespace std;

int main(){
     int t;
      cin>> t;

      for(int i=0; i<t; i++){
        
        int n,m;
     cin>> n>> m;
      int sum = 0;
      int ans = 0;
     int arr[n];

     for(int i=0; i<n; i++){
         cin>> arr[i];
     }

     for(int i=0; i<n; i++){
        sum = sum + arr[i];
     }
      
      ans = sum/m;

      int ans2 = sum - (m*ans);

      cout<<"Case #"<<(i+1)<<": "<< ans2 <<endl;


      }
}
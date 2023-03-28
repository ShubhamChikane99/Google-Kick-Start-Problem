#include<iostream>
#include<algorithm>
using namespace std;


int main(){
     int t;
      cin>> t;

      for(int i=0; i<t; i++){
        
        int n,b;
         cin>> n >> b;
         
         int sum = 0;
         int count = 0;
         int arr[n];

         for(int i=0; i<n; i++){
             cin>> arr[i];
         }

         for(int i=0; i<n; i++){

            if(sum + arr[i] <= b){

                 sum = sum + arr[i];

                 count++;
            }
         }
     cout<<"Case #"<<(i+1)<<": "<< count << endl;

      }
}

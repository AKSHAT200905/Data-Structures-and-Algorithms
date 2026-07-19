#include<bits/stdc++.h>
using namespace std;

class FrequencyCounter {
    public:
    void countFrequency(int arr[],int n) {
        vector<bool> visited(n, false);
        int maxFrequency=0,minFrequency=n;
        int maxElement=0,minElement=0;
        for(int i=0;i<n;i++){
            
            if(visited[i]==true) 
               continue;
            
            int count=1;
            for(int j=i+1;j<n;j++) {
                if(arr[i] == arr[j]) {
                    visited[j] =true;
                    count++;
                }
            }
            if(count>maxFrequency) {
                maxElement = arr[i];
                maxFrequency = count;
            }
            if(count<minFrequency) {
                minElement = arr[i];
                minFrequency = count;
            }
        }
        cout << "The highest frequency element is: " << maxElement << "\n";
        cout << "The lowest frequency element is: " << minElement << "\n";

    }
};

int main()
{
    FrequencyCounter fc;                      
    int arr[] = {10, 9, 54, 10, 10, 54 ,54, 54, 21,9};    
    int n = sizeof(arr) / sizeof(arr[0]);    
    fc.countFrequency(arr, n);                 
    return 0;
}
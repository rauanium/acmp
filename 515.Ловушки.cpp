// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n+1][2];

    int current[1][2];
    long double total = 0.0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<2; j++){
            cin>>a[i][j];
        }
    }
    a[n][0] = 0;
    a[n][1] = 0;

    // for(int i = 0; i<=n; i++){
    //     for(int j = 0; j<2; j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    current[0][0] = 0;
    current[0][1] = 0;

    for(int i = 0; i<=n; i++){
        if(i == n){
            if(current[0][0] == 0 || current[0][1] == 0){
                total += abs(current[0][0]) + abs(current[0][1]);
            }else{
                int x = current[0][0];
                int y = current[0][1];
                double h = sqrt(x * x + y * y);
                total += h;
            }
        }
        else if(a[i][1] == current[0][1] || a[i][0] == current[0][0]){
            total += abs(current[0][0]-a[i][0] + current[0][1]-a[i][1]);
            current[0][0] = a[i][0];
            current[0][1] = a[i][1];
            // cout<<"first "<<endl;
        }
        else if(a[i][1] != current[0][1] || a[i][0] != current[0][0]){
            int x = current[0][0] - a[i][0];
            int y = current[0][1] - a[i][1];
            double h = sqrt(x * x + y * y);
            total += h;
            current[0][0] = a[i][0];
            current[0][1] = a[i][1];
            // cout<<"second "<<endl;
        }

    }
    cout.precision(3);
    cout<<fixed<<showpoint<<total;



    return 0;
}

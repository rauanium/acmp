#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    unsigned long long sum = 0;
    long long count = 0;
    bool flag = true;


    if(s.size() <= 1){
        cout<<s<<" "<<0;
    }else{
        while(flag){
            for(int i = 0; i<s.size(); i++){
                sum += s[i]-48;
                //count++;
                //cout<<"count: "<<count<<" "<<endl;
                //cout<<"sum: "<<sum<<" "<<endl;
        }

            if(sum <= 9){
                flag = false;
                count++;

            }else{
                s = to_string(sum);
                sum = 0;
                count++;
            }

            //cout<<sum<<" ";


    }
        cout<<sum<<" "<<count;


    }






return 0;
}

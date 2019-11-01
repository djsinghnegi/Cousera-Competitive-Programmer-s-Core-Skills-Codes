#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<int> result;

    int max = a[0] ;
    for(int i=1;i<n;i++){
        if(max<a[i]){ 
            max = a[i];
        }
    }

    int count = 0;
    for(int i=0;i<n;i++){
        if(max == a[i]){
            count++;
        }
    }

    int flag = 0;

    if(count == 1){
        for(int i=0;i<n;i++){
            if(max != a[i] ){
                result.push_back(a[i]);
            }
        }
    }

    else{
        for(int i=0;i<n;i++){
            if(max==a[i]){
                flag++;
                if(flag!=3){
                    result.push_back(a[i]);
                }
            }
            else{
                result.push_back(a[i]);
            }

        }

    }



    for (int i = 0; i < result.size(); ++i) {
        if (i != 0) cout << ' ';
        cout << result[i];
    }
    cout << endl;

    return 0;
}
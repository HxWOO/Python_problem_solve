#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, num;
    vector<int> v;

    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<' ';
    }
    return 0;
}
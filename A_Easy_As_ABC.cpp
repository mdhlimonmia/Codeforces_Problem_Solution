#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    char s[3][3];
    map<string,int>m;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++) cin>>s[i][j];
    }
    vector<string>v;
    string t = "";
    for(int r1 = 0; r1<3; r1++){
        for(int c1 = 0; c1<3; c1++){
            for(int r2 = 0; r2<3; r2++){
                for(int c2 = 0; c2<3; c2++){
                    for(int r3 = 0; r3<3; r3++){
                        for(int c3 = 0; c3<3; c3++){
                            if((r1 == r2 && c1 == c2) || (r1 == r3 && c1 == c3)|| (r2 == r3 && c2 == c3)) continue;
                            else if((abs(r2 - r1) <= 1 && abs(c2 - c1) <= 1) && (abs(r3 - r2) <= 1 && abs(c3 - c2) <= 1)){
                            // cout<<"r1 c1: "<<r1<<" "<<c1<<endl;
                            // cout<<"r2 c2: "<<r2<<" "<<c2<<endl;
                            // cout<<"r3 c3: "<<r3<<" "<<c3<<endl;
                                t += s[r1][c1];
                                t += s[r2][c2];
                                t += s[r3][c3];
                                m[t]++;
                                // cout<<t<<endl;
                            }
                            t = "";
                        }
                    }
                }
            }
        }
    }
    auto k = *m.begin();
    string ans = k.first;
    cout<<ans<<endl;
    
}

int main()
{
    Limon();

     solve();
}
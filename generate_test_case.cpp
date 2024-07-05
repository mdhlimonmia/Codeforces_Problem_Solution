*******************************
*** The hack uses generator ***
*******************************

** Command line arguments **
no arguments

** Generated test **
1
50000
539051374 698045525 116257742 510761815 440550124 264797627 353212349 804531943 407059699 189174934 414361925 796546775 735003194 545933328 641361339 792107652 208349844 207561834 833399376 171707379 311447819 492217313 391851106 662217337 727044293 170893102 192799780 382657656 469338756 735896272 418695980 6908221 435848331 668468883 131098597 480948770 613465785 28053156 300258077 645642860 518957119 31993206 392271378 481421576 96557492 140659785 531145007 291038360 313155174 723524515 748898...

** Generator source **
#include<bits/stdc++.h>
#include "testlib.h"
using namespace std;
#define lli long long int
#define VROOM_VROOM ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<long long int>
#define smol INT_LEAST64_MIN
#define thicc INT_LEAST64_MAX
#define space <<" "<< 
#define all(x) x.begin(),x.end() 
#define yes cout<<"YES\n" 
#define no cout<<"NO\n" 
int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);
    VROOM_VROOM;
    lli t = 1;
    lli n = 50000;
    // lli num = 30727  ; //14
    lli num = 26267  ; //17
    // lli num = 20753  ; //20
    lli limit = 32000;
    cout<<t<<"\n";
    cout<<n<<"\n";
    for(int i=0;i<n;i++)
    {
        lli k = rnd.next(1LL,limit);
        cout<<num*k;
        if(i!=n-1)
        {
            cout<<" ";
        }
    }
    cout<<"\n";
    return 0;
}
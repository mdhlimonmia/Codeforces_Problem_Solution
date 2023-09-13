#include <bits/stdc++.h>
using namespace std;

// bool allSame(std::vector<int> const &v)
// {
//     return std::adjacent_find(v.begin(), v.end(), std::not_equal_to<int>()) == v.end();
// }

// int main()
// {

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, a;
//         cin >> n;
//         vector<int> v, b, c;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a;
//             v.push_back(a);
//         }
//         sort(v.begin(), v.end());
//         int k = (n % 2 == 0) ? n / 2 : n / 2 + 1;
//         for (int i = 0, j = k; i < k, j < n; i++, j++)
//         {

//             if (v[i] == v[j])
//             {
//                 b.push_back(v[i]);
//                 b.push_back(v[j]);
//                 // cout<<v[i]<<" "<<v[j]<<"if"<<endl;
//             }
//             else
//             {
//                 b.push_back(v[i]);
//                 c.push_back(v[j]);
//                 // cout<<v[i]<<" "<<v[j]<<"else"<<endl;
//             }
//         }
//         if (n % 2 != 0)
//         {
//             b.push_back(v[k - 1]);
//         }
//         if (b.size() == 0 || c.size() == 0)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             cout<<b.size()<<" "<<c.size()<<endl;
//             for (int i = 0; i < b.size(); i++)
//                 cout << b[i] << " ";
//             cout << endl;
//             for (int j = 0; j < c.size(); j++)
//                 cout << c[j] << " ";

//             cout << endl;
//         }
//         v.clear();
//         b.clear();
//         c.clear();
//     }
// }



// #include <cstdio>
// #include <algorithm>
// #include <cmath>
// #include <cstring>

// using std::max;


int main() {
	int _; scanf("%d", &_);
	while (_ --) {
        int arr[105];
		int m; cin>>m;
		for (int i = 1; i <= m; ++ i) cin>>arr[i];
		sort(arr+1,arr+m+1);
		int same=0;
		for(int i=1;i<=m;++i)if(arr[i]==arr[1])++same;
		if(same==m){puts("-1");continue;}
		printf("%d %d\n",same,m-same);
		for(int i=1;i<=same;++i)printf("%d ",arr[i]);
		puts("");
		for(int i=same+1;i<=m;++i)printf("%d ",arr[i]);
		puts("");
	}
	return 0;
}
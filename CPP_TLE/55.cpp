// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//     int x;
//     float y;
//     cin>>x>>y;
//     float z=y-x;
//     if(x%5!=0 || x>y){
//         cout<<fixed<<setprecision(2)<<y;
//     }
//     else if(x<=y || x%5==0){
//         cout<<fixed<<setprecision(2)<<z-0.5;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int x;
//     double y;
//     cin >> x >> y;

//     if (x % 5 == 0 && x + 0.50 <= y) {
//         y -= (x + 0.50);
//     }

//     cout << fixed << setprecision(2) << y << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  double y;
  cin>>x>>y;
  if(x%5==0 && (x+0.5)<=y){
    y=y-(x+0.5);
  }
    cout<<fixed<<setprecision(2)<<y;
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string s;
    int a[4];
    for (int i = 0; i < 4; i++){
        cin >> a[i];
    }
    cin >> s;
    int cal = 0;
    for(int i = 0; i < s.length(); i++){
        cal += a[s[i] - '1'];
    }
    cout << cal;
    return 0;
}
// 1 2 3 4 12113

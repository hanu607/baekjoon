#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;      //�� ������ ������ �� �ľ��ؾ��Ѵ�
    long long ans = 0;  //ans�� ������ 80000(80000+1)/2 ->int�����ʰ�
    stack<int> stk; 
    cin >> n;
    int height;
    for (int i = 0; i < n; i++) {
        cin >> height;
        while (!stk.empty() && stk.top() <= height) stk.pop();
        ans += stk.size();
        stk.push(height);   //���� ���ڰ� �߰��� ������ �� ���� ��������               
    }                       //��ġ��ŷ�� 1������ ǥ��
    cout << ans;  
}

//���� �ڵ�
// Authored by : unluckyjung
// Co-authored by : BaaaaaaaaaaarkingDog
// http://boj.kr/a84f083cdee3436f9f46acdef175e55f
//#include <bits/stdc++.h>
//using namespace std;
//
//#define ll long long
//
//stack<int> s;
//int n;
//ll ans;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> n;
//    ll h;
//    while (n--) {
//        cin >> h;
//        while (!s.empty() && s.top() <= h)
//            s.pop();
//        ans += s.size();
//        s.push(h);
//    }
//    cout << ans;
//    return 0;
//}
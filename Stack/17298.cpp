#include <bits/stdc++.h>
using namespace std;
int arr[1000000]; //i��°�� ��ū�� ����
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack <pair<int,int>> s;   //i��°, n
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        while (!s.empty() && s.top().second < a) {
            arr[s.top().first] = a;
            s.pop();
        }         //����� ������ �ٸ� �� ����ϴ�. pair�� ���´�� arr�ϳ��� ����
        arr[i] = -1;
        s.push({ i,a });
    }
    for (int i = 0; i < n; i++)
        if(arr[i]) cout << arr[i] << " ";
}
//���� �ڵ�
// Authored by : haneulkimdev
// Co-authored by : -
// http://boj.kr/98a57090ad0b472f86492f495a362127
//#include <bits/stdc++.h>
//using namespace std;
//
//int a[1000000];
//int ans[1000000];
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) cin >> a[i];
//    stack<int> S;
//    for (int i = n - 1; i >= 0; i--) {
//        while (!S.empty() && S.top() <= a[i]) S.pop();
//        if (S.empty())
//            ans[i] = -1;
//        else
//            ans[i] = S.top();
//        S.push(a[i]);
//    }
//    for (int i = 0; i < n; i++) cout << ans[i] << ' ';
//}
/*一个长度为八的只包含小写字母的字符串,每个字母分别对应着一个1~26 之问的整数。
请你将分配给 1~26 这些字母，让他们权值和最大。
比如对于字符串 gag ，我们可以把 26 分配给 9，25 分配给a,这样这个字符串权值和为
26+25 +26=77。*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[26] = {0};
    for (char c : s) {
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = i + 1; j < 26; j++) {
            if (freq[i] < freq[j]) {
                swap(freq[i], freq[j]);
            }
        }
    }

    int weight = 26;
    int ans = 0;
    for (int i = 0; i < 26 && freq[i] > 0; i++) {
        ans += freq[i] * weight;
        weight--;
    }

    cout << ans;

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
#define fi(s, e) for (int i = s; i <= e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
using namespace std;
// string rd(string str, string word)
// {
//     if (str.find(word) != string::npos) {
//         size_t p = -1;

//         string tempWord = word + " ";
//         while ((p = str.find(word)) != string::npos)
//             str.replace(p, tempWord.length(), "");

//         tempWord = " " + word;
//         while ((p = str.find(word)) != string::npos)
//             str.replace(p, tempWord.length(), "");
//     }

//     return str;
// }
// template<typename T>
// void rs(basic_string<T>& s,
//                    const basic_string<T>& p) {
//    basic_string<T>::size_type n = p.length();

//    for (basic_string<T>::size_type i = s.find(p);
//         i != basic_string<T>::npos;
//         i = s.find(p))
//       s.erase(i, n);
// }
// bool replace(std::string& str, const std::string& from, const std::string& to) {
//     size_t start_pos = str.find(from);
//     if(start_pos == std::string::npos)
//         return false;
//     str.replace(start_pos, from.length(), to);
//     return true;
// }
/*
allah bachak amare 
more jabo taw mori na 
kotto kichu bhaba lage 
dhuroooooooooooooooo
*/
int main()
{
    optimize();
    int n;
    cin >> n;
    string s1 = "I hate that ", s2 = "I love that ", s3 = "it", s5 = "";
    fi(1, n)
    {
        if (i % 2 == 0)
        {
            s5 += s2;
        }
        else
        {
            s5 += s1;
        }
    }
    s5.erase(s5.begin() + (s5.length() - 5), s5.end());
    s5 += s3;
    cout << s5 << endl;
}
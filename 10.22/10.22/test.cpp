#include <iostream>
using namespace std;

//int diffborn(int n)
//{
//    int oldbaby = 0, newbaby = 1, reable = 1, count = 0;
//    for (int i = 3; i < n; i++)
//    {
//        reable = oldbaby + reable;
//        oldbaby = newbaby;
//        newbaby = reable;
//    }
//    return oldbaby + reable + newbaby;
//}
//int main()
//{
//    int n;
//    cin >> n;
//    if (n < 3)cout << 1 << endl;
//    else
//    {
//        cout << diffborn(n) << endl;
//    }
//
//
//}
// 64 位输出请用 printf("%lld")
#include <cwctype>
#include <iostream>
using namespace std;
//bool match_str(const char* match, const char* str)//并不改变字符串，所以可以用常量字符串来接受
//{
//
//    if (*match == '\0' && *str == '\0')
//        return true;
//    if (*match == '\0' || *str == '\0')
//        return false;
//
//    if (*match == *str)return match_str(match + 1, str + 1);//同时往后移动
//    else if (*match == '?')
//    {
//        if (*str=='#')return false;
//        else
//            return match_str(match + 1, str + 1);
//    }
//
//    else if (*match == '*')
//    {
//        if (*str < 'a' && *str>'z' && *str < '0' && *str>'9')return false;
//        else
//            return match_str(match + 1, str) || match_str(match + 1, str + 1) || match_str(match, str + 1);
//    }
//    else
//        return false;
//}
//int main()
//{
//
//    string match, str;
//    while (cin >> match >> str)
//    {
//        for (int i = 0; i < match.size(); i++)
//        {
//            match[i] = towlower(match[i]);
//        }
//        for (int i = 0; i < str.size(); i++)
//        {
//            str[i] = towlower(str[i]);
//        }
//        if (match_str(match.c_str(), str.c_str()))
//            cout << "true" << endl;
//        else
//        {
//            cout << "false" << endl;
//        }
//    }
//
//}
// 64 位输出请用 printf("%lld")

//int main()
//{
//	int empty, newbottle = 0,count=0;
//	cin >> empty;
//	while (empty >= 3)
//	{
//		newbottle = empty / 3;
//		count += newbottle;
//		empty = newbottle + empty % 3;
//	}
//	if (empty == 2)count++;
//
//	cout << count << endl;
//}
//#include <vector>
//int main()
//{
//    int n, newbottle = 0;
//    cin >> n;
//    vector<int> v;
//    v.resize(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i];
//    }
//
//    for (auto& e : v)
//    {
//        int count = 0;
//        if (e == 0)break;
//        while (e >= 3)
//        {
//            newbottle = e / 3;
//            count += newbottle;
//            e = newbottle + e % 3;
//        }
//        if (e == 2)count++;
//        cout << count << endl;
//    }
//
//}

int main()
{
	string s1, s2,str;
	cin >> s1 >> s2;
	if (s1.size() > s2.size())
		swap(s1, s2);
	int j = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] == s2[i])
		{
			str += s1[i];
		}
		else
		{

			int pos = s2.find(s1[i]);
			if (pos == string::npos)
			{
				continue;
			}
			else
			{
				while (pos != string::npos)
				{
					if (s1[])
				}
			}
			
		}
		
	}

}
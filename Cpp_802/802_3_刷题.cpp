#define _CRT_SECURE_NO_WARNINGS

// 242 有效的字母异位词

//bool isAnagram(string s, string t) {
//    if (s.size() != t.size()) return false;
//    int nums[26] = { 0 };
//    int i = 0;
//
//    while (s[i])
//    {
//        nums[s[i] - 97]++;
//        nums[t[i] - 97]--;
//        i++;
//    }
//    for (int i = 0; i < 26; i++)
//    {
//        if (nums[i] != 0)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//// 哈希表
//bool isAnagram(string s, string t) {
//    if (s.size() != t.size()) return false;
//
//    unordered_map<char, int> m;
//    for (auto it : s) m[it]++;
//    for (auto it : t)
//    {
//        if (m.find(it) != m.end() && m[it] > 0)
//        {
//            m[it]--;
//        }
//        else
//        {
//            return false;
//        }
//    }
//    return true;
//}


// 383 赎金信
//bool canConstruct(string ransomNote, string magazine) {
//
//    unordered_map<char, int> m;
//
//    for (auto it : ransomNote) m[it]++;
//
//    for (auto it : magazine)
//    {
//        if (m.find(it) != m.end() && m[it] > 0)
//        {
//            m[it]--;
//        }
//    }
//    for (auto it : ransomNote)
//    {
//        if (m.find(it) != m.end() && m[it] != 0)
//        {
//            return false;
//        }
//    }
//    return true;
//
//}

//bool canConstruct(string ransomNote, string magazine) {
//
//    unordered_map<char, int> m;
//
//    for (auto it : magazine) m[it]++;
//
//    for (auto it : ransomNote)
//    {
//        if (m.find(it) != m.end() && m[it] > 0)
//        {
//            m[it]--;
//        }
//        else
//        {
//            return false;
//        }
//    }
//
//    return true;
//}

// 389找不同

//char findTheDifference(string s, string t) {
//    if (s.size() == 0) return t[0];
//    unordered_map<char, int> m;
//
//    for (auto it : s) m[it]++;
//    for (auto it : t)
//    {
//        if (m.find(it) != m.end() && m[it] > 0)
//        {
//            m[it]--;
//        }
//        else
//        {
//            return it;
//        }
//    }
//    return 0;
//}

//// 771 宝石与石头
//int numJewelsInStones(string jewels, string stones) {
//
//
//    unordered_map<char, int> m;
//    for (auto it : stones) m[it]++;
//
//    int num = 0;
//    for (auto it : jewels)
//    {
//        if (m.find(it) != m.end()) num += m[it];
//    }
//    return num;
//}
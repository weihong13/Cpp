#define _CRT_SECURE_NO_WARNINGS

// 1160 Æ´Ð´µ¥´Ê
//int countCharacters(vector<string>& words, string chars) {
//    unordered_map<char, int> charMap, m;
//
//    int size = 0;
//    for (auto it : chars) charMap[it]++;
//    m = charMap;
//    int flag = 0;
//    for (auto it : words)
//    {
//        flag = 1;
//        for (auto it1 : it)
//        {
//            if (charMap.find(it1) != charMap.end() && charMap[it1] > 0)
//            {
//                charMap[it1]--;
//            }
//            else
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag)
//        {
//            size += it.size();
//        }
//        charMap = m;
//    }
//    return size;
//}
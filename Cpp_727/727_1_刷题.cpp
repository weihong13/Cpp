#define _CRT_SECURE_NO_WARNINGS

// 19 ɾ��������n�����
// ��ʵ�����ҵ� ������n+1����㣬��������n+1������ָ����������n�����

//ListNode* removeNthFromEnd(ListNode* head, int n) {
//    ListNode* HEAD = new ListNode(0, head);
//    ListNode* fast = head;
//    ListNode* slow = HEAD;
//    for (int i = 0; i < n; i++)
//    {
//        fast = fast->next;
//    }
//    while (fast)
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    slow->next = slow->next->next;
//
//    return HEAD->next;
//}

// 234 ��������
// ������
// �ҵ� ��һ��ĵ�һ�����
// ����һ���������з�ת
// ����ת��� ��һ������ �� δ��ת��ǰһ��������бȽ�


//    // ��ת����
//ListNode* revrese(ListNode* head)
//{
//    ListNode* pre = nullptr; // ǰһ�����
//    ListNode* cur = head;    // ��ǰ���
//    ListNode* next = head->next; // ��һ�����
//    while (cur)
//    {
//        cur->next = pre; // ����ǰ���ָ��ǰһ�����
//        pre = cur;       // 
//        cur = next;
//        if (next) next = next->next;
//
//    }
//    return pre;
//}
//bool isPalindrome(ListNode* head) {
//    ListNode* fast = head;
//    ListNode* slow = head;
//
//    // �ҵĺ�һ��ĵ�һ�����
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//
//    // ����һ���������з�ת
//    ListNode* R_head = revrese(slow);
//
//    while (R_head && head)
//    {
//        if (head->val != R_head->val) return false;
//        head = head->next;
//        R_head = R_head->next;
//    }
//    return true;
//}


// LCR 121 ��ά���飬Ѱ��Ŀ��ֵ
// 
// �����Ͻǣ������½ǣ���ʼ��
// ���Ͻǵ�������Ŀ��ֵ�����ж�����Ŀ��ֵ�����ж���������
// ���Ͻǵ���С��Ŀ��ֵ�����ж�С��Ŀ��ֵ�����ж���������
// 
// 
//bool findTargetIn2DPlants(vector<vector<int>>& plants, int target) {
//    if (plants.size() == 0) return false;
//    int row = 0;
//    int col = plants[0].size() - 1;
//    while (row < plants.size() && col >= 0)
//    {
//        if (plants[row][col] > target)
//        {
//            col--;
//        }
//        else if (plants[row][col] < target)
//        {
//            row++;
//        }
//        else return true;
//    }
//    return false;
//}
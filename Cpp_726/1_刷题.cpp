#define _CRT_SECURE_NO_WARNINGS


//// ���ص�k�����
//int kthToLast(ListNode* head, int k) {
//    if (!head) return 0;
//
//    // ��ָ�� ����k�����
//    // ��ָ�� ������
//    // ��ָ�뵽�����ָ��͵��˵�����k�����
//    ListNode* fast = head;
//    ListNode* slow = head;
//    for (int i = 0; i < k; i++)
//    {   // �ص㣺��k����Ч�ģ���������k��û����
//        fast = fast->next;
//    }
//    while (fast)
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    return slow->val;
//}


//// 141 ��������
//bool hasCycle(ListNode* head) {
//    // ����ָ��
//    // �ٳ��ܲ�--���һ�����ܵÿ죬һ�����ܵ�����
//    // ���ָ�룬һ����׷������ָ�롣
//    if (!head) return false;
//    if (!head->next) return false;
//    ListNode* slow = head;
//    ListNode* fast = head->next;
//    while (fast)
//    {
//        if (fast && !fast->next) return false;
//        fast = fast->next->next;
//        slow = slow->next;
//
//        if (fast == slow)
//        {
//            return true;
//        }
//    }
//    return false;
//}

//// ͼ�����
//vector<int> reverseBookList(ListNode* head) {
//    stack<int> book;
//    ListNode* p = head;
//    while (p)
//    {
//        book.push(p->val);
//        p = p->next;
//    }
//    vector<int> ret;
//    int temp;
//    while (!book.empty())
//    {
//        temp = book.top();
//        ret.push_back(temp);
//        book.pop();
//    }
//    return ret;
//}

//// 21 �ϲ�������������
//ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//    if (!l1) return l2;
//    if (!l2) return l1;
//    ListNode* HEAD = new ListNode();
//    ListNode* Tail = HEAD;
//    while (l1 && l2)
//    {
//        if (l1->val <= l2->val)
//        {
//            Tail->next = l1;
//            l1 = l1->next;
//        }
//        else
//        {
//            Tail->next = l2;
//            l2 = l2->next;
//        }
//        Tail = Tail->next;
//    }
//    if (l1) Tail->next = l1;
//    else Tail->next = l2;
//
//    return HEAD->next;
//}

// 206 ��ת����
//ListNode* reverseList(ListNode* head) {
//    if (!head) return head;
//    ListNode* pre = nullptr, * cur = head, * next = head->next;
//    while (cur)
//    {
//        cur->next = pre;
//        pre = cur;
//        cur = next;
//        if (next)next = next->next;
//    }
//    return pre;
//}
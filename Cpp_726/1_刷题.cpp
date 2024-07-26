#define _CRT_SECURE_NO_WARNINGS


//// 返回第k个结点
//int kthToLast(ListNode* head, int k) {
//    if (!head) return 0;
//
//    // 快指针 先走k个结点
//    // 慢指针 挨个走
//    // 快指针到最后，慢指针就到了倒数第k个结点
//    ListNode* fast = head;
//    ListNode* slow = head;
//    for (int i = 0; i < k; i++)
//    {   // 重点：：k是有效的，所以先走k步没问题
//        fast = fast->next;
//    }
//    while (fast)
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    return slow->val;
//}


//// 141 环形链表
//bool hasCycle(ListNode* head) {
//    // 快慢指针
//    // 操场跑步--如果一个人跑得快，一个人跑得慢，
//    // 快的指针，一定会追上慢的指针。
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

//// 图书管理
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

//// 21 合并两个有序链表
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

// 206 反转链表
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
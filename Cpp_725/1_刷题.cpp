#define _CRT_SECURE_NO_WARNINGS


//������ˢ��

//// 203 �Ƴ�����Ԫ��
//ListNode* removeElements(ListNode* head, int val) {
//    ListNode* HEAD = new ListNode(0, head);
//    ListNode* p = head;
//    ListNode* pre = HEAD;
//    while (p)
//    {
//        if (p->val == val)
//        {
//            pre->next = p->next;
//        }
//        else
//        {
//            pre = p;
//        }
//        p = p->next;
//
//    }
//
//    return HEAD->next;
//}

// 83 ɾ���ظ�Ԫ��

//ListNode* deleteDuplicates(ListNode* head) {
//    if (!head)
//    {
//        return head;
//    }
//    int temp;
//    ListNode* pre = head;
//    temp = pre->val;
//    ListNode* p = head->next;
//    while (p)
//    {
//        if (temp == p->val)
//        {
//            pre->next = p->next;
//        }
//        else
//        {
//            temp = p->val;
//            pre = pre->next;
//        }
//        p = p->next;
//    }
//    return head;
//}

//// 876 ������м���
//ListNode* middleNode(ListNode* head)
//{
//    ListNode* fast = head;
//    ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//
//        slow = slow->next;
//    }
//    return slow;
//
//}
#define _CRT_SECURE_NO_WARNINGS

// 82 ɾ�������������ظ���Ԫ��

// ����ָ��
// 
// 

//ListNode* deleteDuplicates(ListNode* head) {
//    if (!head) return head;
//    ListNode* HEAD = new ListNode(0, head);
//
//    ListNode* fast = head->next;
//    ListNode* slow = head;
//    ListNode* pre = HEAD;
//    int flag = 0;
//    while (fast)
//    {
//        if (fast->val != slow->val)
//        {
//            if (flag == 1)
//            {
//                flag = 0;
//                pre->next = fast;
//                slow = fast;
//                fast = fast->next;
//
//            }
//            else
//            {
//                fast = fast->next;
//                slow = slow->next;
//                pre = pre->next;
//            }
//        }
//        else
//        {
//            flag = 1;
//            fast = fast->next;
//        }
//    }
//    if (flag == 1)
//    {
//        pre->next = fast;
//    }
//
//    return HEAD->next;
//}


// 61 ��ת����
// 
//ListNode* rotateRight(ListNode* head, int k)
//{
//    if (!head) return head;
//    // ���ڼ�¼β���
//    ListNode* tail = head;
//    // ���ڼ�¼������
//    int num = 1;
//    // �������
//    while (tail->next)
//    {
//        num++;
//        tail = tail->next;
//    }
//    // �ж��ƶ������Ƿ���ڽ����������ڲ��ö�
//    if (k % num == 0) return head;
//    // ����k���ڽ�����
//    k = k % num;
//    // ����Ҫ�ƶ���λ��
//    int flag = num - k - 1;
//    // ��β����
//    tail->next = head;
//
//    ListNode* p = head;
//    // �ҵ�Ҫ�Ͽ���λ��
//    while (flag--)
//    {
//        p = p->next;
//    }
//    // �µ�ͷ���
//    head = p->next;
//    // �Ͽ�����
//    p->next = nullptr;
//    return head;
//}
#define _CRT_SECURE_NO_WARNINGS

// 82 删除排序链表中重复的元素

// 三个指针
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


// 61 旋转链表
// 
//ListNode* rotateRight(ListNode* head, int k)
//{
//    if (!head) return head;
//    // 用于记录尾结点
//    ListNode* tail = head;
//    // 用于记录结点个数
//    int num = 1;
//    // 求结点个数
//    while (tail->next)
//    {
//        num++;
//        tail = tail->next;
//    }
//    // 判断移动步数是否等于结点个数，等于不用动
//    if (k % num == 0) return head;
//    // 处理k大于结点个数
//    k = k % num;
//    // 计算要移动的位置
//    int flag = num - k - 1;
//    // 首尾相连
//    tail->next = head;
//
//    ListNode* p = head;
//    // 找的要断开的位置
//    while (flag--)
//    {
//        p = p->next;
//    }
//    // 新的头结点
//    head = p->next;
//    // 断开链表
//    p->next = nullptr;
//    return head;
//}
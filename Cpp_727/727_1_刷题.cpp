#define _CRT_SECURE_NO_WARNINGS

// 19 删除倒数第n个结点
// 其实就是找到 倒数第n+1个结点，将倒数第n+1个结点的指针域，跳过第n个结点

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

// 234 回文链表
// 三步走
// 找到 后一半的第一个结点
// 将后一半的链表进行反转
// 将反转后的 后一半链表 和 未反转的前一半链表进行比较


//    // 反转链表
//ListNode* revrese(ListNode* head)
//{
//    ListNode* pre = nullptr; // 前一个结点
//    ListNode* cur = head;    // 当前结点
//    ListNode* next = head->next; // 下一个结点
//    while (cur)
//    {
//        cur->next = pre; // 将当前结点指向前一个结点
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
//    // 找的后一半的第一个结点
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//
//    // 将后一半的链表进行反转
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


// LCR 121 二维数组，寻找目标值
// 
// 从右上角（或左下角）开始找
// 右上角的数大于目标值，该列都大于目标值，该列都不用找了
// 右上角的数小于目标值，该行都小于目标值，该行都不用找了
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
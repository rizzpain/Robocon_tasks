
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merged = new ListNode(-1);
        ListNode* mptr = merged;
        ListNode* left = list1;
        ListNode* right = list2;

        while(left != NULL && right != NULL){
            if(left->val <= right->val){
                mptr->next = left;
                mptr = mptr->next;
                left = left->next;
            }
            else{
                mptr->next = right;
                mptr = mptr->next;
                right = right->next;
            }
        }

        while(left != NULL){
            mptr->next = left;
            mptr = mptr->next;
            left = left->next;
        }

        while(right != NULL){
            mptr->next = right;
            mptr = mptr->next;
            right = right->next;
        }

        return merged->next;
    }
};

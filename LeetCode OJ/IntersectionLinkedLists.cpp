/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int s1 = 1;
        int s2 = 1;
        
        if(headA == NULL || headB == NULL)
            return NULL;
            
        if(headA == headB){
            return headA;
        }
        
        ListNode *a = headA, *b=headB;
        while(a->next != NULL) {
            s1++;
            a = a->next;
        }
        
        while(b->next != NULL) {
            s2++;
            b = b->next;
        }
        
        int diff = 0;
        if(s1 > s2) {
            diff = s1-s2;
        }else {
            diff = s2-s1;
        }
        
        cout << diff << endl;
        
        a = headA;
        b = headB;
        
        if(a==b) {
                return a;
        }
        
        if(a->next==b->next) {
                return a->next;
        }
        
        if(s1>s2) {
            while(diff!=0){
                diff--;
                a = a->next;
            }
        }else if(s2>s1) {
            while(diff!=0){
                diff--;
                b = b->next;
            }
        }
        
        if(a==b) {
                return a;
        }
        
        if(a->next==b->next) {
                return a->next;
        }
        
        while(a!=NULL && b!=NULL && a->next!=NULL && b->next != NULL) {
            if(a==b) {
                return a;
            }
            a = a->next;
            b = b->next;
        }
        
        return NULL;
        
        
        
    }
};
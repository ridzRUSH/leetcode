/* * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
*/

//https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

/* 

next is a pointer so we can access the next element through the next and alter the 
current position of next */

//###############################################################################
//                 remove duplicate elements from sorted linklist
//#################################################################################


  ListNode* deleteDuplicates(ListNode* head) {
        ListNode *hold=head;
        while(hold!=NULL && hold->next!=NULL){

            if(hold->val==hold->next->val){
                hold->next=hold->next->next;
            }
            else{
                hold=hold->next;
            }

        }
        return head;
        
    }

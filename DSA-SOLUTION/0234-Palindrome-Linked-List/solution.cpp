/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        int count =0;
        ListNode *temp=head;
        while (temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==1){
            return 1;
        }

        count =count/2;
         temp=head;
        ListNode *cur=NULL;
        while (count--){
            cur=temp;
            temp=temp->next;
        }
        cur->next=NULL;

        ListNode *fust;
        ListNode *tell=NULL;
        while (temp){
            fust=temp->next;
            temp->next=tell;
            tell=temp;
            temp=fust;

        }
        ListNode *head1=head,*head2=tell;
        while(head1!=NULL){
            if(head1->val!=head2->val){
                return 0;
            }
            head1=head1->next;
            head2=head2->next;

        }
        return 1;


    }
};

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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if (head == NULL || head->next == NULL || k == 0) {
            return head;
        }
        int count = 0;
        ListNode* temp = head;

        while (temp) {
            count++;
            temp = temp->next;
        }

        k = k % count;

        if (k == 0) {
            return head;
        }

        int steps = count - k;

        temp = head;
        ListNode* curn = NULL;

        while (steps--) {
            curn = temp;
            temp = temp->next;
        }

        curn->next = NULL;

        ListNode* tell = temp;

        while (tell->next != NULL) {
            tell = tell->next;
        }

        tell->next = head;

        head = temp;

        return head;
    }
};

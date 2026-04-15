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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int, int> mp;
        ListNode* temp = head;
        while (temp) {
            mp[temp->val]++;
            temp = temp->next;
        }

        temp = head;
        ListNode* prev = NULL;
        while (temp) {
            if (mp[temp->val] > 1) {
                if (temp == head) {
                    head = head->next;
                    temp = head;
                } else {
                    ListNode* next = temp->next;
                    prev->next = next;
                    temp = next;
                }
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};
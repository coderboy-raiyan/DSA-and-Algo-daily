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
class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        queue<int> q;
        int n = 0;

        ListNode *temp = head;
        while (temp != NULL)
        {
            q.push(temp->val);
            n++;
            temp = temp->next;
        }
        int a = n / k;
        int b = n % k;

        stack<int> cp;
        while (a--)
        {
            int chk = k;
            while (chk--)
            {
                cp.push(q.front());
                q.pop();
            }
            while (!cp.empty())
            {
                q.push(cp.top());
                cp.pop();
            }
        };
        while (b--)
        {
            q.push(q.front());
            q.pop();
        };
        ListNode *newHead = new ListNode();
        ListNode *ans = newHead;

        while (!q.empty())
        {
            ListNode *newNode = new ListNode(q.front());
            ans->next = newNode;
            ans = ans->next;
            q.pop();
        }

        return newHead->next;
    }
};
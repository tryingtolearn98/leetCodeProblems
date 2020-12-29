/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void addLastPosition(struct ListNode** cap, int val)
{
    struct ListNode *elem = (struct ListNode*)malloc(sizeof(struct ListNode));
    elem->val = val;
    elem->next = NULL;
    if (*cap == NULL)
        *cap = elem;
    else
    {
        struct ListNode *nod = *cap;
        while (nod->next != NULL)
            nod = nod->next;
            nod->next = elem;
    }
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int carry = 0;
    struct ListNode *solution = NULL;
    int firstVal = 0;
    int secondVal = 0;
    while(l1 != NULL || l2 != NULL)
    {
         if(l1 != NULL)
         {
            firstVal = l1->val;
            l1 = l1->next;
         }
         else firstVal = 0;
        
        if(l2 != NULL)
        {
            secondVal = l2->val;
            l2 = l2->next;
        }
        else secondVal = 0;
        
        if(firstVal + secondVal +  carry >= 10)
        {
            addLastPosition(&solution,(firstVal + secondVal + carry) % 10);
            carry = 1;
        }
        else
        {
            addLastPosition(&solution,(firstVal + secondVal + carry) % 10);
            carry = 0;
        }
    }
    
    if(carry == 1)
    {
        addLastPosition(&solution, carry);
    }
    return solution;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int getLengthList(struct ListNode* head)
{
    int listSize = 0;
    while(head != NULL)
    {
        listSize++;
        head = head->next;
    }
    
    return listSize;
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    
    int index = 0;
    int listLength = getLengthList(head);
    int deletePosition = (listLength - n) + 1;
    
    struct ListNode* deleteNode = head;
    
    if(listLength == 1 && n == 1)
    {   head = NULL;
        return head;
    }
    else if(deletePosition == 1)
    {
        head = head->next;
        return head;
    }
    else
    {
        while(deleteNode != NULL)
        { 
            index++;

            if(index == deletePosition-1)
                break;
            else
                deleteNode = deleteNode->next;
        }

        if((deleteNode->next)->next == NULL)
            deleteNode->next = NULL;
        else
            deleteNode->next = (deleteNode->next)->next;

        return head;
    }
}
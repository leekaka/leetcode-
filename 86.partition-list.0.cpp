/*
 * [86] Partition List
 *
 * https://leetcode.com/problems/partition-list/description/
 *
 * algorithms
 * Medium (34.81%)
 * Total Accepted:    136.7K
 * Total Submissions: 392.7K
 * Testcase Example:  '[1,4,3,2,5,2]\n3'
 *
 * Given a linked list and a value x, partition it such that all nodes less
 * than x come before nodes greater than or equal to x.
 * 
 * You should preserve the original relative order of the nodes in each of the
 * two partitions.
 * 
 * Example:
 * 
 * 
 * Input: head = 1->4->3->2->5->2, x = 3
 * Output: 1->2->2->4->3->5
 * 
 * 
 */
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
    ListNode* partition(ListNode* head, int x) {
	ListNode left(0),right(0);
	ListNode* l = &left;
	ListNode* r = &right;

	while(head)
	{
	    ListNode* &ref = (head->val < x)?l:r;
	    ref->next = head;
	    ref = ref->next;
	    head = head->next;
	}

	l->next = right.next;
	r->next = NULL;
	return left.next;





        
    }
};

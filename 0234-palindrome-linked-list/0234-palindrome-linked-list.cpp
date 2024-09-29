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
 #include<vector>
class Solution {
  private:
  bool checkpalindrome(vector<int>ans){
    int n=ans.size();
    int s=0;
    int e= n-1;
    while(s<=e){
      if(ans[s]!=ans[e]){
        return 0;
      }
      s++;
      e--;
    }
 return 1;
  }
public:
    bool isPalindrome(ListNode* head) {
      
      vector<int>ans;
    
    ListNode* start=head;
    while(start!=NULL){
      ans.push_back(start->val);
      start=start->next;
    }
    
      return checkpalindrome(ans);
      }

};

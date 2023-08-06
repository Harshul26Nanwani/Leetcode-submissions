 class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     vector<int> list_1,list_2;
     while(list1!=NULL){
         list_1.push_back(list1->val);
         list1=list1->next;
     }  
     while(list2!=NULL){
         list_2.push_back(list2->val);
         list2=list2->next;
     }  
     list_1.insert(list_1.begin(),list_2.begin(),list_2.end());
     sort(list_1.begin(),list_1.end());
     ListNode*head1=NULL;
     ListNode*tail=NULL;
     for(auto x:list_1){
         ListNode*n= new ListNode(x);
         if(head1==NULL){
             head1=n;
             tail=n;
         }
         else{
             tail->next=n;
             tail=n;
         }
     }
     return head1;
    }
};
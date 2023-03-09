#include<bits/stdc++.h>
// value gula sorted thake and kono duplicate thakbe na
using namespace std;
int main(){

    set<int> st;

    st.insert(5); //O(logn)
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);

    
   for(auto i : st) cout<<i<<" ";  //O(n)
   cout<<endl;
   
   cout<<"Size : "<<st.size()<<endl; //O(1)

   st.erase(5); //logn

   cout<<"Printing set after erasing 5"<<endl;
   for(auto i : st) cout<<i<<" ";
   cout<<endl;


   //finding an element  - logn

   

   if (st.find(3)!=st.end())
   {
     cout<<"present"<<endl;
   }else
   {
    cout<<"not present"<<endl;
   }


   
   

   

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Max_Heap{
    public:
    vector<int>nodes;

    Max_Heap(){

    }

    void up_heapify(int idx){
        while (idx>0 && nodes[idx] > nodes[(idx-1)/2]) //O(logn) cause proti level a 2 gun kore bartese
        {
            swap(nodes[idx] , nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
        
    }

     //O(logn)
    void insert ( int x){

        nodes.push_back(x); //O(1);

        up_heapify(nodes.size()-1);

    }

    void print_heap(){

        for (int i = 0; i < nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }

        cout<<endl;
        
    }

    void down_heapify(int idx){

        while (1)
        {
            int largest = idx;
            int left_child = 2*idx +1;
            int right_child = 2*idx + 2;

            if (left_child< nodes.size() && nodes[largest]< nodes[left_child])
            {
                largest = left_child;

            }

            if (right_child < nodes.size() && nodes[largest] < nodes[right_child] )
            {
                largest = right_child;
            }
            if (largest==idx){
                break;
            }

                swap(nodes[idx] , nodes[largest]);
                idx = largest;   
            
        }
        
    }

    void Delete(int idx){ // O (logn)
         
         if (idx>=nodes.size())
         {
            return;
         }
         
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();

        down_heapify(idx);

    }


   int GetMax(){

    if (nodes.empty())
    {
        return -1;
    }

    return nodes[0];
    
   }

   int Extrac_Max(){ // max element show kore delete kore dey

     int ret = nodes[0];
     Delete(0);

     return ret;

   }
   
   //O ( nlogn)
   void build_maxheap_from_array(vector<int>&a){

    nodes = a;

    int n = nodes.size();

    int last_non_leaf_node = n/2-1;

    for (int i = last_non_leaf_node; i >= 0; i--)
    {
        down_heapify(i);
    }
    
   }


};
 //sort
   vector<int> heap_sort(vector<int>a){
      
      Max_Heap h;
    h.build_maxheap_from_array(a);

    vector<int>ans;

    for (int i = 0; i < a.size(); i++)
    {
        ans.push_back(h.Extrac_Max());
    }

    reverse(ans.begin(), ans.end());

    return ans;
    
   }
int main(){

    
 Max_Heap h;
    vector<int> a = {1,2,3,4,10,9,5,7};

    vector<int>sorted_a = heap_sort(a);

    for (int i = 0; i < sorted_a.size(); i++)
    {
        cout<<sorted_a[i]<<" ";
    }

    cout<<endl;
    

  



    return 0; 
}
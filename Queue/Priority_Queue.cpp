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


   //size
   int size(){
    return nodes.size();
   }


};

class priorityQueue{
    public:
    Max_Heap h;

    priorityQueue(){

    }

    void push(int x){
        h.insert(x);
    }

    void pop(){
        h.Delete(0);
    }

    int top(){
        return h.GetMax();
    }

    int size(){

        return h.size();

    }

};

int main(){
    
    priorityQueue pq;

    pq.push(5);
    pq.push(7);
    pq.push(10);
    pq.push(1);
    pq.push(2);

    while (pq.size()!=0)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    

    
    return 0; 
}
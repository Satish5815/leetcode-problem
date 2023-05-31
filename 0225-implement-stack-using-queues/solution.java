class MyStack {
    List<Integer> list;
    int index;
    public MyStack() {
       list=new ArrayList<>(); 
       index=-1;
    }
    
    public void push(int x) {
        list.add(x);
        index++;
    }
    
    public int pop() {
        if(index<0){
            return 0;
        }
        int x=list.remove(index); 
        index--;
        return x;
    }
    
    public int top() {
        if(index<0){
            return 0;
        }
        return list.get(index);
    }
    
    public boolean empty() {
        return index==-1;
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */

class MyQueue {
    List<Integer> list;
    int index;
    public MyQueue() {
        list=new ArrayList<>();
        index=-1;
    }
    
    public void push(int x) {
        list.add(x);
        index++;
    }
    
    public int pop() {
        if(list.size()==0){
            return 0;
        }
      int x= list.remove(0);
       index--;
       return x;
    }
    
    public int peek() {
        if(index==-1){
            return 0;
        }
        return list.get(0);
    }
    
    public boolean empty() {
        return list.size()==0;
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */

void push(stack<int>& s, int a){
	// Your code goes here
    s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return (s.size()==n);
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.empty();
}

int pop(stack<int>& s){
	// Your code goes here
	if(!isEmpty(s))
	{
	    int val=s.top();
	    s.pop();
	    return val;
	}
}

int getMin(stack<int>& s){
    stack<int>temp;
    int min=10000000;
    while(!s.empty()){
        temp.push(s.top());
        if(s.top()<min)
        min=s.top();
        s.pop();
    }
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
    return min;
}
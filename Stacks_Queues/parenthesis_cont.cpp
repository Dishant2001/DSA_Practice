//If opening bracket, push, else pop
//Stack should be empty in the end

bool ispar(string x)
    {
        // Your code here
        vector<char>stack;
        char val;
        for(int i=0;i<x.length();++i)
        {
            if(x[i]=='{'||x[i]=='['||x[i]=='(')
                stack.push_back(x[i]);
            else if(stack.empty())
                return false;
            else if(x[i]=='}'||x[i]==']'||x[i]==')')
            {
                val=stack[stack.size()-1];
                stack.pop_back();
                if((x[i]=='}'&&val!='{')||(x[i]==']'&&val!='[')||(x[i]==')'&&val!='('))
                    return false;
            }
        }
        if(!stack.empty())
            return false;
        return true;
    }
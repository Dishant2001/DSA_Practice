#Checking if dictionary words are prefix substrings of the main string
#If yes, dividing the string ahead of the substring recursively

def wordBreak(self, n, dict, s):
    # code here
    # dp={}
    def word_break(s):
        # if s in dp:
        #     return dp[s]
        result=[]
        for w in dict:
            if s[:len(w)]==w:
                if len(s)==len(w):
                    result.append(w)
                else:
                    temp=word_break(s[len(w):])
                    for t in temp:
                        result.append(w+' '+t)
                            
        # print(result)
        # dp[s]=result
        return result
    return word_break(s)

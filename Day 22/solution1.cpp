class Solution {
 public:
  string minRemoveToMakeValid(string s) {
    stack<int> stack; 
    for (int i = 0; i < s.length(); ++i)
      if (s[i] == '(') {
        stack.push(i);  
      } else if (s[i] == ')') {
        if (stack.empty())
          s[i] = '*';  
        else
          stack.pop(); 
      }
    while (!stack.empty())
      s[stack.top()] = '*', stack.pop();

    std::erase(s, '*');
    return s;
  }
};
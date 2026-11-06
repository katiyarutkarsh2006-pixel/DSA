class Solution {
public:
    string reverse(string &s){
        int i=0;
        int j = s.size()-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
    string finalString(string s) {
        string w;
        for(int i=0;i<s.size();i++){
            if(s[i]!='i'){
                w.push_back(s[i]);
            }
            else{
                reverse(w);
            }
        }
        return w;
    }
};
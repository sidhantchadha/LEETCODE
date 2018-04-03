//============================================================================
// Name        : BaseballGame.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Baseball Game in C++, Ansi-style
//============================================================================


class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>S;
        int temp=0;
        for(int i=0;i<ops.size();++i) {
            if(ops[i]=="C") {
                S.pop();
            }
            if(ops[i]=="D") {
                temp=2*S.top();
                S.push(temp);
            }
            if(ops[i]=="+") {
                   int item1 = S.top();
                   S.pop();
                   int item2 = S.top();
                   S.push(item1);
                   S.push(item1+item2);
            }
            if(ops[i]=="0" || ops[i]=="1" || ops[i]=="2" || ops[i]=="3" || ops[i]=="4" || ops[i]=="5" || ops[i]=="6" || ops[i]=="7" || ops[i]=="8" || ops[i]=="9" || ops[i]=="-1" || ops[i]=="-2" || ops[i]=="-3" || ops[i]=="-4" || ops[i]=="-5" || ops[i]=="-6" || ops[i]=="-7" || ops[i]=="-8" || ops[i]=="-9") {
                S.push(stoi(ops[i]));
            }
        }
        int count=0;
        int stackS=S.size();
            for(int i=0;i<stackS;++i){
                cout<<S.top()<<" ";
                //count=count+S.top();
                S.pop();
            }
        return count;
    }
};

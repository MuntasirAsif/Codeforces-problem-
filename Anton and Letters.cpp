    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        string s;
        getline(cin, s);
        if(s.size() <= 2){
            cout << "0" << endl;
            return 0;
        }else if(s.size() == 3){
            cout << "1" << endl;
            return 0;
        }
        set<char> st;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
        }

        cout<<st.size()-4<<endl;
        return 0;
    }
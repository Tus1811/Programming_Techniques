// Nguyễn Minh Tú - 5502 - 732833
/* Bài tập 10: Search Engine
Xây dựng một máy tìm kiếm (search engine) đơn giản. */

#include <bits/stdc++.h>
using namespace std;

int n, q;
vector<vector<string> > vector_train; // danh sach cac vector<string> van ban
vector<vector<string> > vector_test; // dach sach cac vector<tring> truy van
int maxfd[1000001]; 
map<string, int> dft; 
map<pair<string, int>, int > ftd;

vector<string> split_string(string str){
    vector<string> vt;

    while (!str.empty()){
        string tmp = str.substr(0, str.find(","));

        vt.push_back(tmp);
        if (str.find(",") > str.size()){
            break;
        } else {
            str.erase(0, str.find(",") + 1);
        }
    }

    return vt;
}
void input() {
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        vector_train.push_back(split_string(str));
    }

    cin >> q;
    while (q--) {
        string str;
        cin >> str;
        vector_test.push_back(split_string(str));
    }
}

int frequence_word_in_document_i(string t, int i) {
    int f = 0;
    for (string s : vector_train[i]) {
        if (s == t) f ++;
    }
    return f;
}

void pre_processing(vector<string> list_words) {
    for (string t: list_words) {
        int fre = 0;

        for (int i = 0; i < vector_train.size(); i++) {
            int count = frequence_word_in_document_i(t,i);
            if (count > 0) fre ++;
            ftd.insert({t, i}, count);
        }
        dft[t] = fre;

    }

    for (int i = 0; i < vector_train.size(); i++) {
        int max_f = 0;
        for (string t: list_words) {
            max_f = max (max_f, ftd[make_pair(t,i)]);
        }
        maxfd[i] = max_f;
    }
}


void solve(vector<string> list_words) {
    double max_score = 0;
    int label = 0;
    for (int i = 0; i < vector_train.size(); i++) {
        double score = 0;
        for (string t : list_words) {
            double tf = 0.5 + 0.5 * ((double) ftd[(t,i)] / maxfd[i]);
            double idf = log2((double) n / dft[t]);

            score += tf * idf; 
        }
        if (score > max_score) {
            label = i;
            max_score = score;
        }
    }

    cout << label << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    input();
    for (int i = 0; i < q; i ++) {
        pre_processing(vector_test[i]);
        solve(vector_test[i]);
    }   
    return 0;

}
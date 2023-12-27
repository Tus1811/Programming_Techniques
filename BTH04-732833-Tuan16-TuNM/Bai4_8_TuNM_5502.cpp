// Nguyễn Minh Tú - 5502 - 732833
/* Bài tập 8:
Viết các hàm thực hiện các phép giao và hợp của hai tập hợp mờ được biểu diễn 
bằng map.*/

template<class T>
map<T, double> fuzzy_set_union(const map<T, double> &a, const map<T, double> &b) {
    /*****************/
    // Nguyễn Minh Tú - 5502 - 732833
    map<T, double> c;
    for(auto v : a){
        int index = 0;
        for(auto u : b){
            if(v.first == u.first){
                c.insert({v.first, max(v.second, u.second)});
                index++;
                break;
            }
        }
        if(index == 0) c.insert({v.first, v.second});
    }

    for(auto v : b){
        int index = 0;
        for(auto u : a){
            if(v.first == u.first){
                c.insert({v.first, max(v.second, u.second)});
                index++;
                break;
            }
        }
        if(index == 0) c.insert({v.first, v.second});
    }
    return c;
    /*****************/
}

template<class T>
map<T, double> fuzzy_set_intersection(const map<T, double> &a, const map<T, double> &b) {
    /*****************/
    // Nguyễn Minh Tú - 5502 - 732833
    map<T, double> c;

    for(auto v : a){
        for(auto u : b){
            if(v.first == u.first){
                c.insert({v.first, min(v.second, u.second)});
                break;
            }
        }
    }

    return c;
    /*****************/
}

// Nguyễn Minh Tú - 5502 - 732833
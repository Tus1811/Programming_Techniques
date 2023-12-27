// Nguyễn Minh Tú - 5502 - 732833
/* Bài tập 7:
Viết các hàm thực hiện các phép giao và hợp của hai tập hợp được biểu diễn bằng 
set.*/

template<class T>
set<T> set_union(const set<T> &a, const set<T> &b) {
    /*****************/
    // Nguyễn Minh Tú - 5502 - 732833
    set<T> c;
    for(T v : a){
        c.insert(v);
    }

    for(T v  : b){
        c.insert(v);
    }

    return c;
    /*****************/
}

template<class T>
set<T> set_intersection(const set<T> &a, const set<T> &b) {
    /*****************/
    // Nguyễn Minh Tú - 5502 - 732833
    set<T> c;
    for(T v : a){
        int index = 0;
        for(T u : b){
            if(v == u) index++;
        }
        if(index != 0) c.insert(v);
    }
    return c;
    /*****************/
}

// Nguyễn Minh Tú - 5502 - 732833
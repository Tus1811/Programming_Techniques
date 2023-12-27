// Nguyễn Minh Tú - 5502 - 732833
/* Bài tập 9:
Cài đặt thuật toán Dijkstra trên đồ thị vô hướng được biểu diễn bằng danh sách kề 
sử dụng priority_queue Cụ thể, bạn cần cài đặt hàm vector<int> dijkstra(const
vector< vector< pair<int, int> > >&adj) nhận đầu vào là danh sách kề chứa các 
cặp pair<int, int> biểu diễn đỉnh kề và trọng số tương ứng của cạnh. Đồ thị gồm n 
đỉnh được đánh số từ 0 tới n-1. Hàm cần trả vector<int> chứa n phần tử lần lượt là 
khoảng cách đường đi ngắn nhất từ đỉnh 0 tới các đỉnh 0, 1, 2, ..., n-1. */

struct compare{
    bool operator() (pair<int, int> a, pair<int, int> b){
        return a.second > b.second;
    }
};

vector<int> dijkstra(const vector< vector< pair<int, int> > >&adj) {
    /*****************/
    // Nguyễn Minh Tú - 5502 - 732833
    priority_queue<pair<int, int>, vector< pair<int, int> >, compare> q;

    vector<int> dist(adj.size());
    int dist_size = dist.size();
    for(int i=0; i<dist_size; i++){
        dist[i] = INT_MAX;
    }
    dist[0] = 0; // khoang cach tu 0 -> 0 = 0

    // khoi tao gia tri cho hang doi uu tien
    for(int i=0; i<dist_size; i++){
        q.push({i, dist[i]});
    }

    while(!q.empty()){
        pair<int, int> u_pair = q.top(); q.pop();
        int u = u_pair.first; // lay ra dinh co thu tu uu tien nhat trong hang doi

        for(auto v_pair : adj[u]){
            int v = v_pair.first;
            int weight = v_pair.second;

            if(dist[v] > dist[u] + weight){
                dist[v] = dist[u] + weight;
                q.push({v, dist[v]});
            }
        }
    }

    return dist;
    /*****************/
}

// Nguyễn Minh Tú - 5502 - 732833
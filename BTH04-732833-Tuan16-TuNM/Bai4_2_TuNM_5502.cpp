// Nguyễn Minh Tú - 5502 - 732833
// Bài tập 2: Tính diện tích tam giác

double distance(Point a, Point b){
    return sqrt((a.first - b.first)*(a.first - b.first) + (a.second - b.second)*(a.second - b.second));
}

double area(Point a, Point b, Point c) {
    /*****************/
    // Nguyễn Minh Tú - 5502 - 732833
    double ab = distance(a,b);
    double bc = distance(b,c);
    double ca = distance(c,a);

    double p = (ab + bc + ca) /2;
    return sqrt(p * (p-ab) * (p-bc) * (p-ca));
    /*****************/
}

// Nguyễn Minh Tú - 5502 - 732833
// Nguyễn Minh Tú - 5502 - 732833
// Bài tập 3: Tính tích có hướng của 2 vector

Vector cross_product(Vector a, Vector b) {
    /*****************/
    // Nguyễn Minh Tú - 5502 - 732833
    double x = (get<1>(a)*get<2>(b) - get<1>(b)*get<2>(a));
    double y = (get<2>(a)*get<0>(b) - get<0>(a)*get<2>(b));
    double z = (get<0>(a)*get<1>(b) - get<0>(b)*get<1>(a));
    return {x,y,z};
    /*****************/
}

// Nguyễn Minh Tú - 5502 - 732833
#include <iostream>

template <typename T>
T max_two (T M, T N) {

    if (M > N) return M;
    if (N > M) return N;
}




int main () {

    std::cout << max_two (5.6, 6.7);

}


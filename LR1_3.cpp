#include <iostream>

int main(){
    double summ = 0, A, B, N, q, p;
    std::cin >> A >> B >> N >> q >> p;
    for(int i = 1; i <= N; i++){
        summ += i * A * B;
        B = B * (1 + q/100);
        summ = summ * (1 + p/100);
    }
    std::cout << summ;
}

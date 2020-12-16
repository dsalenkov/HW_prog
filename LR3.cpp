#include <iostream>

int main(){
    int n, k = 0;
    std::cin >> n;
    double X[n], Y[n], R;
    for(int i = 0; i < n; i++)
        std::cin >> X[i] >> Y[i];
    double x0, y0;
    std::cin >> x0 >> y0 >> R;
    for(int i = 0; i < n; i++){
        if((X[i] - x0)*(X[i] - x0)+ (Y[i] - y0)*(Y[i] - y0) >= R^2)
            k++;
    }
    std::cout << k;
}

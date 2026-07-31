#include <iostream>
 /*Programmer : Aether*/

void solve(){
    int i[3];
    int j = 1;
        std::cin >> i[j];
            for( int k = j; k <= 1; k++ ){
                int t = i[k] - j + 2;
                std::cout << t << "\n";
            }
}

int main() {
    solve();
    return 0;
}

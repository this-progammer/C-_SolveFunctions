#include <iostream>
/*
  Programmer : Aether
*/
/*plate stack*/
void solve(){
    int i = 0;
    int plates[9999];
        std::cin >> plates[i];
            for( int j = i; j <= 0; j-- ){
                int k = plates[i];
                    for(;; k--){
                        std::cout << "plate : \t" << k << "\n";
                        while(k < 2){
                            k - 1;
                        }
                    }
            }
}

int main() {
    solve();
    return 0;
}

/*output : *note I used 10 for plates input*
          plate : 	10
          plate : 	9
          plate : 	8
          plate : 	7
          plate : 	6
          plate : 	5
          plate : 	4
          plate : 	3
          plate : 	2
          plate : 	1
*/

#include <iostream>
int main(){
  using u_t = unsigned;
  u_t a = 0;
  std::cin >> a;

  if (std::cin.eoF()){
    std::cout << 0 << "\n";
  }else if(std::cin.fail(){
    std::cerr << "Error\n";
    return 1;
  }
  return 0;
}

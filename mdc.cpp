#include <iostream> 
#include <string>

 unsigned mdc(unsigned m, unsigned n) {
int maior;
   for (int i=1; i<=m || i<=n; i++){ //mdc nao pode ser maior que os numeros utilizados 
       if (m/i && n/i){
         maior=i;
       }
   }
  return maior;
}

unsigned count_coprimes(unsigned m, unsigned n) {
    if(mdc(m,n)==1){
        return 1;
    } else {
    
  return 0;
}


enum class TestKind : char {
  mdc = 'm',
  coprimes = 'c',
};

int main() {
  char tkind;
  std::cin >> tkind;

  unsigned m, n;
  std::cin >> m >> n;
    
  switch (static_cast<TestKind>(tkind)) {
  case TestKind::mdc:
    std::cout << mdc(m, n) << std::endl;
    break;
  case TestKind::coprimes:
    std::cout << count_coprimes(m, n) << std::endl;
    break;
  }
  
  return 0;
}

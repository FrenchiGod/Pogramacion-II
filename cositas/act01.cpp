 # include <iostream>
 int modalidad, canal;
  int main(){
    std::cout << "AM=1 , FM=2 , Digital=3 \n";
    std::cout <<"ingrese una modalidad (1,2 o 3 ): ";
    std::cin >> modalidad;
    std::cout << "inrese el canal (1 a 40)";
    std::cin >> canal;
    switch (modalidad)
    {
    case 1:
        std::cout << "usted eligio la modalidad AM\n";
        break;
    case 2:
        std::cout << "usted eligio la modalidad FM \n";
        break;
    case 3:
        std::cout << "usted eligio la modalidad Digital\n";
        break;
    default:
        break;
    }
    if (canal >=1 and canal <=40){
        std::cout << "el canal elegido es " << canal;
        std::cout << "\n";

    }

  }
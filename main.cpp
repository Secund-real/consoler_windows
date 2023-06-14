
#include "commander.h"

COMMANDER ncom ;

int main () {
	char * uname , idconf;
	ncom.readFile("name_set.cah" , uname);
	ncom.readFile("idSettings.cah" , idconf);
	ncom.setConsoleColor(11);
	std::cout << "     #    " << std::endl;
    std::cout << "    # #   " << std::endl;
    std::cout << "   #   #  " << std::endl;
    std::cout << "  # ##### " << std::endl;
    std::cout << " #       #" << std::endl;

    ncom.setConsoleColor(14);
    std::cout << "*************" << std::endl;
    ncom.setConsoleColor(9);
    std::cout << "*  PROGRAMMING  *" << std::endl;
    std::cout << "*               * " << "<" << idconf << ">" << std::endl;
    std::cout << "*  IS FUN!      *" << std::endl;
    std::cout << "*************" << std::endl;

    ncom.setConsoleColor(10);
    std::cout << "   $$$$$$$  " << std::endl;
    std::cout << " $$      $$ " << std::endl;
    std::cout << "$$  ===  $$" << std::endl;
    std::cout << "$$  ===  $$" << std::endl;
    std::cout << " $$      $$ " << std::endl;
    std::cout << "   $$$$$$$  " << std::endl;

    ncom.setConsoleColor(7);
    
    while (true){
    	std::cout << "\n~~" << idconf << "~~|\n" << "$";
    	ncon.setConsoleColor(11);
    	std::cout << "-{" << uname << "}->";
    	std::cin.getline(ncom.command , BUFFER );
    	ncom.setConsoleColor(7);
    	ncom.run(ncom.command);
    	std::cout << "\n";
	}
	return 0;
}

#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        if(input[0] != '#')
            std::cout << "Please put # first when entering the color in hexadecimal format\n";

        for(int i = 0; i < input.size(); i++){
            if((input[i] >= '0' && input[i] <= '9') || (input[i] >= 'a' && input[i] <= 'f') || (input[i] >= 'A' && input[i] <= 'F'))
                std::cout << "Please enter the color in valid hexadecimal format, which involves 0-9, a-f, A-F\n";
        }

        
    }while( input.size() != RGB_HEX_LENGTH );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}

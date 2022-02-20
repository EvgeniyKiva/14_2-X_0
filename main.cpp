#include <iostream>


int main() {
    char field[3][3] = {{' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '},
                        };
    int x,y;
    int temp1 =0;
    int temp2 =0;
    bool win = false;
    int number_of_moves=0;

    while (!win){
        std::cout << "Player 1 (X) is playing! Enter coordinates from 0 to 2  - (x y)" << std::endl;
        std:: cin >> x >> y;
        while (x<0||y<0||x>2||y>2|| field[x][y] !=' '){
            std::cout << "The coordinates are incorrect. Try again - " << std::endl;
            std::cout << "Player 1 (X) is playing! Enter coordinates from 0 to 2  - (x y)" << std::endl;
            std:: cin >> x >> y;
        }
        field[x][y]='x';
        number_of_moves++;
        if (number_of_moves==9) break;

        for(int d=0; d<3; d++){
            for (int t=0; t<3; t++){
                std::cout << field[d][t] << " ";
            }
            std::cout << std::endl;
        }


        for (int n=0; n<3; n++) {
            for ( int m=0; m<3; m++){

                if (field[n][m]=='x')
                    temp1++;
                if (field[m][n]=='x')
                    temp2++;
            }

            if (temp1==3 || temp2==3){
                std::cout<< "Player 1 (X) - WIN!";
                win= true;
                break;
            }
            temp1=0;
            temp2=0;


        }

        if (win) break;

        std::cout << "Player 2 (0) is playing! Enter coordinates from 0 to 2  - (x y)" << std::endl;
        std:: cin >> x >> y;
        while (x<0||y<0||x>2||y>2|| field[x][y] !=' '){
            std::cout << "The coordinates are incorrect. Try again - " << std::endl;
            std::cout << "Player 2 (0) is playing! Enter coordinates from 0 to 2  - (x y)" << std::endl;
            std:: cin >> x >> y;
        }
        field[x][y]='0';
        number_of_moves++;

        for(int d=0; d<3; d++){
            for (int t=0; t<3; t++){
                std::cout << field[d][t] << " ";
            }
            std::cout << std::endl;
        }

        for (int n=0; n<3; n++) {
            for ( int m=0; m<3; m++){
                if (field[n][m]=='0')
                    temp1++;
                if (field[m][n]=='0')
                    temp2++;
            }
            if (temp1==3 || temp2==3){
                std::cout<< "Player 2 (0) - WIN!";
                win= true;
                break;
            }
            temp1=0;
            temp2=0;

        }

    }
    if (!win)  std::cout << "Draw!";



    return 0;
}

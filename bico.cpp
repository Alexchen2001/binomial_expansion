//
// Alexander Chen SU ID #: 4186272
// bico.cpp
// Completed on 9/27/2022

// Purpose: Utilizing the ideology of Pascal's triangle to perform binomial expansion
// and being able to locate the value of the given index of the desired degree
// of binomial expansion.

#include <iostream>
#include <string>
using namespace std;


string bico(int x, int y){
    /* x serves as the number of row
     y serves as the targeted index number, index begins from 0
     */


    if (x == 0 & y == 0){
        int val;
        val = 1;
        return to_string(val);
    } else if ( y > x || y < 0){
        string error_msg;
        error_msg =" Index Does Not Exist in the degree of binomial !";
        return error_msg;
    }else{
        x = x + 1;

        /* loops through each row and index of pascal triangle (binomial expansion)
         to find the targeted value, utilized the combination formula  */
        for(int row_num = 1; row_num <= x; row_num++){

            int val = 1;
            for(int index_num = 0; index_num < row_num; index_num++){
                if (row_num == x && index_num == y ){
                    return to_string(val);

                }
                val = val * (row_num - (index_num+ 1))/(index_num+1);
            }
        }
    }
}

int main() {
    int num_of_row, target_index;
    string result;

    cout << " Please input the degree of the binomial:"; // printing message in console
    cin >> num_of_row;
    cout << "\n";

    cout << " Please input the index of the coefficient: ";
    cin >> target_index;
    cout << "\n";

    result = bico( num_of_row,target_index);
    cout << "The result is : " << result << "\n";
    return 0;
}

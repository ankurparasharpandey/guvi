#include <iostream>
#include <cstring>
using namespace std;
int main()
{
   int matrix[4][4]={ {0, 0, 0, 0},
                      {0, 0, 0, 0},
                      {0, 1, 1, 1},
                      {0, 1, 1, 1},
                };
   int row = 3 ; 
   int col = 0;
   int zero = 0;
   
   while( col < 4 )
   {
        if( matrix[row][col] == 0 )
        {
            zero += ( row + 1 );
            col++;
        }
        else
        {
            row--;
        }
   }

    printf("Zero:%d\n", zero);

}

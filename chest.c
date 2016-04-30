#include <stdio.h>

int main(void){

  int board[8][8],x,y;

  for(x=0; x<8;x++){
    for(y=0; y<8;y++){
      board[x][y] = 0;
      }

    }



    for(x=0; x<8;x++){
      for(y=0; y<8;y++){
        printf("%d \t",board[x][y]);
        }
        printf("\n");
      }
    return 0;
}

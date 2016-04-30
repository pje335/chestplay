#include <stdio.h>

int board[8][8],a=0,x,y,row,colum;
char q;

/*making a new clean*/
void playboard(){
  for(x=0; x<8;x++){
    for(y=0; y<8;y++){
        board[x][y] = 0;
    }

  }
}

/*printing the board*/
void print(){
  printf("\n");
    for(x=0; x<8;x++){
      for(y=0; y<8;y++){
        printf("%d \t",board[x][y]);
        }
        printf("\n");
      }
}


void placement(row,colum){

      board[row][colum] = 1;
  for(x=0; x<8;x++){
    if(board[row][x] != 1){
      board[row][x] = 5;
    }
  }
  for(x=0; x<8;x++){
    if(board[x][colum] != 1){
      board[x][colum] = 5;
    }
  }
  print();
}


/*asking the user for input*/
  void input(){
    printf("Please enter the row: " );
    scanf("%d",&row );
    row -= 1;
    printf("Please enter the coulum: " );
    scanf("%d",&colum);
    colum -= 1;

    /*Checking if the input is valid*/

    if(row < 0 || row > 7 || colum < 0 || row > 7){
      printf("INPUT IS INVALID, IT IS OFF  THE  BOARD! Try again\n" );
      input();
    }
    else if (board[row][colum] == 5){
      printf("THIS POSITION HAS ALREADY BEEN CHOSEN. TRY AGAIN\n" );
      input();
    }
    else if (board[row][colum] == 1){
      printf("THIS POSITION IS NOT POSIBLE DUE TO A OTHER QUEEN. TRY AGAIN \n" );
      input();
    }
    else{
      placement(row,colum);
    }

  }







int main(void){
  playboard();
  print();
  while(a == 0){
    a = 1;
    printf("Do you want to contiunu? (Y/N):" );
    scanf("%c",&q );
    printf("\n" );
    if (q == 'N' || q == 'n'  ){
      a = 1;
      printf("PROGRAM STOPPING\n" );
    }
    else if(q == 'Y' || q == 'y'  ) {
      a = 0;
      input();
    }

    }

  return 0;

}

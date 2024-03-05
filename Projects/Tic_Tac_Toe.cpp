#include <iostream>
#include <iomanip>
using namespace std;

char board[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char player='X';

void Entry(){
    int pos;
    static int check_lst[9]={0,0,0,0,0,0,0,0,0};
    input:
    cout<<"Enter the position: ";
    cin>>pos;

    //-------------------------------------------------checking for duplicate entry:
    if(check_lst[pos-1]==1){
        cout<<"Invalid Entry"<<endl;
        goto input;
    }

    check_lst[pos-1]++;
    if(pos==1) board[0][0]=player;
    else if(pos==2) board[0][1]=player;
    else if(pos==3) board[0][2]=player;
    else if(pos==4) board[1][0]=player;
    else if(pos==5) board[1][1]=player;
    else if(pos==6) board[1][2]=player;
    else if(pos==7) board[2][0]=player;
    else if(pos==8) board[2][1]=player;
    else if(pos==9) board[2][2]=player;
    else{
        cout<<"Invalid Entry"<<endl;
        goto input;
    }
}

//-----------------------------------------------Switching the player
void switch_player(){
    if(player=='X') player='O';
    else player='X';
}

//-----------------------------------------------Displaying the board
void display_board(){
    system("cls");
    cout<<"+---+---+---+"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(j==0) cout<<"| ";
            cout<<setw(1)<<board[i][j]<<setw(2)<<" | ";
        }
        cout<<endl<<"+---+---+---+"<<endl;
    }
}

//-----------------------------------------------To determine the winner: 
char winner(){
    //----------------------------------------------------------Horizontal win:
    for(int vert=0; vert<3; vert++){
        //-----------------------------------------------------------For X:
        if((board[vert][0]=='X')&&(board[vert][1]=='X')&&(board[vert][2]=='X')) return 'x';

        //-----------------------------------------------------------For O:
        else if((board[vert][0]=='O')&&(board[vert][1]=='O')&&(board[vert][2]=='O')) return 'o';
    }    
    
    //-----------------------------------------------------Vertical win:
    for(int hori=0; hori<3; hori++){
        //-----------------------------------------------------------For X:
        if((board[0][hori]=='X')&&(board[1][hori]=='X')&&(board[2][hori]=='X')) return 'x';

        //-----------------------------------------------------------For O:
        else if((board[0][hori]=='O')&&(board[1][hori]=='O')&&(board[2][hori]=='O')) return 'o';
    }  

    //-------------------------------------------Diagonal win: 
    //-----------------------------------------------------Major diagonal:
    if((board[0][0]=='X')&&(board[1][1]=='X')&&(board[2][2]=='X')) return 'x';
    if((board[0][0]=='O')&&(board[1][1]=='O')&&(board[2][2]=='O')) return 'o';
    //-----------------------------------------------------Minor diagonal:
    else if((board[0][2]=='X')&&(board[1][1]=='X')&&(board[2][0]=='X')) return 'x';
    else if((board[0][2]=='O')&&(board[1][1]=='O')&&(board[2][0]=='O')) return 'o';

    //-------------------------------------------For draw
    int x_=0, o_=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(board[i][j]=='X') x_++;
            else if(board[i][j]=='O') o_++;
        }
    }

    if((x_==5 && o_==4)||(x_==4 && o_==5)) return '/';

    return '?';
}

void board_setup(){
    int count=0;
    cout<<"+---+---+---+"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            count++;
            if(j==0) cout<<"| ";
            cout<<setw(1)<<count<<setw(2)<<" | ";
        }
        cout<<endl<<"+---+---+---+"<<endl;
    }
}

int main(int sinh, char const *cosech[]){
    cout<<"Board Setup: "<<endl;
    board_setup();
    cout<<endl;

    while(true){
        Entry();
        display_board();

        if(winner()=='x'){
            cout<<"X is the winner"<<endl;
            break;
        }

        if(winner()=='o'){
            cout<<"O is the winner"<<endl;
            break;
        }

        if(winner()=='/'){
            cout<<"It is a draw"<<endl;
            break;
        }

        switch_player();
    }

    return 0;
}
//這項作業由黃尹頡同學提供給我了解並修改
#include <stdio.h>
int main(){
    int chess[8][8] = {}, address_x = 0, address_y = 0;
    int direction[8][2] = {{-1,-1}, {-1,0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    //使用者輸入棋盤
    for( int i = 0; i < 8; i++ ){
        for( int j = 0; j < 8; j++ ){
            scanf("%1d", &chess[i][j]);
        }
    }
    //指定(i,j)，尹頡改成了(address_x,address_y)
    scanf("%d,%d", &address_x, &address_y);
    //如果(address_x,address_y)空白，則其周圍都不能下
    if( chess[address_y][address_x] == 0 ){
        printf("(%d,%d) is 0", address_x, address_y);
        return 0;
    }
    //已確認(address_x,address_y)不是空白
    int color = chess[address_y][address_x]; //賦予變數color跟(address_x,address_y)一樣的數值

    for( int i = 0; i < 8; i++){
        int x = address_x, y = address_y;
        int con = 0;
        for( int k = 0; k < 8; k++ ){
            x += _direction[i][0];
            y += _direction[i][1];
                                
            if( (x >= 0 && x < 8) && (y >= 0 && y < 8) ){
                if( chess[y][x] == 0 && con ){
                    chess[y][x] = 120;
                    break;
                }
                con = ( chess[y][x] == 3 - color ) ? 1:0;    
            } 
        }
    }

    for( int i = 0; i < 8; i++ ){
        for( int j = 0; j < 8; j++ ){
            if( chess[i][j] == 120){
                printf("%c ", chess[i][j]);
                continue;
            }
            printf("%d ", chess[i][j]);
        }
        printf("\n");
    }
    return 0;
}

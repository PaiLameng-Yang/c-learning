#include <stdio.h>
void printMap(char map[6][6], int px, int py)
{
    for (int yy = 0; yy < 6; yy++) {
        for (int xx = 0; xx < 6; xx++) {
            if (yy == py && xx == px)
                putchar('@');          /* 这一格是玩家 */
            else
                putchar(map[yy][xx]);  /* 否则打印地图原字符 */
        }
        putchar('\n');                 /* 一行打完，换行 */
    }
}

int main(){
    char map[6][6] = {
        {'#','#','#','#','#','#'},
        {'#','.','.','.','.','#'},
        {'#','.','#','#','.','#'},
        {'#','.','.','.','.','#'},
        {'#','.','.','.','.','#'},
        {'#','#','#','#','#','#'},
    };
    char action;
    int x = 1;
    int y = 1;
    
    printMap(map, x, y);

    while (scanf(" %c", &action) == 1){
        if(action == 'q'){
            printf("bye\n");
            break;
        }
        
        int nx = x, ny = y;         

        if (action == 'w') ny--;
        else if (action == 's') ny++;
        else if (action == 'a') nx--;
        else if (action == 'd') nx++;
        else continue;               

        if (map[ny][nx] != '#') {   
            x = nx;
            y = ny;
        }

        printMap(map, x, y);
        printf("pos: (%d,%d)\n", x, y);

    }
    return 0;
}
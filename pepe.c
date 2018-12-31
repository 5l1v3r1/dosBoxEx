#include <graphics.h>
#include <conio.h>

#define BASE_X 100
#define BASE_Y 100
#define MULTP 10

void putpixels(int inputX, int inputY, int color);

int main()
{
    int gd = DETECT, gm;
    int x = 100;
    int y = 100;
    int k = 10;
    void *d;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    setbkcolor(BLACK);

    // pepe

    //1
    putpixels(1, 13, BLUE);
    putpixels(1, 14, BLUE);
    putpixels(1, 15, BLUE);
    putpixels(1, 16, BLUE);
    putpixels(1, 17, BLUE);
    putpixels(1, 18, BLUE);
    putpixels(1, 19, BLUE);
    putpixels(1, 20, BLUE);
    putpixels(1, 21, BLUE);
    putpixels(1, 22, BLUE);

    //2
    putpixels(2, 13, BLUE);
    putpixels(2, 12, BLUE);
    putpixels(2, 14, GREEN);
    putpixels(2, 15, GREEN);
    putpixels(2, 16, GREEN);
    putpixels(2, 17, GREEN);
    putpixels(2, 18, GREEN);
    putpixels(2, 19, GREEN);
    putpixels(2, 20, GREEN);
    putpixels(2, 21, GREEN);
    putpixels(2, 22, BLUE);
    putpixels(2, 23, BLUE);

    //3
    putpixels(3, 10, BLUE);
    putpixels(3, 11, BLUE);
    putpixels(3, 12, GREEN);
    putpixels(3, 13, GREEN);
    putpixels(3, 14, GREEN);
    putpixels(3, 15, GREEN);
    putpixels(3, 16, GREEN);
    putpixels(3, 17, GREEN);
    putpixels(3, 18, GREEN);
    putpixels(3, 19, GREEN);
    putpixels(3, 20, GREEN);
    putpixels(3, 21, GREEN);
    putpixels(3, 22, GREEN);
    putpixels(3, 23, GREEN);
    putpixels(3, 24, BLUE);

    //4
    putpixels(4, 9, BLUE);
    putpixels(4, 10, GREEN);
    putpixels(4, 11, GREEN);
    putpixels(4, 12, GREEN);
    putpixels(4, 13, GREEN);
    putpixels(4, 14, GREEN);
    putpixels(4, 15, GREEN);
    putpixels(4, 16, GREEN);
    putpixels(4, 17, GREEN);
    putpixels(4, 18, GREEN);
    putpixels(4, 19, GREEN);
    putpixels(4, 20, GREEN);
    putpixels(4, 21, GREEN);
    putpixels(4, 22, GREEN);
    putpixels(4, 23, GREEN);
    putpixels(4, 24, BLUE);

    //5
    putpixels(5, 8, BLUE);
    putpixels(5, 9, GREEN);
    putpixels(5, 10, GREEN);
    putpixels(5, 11, GREEN);
    putpixels(5, 12, GREEN);
    putpixels(5, 13, GREEN);
    putpixels(5, 14, GREEN);
    putpixels(5, 15, GREEN);
    putpixels(5, 16, GREEN);
    putpixels(5, 17, GREEN);
    putpixels(5, 18, GREEN);
    putpixels(5, 19, GREEN);
    putpixels(5, 20, GREEN);
    putpixels(5, 21, GREEN);
    putpixels(5, 22, GREEN);
    putpixels(5, 23, GREEN);
    putpixels(5, 24, BLUE);

    //6;
    putpixels(6, 8, BLUE);
    putpixels(6, 7, BLUE);
    putpixels(6, 9, GREEN);
    putpixels(6, 10, GREEN);
    putpixels(6, 11, GREEN);
    putpixels(6, 12, GREEN);
    putpixels(6, 13, GREEN);
    putpixels(6, 14, GREEN);
    putpixels(6, 15, GREEN);
    putpixels(6, 16, GREEN);
    putpixels(6, 17, GREEN);
    putpixels(6, 18, GREEN);
    putpixels(6, 19, GREEN);
    putpixels(6, 20, GREEN);
    putpixels(6, 21, GREEN);
    putpixels(6, 22, GREEN);
    putpixels(6, 23, GREEN);
    putpixels(6, 24, GREEN);
    putpixels(6, 25, BLUE);

    //7
    putpixels(7, 5, BLUE);
    putpixels(7, 6, BLUE);
    putpixels(7, 7, GREEN);
    putpixels(7, 8, GREEN);
    putpixels(7, 9, GREEN);
    putpixels(7, 10, GREEN);
    putpixels(7, 11, GREEN);
    putpixels(7, 12, GREEN);
    putpixels(7, 13, GREEN);
    putpixels(7, 14, GREEN);
    putpixels(7, 15, GREEN);
    putpixels(7, 16, GREEN);
    putpixels(7, 17, GREEN);
    putpixels(7, 18, GREEN);
    putpixels(7, 19, GREEN);
    putpixels(7, 20, GREEN);
    putpixels(7, 21, GREEN);
    putpixels(7, 22, GREEN);
    putpixels(7, 23, GREEN);
    putpixels(7, 24, GREEN);
    putpixels(7, 25, BLUE);

    //8
    putpixels(8, 4, BLUE);
    putpixels(8, 5, GREEN);
    putpixels(8, 6, GREEN);
    putpixels(8, 7, GREEN);
    putpixels(8, 8, GREEN);
    putpixels(8, 9, GREEN);
    putpixels(8, 10, GREEN);
    putpixels(8, 11, GREEN);
    putpixels(8, 12, GREEN);
    putpixels(8, 13, GREEN);
    putpixels(8, 14, GREEN);
    putpixels(8, 15, GREEN);
    putpixels(8, 16, GREEN);
    putpixels(8, 17, GREEN);
    putpixels(8, 18, GREEN);
    putpixels(8, 19, GREEN);
    putpixels(8, 20, GREEN);
    putpixels(8, 21, GREEN);
    putpixels(8, 22, GREEN);
    putpixels(8, 23, GREEN);
    putpixels(8, 24, GREEN);
    putpixels(8, 25, BLUE);

    //9
    putpixels(9, 3, BLUE);
    putpixels(9, 4, GREEN);
    putpixels(9, 5, GREEN);
    putpixels(9, 6, GREEN);
    putpixels(9, 7, GREEN);
    putpixels(9, 8, GREEN);
    putpixels(9, 9, GREEN);
    putpixels(9, 10, GREEN);
    putpixels(9, 11, GREEN);
    putpixels(9, 12, GREEN);
    putpixels(9, 13, GREEN);
    putpixels(9, 14, GREEN);
    putpixels(9, 15, GREEN);
    putpixels(9, 16, GREEN);
    putpixels(9, 17, GREEN);
    putpixels(9, 18, GREEN);
    putpixels(9, 19, GREEN);
    putpixels(9, 20, GREEN);
    putpixels(9, 21, GREEN);
    putpixels(9, 22, GREEN);
    putpixels(9, 23, GREEN);
    putpixels(9, 24, GREEN);
    putpixels(9, 25, GREEN);
    putpixels(9, 26, BLUE);

    ///10
    putpixels(10, 2, BLUE);
    putpixels(10, 3, GREEN);
    putpixels(10, 4, GREEN);
    putpixels(10, 5, GREEN);
    putpixels(10, 6, BLUE);
    putpixels(10, 7, GREEN);
    putpixels(10, 8, GREEN);
    putpixels(10, 9, GREEN);
    putpixels(10, 10, GREEN);
    putpixels(10, 11, GREEN);
    putpixels(10, 12, GREEN);
    putpixels(10, 13, GREEN);
    putpixels(10, 14, GREEN);
    putpixels(10, 15, GREEN);
    putpixels(10, 16, GREEN);
    putpixels(10, 17, BLUE);
    putpixels(10, 18, BLUE);
    putpixels(10, 19, BLUE);
    putpixels(10, 20, GREEN);
    putpixels(10, 21, GREEN);
    putpixels(10, 22, GREEN);
    putpixels(10, 23, GREEN);
    putpixels(10, 24, GREEN);
    putpixels(10, 25, GREEN);
    putpixels(10, 26, BLUE);

    //11
    putpixels(11, 2, BLUE);
    putpixels(11, 3, GREEN);
    putpixels(11, 4, GREEN);
    putpixels(11, 5, BLUE);
    putpixels(11, 6, GREEN);
    putpixels(11, 7, GREEN);
    putpixels(11, 8, GREEN);
    putpixels(11, 9, GREEN);
    putpixels(11, 10, BLUE);
    putpixels(11, 11, GREEN);
    putpixels(11, 12, GREEN);
    putpixels(11, 13, GREEN);
    putpixels(11, 14, GREEN);
    putpixels(11, 15, GREEN);
    putpixels(11, 16, BLUE);
    putpixels(11, 17, RED);
    putpixels(11, 18, RED);
    putpixels(11, 19, RED);
    putpixels(11, 20, BLUE);
    putpixels(11, 21, GREEN);
    putpixels(11, 22, GREEN);
    putpixels(11, 23, GREEN);
    putpixels(11, 24, GREEN);
    putpixels(11, 25, GREEN);
    putpixels(11, 26, BLUE);

    //12
    putpixels(12, 2, BLUE);
    putpixels(12, 3, GREEN);
    putpixels(12, 4, GREEN);
    putpixels(12, 5, BLUE);
    putpixels(12, 6, GREEN);
    putpixels(12, 7, GREEN);
    putpixels(12, 8, GREEN);
    putpixels(12, 9, BLUE);
    putpixels(12, 10, WHITE);
    putpixels(12, 11, BLUE);
    putpixels(12, 12, BLUE);
    putpixels(12, 13, GREEN);
    putpixels(12, 14, GREEN);
    putpixels(12, 15, GREEN);
    putpixels(12, 16, BLUE);
    putpixels(12, 17, RED);
    putpixels(12, 18, BLUE);
    putpixels(12, 19, RED);
    putpixels(12, 20, BLUE);
    putpixels(12, 21, GREEN);
    putpixels(12, 22, GREEN);
    putpixels(12, 23, GREEN);
    putpixels(12, 24, GREEN);
    putpixels(12, 25, GREEN);
    putpixels(12, 26, BLUE);

    //13
    putpixels(13, 2, BLUE);
    putpixels(13, 3, GREEN);
    putpixels(13, 4, GREEN);
    putpixels(13, 5, BLUE);
    putpixels(13, 6, GREEN);
    putpixels(13, 7, GREEN);
    putpixels(13, 8, GREEN);
    putpixels(13, 9, BLUE);
    putpixels(13, 10, BLUE);
    putpixels(13, 11, WHITE);
    putpixels(13, 12, BLUE);
    putpixels(13, 13, GREEN);
    putpixels(13, 14, GREEN);
    putpixels(13, 15, GREEN);
    putpixels(13, 16, BLUE);
    putpixels(13, 17, RED);
    putpixels(13, 18, BLUE);
    putpixels(13, 19, RED);
    putpixels(13, 20, BLUE);
    putpixels(13, 21, GREEN);
    putpixels(13, 22, GREEN);
    putpixels(13, 23, GREEN);
    putpixels(13, 24, GREEN);
    putpixels(13, 25, GREEN);
    putpixels(13, 26, BLUE);

    //14
    putpixels(14, 2, BLUE);
    putpixels(14, 3, GREEN);
    putpixels(14, 4, GREEN);
    putpixels(14, 5, BLUE);
    putpixels(14, 6, GREEN);
    putpixels(14, 7, GREEN);
    putpixels(14, 8, BLUE);
    putpixels(14, 9, GREEN);
    putpixels(14, 10, BLUE);
    putpixels(14, 11, WHITE);
    putpixels(14, 12, BLUE);
    putpixels(14, 13, BLUE);
    putpixels(14, 14, GREEN);
    putpixels(14, 15, GREEN);
    putpixels(14, 16, BLUE);
    putpixels(14, 17, RED);
    putpixels(14, 18, BLUE);
    putpixels(14, 19, RED);
    putpixels(14, 20, BLUE);
    putpixels(14, 21, GREEN);
    putpixels(14, 22, GREEN);
    putpixels(14, 23, GREEN);
    putpixels(14, 24, GREEN);
    putpixels(14, 25, GREEN);
    putpixels(14, 26, BLUE);

    //15
    putpixels(15, 2, BLUE);
    putpixels(15, 3, GREEN);
    putpixels(15, 4, GREEN);
    putpixels(15, 5, BLUE);
    putpixels(15, 6, GREEN);
    putpixels(15, 7, GREEN);
    putpixels(15, 8, BLUE);
    putpixels(15, 9, GREEN);
    putpixels(15, 10, BLUE);
    putpixels(15, 11, WHITE);
    putpixels(15, 12, WHITE);
    putpixels(15, 13, BLUE);
    putpixels(15, 14, GREEN);
    putpixels(15, 15, GREEN);
    putpixels(15, 16, BLUE);
    putpixels(15, 17, RED);
    putpixels(15, 18, BLUE);
    putpixels(15, 19, RED);
    putpixels(15, 20, BLUE);
    putpixels(15, 21, GREEN);
    putpixels(15, 22, GREEN);
    putpixels(15, 23, GREEN);
    putpixels(15, 24, GREEN);
    putpixels(15, 25, GREEN);
    putpixels(15, 26, BLUE);

    //16
    putpixels(16, 2, BLUE);
    putpixels(16, 3, GREEN);
    putpixels(16, 4, GREEN);
    putpixels(16, 5, BLUE);
    putpixels(16, 6, GREEN);
    putpixels(16, 7, BLUE);
    putpixels(16, 8, GREEN);
    putpixels(16, 9, BLUE);
    putpixels(16, 10, WHITE);
    putpixels(16, 11, BLUE);
    putpixels(16, 12, BLUE);
    putpixels(16, 13, BLUE);
    putpixels(16, 14, GREEN);
    putpixels(16, 15, GREEN);
    putpixels(16, 16, BLUE);
    putpixels(16, 17, RED);
    putpixels(16, 18, BLUE);
    putpixels(16, 19, RED);
    putpixels(16, 20, BLUE);
    putpixels(16, 21, GREEN);
    putpixels(16, 22, GREEN);
    putpixels(16, 23, GREEN);
    putpixels(16, 24, GREEN);
    putpixels(16, 25, GREEN);
    putpixels(16, 26, BLUE);

    //17
    putpixels(17, 3, BLUE);
    putpixels(17, 4, GREEN);
    putpixels(17, 5, BLUE);
    putpixels(17, 6, GREEN);
    putpixels(17, 7, BLUE);
    putpixels(17, 8, GREEN);
    putpixels(17, 9, BLUE);
    putpixels(17, 10, BLUE);
    putpixels(17, 11, WHITE);
    putpixels(17, 12, BLUE);
    putpixels(17, 13, BLUE);
    putpixels(17, 14, GREEN);
    putpixels(17, 15, GREEN);
    putpixels(17, 16, BLUE);
    putpixels(17, 17, RED);
    putpixels(17, 18, BLUE);
    putpixels(17, 19, RED);
    putpixels(17, 20, BLUE);
    putpixels(17, 21, GREEN);
    putpixels(17, 22, GREEN);
    putpixels(17, 23, GREEN);
    putpixels(17, 24, GREEN);
    putpixels(17, 25, GREEN);
    putpixels(17, 26, BLUE);

    //18
    putpixels(18, 4, BLUE);
    putpixels(18, 5, GREEN);
    putpixels(18, 6, BLUE);
    putpixels(18, 7, GREEN);
    putpixels(18, 8, BLUE);
    putpixels(18, 9, BLUE);
    putpixels(18, 10, BLUE);
    putpixels(18, 11, BLUE);
    putpixels(18, 12, BLUE);
    putpixels(18, 13, BLUE);
    putpixels(18, 14, BLUE);
    putpixels(18, 15, GREEN);
    putpixels(18, 16, BLUE);
    putpixels(18, 17, RED);
    putpixels(18, 18, BLUE);
    putpixels(18, 19, RED);
    putpixels(18, 20, BLUE);
    putpixels(18, 21, GREEN);
    putpixels(18, 22, GREEN);
    putpixels(18, 23, GREEN);
    putpixels(18, 24, GREEN);
    putpixels(18, 25, GREEN);
    putpixels(18, 26, BLUE);

    //19
    putpixels(19, 3, BLUE);
    putpixels(19, 4, GREEN);
    putpixels(19, 5, GREEN);
    putpixels(19, 6, GREEN);
    putpixels(19, 7, BLUE);
    putpixels(19, 8, BLUE);
    putpixels(19, 9, BLUE);
    putpixels(19, 10, BLUE);
    putpixels(19, 11, BLUE);
    putpixels(19, 12, BLUE);
    putpixels(19, 13, BLUE);
    putpixels(19, 14, BLUE);
    putpixels(19, 15, GREEN);
    putpixels(19, 16, BLUE);
    putpixels(19, 17, RED);
    putpixels(19, 18, BLUE);
    putpixels(19, 19, RED);
    putpixels(19, 20, BLUE);
    putpixels(19, 21, GREEN);
    putpixels(19, 22, GREEN);
    putpixels(19, 23, GREEN);
    putpixels(19, 24, GREEN);
    putpixels(19, 25, GREEN);
    putpixels(19, 26, BLUE);

    //20
    putpixels(20, 2, BLUE);
    putpixels(20, 3, GREEN);
    putpixels(20, 4, GREEN);
    putpixels(20, 5, GREEN);
    putpixels(20, 6, BLUE);
    putpixels(20, 7, GREEN);
    putpixels(20, 8, BLUE);
    putpixels(20, 9, BLUE);
    putpixels(20, 10, BLUE);
    putpixels(20, 11, WHITE);
    putpixels(20, 12, BLUE);
    putpixels(20, 13, BLUE);
    putpixels(20, 14, GREEN);
    putpixels(20, 15, GREEN);
    putpixels(20, 16, GREEN);
    putpixels(20, 17, BLUE);
    putpixels(20, 18, RED);
    putpixels(20, 19, BLUE);
    putpixels(20, 20, RED);
    putpixels(20, 21, BLUE);
    putpixels(20, 22, GREEN);
    putpixels(20, 23, GREEN);
    putpixels(20, 24, GREEN);
    putpixels(20, 25, GREEN);
    putpixels(20, 26, BLUE);

    //21
    putpixels(21, 1, BLUE);
    putpixels(21, 2, GREEN);
    putpixels(21, 3, GREEN);
    putpixels(21, 4, GREEN);
    putpixels(21, 5, BLUE);
    putpixels(21, 6, GREEN);
    putpixels(21, 7, GREEN);
    putpixels(21, 8, BLUE);
    putpixels(21, 9, WHITE);
    putpixels(21, 10, BLUE);
    putpixels(21, 11, BLUE);
    putpixels(21, 12, BLUE);
    putpixels(21, 13, GREEN);
    putpixels(21, 14, GREEN);
    putpixels(21, 15, GREEN);
    putpixels(21, 16, GREEN);
    putpixels(21, 17, BLUE);
    putpixels(21, 18, RED);
    putpixels(21, 19, BLUE);
    putpixels(21, 20, RED);
    putpixels(21, 21, BLUE);
    putpixels(21, 22, GREEN);
    putpixels(21, 23, GREEN);
    putpixels(21, 24, GREEN);
    putpixels(21, 25, BLUE);

    //22;
    putpixels(22, 1, BLUE);
    putpixels(22, 2, GREEN);
    putpixels(22, 3, GREEN);
    putpixels(22, 4, BLUE);
    putpixels(22, 5, GREEN);
    putpixels(22, 6, GREEN);
    putpixels(22, 7, GREEN);
    putpixels(22, 8, BLUE);
    putpixels(22, 9, WHITE);
    putpixels(22, 10, WHITE);
    putpixels(22, 11, BLUE);
    putpixels(22, 12, GREEN);
    putpixels(22, 13, GREEN);
    putpixels(22, 14, GREEN);
    putpixels(22, 15, GREEN);
    putpixels(22, 16, GREEN);
    putpixels(22, 17, BLUE);
    putpixels(22, 18, RED);
    putpixels(22, 19, BLUE);
    putpixels(22, 20, RED);
    putpixels(22, 21, BLUE);
    putpixels(22, 22, GREEN);
    putpixels(22, 23, GREEN);
    putpixels(22, 24, GREEN);
    putpixels(22, 25, BLUE);

    //23;
    putpixels(23, 1, BLUE);
    putpixels(23, 2, GREEN);
    putpixels(23, 3, GREEN);
    putpixels(23, 4, BLUE);
    putpixels(23, 5, GREEN);
    putpixels(23, 6, GREEN);
    putpixels(23, 7, BLUE);
    putpixels(23, 8, GREEN);
    putpixels(23, 9, BLUE);
    putpixels(23, 10, BLUE);
    putpixels(23, 11, GREEN);
    putpixels(23, 12, GREEN);
    putpixels(23, 13, BLUE);
    putpixels(23, 14, GREEN);
    putpixels(23, 15, GREEN);
    putpixels(23, 16, GREEN);
    putpixels(23, 17, BLUE);
    putpixels(23, 18, RED);
    putpixels(23, 19, BLUE);
    putpixels(23, 20, RED);
    putpixels(23, 21, BLUE);
    putpixels(23, 22, GREEN);
    putpixels(23, 23, GREEN);
    putpixels(23, 24, BLUE);

    //24
    putpixels(24, 1, BLUE);
    putpixels(24, 2, GREEN);
    putpixels(24, 3, GREEN);
    putpixels(24, 4, BLUE);
    putpixels(24, 5, GREEN);
    putpixels(24, 6, GREEN);
    putpixels(24, 7, BLUE);
    putpixels(24, 8, BLUE);
    putpixels(24, 9, WHITE);
    putpixels(24, 10, WHITE);
    putpixels(24, 11, BLUE);
    putpixels(24, 12, GREEN);
    putpixels(24, 13, BLUE);
    putpixels(24, 14, GREEN);
    putpixels(24, 15, GREEN);
    putpixels(24, 16, GREEN);
    putpixels(24, 17, BLUE);
    putpixels(24, 18, RED);
    putpixels(24, 19, BLUE);
    putpixels(24, 20, RED);
    putpixels(24, 21, BLUE);
    putpixels(24, 22, GREEN);
    putpixels(24, 23, GREEN);
    putpixels(24, 24, BLUE);

    //25
    putpixels(25, 1, BLUE);
    putpixels(25, 2, GREEN);
    putpixels(25, 3, GREEN);
    putpixels(25, 4, BLUE);
    putpixels(25, 5, GREEN);
    putpixels(25, 6, BLUE);
    putpixels(25, 7, GREEN);
    putpixels(25, 8, BLUE);
    putpixels(25, 9, WHITE);
    putpixels(25, 10, WHITE);
    putpixels(25, 11, BLUE);
    putpixels(25, 12, GREEN);
    putpixels(25, 13, BLUE);
    putpixels(25, 14, BLUE);
    putpixels(25, 15, GREEN);
    putpixels(25, 16, GREEN);
    putpixels(25, 17, BLUE);
    putpixels(25, 18, RED);
    putpixels(25, 19, BLUE);
    putpixels(25, 20, RED);
    putpixels(25, 21, BLUE);
    putpixels(25, 22, GREEN);
    putpixels(25, 23, GREEN);
    putpixels(25, 24, BLUE);

    //26;
    putpixels(26, 2, BLUE);
    putpixels(26, 3, GREEN);
    putpixels(26, 4, BLUE);
    putpixels(26, 5, GREEN);
    putpixels(26, 6, BLUE);
    putpixels(26, 7, GREEN);
    putpixels(26, 8, BLUE);
    putpixels(26, 9, WHITE);
    putpixels(26, 10, WHITE);
    putpixels(26, 11, BLUE);
    putpixels(26, 12, GREEN);
    putpixels(26, 13, BLUE);
    putpixels(26, 14, GREEN);
    putpixels(26, 15, GREEN);
    putpixels(26, 16, GREEN);
    putpixels(26, 17, BLUE);
    putpixels(26, 18, RED);
    putpixels(26, 19, BLUE);
    putpixels(26, 20, RED);
    putpixels(26, 21, BLUE);
    putpixels(26, 22, GREEN);
    putpixels(26, 23, BLUE);

    //27;
    putpixels(27, 2, BLUE);
    putpixels(27, 3, GREEN);
    putpixels(27, 4, BLUE);
    putpixels(27, 5, GREEN);
    putpixels(27, 6, BLUE);
    putpixels(27, 7, GREEN);
    putpixels(27, 8, BLUE);
    putpixels(27, 9, WHITE);
    putpixels(27, 10, BLUE);
    putpixels(27, 11, BLUE);
    putpixels(27, 12, GREEN);
    putpixels(27, 13, BLUE);
    putpixels(27, 14, GREEN);
    putpixels(27, 15, GREEN);
    putpixels(27, 16, GREEN);
    putpixels(27, 17, BLUE);
    putpixels(27, 18, RED);
    putpixels(27, 19, BLUE);
    putpixels(27, 20, RED);
    putpixels(27, 21, BLUE);
    putpixels(27, 22, GREEN);
    putpixels(27, 23, BLUE);

    //28
    putpixels(28, 3, BLUE);
    putpixels(28, 4, BLUE);
    putpixels(28, 5, GREEN);
    putpixels(28, 6, BLUE);
    putpixels(28, 7, GREEN);
    putpixels(28, 8, BLUE);
    putpixels(28, 9, BLUE);
    putpixels(28, 10, WHITE);
    putpixels(28, 11, BLUE);
    putpixels(28, 12, GREEN);
    putpixels(28, 13, BLUE);
    putpixels(28, 14, GREEN);
    putpixels(28, 15, GREEN);
    putpixels(28, 16, GREEN);
    putpixels(28, 17, BLUE);
    putpixels(28, 18, RED);
    putpixels(28, 19, BLUE);
    putpixels(28, 20, RED);
    putpixels(28, 21, BLUE);
    putpixels(28, 22, BLUE);

    //29;
    putpixels(29, 5, BLUE);
    putpixels(29, 6, BLUE);
    putpixels(29, 7, GREEN);
    putpixels(29, 8, BLUE);
    putpixels(29, 9, WHITE);
    putpixels(29, 10, BLUE);
    putpixels(29, 11, BLUE);
    putpixels(29, 12, GREEN);
    putpixels(29, 13, BLUE);
    putpixels(29, 14, GREEN);
    putpixels(29, 15, GREEN);
    putpixels(29, 16, BLUE);
    putpixels(29, 17, RED);
    putpixels(29, 18, RED);
    putpixels(29, 19, BLUE);
    putpixels(29, 20, RED);
    putpixels(29, 21, BLUE);
    putpixels(29, 22, BLUE);

    //30;
    putpixels(30, 5, BLUE);
    putpixels(30, 6, GREEN);
    putpixels(30, 7, BLUE);
    putpixels(30, 8, BLUE);
    putpixels(30, 9, BLUE);
    putpixels(30, 10, BLUE);
    putpixels(30, 11, BLUE);
    putpixels(30, 12, BLUE);
    putpixels(30, 14, BLUE);
    putpixels(30, 15, GREEN);
    putpixels(30, 16, BLUE);
    putpixels(30, 17, RED);
    putpixels(30, 18, RED);
    putpixels(30, 19, BLUE);
    putpixels(30, 20, RED);
    putpixels(30, 21, BLUE);

    //31
    putpixels(31, 6, BLUE);
    putpixels(31, 7, GREEN);
    putpixels(31, 8, BLUE);
    putpixels(31, 9, WHITE);
    putpixels(31, 10, WHITE);
    putpixels(31, 11, BLUE);
    putpixels(31, 15, BLUE);
    putpixels(31, 16, BLUE);
    putpixels(31, 17, BLUE);
    putpixels(31, 18, RED);
    putpixels(31, 19, BLUE);
    putpixels(31, 20, BLUE);

    //32
    putpixels(32, 7, BLUE);
    putpixels(32, 8, BLUE);
    putpixels(32, 9, WHITE);
    putpixels(32, 10, BLUE);
    putpixels(32, 17, BLUE);
    putpixels(32, 18, BLUE);

    //33
    putpixels(33, 9, BLUE);

    getch();
    closegraph();
    return 0;
}
void putpixels(int inputX, int inputY, int color)
{
    int i, j;

    int x = inputX * MULTP + BASE_X + MULTP;
    int y = inputY * MULTP + BASE_Y + MULTP;

    for (; inputX <= x; inputX++)
    {
        for (; inputY <= y; inputY++)
        {
            putpixel(inputX, inputY, color);
        }
        putpixel(inputX, inputY, color);
    }
}

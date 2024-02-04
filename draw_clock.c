#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <math.h>
#include <time.h>

// Função para desenhar o ponteiro
void draw_hand(int length, int angle) {
    int x, y;
    double radian = angle * (M_PI / 180);

    x = cos(radian) * length;
    y = sin(radian) * length;

    line(320, 240, 320 + x, 240 - y);
}

// Função para desenhar os números no relógio
void draw_numbers() {
    char num[3];
    int i, x, y, angle;

    settextstyle(BOLD_FONT, HORIZ_DIR, 2);
    setcolor(BLACK);

    for (i = 1; i <= 12; i++) {
        angle = i * 30;

        x = 320 + (int)(cos(angle * (M_PI / 180)) * 160);
        y = 240 - (int)(sin(angle * (M_PI / 180)) * 160);

        sprintf(num, "%d", i);
        outtextxy(x, y, num);
    }
}

// Função para desenhar o relógio
void draw_clock() {
    int gd = DETECT, gm;
    int hour, minute, second;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setbkcolor(WHITE);
    setcolor(BLACK);
    cleardevice();

    circle(320, 240, 200);

    draw_numbers();

    // Obter a hora atual
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    hour = timeinfo->tm_hour % 12;
    minute = timeinfo->tm_min;
    second = timeinfo->tm_sec;

    // Desenhar o ponteiro das horas
    draw_hand(100, (hour * 30) + (minute * 0.5));

    // Desenhar o ponteiro dos minutos
    draw_hand(140, (minute * 6) + (second * 0.1));

    // Desenhar o ponteiro dos segundos
    draw_hand(160, second * 6);

    getch();
    closegraph();
}

int main() {
    draw_clock();
    return 0;
}

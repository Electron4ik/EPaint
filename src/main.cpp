/*
 * EPaint - Electron Paint for mini creatures.
 * Copyright (C) 2023  Electron DEV <electrong72@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <graphics.h>

void Screen() {
    setbkcolor(WHITE);
    cleardevice();
    readimagefile ("g1.bmp", 430, 200, 580, 350);
}


void Color() {
    setfillstyle(SOLID_FILL, BLACK);
    bar(0, 600, 50 ,550);
    setfillstyle(SOLID_FILL, RED);
    bar(50, 600, 100 ,550);
    setfillstyle(SOLID_FILL, YELLOW);
    bar(100, 600, 150 ,550);
    setfillstyle(SOLID_FILL, GREEN);
    bar(150, 600, 200 ,550);
    setfillstyle(SOLID_FILL, BLUE);
    bar(200, 600, 250 ,550);
    setfillstyle(SOLID_FILL, MAGENTA);
    bar(250, 600, 300 ,550);
    setfillstyle(SOLID_FILL, BLACK);

    setcolor(BLACK);
    outtextxy(20, 570, "1");
    outtextxy(70, 570, "2");
    outtextxy(120, 570, "3");
    outtextxy(170, 570, "4");
    outtextxy(220, 570, "5");
    outtextxy(270, 570, "6");
    outtextxy(320, 570, "7");

}


int main()
{
    float size = 1.0;

    initwindow(1000, 600, "EPaint by Electron4ik", 100, 100);
    Screen();
    Color();

    while(1)
    {
        int x = mousex(), y = mousey();

        if (GetAsyncKeyState(VK_LBUTTON)) {
            bar(x, y, x+3 * size, y+3 * size);
        }

        if (GetAsyncKeyState(VK_RBUTTON)) {

            setcolor(BLACK);

            circle(x, y, 50);

            delay(50);
        }


        if (GetAsyncKeyState(VK_NUMPAD1)) {
            setfillstyle(SOLID_FILL, BLACK);
        }
        if (GetAsyncKeyState(VK_NUMPAD2)) {
            setfillstyle(SOLID_FILL, RED);
        }
        if (GetAsyncKeyState(VK_NUMPAD3)) {
            setfillstyle(SOLID_FILL, YELLOW);
        }
        if (GetAsyncKeyState(VK_NUMPAD4)) {
            setfillstyle(SOLID_FILL, GREEN);
        }
        if (GetAsyncKeyState(VK_NUMPAD5)) {
            setfillstyle(SOLID_FILL, BLUE);
        }
        if (GetAsyncKeyState(VK_NUMPAD6)) {
            setfillstyle(SOLID_FILL, MAGENTA);
        }
        if (GetAsyncKeyState(VK_NUMPAD7)) {
            setfillstyle(SOLID_FILL, WHITE);
        }
        if (GetAsyncKeyState(VK_NUMPAD9)) {
            Screen();
            Color();
        }



        if (GetAsyncKeyState(0x51)) {
            size = 1.0;
        }
        if (GetAsyncKeyState(0x57)) {
            size = 2.0;
        }
        if (GetAsyncKeyState(0x45)) {
            size = 4.0;
        }

    }


    closegraph();
}

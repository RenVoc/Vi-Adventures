/*

    ����������� ����������� ��������� �� SDK - �������� gb.h, ������ - font.h

*/

#include <gb/gb.h>
#include <gb/font.h>
#include <stdio.h>
#include "res/playerSprites/SmilerSprites.c"
#include "res/mapSprites/simplebackground.c"
#include "res/mapSprites/simplebackgroundmap.c"
#include "res/mapSprites/windowmap.c"

void main(){
    font_t min_font; // ������ ���������� ������� ������ �����
    font_init(); // �������������� �����
    min_font = font_load(font_min); // ���������� � ���������� ���� �� ������� � ������� ����, �������� 36 ������
    font_set(min_font); // ������������� ����� � �������� ����� �������� ���������� � ��������� � ����� ������

    set_bkg_data(37, 7, backgroundtiles);
    set_bkg_tiles(0, 0, 40, 18, backgroundmap);

    set_win_tiles(0, 0, 16, 1, windowmap); // ������������� ����������, ���-�� �������� � ������� � �����, ������� ����� ������� �� ������ windowmap
    move_win(7, 120); // ���������� ��� ���� ������ ����

    SHOW_BKG;  
    SHOW_WIN;
    DISPLAY_ON;

    while (1) {
        scroll_bkg(1, 0); // ��������� ���� � ��������� ���������
        delay(100);
    }
}
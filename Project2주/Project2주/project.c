#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    char command;

    while (1) {
        printf("command>");
        command = _getch();

        if (command == 27) {
            break;
        }

        if (command == 'q') {
            printf("q");
            char enterKey = _getch();
            if (enterKey == 13) {
                printf("\nqwer ȭ����\n");
            }
            else {
                printf("\n����: Enter Ű�� ������ �����ϼ���.\n");
            }
        }
        else if (command == 'w') {
            printf("w");
            char enterKey = _getch();
            if (enterKey == 13) {
                printf("\n���� �ʹ� ����\n");
            }
            else {
                printf("\n����: Enter Ű�� ������ �����ϼ���.\n");
            }
        }
        else if (command == 'e') {
            printf("e");
            char enterKey = _getch();
            if (enterKey == 13) {
                printf("\n���ֺ��� ������ 3���\n");
            }
            else {
                printf("\n����: Enter Ű�� ������ �����ϼ���.\n");
            }
        }
        else if (command == 'r') {
            printf("r");
            char enterKey = _getch();
            if (enterKey == 13) {
                printf("\n�ູ�մϴ�.\n");
            }
            else {
                printf("\n����: Enter Ű�� ������ �����ϼ���.\n");
            }
        }
        else {
            printf("\n����: �ش��ϴ� ���ڿ��� �����ϴ�. �ٽ� �Է��ϼ���.\n");
        }
    }

    return 0;
}





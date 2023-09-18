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
                printf("\nqwer 화이팅\n");
            }
            else {
                printf("\n오류: Enter 키를 눌러서 진행하세요.\n");
            }
        }
        else if (command == 'w') {
            printf("w");
            char enterKey = _getch();
            if (enterKey == 13) {
                printf("\n과제 너무 좋다\n");
            }
            else {
                printf("\n오류: Enter 키를 눌러서 진행하세요.\n");
            }
        }
        else if (command == 'e') {
            printf("e");
            char enterKey = _getch();
            if (enterKey == 13) {
                printf("\n담주부턴 과제량 3배다\n");
            }
            else {
                printf("\n오류: Enter 키를 눌러서 진행하세요.\n");
            }
        }
        else if (command == 'r') {
            printf("r");
            char enterKey = _getch();
            if (enterKey == 13) {
                printf("\n행복합니다.\n");
            }
            else {
                printf("\n오류: Enter 키를 눌러서 진행하세요.\n");
            }
        }
        else {
            printf("\n오류: 해당하는 문자열이 없습니다. 다시 입력하세요.\n");
        }
    }

    return 0;
}





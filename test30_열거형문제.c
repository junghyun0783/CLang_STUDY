#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  // strcmp (HINT!)
#include <stdbool.h> // C99

enum spectrum
{
    red,
    orange,
    yellow,
    green,
    blue
};

const char *colors[] = {"red", "orange", "yellow", "green", "blue"};

#define LEN 30

int main()
{
    char choice[LEN] = {
        0,
    };
    enum spectrum color;
    bool color_is_found = false;

    scanf("%s\n", color);
    printf("Write Color!");
    while (1)
    {
        puts("Input a color name (empty line to quit):");

        if (scanf("%[^\n]%*c", choice) != 1)
            break;

        for (color = red; color <= blue; color++) // 비교하기 위해 colors배열 전체 for문 돌리기
        {
            if (strcmp(choice, colors[color]) == 0) // 입력한 string과 비교 함수(strcmp) 같을경우 0 리턴
            {
                color_is_found = true;
                break;
            }
        }

        if (color_is_found)
            switch (color)
            {
            case red:
                puts("Red roses!!!");
                break;
            case orange:
                puts("Orange!!!");
                break;
            case yellow:
                puts("Yellow!!!");
                break;
            case green:
                puts("Green!!!");
                break;
            case blue:
                puts("Blue!!!");
                break;
            }
        else
            printf("Please try different color %s.\n", choice);
        color_is_found = false;
    }
    puts("Goodbye!~");

    return 0;
}
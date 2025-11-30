// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum TrafficLight light;

    for (light = RED; light <= GREEN; light++)
    {
        if (light == RED)
            printf("RED: Stop\n");
        else if (light == YELLOW)
            printf("YELLOW: Wait\n");
        else if (light == GREEN)
            printf("GREEN: Go\n");
    }

    return 0;
}

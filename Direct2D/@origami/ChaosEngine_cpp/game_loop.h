#include "public_includes.h"

namespace game
{

    int maximum_frame_rate = 5;
    int minimum_frame_rate = 1;
#define update_interval (1000 / maximum_frame_rate)
#define max_loops_per_frame (maximum_frame_rate / minimum_frame_rate)

    int getCurrentTime()
    {
        static int _time;
        Sleep(1);
        return (_time++);
    }

    int update(double UpdateInterval)
    {
        // cout << UpdateInterval << endl;
        return (0);
    }
    int render()
    {
        // cout << "rendered!" << endl;
        return (0);
    }

    void game_loop()
    {
        int nextFrameTime = getCurrentTime();
        while (true)
        {
            int loops = 0;
            while (getCurrentTime() > nextFrameTime && loops < max_loops_per_frame)
            {
                update(update_interval);

                nextFrameTime += max_loops_per_frame;
                loops++;
                max_loops_per_frame;
            }
            render();
        }
    }
}
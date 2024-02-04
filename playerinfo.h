#ifndef PLAYERINFO_H
#define PLAYERINFO_H
#include <iostream>

class Player {
    public:
        std::string name;
        std::string college;
        std::string hometown;
        int height;
        int weight;
        int ppg;
        int rpg;
        int apg;
        int sos;
        int threeptpct;
        int freethrpct;
        int fgpct;

        std::string PersonalInfo() {
            return "The player named " + name + " went to " + college + " and is from "+ hometown + ".";
        }

        std::string StatsInfo() {
            return "This player is " + std::stringstream(height) + " inches tall and weighs " + weight + " pounds. " + "They averaged " + ppg + " last season with " + rpg + " rebounds per game and " + apg + " assists per game."
        }
};

#endif
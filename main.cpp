#include <iostream>
#include <memory>

#include "race.h"
#include "air_race.h"
#include "land_race.h"
#include "centaur.h"
#include "all_terrain_boots.h"
#include "speedboat_camel.h"
#include "camel.h"
#include "magic_carpet.h"
#include "eagle.h"
#include "broom.h"

int main() {
    bool exit_flag = false;
    while (!exit_flag) {
        int race_type, race_length;
        std::cout << "Welcome to the racing simulator!\n"
                     "1. Race for land vehicles\n"
                     "2. Race for air transport\n"
                     "3. Race for land and air transport\n"
                     "Select race type: ";
        std::cin >> race_type;

        std::cout << "Set the length of the distance (must be positive): ";
        std::cin >> race_length;
        int action;
        std::cout << "At least 2 vehicles must be registered\n"
                     "1. Register transport\n"
                     "Select an action: ";
        std::cin >> action;
        std::unique_ptr<Race> race;

        if (action == 1) {
            if (race_type == 1) {
                race = std::make_unique<LandRace>(race_length);
            } else if (race_type == 2) {
                race = std::make_unique<AirRace>(race_length);
            } else if (race_type == 3) {
                race = std::make_unique<Race>(race_length);
            }
            while (true) {
                race->GetInfo();
                int option;
                std::cout << "1. All Terrain Boots\n"
                             "2. Broom\n"
                             "3. Camel\n"
                             "4. Centaur\n"
                             "5. Eagle\n"
                             "6. Speedboat Camel\n"
                             "7. Magic Carpet\n"
                             "0. Finish registration\n"
                             "Select transport or enter 0 to complete the registration process: ";
                std::cin >> option;

                if (option >= 1 && option <= 7) {
                    switch (option) {
                        case 1:
                            race->Register(std::make_unique<AllTerrainBoots>());
                            break;
                        case 2:
                            race->Register(std::make_unique<Broom>());
                            break;
                        case 3:
                            race->Register(std::make_unique<Camel>());
                            break;
                        case 4:
                            race->Register(std::make_unique<Centaur>());
                            break;
                        case 5:
                            race->Register(std::make_unique<Eagle>());
                            break;
                        case 6:
                            race->Register(std::make_unique<SpeedboatCamel>());
                            break;
                        case 7:
                            race->Register(std::make_unique<MagicCarpet>());
                            break;
                    }
                } else if (option == 0) {
                    if (race->CheckRegistration()) {
                        std::cout << "1. Register transport\n"
                                     "2. Start the race\n"
                                     "Select an action: ";
                        std::cin >> option;

                        if (option == 1) {
                            continue;
                        } else if (option == 2) {
                            race->GetResults();
                            std::cout << "\n1. Run one more race\n"
                                         "2. Exit\n"
                                         "Select an action: ";
                            std::cin >> option;

                            if (option == 2) {
                                exit_flag = true;
                            }
                            break;
                        }
                    } else {
                        std::cout << "1. Register transport\n"
                                     "Select an action: ";
                        std::cin >> option;
                        if (option == 1) {
                            continue;
                        }
                    }
                }
            }
        }
    }
}
#include <cstdio>
#include <cstring>
#include <cctype>
#define MAX_POKEMON 387

struct Pokemon {
  int number;
  char name[50];
  char type1[50];
  char type2[50];
  int caught;
};

struct Pokemon pokedex[MAX_POKEMON] = {
  {1, "Bulbasaur", "Grass", "Poison", 0},
  {2, "Ivysaur", "Grass", "Poison", 0},
  {3, "Venusaur", "Grass", "Poison", 0},
  {4, "Charmander", "Fire", "-", 0},
  {5, "Charmeleon", "Fire", "-", 0},
  {6, "Charizard", "Fire", "Flying", 0},
  {7, "Squirtle", "Water", "-", 0},
  {8, "Wartortle", "Water", "-", 0},
  {9, "Blastoise", "Water", "-", 0},
  {10, "Caterpie", "Bug", "-", 0},
  {11, "Metapod", "Bug", "-", 0},
  {12, "Butterfree", "Bug", "Flying", 0},
  {13, "Weedle", "Bug", "Poison", 0},
  {14, "Kakuna", "Bug", "Poison", 0},
  {15, "Beedrill", "Bug", "Poison", 0},
  {16, "Pidgey", "Normal", "Flying", 0},
  {17, "Pidgeotto", "Normal", "Flying", 0},
  {18, "Pidgeot", "Normal", "Flying", 0},
  {19, "Rattata", "Normal", "-", 0},
  {20, "Raticate", "Normal", "-", 0},
  {21, "Spearow", "Normal", "Flying", 0},
  {22, "Fearow", "Normal", "Flying", 0},
  {23, "Ekans", "Poison", "-", 0},
  {24, "Arbok", "Poison", "-", 0},
  {25, "Pikachu", "Electric", "-", 0},
  {26, "Raichu", "Electric", "-", 0},
  {27, "Sandshrew", "Ground", "-", 0},
  {28, "Sandslash", "Ground", "-", 0},
  {29, "Nidoran♀", "Poison", "-", 0},
  {30, "Nidorina", "Poison", "-", 0},
  {31, "Nidoqueen", "Poison", "Ground", 0},
  {32, "Nidoran♂", "Poison", "-", 0},
  {33, "Nidorino", "Poison", "-", 0},
  {34, "Nidoking", "Poison", "Ground", 0},
  {35, "Clefairy", "Normal", "-", 0},
  {36, "Clefable", "Normal", "-", 0},
  {37, "Vulpix", "Fire", "-", 0},
  {38, "Ninetales", "Fire", "-", 0},
  {39, "Jigglypuff", "Normal", "-", 0},
  {40, "Wigglytuff", "Normal", "-", 0},
  {41, "Zubat", "Poison", "Flying", 0},
  {42, "Golbat", "Poison", "Flying", 0},
  {43, "Oddish", "Grass", "Poison", 0},
  {44, "Gloom", "Grass", "Poison", 0},
  {45, "Vileplume", "Grass", "Poison", 0},
  {46, "Paras", "Bug", "Grass", 0},
  {47, "Parasect", "Bug", "Grass", 0},
  {48, "Venonat", "Bug", "Poison", 0},
  {49, "Venomoth", "Bug", "Poison", 0},
  {50, "Diglett", "Ground", "-", 0},
  {51, "Dugtrio", "Ground", "-", 0},
  {52, "Meowth", "Normal", "-", 0},
  {53, "Persian", "Normal", "-", 0},
  {54, "Psyduck", "Water", "-", 0},
  {55, "Golduck", "Water", "-", 0},
  {56, "Mankey", "Fighting", "-", 0},
  {57, "Primeape", "Fighting", "-", 0},
  {58, "Growlithe", "Fire", "-", 0},
  {59, "Arcanine", "Fire", "-", 0},
  {60, "Poliwag", "Water", "-", 0},
  {61, "Poliwhirl", "Water", "-", 0},
  {62, "Poliwrath", "Water", "Fighting", 0},
  {63, "Abra", "Psychic", "-", 0},
  {64, "Kadabra", "Psychic", "-", 0},
  {65, "Alakazam", "Psychic", "-", 0},
  {66, "Machop", "Fighting", "-", 0},
  {67, "Machoke", "Fighting", "-", 0},
  {68, "Machamp", "Fighting", "-", 0},
  {69, "Bellsprout", "Grass", "Poison", 0},
  {70, "Weepinbell", "Grass", "Poison", 0},
  {71, "Victreebel", "Grass", "Poison", 0},
  {72, "Tentacool", "Water", "Poison", 0},
  {73, "Tentacruel", "Water", "Poison", 0},
  {74, "Geodude", "Rock", "Ground", 0},
  {75, "Graveler", "Rock", "Ground", 0},
  {76, "Golem", "Rock", "Ground", 0},
  {77, "Ponyta", "Fire", "-", 0},
  {78, "Rapidash", "Fire", "-", 0},
  {79, "Slowpoke", "Water", "Psychic", 0},
  {80, "Slowbro", "Water", "Psychic", 0},
  {81, "Magnemite", "Electric", "Steel", 0},
  {82, "Magneton", "Electric", "Steel", 0},
  {83, "Farfetch'd", "Normal", "Flying", 0},
  {84, "Doduo", "Normal", "Flying", 0},
  {85, "Dodrio", "Normal", "Flying", 0},
  {86, "Seel", "Water", "-", 0},
  {87, "Dewgong", "Water", "Ice", 0},
  {88, "Grimer", "Poison", "-", 0},
  {89, "Muk", "Poison", "-", 0},
  {90, "Shellder", "Water", "-", 0},
  {91, "Cloyster", "Water", "Ice", 0},
  {92, "Gastly", "Ghost", "Poison", 0},
  {93, "Haunter", "Ghost", "Poison", 0},
  {94, "Gengar", "Ghost", "Poison", 0},
  {95, "Onix", "Rock", "Ground", 0},
  {96, "Drowzee", "Psychic", "-", 0},
  {97, "Hypno", "Psychic", "-", 0},
  {98, "Krabby", "Water", "-", 0},
  {99, "Kingler", "Water", "-", 0},
  {100, "Voltorb", "Electric", "-", 0},
  {101, "Electrode", "Electric", "-", 0},
  {102, "Exeggcute", "Grass", "Psychic", 0},
  {103, "Exeggutor", "Grass", "Psychic", 0},
  {104, "Cubone", "Ground", "-", 0},
  {105, "Marowak", "Ground", "-", 0},
  {106, "Hitmonlee", "Fighting", "-", 0},
  {107, "Hitmonchan", "Fighting", "-", 0},
  {108, "Lickitung", "Normal", "-", 0},
  {109, "Koffing", "Poison", "-", 0},
  {110, "Weezing", "Poison", "-", 0},
  {111, "Rhyhorn", "Ground", "Rock", 0},
  {112, "Rhydon", "Ground", "Rock", 0},
  {113, "Chansey", "Normal", "-", 0},
  {114, "Tangela", "Grass", "-", 0},
  {115, "Kangaskhan", "Normal", "-", 0},
  {116, "Horsea", "Water", "-", 0},
  {117, "Seadra", "Water", "-", 0},
  {118, "Goldeen", "Water", "-", 0},
  {119, "Seaking", "Water", "-", 0},
  {120, "Staryu", "Water", "-", 0},
  {121, "Starmie", "Water", "Psychic", 0},
  {122, "Mr. Mime", "Psychic", "Fairy", 0},
  {123, "Scyther", "Bug", "Flying", 0},
  {124, "Jynx", "Ice", "Psychic", 0},
  {125, "Electabuzz", "Electric", "-", 0},
  {126, "Magmar", "Fire", "-", 0},
  {127, "Pinsir", "Bug", "-", 0},
  {128, "Tauros", "Normal", "-", 0},
  {129, "Magikarp", "Water", "-", 0},
  {130, "Gyarados", "Water", "Flying", 0},
  {131, "Lapras", "Water", "Ice", 0},
  {132, "Ditto", "Normal", "-", 0},
  {133, "Eevee", "Normal", "-", 0},
  {134, "Vaporeon", "Water", "-", 0},
  {135, "Jolteon", "Electric", "-", 0},
  {136, "Flareon", "Fire", "-", 0},
  {137, "Porygon", "Normal", "-", 0},
  {138, "Omanyte", "Rock", "Water", 0},
  {139, "Omastar", "Rock", "Water", 0},
  {140, "Kabuto", "Rock", "Water", 0},
  {141, "Kabutops", "Rock", "Water", 0},
  {142, "Aerodactyl", "Rock", "Flying", 0},
  {143, "Snorlax", "Normal", "-", 0},
  {144, "Articuno", "Ice", "Flying", 0},
  {145, "Zapdos", "Electric", "Flying", 0},
  {146, "Moltres", "Fire", "Flying", 0},
  {147, "Dratini", "Dragon", "-", 0},
  {148, "Dragonair", "Dragon", "-", 0},
  {149, "Dragonite", "Dragon", "Flying", 0},
  {150, "Mewtwo", "Psychic", "-", 0},
  {151, "Mew", "Psychic", "-", 0},
  {152, "Chikorita", "Grass", "-", 0},
  {153, "Bayleef", "Grass", "-", 0},
  {154, "Meganium", "Grass", "-", 0},
  {155, "Cyndaquil", "Fire", "-", 0},
  {156, "Quilava", "Fire", "-", 0},
  {157, "Typhlosion", "Fire", "-", 0},
  {158, "Totodile", "Water", "-", 0},
  {159, "Croconaw", "Water", "-", 0},
  {160, "Feraligatr", "Water", "-", 0},
  {161, "Sentret", "Normal", "-", 0},
  {162, "Furret", "Normal", "-", 0},
  {163, "Hoothoot", "Normal", "Flying", 0},
  {164, "Noctowl", "Normal", "Flying", 0},
  {165, "Ledyba", "Bug", "Flying", 0},
  {166, "Ledian", "Bug", "Flying", 0},
  {167, "Spinarak", "Bug", "Poison", 0},
  {168, "Ariados", "Bug", "Poison", 0},
  {169, "Crobat", "Poison", "Flying", 0},
  {170, "Chinchou", "Water", "Electric", 0},
  {171, "Lanturn", "Water", "Electric", 0},
  {172, "Pichu", "Electric", "-", 0},
  {173, "Cleffa", "Normal", "-", 0},
  {174, "Igglybuff", "Normal", "-", 0},
  {175, "Togepi", "Normal", "-", 0},
  {176, "Togetic", "Normal", "Flying", 0},
  {177, "Natu", "Psychic", "Flying", 0},
  {178, "Xatu", "Psychic", "Flying", 0},
  {179, "Mareep", "Electric", "-", 0},
  {180, "Flaaffy", "Electric", "-", 0},
  {181, "Ampharos", "Electric", "-", 0},
  {182, "Bellossom", "Grass", "-", 0},
  {183, "Marill", "Water", "-", 0},
  {184, "Azumarill", "Water", "-", 0},
  {185, "Sudowoodo", "Rock", "-", 0},
  {186, "Politoed", "Water", "-", 0},
  {187, "Hoppip", "Grass", "Flying", 0},
  {188, "Skiploom", "Grass", "Flying", 0},
  {189, "Jumpluff", "Grass", "Flying", 0},
  {190, "Aipom", "Normal", "-", 0},
  {191, "Sunkern", "Grass", "-", 0},
  {192, "Sunflora", "Grass", "-", 0},
  {193, "Yanma", "Bug", "Flying", 0},
  {194, "Wooper", "Water", "Ground", 0},
  {195, "Quagsire", "Water", "Ground", 0},
  {196, "Espeon", "Psychic", "-", 0},
  {197, "Umbreon", "Dark", "-", 0},
  {198, "Murkrow", "Dark", "Flying", 0},
  {199, "Slowking", "Water", "Psychic", 0},
  {200, "Misdreavous", "Ghost", "-", 0},
  {201, "Unown", "Psychic", "-", 0},
  {202, "Wobbuffet", "Psychic", "-", 0},
  {203, "Girafarig", "Normal", "Psychic", 0},
  {204, "Pineco", "Bug", "-", 0},
  {205, "Forretress", "Bug", "Steel", 0},
  {206, "Dunsparce", "Normal", "-", 0},
  {207, "Gligar", "Ground", "Flying", 0},
  {208, "Steelix", "Steel", "Ground", 0},
  {209, "Snubbull", "Normal", "-", 0},
  {210, "Granbull", "Normal", "-", 0},
  {211, "Qwilfish", "Water", "Poison", 0},
  {212, "Scizor", "Bug", "Steel", 0},
  {213, "Shuckle", "Bug", "Rock", 0},
  {214, "Heracross", "Bug", "Fighting", 0},
  {215, "Sneasel", "Dark", "Ice", 0},
  {216, "Teddiursa", "Normal", "-", 0},
  {217, "Ursaring", "Normal", "-", 0},
  {218, "Slugma", "Fire", "-", 0},
  {219, "Magcargo", "Fire", "Rock", 0},
  {220, "Swinub", "Ice", "Ground", 0},
  {221, "Piloswine", "Ice", "Ground", 0},
  {222, "Corsola", "Water", "Rock", 0},
  {223, "Remoraid", "Water", "-", 0},
  {224, "Octillery", "Water", "-", 0},
  {225, "Delibird", "Ice", "Flying", 0},
  {226, "Mantine", "Water", "Flying", 0},
  {227, "Skarmory", "Steel", "Flying", 0},
  {228, "Houndour", "Dark", "Fire", 0},
  {229, "Houndoom", "Dark", "Fire", 0},
  {230, "Kingdra", "Water", "Dragon", 0},
  {231, "Phanpy", "Ground", "-", 0},
  {232, "Donphan", "Ground", "-", 0},
  {233, "Porygon2", "Normal", "-", 0},
  {234, "Stantler", "Normal", "-", 0},
  {235, "Smeargle", "Normal", "-", 0},
  {236, "Tyrogue", "Fighting", "-", 0},
  {237, "Hitmontop", "Fighting", "-", 0},
  {238, "Smoochum", "Ice", "Psychic", 0},
  {239, "Elekid", "Electric", "-", 0},
  {240, "Magby", "Fire", "-", 0},
  {241, "Miltank", "Normal", "-", 0},
  {242, "Blissey", "Normal", "-", 0},
  {243, "Raikou", "Electric", "-", 0},
  {244, "Entei", "Fire", "-", 0},
  {245, "Suicune", "Water", "-", 0},
  {246, "Larvitar", "Rock", "Ground", 0},
  {247, "Pupitar", "Rock", "Ground", 0},
  {248, "Tyranitar", "Rock", "Dark", 0},
  {249, "Lugia", "Psychic", "Flying", 0},
  {250, "Ho-Oh", "Fire", "Flying", 0},
  {251, "Celebi", "Psychic", "Grass", 0},
  {252, "Treecko", "Grass", "-", 0},
  {253, "Grovyle", "Grass", "-", 0},
  {254, "Sceptile", "Grass", "-", 0},
  {255, "Torchic", "Fire", "-", 0},
  {256, "Combusken", "Fire", "Fighting", 0},
  {257, "Blaziken", "Fire", "Fighting", 0},
  {258, "Mudkip", "Water", "-", 0},
  {259, "Marshtomp", "Water", "Ground", 0},
  {260, "Swampert", "Water", "Ground", 0},
  {261, "Poochyena", "Dark", "-", 0},
  {262, "Mightyena", "Dark", "-", 0},
  {263, "Zigzagoon", "Normal", "-", 0},
  {264, "Linoone", "Normal", "-", 0},
  {265, "Wurmple", "Bug", "-", 0},
  {266, "Silcoon", "Bug", "-", 0},
  {267, "Beautifly", "Bug", "Flying", 0},
  {268, "Cascoon", "Bug", "-", 0},
  {269, "Dustox", "Bug", "Poison", 0},
  {270, "Lotad", "Water", "Grass", 0},
  {271, "Lombre", "Water", "Grass", 0},
  {272, "Ludicolo", "Water", "Grass", 0},
  {273, "Seedot", "Grass", "-", 0},
  {274, "Nuzleaf", "Grass", "Dark", 0},
  {275, "Shiftry", "Grass", "Dark", 0},
  {276, "Taillow", "Normal", "Flying", 0},
  {277, "Swellow", "Normal", "Flying", 0},
  {278, "Wingull", "Water", "Flying", 0},
  {279, "Pelipper", "Water", "Flying", 0},
  {280, "Ralts", "Psychic", "Fairy", 0},
  {281, "Kirlia", "Psychic", "Fairy", 0},
  {282, "Gardevoir", "Psychic", "Fairy", 0},
  {283, "Surskit", "Bug", "Water", 0},
  {284, "Masquerain", "Bug", "Flying", 0},
  {284, "Masquerain", "Bug", "Flying", 0},
  {285, "Shroomish", "Grass", "-", 0},
  {286, "Breloom", "Grass", "Fighting", 0},
  {287, "Slakoth", "Normal", "-", 0},
  {288, "Vigoroth", "Normal", "-", 0},
  {289, "Slaking", "Normal", "-", 0},
  {290, "Nincada", "Bug", "Ground", 0},
  {291, "Ninjask", "Bug", "Flying", 0},
  {292, "Shedinja", "Bug", "Ghost", 0},
  {293, "Whismur", "Normal", "-", 0},
  {294, "Loudred", "Normal", "-", 0},
  {295, "Exploud", "Normal", "-", 0},
  {296, "Makuhita", "Fighting", "-", 0},
  {297, "Hariyama", "Fighting", "-", 0},
  {298, "Azurill", "Normal", "Fairy", 0},
  {299, "Nosepass", "Rock", "-", 0},
  {300, "Skitty", "Normal", "-", 0},
  {301, "Delcatty", "Normal", "-", 0},
  {302, "Sableye", "Dark", "Ghost", 0},
  {303, "Mawile", "Steel", "Fairy", 0},
  {304, "Aron", "Steel", "Rock", 0},
  {305, "Lairon", "Steel", "Rock", 0},
  {306, "Aggron", "Steel", "Rock", 0},
  {307, "Meditite", "Fighting", "Psychic", 0},
  {308, "Medicham", "Fighting", "Psychic", 0},
  {309, "Electrike", "Electric", "-", 0},
  {310, "Manectric", "Electric", "-", 0},
  {311, "Plusle", "Electric", "-", 0},
  {312, "Minun", "Electric", "-", 0},
  {313, "Volbeat", "Bug", "-", 0},
  {314, "Illumise", "Bug", "-", 0},
  {315, "Roselia", "Grass", "Poison", 0},
  {316, "Gulpin", "Poison", "-", 0},
  {317, "Swalot", "Poison", "-", 0},
  {318, "Carvanha", "Water", "Dark", 0},
  {319, "Sharpedo", "Water", "Dark", 0},
  {320, "Wailmer", "Water", "-", 0},
  {321, "Wailord", "Water", "-", 0},
  {322, "Numel", "Fire", "Ground", 0},
  {323, "Camerupt", "Fire", "Ground", 0},
  {324, "Torkoal", "Fire", "-", 0},
  {325, "Spoink", "Psychic", "-", 0},
  {326, "Grumpig", "Psychic", "-", 0},
  {327, "Spinda", "Normal", "-", 0},
  {328, "Trapinch", "Ground", "-", 0},
  {329, "Vibrava", "Ground", "Dragon", 0},
  {330, "Flygon", "Ground", "Dragon", 0},
  {331, "Cacnea", "Grass", "-", 0},
  {332, "Cacturne", "Grass", "Dark", 0},
  {333, "Swablu", "Normal", "Flying", 0},
  {334, "Altaria", "Dragon", "Flying", 0},
  {335, "Zangoose", "Normal", "-", 0},
  {336, "Seviper", "Poison", "-", 0},
  {337, "Lunatone", "Rock", "Psychic", 0},
  {338, "Solrock", "Rock", "Psychic", 0},
  {339, "Barboach", "Water", "Ground", 0},
  {340, "Whiscash", "Water", "Ground", 0},
  {341, "Corphish", "Water", "-", 0},
  {342, "Crawdaunt", "Water", "Dark", 0},
  {343, "Baltoy", "Ground", "Psychic", 0},
  {344, "Claydol", "Ground", "Psychic", 0},
  {345, "Lileep", "Rock", "Grass", 0},
  {346, "Cradily", "Rock", "Grass", 0},
  {347, "Anorith", "Rock", "Bug", 0},
  {348, "Armaldo", "Rock", "Bug", 0},
  {349, "Feebas", "Water", "-", 0},
  {350, "Milotic", "Water", "-", 0},
  {351, "Castform", "Normal", "-", 0},
  {352, "Kecleon", "Normal", "-", 0},
  {353, "Shuppet", "Ghost", "-", 0},
  {354, "Banette", "Ghost", "-", 0},
  {355, "Duskull", "Ghost", "-", 0},
  {356, "Dusclops", "Ghost", "-", 0},
  {357, "Tropius", "Grass", "Flying", 0},
  {358, "Chimecho", "Psychic", "-", 0},
  {359, "Absol", "Dark", "-", 0},
  {360, "Wynaut", "Psychic", "-", 0},
  {361, "Snorunt", "Ice", "-", 0},
  {362, "Glalie", "Ice", "-", 0},
  {363, "Spheal", "Ice", "Water", 0},
  {364, "Sealeo", "Ice", "Water", 0},
  {365, "Walrein", "Ice", "Water", 0},
  {366, "Clamperl", "Water", "-", 0},
  {367, "Huntail", "Water", "-", 0},
  {368, "Gorebyss", "Water", "-", 0},
  {369, "Relicanth", "Water", "Rock", 0},
  {370, "Luvdisc", "Water", "-", 0},
  {371, "Bagon", "Dragon", "-", 0},
  {372, "Shelgon", "Dragon", "-", 0},
  {373, "Salamence", "Dragon", "Flying", 0},
  {374, "Beldum", "Steel", "Psychic", 0},
  {375, "Metang", "Steel", "Psychic", 0},
  {376, "Metagross", "Steel", "Psychic", 0},
  {377, "Regirock", "Rock", "-", 0},
  {378, "Regice", "Ice", "-", 0},
  {379, "Registeel", "Steel", "-", 0},
  {380, "Latias", "Dragon", "Psychic", 0},
  {381, "Latios", "Dragon", "Psychic", 0},
  {382, "Kyogre", "Water", "-", 0},
  {383, "Groudon", "Ground", "-", 0},
  {384, "Rayquaza", "Dragon", "Flying", 0},
  {385, "Jirachi", "Steel", "Psychic", 0},
  {386, "Deoxys", "Psychic", "-", 0}
};

void saveProgress(struct Pokemon pokedex[], int size) {
  FILE *file = fopen("pokedex_progress.txt", "w");
  if (file == nullptr) {
    printf("Could not open the file.\n");
    return;
  }
  for (int i = 0; i < size; i++) {
    fprintf(file, "%s %d\n", pokedex[i].name, pokedex[i].caught);
  }
  fclose(file);
  printf("Progress saved successfully.\n");
}

void loadProgress(struct Pokemon pokedex[], int size) {
  FILE *file = fopen("pokedex_progress.txt", "r");
  if (file == nullptr) {
    printf("No progress found.\nGo catch some Pokemon you fucking virgin.\n");
    return;
  }
  for (int i = 0; i < size; i++) {
    fscanf(file, "%s %d", &pokedex[i].name, &pokedex[i].caught);
  }
  fclose(file);
  printf("Progress loaded successfully.\n");
}

void displayPokedex(struct Pokemon pokedex[]) {
  int option;

  printf("Which Pokedex do you want to see: \n");
  printf("Option 1 - Kanto Region\n");
  printf("Option 2 -Johto Region\n");
  printf("Option 3 -Hoenn Region\n");
  printf("Option 4 -National Pokedex\n");
  printf("Choose your option: ");
  scanf("%d", &option);

  switch (option) {
    case 1:
      //system("clear");
      for (int i = 0; i < 151; i++) {
        printf("#%d %s [%s/%s] - %s\n", pokedex[i].number, pokedex[i].name, pokedex[i].type1, strcmp(pokedex[i].type2, "-") == 0 ? "None" : pokedex[i].type2, pokedex[i].caught ? "Caught" : "Not Caught");
      }
      break;
    case 2:
    //system("clear");
      for (int i = 151; i < 251; i++) {
        printf("#%d %s [%s/%s] - %s\n", pokedex[i].number, pokedex[i].name, pokedex[i].type1, strcmp(pokedex[i].type2, "-") == 0 ? "None" : pokedex[i].type2, pokedex[i].caught ? "Caught" : "Not Caught");
      }
    break;
    case 3:
    //system("clear");
      for (int i = 252; i < 387; i++) {
        printf("#%d %s [%s/%s] - %s\n", pokedex[i].number, pokedex[i].name, pokedex[i].type1, strcmp(pokedex[i].type2, "-") == 0 ? "None" : pokedex[i].type2, pokedex[i].caught ? "Caught" : "Not Caught");
      }
    break;
    case 4:
    //system("clear");
      for (int i = 0; i < 387; i++) {
        printf("#%d %s [%s/%s] - %s\n", pokedex[i].number, pokedex[i].name, pokedex[i].type1, strcmp(pokedex[i].type2, "-") == 0 ? "None" : pokedex[i].type2, pokedex[i].caught ? "Caught" : "Not Caught");
      }
    break;
    default:
        printf("Opção inválida!\nTente Novamente:");
  }
}

void displayNotCaught(struct Pokemon pokedex[], int size) {
  printf("\nPokemons not caught:\n");
  int found = 0;
  for (int i = 0; i < size; i++) {
    if (pokedex[i].caught == 0) {
      printf("#%d %s [%s/%s]\n", pokedex[i].number, pokedex[i].name, pokedex[i].type1, strcmp(pokedex[i].type2, "-") == 0 ? "None" : pokedex[i].type2);
      found = 1;
    }
  }
  if (!found) {
    printf("You completed the entire Pokedex !\nYou are oficially a fucking virgin.\nGo touch some grass and kys");
  }
}

void displayCaught(struct Pokemon pokedex[], int size) {
    int option;
    printf("Which region's pokedex you want to check: \n");
    printf("Option 1 - Kanto\n");
    printf("Option 2 - Johto\n");
    printf("Option 3 - Hoenn\n");
    printf("Option 4 - National Pokedex\n");
    scanf("%d", &option);

    switch (option) {
    case 1:
    //system("clear");
      printf("\nPokemons caught from the Kanto Region:\n");
      for (int i = 0; i < 151; i++) {
      if (pokedex[i].caught == 1) {
      printf("#%d %s [%s/%s]\n", pokedex[i].number, pokedex[i].name, pokedex[i].type1, strcmp(pokedex[i].type2, "-") == 0 ? "None" : pokedex[i].type2);
    }
      }
      break;
    case 2:
    //system("clear");
      printf("\nPokemons caught from the Johto Region:\n");
      for (int i = 151; i < 252; i++) {
      if (pokedex[i].caught == 1) {
      printf("#%d %s [%s/%s]\n", pokedex[i].number, pokedex[i].name, pokedex[i].type1, strcmp(pokedex[i].type2, "-") == 0 ? "None" : pokedex[i].type2);
    }
      }
    break;
    case 3:
    //system("clear");
      printf("\nPokemons caught from the Hoenn Region:\n");
      for (int i = 252; i < 387; i++) {
      if (pokedex[i].caught == 1) {
      printf("#%d %s [%s/%s]\n", pokedex[i].number, pokedex[i].name, pokedex[i].type1, strcmp(pokedex[i].type2, "-") == 0 ? "None" : pokedex[i].type2);
    }
      }
    break;
    case 4:
    //system("clear");
      printf("\nAll the Pokemons caught from the National Pokedex:\n");
      for (int i = 0; i < 387; i++) {
      if (pokedex[i].caught == 1) {
      printf("#%d %s [%s/%s]\n", pokedex[i].number, pokedex[i].name, pokedex[i].type1, strcmp(pokedex[i].type2, "-") == 0 ? "None" : pokedex[i].type2);
    }
      }
    break;
    default:
        printf("Opção inválida!\nTente Novamente:");
    }
  }

void markCaught(struct Pokemon pokedex[], int size, int num) {
  for (int i = 0; i < size; i++) {
    if (pokedex[i].number == num) {
      pokedex[i].caught = 1;
      printf("%s has been marked as caught!\n", pokedex[i].name);
      return;
    }
  }
  printf("Pokemon not found.\n");
}

void viewPokemon(struct Pokemon pokedex[], int size, int num) {
  for (int i = 0; i < size; i++) {
    if (pokedex[                            i].number == num) {
      printf("\nPokemon Details:\n");
      printf("Number: #%d\n", pokedex[i].number);
      printf("Name: %s\n", pokedex[i].name);
      printf("Type: %s / %s\n", pokedex[i].type1, strcmp(pokedex[i].type2, "-") == 0 ? "None" : pokedex[i].type2);
      printf("Status: %s\n", pokedex[i].caught ? "Caught" : "Not Caught");
      return;
    }
  }
  printf("Pokemon not found.\n");
}

char mainMenu() {
  char option;
  printf("\nPokedex:\n");
  printf("1 - See entire Pokedex\n");
  printf("2 - Mark Pokemon has caught\n");
  printf("3 - See a Pokemon details\n");
  printf("4 - Check uncaught Pokemon\n");
  printf("5 - Check caught Pokemon\n");
  printf("6 - Exit\n");
  printf("Choose an option: ");
  scanf(" %c", &option);
  return option;
}

int main() {
  loadProgress(pokedex, MAX_POKEMON);
  int num;

  while (true) {
    char option = mainMenu();
    switch (option) {
      case '1':
        //system("clear");
        displayPokedex(pokedex);
        break;
      case '2':
        printf("Enter the Pokemon's number to mark as caught: ");
        scanf("%d", &num);
        //system("clear");
        markCaught(pokedex, MAX_POKEMON, num);
        break;
      case '3':
        printf("Enter the Pokemon's number to view details: ");
        scanf("%d", &num);
        //system("clear");
        viewPokemon(pokedex, MAX_POKEMON, num);
        break;
      case '4':
        //system("clear");
        displayNotCaught(pokedex, MAX_POKEMON);
        break;
      case '5':
        //system("clear");
        displayCaught(pokedex, MAX_POKEMON);
        break;
      case '6':
        //system("clear");
        saveProgress(pokedex, MAX_POKEMON);
        printf("Thank you for using the Pokedex.\nGoodbye and remember...\nCatch them all");
        return 0;
      default:
        printf("Invalid choice.\nTry again:");
    }
  }
}
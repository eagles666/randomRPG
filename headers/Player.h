typedef struct Players
{
    char name[32];
    int health;
    int attack;
} Player;

void generatePlayerStats(Player*);
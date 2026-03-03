#include<stdio.h>
struct Player {
    char name[50];
    int matches;
    int runs;
    int wickets;
    float average;
};
int main()
{
    int n;
    printf("Enter number of players: ");
    scanf("%d", &n);
    struct Player p[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter name, matches, runs, wickets: ");
        scanf("%s %d %d %d", p[i].name, &p[i].matches, &p[i].runs, &p[i].wickets);
        p[i].average = (p[i].matches > 0) ? (float)p[i].runs / p[i].matches : 0;
    }
    // Find best batsman
    int best=0;
    for(int i=1;i<n;i++)
        if(p[i].average > p[best].average) best=i;
    printf("\n--- Player Stats ---\n");
    for(int i=0;i<n;i++)
        printf("%s | Matches:%d | Runs:%d | Avg:%.2f | Wickets:%d\n",
               p[i].name, p[i].matches, p[i].runs, p[i].average, p[i].wickets);
    printf("\nBest Batsman: %s (Avg: %.2f)\n", p[best].name, p[best].average);
    return 0;
}

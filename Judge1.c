#include <stdio.h>
#include <stdlib.h>

typedef struct Time
{
    int win;
    int loose;
    float   Caverage;
    int pontos;
    int Cestas;
};

int main()
{
    int k=1, i, *time, f, x,y,z,w, h;
    while (k != 0)
    {
        scanf("%d", &k);
        if (k == 0)
        {
            return 0;
        }
        time = (Time*)malloc(sizeof(Time) k);
        f = ((k * (k - 1)) / 2);
        for (i = 0; i < f; i++)
        {
            scanf("%d", &x);
            scanf("%d", &y);
            scanf("%d", &z);
            scanf("%d", &w);
            if (y > w)
            {
                time[x]->win++;
                time[z]->loose++;
                time[x]->pontos += 2;
                time[z]->pontos++;
            }
            else
            {
                time[z]->win++;
                time[x]->loose++;
                time[z]->pontos += 2;
                time[x]->pontos++;
            }
            time[x]->Cavarage = y / w;
            time[x]->Cestas = y;
            time[z]->Cavarage = w / y;
            time[z]->Cestas = w;
        }
        for (i = 0; i < k; i++)
        {
            h = 0;
            if (*time[h]->pontos == *time[i]->pontos)
            {
                if (*time[h]->Caverage == *time[i]->Caverage)
                {
                    if (*time[h]->Cesta == *time[i]->Cesta)
                    {
                        if (h > i)
                        {
                            h = i;
                        }
                    }
                    if (*time[h]->Cesta < *time[i]->Cesta)
                    {
                        h = i;
                    }
                }
                if (*time[h]->Caverage < *time[i]->Caverage)
                {
                    h = i;
                }
            }
            if (*time[h]->pontos < *time[i]->pontos)
            {
                h = i;
            }
            printf("%d ", h);
        }
        free time;
    }


}

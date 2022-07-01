#include <stdio.h>
#include <string.h>

struct Family
{
    char head_name[20];
    int tot_mem;
    int tot_income;
    int tot_exp;
};
int main(int argc, char const *argv[])
{

    struct Family family[5];
    struct Family *ptr[5];
    for (int u = 0; u < 5; u++)
    {
        ptr[u] = &family[u];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nFamily %d details", i + 1);
        printf("\nEnter family heads name: ");
        scanf("%s", (ptr[i])->head_name);
        printf("\nEnter total members of the family: ");
        scanf("%d", &(ptr[i])->tot_mem);
        printf("\nEnter total family income: ");
        scanf("%d", &(ptr[i])->tot_income);
        printf("\nEnter total family expenditure: ");
        scanf("%d", &(ptr[i])->tot_exp);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("\nName: %s", (ptr[i])->head_name);
        printf("\nMembers:%d", (ptr[i])->tot_mem);
        printf("\nIncome:%d", (ptr[i])->tot_income);
        printf("\nExpenditure: %d", (ptr[i])->tot_exp);
    }

    int count = 0, key = 0, temp;
    for (int i = 0; i < 5; i++)
    {
        if (family[i].tot_income > count)
        {
            count = family[i].tot_income;
            key = i;
        }
    }
    printf("\n%d", count);
    printf("\n\nDetails of Family with most Income");
    printf("\nName: %s", (ptr[key])->head_name);
    printf("\nMembers:%d", (ptr[key])->tot_mem);
    printf("\nIncome:%d", (ptr[key])->tot_income);
    printf("\nExpenditure: %d", (ptr[key])->tot_exp);

    printf("\n\nFamilies sorted according to expenditure is as follows:");
    for (int i = 0; i < 5; i++)
    {
        if (family[i].tot_exp > family[i + 1].tot_exp)
        {
            printf("\n\nName: %s", (ptr[i + 1])->head_name);
            printf("\nMembers:%d", (ptr[i + 1])->tot_mem);
            printf("\nIncome:%d", (ptr[i + 1])->tot_income);
            printf("\nExpenditure: %d", (ptr[i + 1])->tot_exp);
        }
        else
        {
            printf("\n\nName: %s", (ptr[i])->head_name);
            printf("\nMembers:%d", (ptr[i])->tot_mem);
            printf("\nIncome:%d", (ptr[i])->tot_income);
            printf("\nExpenditure: %d", (ptr[i])->tot_exp);
        }
    }

    return 0;
}

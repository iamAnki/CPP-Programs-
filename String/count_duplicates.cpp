#include <iostream>
using namespace std;
#define NUM_CHARS 256

void fill_char_counts(char *str, int *count)
{
    int i;
    for (i = 0; *(str + i); i++)
        count[*(str + i)]++;
}

void find_duplicates(char *str)
{
    int *count = (int *)calloc(NUM_CHARS, sizeof(int));
    fill_char_counts(str, count);

    int i;
    for (i = 0; i < NUM_CHARS; i++)
        if (count[i] > 1)
        {
            char output = i;
            cout << output << " is repeated " << count[i] << " times." << endl;
        }
    free(count);
}

/* Driver code*/
int main()
{
    // enter string
    char str[] = "input string";
    find_duplicates(str);
    return 0;
}
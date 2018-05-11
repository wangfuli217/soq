/* SO 5011-0992 */
#include "posixver.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

enum { MAX = 100 };

int main(void)
{
    FILE *fp = fopen("input.txt", "r");
    if (fp == 0)
        return 1;
    char s[MAX];
    for (int i = 0; i < 30 && fgets(s, MAX, fp) != NULL; i++)
    {
        // Commenting out this region fixes the issue
        int status;
        pid_t pid = fork();
        if (pid == 0)
        {
            fclose(fp);
            exit(0);
        }
        else
        {
            waitpid(pid, &status, 0);
        }
        // End region
        printf("%s", s);
    }
    return 0;
}

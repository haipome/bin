/*
 *    Filename: 
 * Description: 
 *      Coding: GBK
 *     History: damonyang@tencent.com, 2012/00/00, create
 */


# include <stdio.h>
# include <arpa/inet.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("usage: %s int\n", argv[0]);

        return 0;
    }

    struct in_addr ip;
    sscanf(argv[1], "%u", &ip.s_addr);

    if (argc == 3)
    {
        ip.s_addr = htonl(ip.s_addr);
    }

    puts(inet_ntoa(ip));

    return 0;
}


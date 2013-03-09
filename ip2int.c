/*
 *    Filename: 
 * Description: 
 *      Coding: GBK
 *     History: damonyang@tencent.com, 2012/00/00, create
 */


# include <stdio.h>
# include <unistd.h>
# include <netinet/in.h>
# include <arpa/inet.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("usage: %s ip\n", argv[0]);

        return 0;
    }

    struct in_addr ip;
    if (inet_aton(argv[1], &ip) == 0)
    {
        printf("illegal ip: %s\n", argv[1]);

        return 1;
    }

    if (argc == 3)
    {
        ip.s_addr = ntohl(ip.s_addr);
    }

    printf("%u\n", ip.s_addr);

    return 0;
}


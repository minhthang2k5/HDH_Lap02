#include "kernel/types.h"
#include "user/user.h"
#include "kernel/sysinfo.h"

int main(int argc, char* argv[]) {
    struct sysinfo info;

    printf("sysinfotest: starting");

    if(sysinfo(&info) < 0) {
        printf("sysinfotest: failed");
        exit(1);
    }

    printf("sysinfotest: freemem=%ld\n, nproc=%ld\n",info.freemem, info.nproc );

    printf("sysinfotest: OK\n");

    exit(0);
}
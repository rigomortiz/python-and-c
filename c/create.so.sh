#!/usr/bin/env bash
python setup.py install
# running install
# running build
# running build_ext
# building 'helloworld' extension
# creating build
# creating build/temp.linux-x86_64-2.7
# x86_64-linux-gnu-gcc -pthread -DNDEBUG -g -fwrapv -O2 -Wall -Wstrict-prototypes -fno-strict-aliasing -D_FORTIFY_SOURCE=2 -g -fstack-protector-strong -Wformat -Werror=format-security -fPIC -I/usr/include/python2.7 -c hello_world.c -o build/temp.linux-x86_64-2.7/hello_world.o
# creating build/lib.linux-x86_64-2.7
# x86_64-linux-gnu-gcc -pthread -shared -Wl,-O1 -Wl,-Bsymbolic-functions -Wl,-z,relro -fno-strict-aliasing -DNDEBUG -g -fwrapv -O2 -Wall -Wstrict-prototypes -D_FORTIFY_SOURCE=2 -g -fstack-protector-strong -Wformat -Werror=format-security -Wl,-z,relro -D_FORTIFY_SOURCE=2 -g -fstack-protector-strong -Wformat -Werror=format-security build/temp.linux-x86_64-2.7/hello_world.o -o build/lib.linux-x86_64-2.7/helloworld.so
# running install_lib
# copying build/lib.linux-x86_64-2.7/helloworld.so -> /usr/local/lib/python2.7/dist-packages
# error: [Errno 13] Permission denied: '/usr/local/lib/python2.7/dist-packages/helloworld.so'

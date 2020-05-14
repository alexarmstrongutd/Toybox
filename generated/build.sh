#!/bin/sh

BUILD='cc -Wall -Wundef -Wno-char-subscripts -Werror=implicit-function-declaration -funsigned-char -I . -Os -ffunction-sections -fdata-sections -fno-asynchronous-unwind-tables -fno-strict-aliasing'

FILES='lib/args.c
lib/dirtree.c
lib/getmountlist.c
lib/interestingtimes.c
lib/lib.c
lib/linestack.c
lib/llist.c
lib/net.c
lib/password.c
lib/portability.c
lib/xwrap.c lib/help.c main.c '

LINK='-Wl,--gc-sections -o generated/unstripped/toybox -Wl,--as-needed -lutil -lcrypt -lm -lresolv -lrt -lcrypto -lz'


$BUILD $FILES $LINK

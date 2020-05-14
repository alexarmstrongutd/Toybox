#ifdef CONFIG_TOYBOX_CONTAINER
   #define CFG_TOYBOX_CONTAINER 1
   #define USE_TOYBOX_CONTAINER(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_CONTAINER 0
   #define USE_TOYBOX_CONTAINER(...)
#endif

#ifdef CONFIG_TOYBOX_FIFREEZE
   #define CFG_TOYBOX_FIFREEZE 1
   #define USE_TOYBOX_FIFREEZE(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_FIFREEZE 0
   #define USE_TOYBOX_FIFREEZE(...)
#endif

#ifdef CONFIG_TOYBOX_ICONV
   #define CFG_TOYBOX_ICONV 1
   #define USE_TOYBOX_ICONV(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_ICONV 0
   #define USE_TOYBOX_ICONV(...)
#endif

#ifdef CONFIG_TOYBOX_FALLOCATE
   #define CFG_TOYBOX_FALLOCATE 1
   #define USE_TOYBOX_FALLOCATE(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_FALLOCATE 0
   #define USE_TOYBOX_FALLOCATE(...)
#endif

#ifdef CONFIG_TOYBOX_UTMPX
   #define CFG_TOYBOX_UTMPX 1
   #define USE_TOYBOX_UTMPX(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_UTMPX 0
   #define USE_TOYBOX_UTMPX(...)
#endif

#ifdef CONFIG_TOYBOX_SHADOW
   #define CFG_TOYBOX_SHADOW 1
   #define USE_TOYBOX_SHADOW(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_SHADOW 0
   #define USE_TOYBOX_SHADOW(...)
#endif

#ifdef CONFIG_TOYBOX_ON_ANDROID
   #define CFG_TOYBOX_ON_ANDROID 1
   #define USE_TOYBOX_ON_ANDROID(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_ON_ANDROID 0
   #define USE_TOYBOX_ON_ANDROID(...)
#endif

#ifdef CONFIG_TOYBOX_ANDROID_SCHEDPOLICY
   #define CFG_TOYBOX_ANDROID_SCHEDPOLICY 1
   #define USE_TOYBOX_ANDROID_SCHEDPOLICY(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_ANDROID_SCHEDPOLICY 0
   #define USE_TOYBOX_ANDROID_SCHEDPOLICY(...)
#endif

#ifdef CONFIG_TOYBOX_FORK
   #define CFG_TOYBOX_FORK 1
   #define USE_TOYBOX_FORK(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_FORK 0
   #define USE_TOYBOX_FORK(...)
#endif

#ifdef CONFIG_TOYBOX_PRLIMIT
   #define CFG_TOYBOX_PRLIMIT 1
   #define USE_TOYBOX_PRLIMIT(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_PRLIMIT 0
   #define USE_TOYBOX_PRLIMIT(...)
#endif

#ifdef CONFIG_BASENAME
   #define CFG_BASENAME 1
   #define USE_BASENAME(...) __VA_ARGS__
#else
   #define CFG_BASENAME 0
   #define USE_BASENAME(...)
#endif

#ifdef CONFIG_CAL
   #define CFG_CAL 1
   #define USE_CAL(...) __VA_ARGS__
#else
   #define CFG_CAL 0
   #define USE_CAL(...)
#endif

#ifdef CONFIG_CAT
   #define CFG_CAT 1
   #define USE_CAT(...) __VA_ARGS__
#else
   #define CFG_CAT 0
   #define USE_CAT(...)
#endif

#ifdef CONFIG_CAT_V
   #define CFG_CAT_V 1
   #define USE_CAT_V(...) __VA_ARGS__
#else
   #define CFG_CAT_V 0
   #define USE_CAT_V(...)
#endif

#ifdef CONFIG_CATV
   #define CFG_CATV 1
   #define USE_CATV(...) __VA_ARGS__
#else
   #define CFG_CATV 0
   #define USE_CATV(...)
#endif

#ifdef CONFIG_CHGRP
   #define CFG_CHGRP 1
   #define USE_CHGRP(...) __VA_ARGS__
#else
   #define CFG_CHGRP 0
   #define USE_CHGRP(...)
#endif

#ifdef CONFIG_CHOWN
   #define CFG_CHOWN 1
   #define USE_CHOWN(...) __VA_ARGS__
#else
   #define CFG_CHOWN 0
   #define USE_CHOWN(...)
#endif

#ifdef CONFIG_CHMOD
   #define CFG_CHMOD 1
   #define USE_CHMOD(...) __VA_ARGS__
#else
   #define CFG_CHMOD 0
   #define USE_CHMOD(...)
#endif

#ifdef CONFIG_CKSUM
   #define CFG_CKSUM 1
   #define USE_CKSUM(...) __VA_ARGS__
#else
   #define CFG_CKSUM 0
   #define USE_CKSUM(...)
#endif

#ifdef CONFIG_CMP
   #define CFG_CMP 1
   #define USE_CMP(...) __VA_ARGS__
#else
   #define CFG_CMP 0
   #define USE_CMP(...)
#endif

#ifdef CONFIG_COMM
   #define CFG_COMM 1
   #define USE_COMM(...) __VA_ARGS__
#else
   #define CFG_COMM 0
   #define USE_COMM(...)
#endif

#ifdef CONFIG_CP
   #define CFG_CP 1
   #define USE_CP(...) __VA_ARGS__
#else
   #define CFG_CP 0
   #define USE_CP(...)
#endif

#ifdef CONFIG_CP_PRESERVE
   #define CFG_CP_PRESERVE 1
   #define USE_CP_PRESERVE(...) __VA_ARGS__
#else
   #define CFG_CP_PRESERVE 0
   #define USE_CP_PRESERVE(...)
#endif

#ifdef CONFIG_MV
   #define CFG_MV 1
   #define USE_MV(...) __VA_ARGS__
#else
   #define CFG_MV 0
   #define USE_MV(...)
#endif

#ifdef CONFIG_INSTALL
   #define CFG_INSTALL 1
   #define USE_INSTALL(...) __VA_ARGS__
#else
   #define CFG_INSTALL 0
   #define USE_INSTALL(...)
#endif

#ifdef CONFIG_CPIO
   #define CFG_CPIO 1
   #define USE_CPIO(...) __VA_ARGS__
#else
   #define CFG_CPIO 0
   #define USE_CPIO(...)
#endif

#ifdef CONFIG_CUT
   #define CFG_CUT 1
   #define USE_CUT(...) __VA_ARGS__
#else
   #define CFG_CUT 0
   #define USE_CUT(...)
#endif

#ifdef CONFIG_DATE
   #define CFG_DATE 1
   #define USE_DATE(...) __VA_ARGS__
#else
   #define CFG_DATE 0
   #define USE_DATE(...)
#endif

#ifdef CONFIG_DF
   #define CFG_DF 1
   #define USE_DF(...) __VA_ARGS__
#else
   #define CFG_DF 0
   #define USE_DF(...)
#endif

#ifdef CONFIG_DIRNAME
   #define CFG_DIRNAME 1
   #define USE_DIRNAME(...) __VA_ARGS__
#else
   #define CFG_DIRNAME 0
   #define USE_DIRNAME(...)
#endif

#ifdef CONFIG_DU
   #define CFG_DU 1
   #define USE_DU(...) __VA_ARGS__
#else
   #define CFG_DU 0
   #define USE_DU(...)
#endif

#ifdef CONFIG_ECHO
   #define CFG_ECHO 1
   #define USE_ECHO(...) __VA_ARGS__
#else
   #define CFG_ECHO 0
   #define USE_ECHO(...)
#endif

#ifdef CONFIG_ENV
   #define CFG_ENV 1
   #define USE_ENV(...) __VA_ARGS__
#else
   #define CFG_ENV 0
   #define USE_ENV(...)
#endif

#ifdef CONFIG_EXPAND
   #define CFG_EXPAND 1
   #define USE_EXPAND(...) __VA_ARGS__
#else
   #define CFG_EXPAND 0
   #define USE_EXPAND(...)
#endif

#ifdef CONFIG_FALSE
   #define CFG_FALSE 1
   #define USE_FALSE(...) __VA_ARGS__
#else
   #define CFG_FALSE 0
   #define USE_FALSE(...)
#endif

#ifdef CONFIG_FILE
   #define CFG_FILE 1
   #define USE_FILE(...) __VA_ARGS__
#else
   #define CFG_FILE 0
   #define USE_FILE(...)
#endif

#ifdef CONFIG_FIND
   #define CFG_FIND 1
   #define USE_FIND(...) __VA_ARGS__
#else
   #define CFG_FIND 0
   #define USE_FIND(...)
#endif

#ifdef CONFIG_GREP
   #define CFG_GREP 1
   #define USE_GREP(...) __VA_ARGS__
#else
   #define CFG_GREP 0
   #define USE_GREP(...)
#endif

#ifdef CONFIG_EGREP
   #define CFG_EGREP 1
   #define USE_EGREP(...) __VA_ARGS__
#else
   #define CFG_EGREP 0
   #define USE_EGREP(...)
#endif

#ifdef CONFIG_FGREP
   #define CFG_FGREP 1
   #define USE_FGREP(...) __VA_ARGS__
#else
   #define CFG_FGREP 0
   #define USE_FGREP(...)
#endif

#ifdef CONFIG_HEAD
   #define CFG_HEAD 1
   #define USE_HEAD(...) __VA_ARGS__
#else
   #define CFG_HEAD 0
   #define USE_HEAD(...)
#endif

#ifdef CONFIG_ID
   #define CFG_ID 1
   #define USE_ID(...) __VA_ARGS__
#else
   #define CFG_ID 0
   #define USE_ID(...)
#endif

#ifdef CONFIG_ID_Z
   #define CFG_ID_Z 1
   #define USE_ID_Z(...) __VA_ARGS__
#else
   #define CFG_ID_Z 0
   #define USE_ID_Z(...)
#endif

#ifdef CONFIG_GROUPS
   #define CFG_GROUPS 1
   #define USE_GROUPS(...) __VA_ARGS__
#else
   #define CFG_GROUPS 0
   #define USE_GROUPS(...)
#endif

#ifdef CONFIG_LOGNAME
   #define CFG_LOGNAME 1
   #define USE_LOGNAME(...) __VA_ARGS__
#else
   #define CFG_LOGNAME 0
   #define USE_LOGNAME(...)
#endif

#ifdef CONFIG_WHOAMI
   #define CFG_WHOAMI 1
   #define USE_WHOAMI(...) __VA_ARGS__
#else
   #define CFG_WHOAMI 0
   #define USE_WHOAMI(...)
#endif

#ifdef CONFIG_KILL
   #define CFG_KILL 1
   #define USE_KILL(...) __VA_ARGS__
#else
   #define CFG_KILL 0
   #define USE_KILL(...)
#endif

#ifdef CONFIG_KILLALL5
   #define CFG_KILLALL5 1
   #define USE_KILLALL5(...) __VA_ARGS__
#else
   #define CFG_KILLALL5 0
   #define USE_KILLALL5(...)
#endif

#ifdef CONFIG_LINK
   #define CFG_LINK 1
   #define USE_LINK(...) __VA_ARGS__
#else
   #define CFG_LINK 0
   #define USE_LINK(...)
#endif

#ifdef CONFIG_LN
   #define CFG_LN 1
   #define USE_LN(...) __VA_ARGS__
#else
   #define CFG_LN 0
   #define USE_LN(...)
#endif

#ifdef CONFIG_LS
   #define CFG_LS 1
   #define USE_LS(...) __VA_ARGS__
#else
   #define CFG_LS 0
   #define USE_LS(...)
#endif

#ifdef CONFIG_LS_COLOR
   #define CFG_LS_COLOR 1
   #define USE_LS_COLOR(...) __VA_ARGS__
#else
   #define CFG_LS_COLOR 0
   #define USE_LS_COLOR(...)
#endif

#ifdef CONFIG_MKDIR
   #define CFG_MKDIR 1
   #define USE_MKDIR(...) __VA_ARGS__
#else
   #define CFG_MKDIR 0
   #define USE_MKDIR(...)
#endif

#ifdef CONFIG_MKDIR_Z
   #define CFG_MKDIR_Z 1
   #define USE_MKDIR_Z(...) __VA_ARGS__
#else
   #define CFG_MKDIR_Z 0
   #define USE_MKDIR_Z(...)
#endif

#ifdef CONFIG_MKFIFO
   #define CFG_MKFIFO 1
   #define USE_MKFIFO(...) __VA_ARGS__
#else
   #define CFG_MKFIFO 0
   #define USE_MKFIFO(...)
#endif

#ifdef CONFIG_MKFIFO_Z
   #define CFG_MKFIFO_Z 1
   #define USE_MKFIFO_Z(...) __VA_ARGS__
#else
   #define CFG_MKFIFO_Z 0
   #define USE_MKFIFO_Z(...)
#endif

#ifdef CONFIG_NICE
   #define CFG_NICE 1
   #define USE_NICE(...) __VA_ARGS__
#else
   #define CFG_NICE 0
   #define USE_NICE(...)
#endif

#ifdef CONFIG_NL
   #define CFG_NL 1
   #define USE_NL(...) __VA_ARGS__
#else
   #define CFG_NL 0
   #define USE_NL(...)
#endif

#ifdef CONFIG_NOHUP
   #define CFG_NOHUP 1
   #define USE_NOHUP(...) __VA_ARGS__
#else
   #define CFG_NOHUP 0
   #define USE_NOHUP(...)
#endif

#ifdef CONFIG_OD
   #define CFG_OD 1
   #define USE_OD(...) __VA_ARGS__
#else
   #define CFG_OD 0
   #define USE_OD(...)
#endif

#ifdef CONFIG_PASTE
   #define CFG_PASTE 1
   #define USE_PASTE(...) __VA_ARGS__
#else
   #define CFG_PASTE 0
   #define USE_PASTE(...)
#endif

#ifdef CONFIG_PATCH
   #define CFG_PATCH 1
   #define USE_PATCH(...) __VA_ARGS__
#else
   #define CFG_PATCH 0
   #define USE_PATCH(...)
#endif

#ifdef CONFIG_PRINTF
   #define CFG_PRINTF 1
   #define USE_PRINTF(...) __VA_ARGS__
#else
   #define CFG_PRINTF 0
   #define USE_PRINTF(...)
#endif

#ifdef CONFIG_PS
   #define CFG_PS 1
   #define USE_PS(...) __VA_ARGS__
#else
   #define CFG_PS 0
   #define USE_PS(...)
#endif

#ifdef CONFIG_TOP
   #define CFG_TOP 1
   #define USE_TOP(...) __VA_ARGS__
#else
   #define CFG_TOP 0
   #define USE_TOP(...)
#endif

#ifdef CONFIG_IOTOP
   #define CFG_IOTOP 1
   #define USE_IOTOP(...) __VA_ARGS__
#else
   #define CFG_IOTOP 0
   #define USE_IOTOP(...)
#endif

#ifdef CONFIG_PGREP
   #define CFG_PGREP 1
   #define USE_PGREP(...) __VA_ARGS__
#else
   #define CFG_PGREP 0
   #define USE_PGREP(...)
#endif

#ifdef CONFIG_PKILL
   #define CFG_PKILL 1
   #define USE_PKILL(...) __VA_ARGS__
#else
   #define CFG_PKILL 0
   #define USE_PKILL(...)
#endif

#ifdef CONFIG_PWD
   #define CFG_PWD 1
   #define USE_PWD(...) __VA_ARGS__
#else
   #define CFG_PWD 0
   #define USE_PWD(...)
#endif

#ifdef CONFIG_RENICE
   #define CFG_RENICE 1
   #define USE_RENICE(...) __VA_ARGS__
#else
   #define CFG_RENICE 0
   #define USE_RENICE(...)
#endif

#ifdef CONFIG_RM
   #define CFG_RM 1
   #define USE_RM(...) __VA_ARGS__
#else
   #define CFG_RM 0
   #define USE_RM(...)
#endif

#ifdef CONFIG_RMDIR
   #define CFG_RMDIR 1
   #define USE_RMDIR(...) __VA_ARGS__
#else
   #define CFG_RMDIR 0
   #define USE_RMDIR(...)
#endif

#ifdef CONFIG_SED
   #define CFG_SED 1
   #define USE_SED(...) __VA_ARGS__
#else
   #define CFG_SED 0
   #define USE_SED(...)
#endif

#ifdef CONFIG_SLEEP
   #define CFG_SLEEP 1
   #define USE_SLEEP(...) __VA_ARGS__
#else
   #define CFG_SLEEP 0
   #define USE_SLEEP(...)
#endif

#ifdef CONFIG_SLEEP_FLOAT
   #define CFG_SLEEP_FLOAT 1
   #define USE_SLEEP_FLOAT(...) __VA_ARGS__
#else
   #define CFG_SLEEP_FLOAT 0
   #define USE_SLEEP_FLOAT(...)
#endif

#ifdef CONFIG_SORT
   #define CFG_SORT 1
   #define USE_SORT(...) __VA_ARGS__
#else
   #define CFG_SORT 0
   #define USE_SORT(...)
#endif

#ifdef CONFIG_SORT_BIG
   #define CFG_SORT_BIG 1
   #define USE_SORT_BIG(...) __VA_ARGS__
#else
   #define CFG_SORT_BIG 0
   #define USE_SORT_BIG(...)
#endif

#ifdef CONFIG_SORT_FLOAT
   #define CFG_SORT_FLOAT 1
   #define USE_SORT_FLOAT(...) __VA_ARGS__
#else
   #define CFG_SORT_FLOAT 0
   #define USE_SORT_FLOAT(...)
#endif

#ifdef CONFIG_SPLIT
   #define CFG_SPLIT 1
   #define USE_SPLIT(...) __VA_ARGS__
#else
   #define CFG_SPLIT 0
   #define USE_SPLIT(...)
#endif

#ifdef CONFIG_STRINGS
   #define CFG_STRINGS 1
   #define USE_STRINGS(...) __VA_ARGS__
#else
   #define CFG_STRINGS 0
   #define USE_STRINGS(...)
#endif

#ifdef CONFIG_TAIL
   #define CFG_TAIL 1
   #define USE_TAIL(...) __VA_ARGS__
#else
   #define CFG_TAIL 0
   #define USE_TAIL(...)
#endif

#ifdef CONFIG_TAIL_SEEK
   #define CFG_TAIL_SEEK 1
   #define USE_TAIL_SEEK(...) __VA_ARGS__
#else
   #define CFG_TAIL_SEEK 0
   #define USE_TAIL_SEEK(...)
#endif

#ifdef CONFIG_TEE
   #define CFG_TEE 1
   #define USE_TEE(...) __VA_ARGS__
#else
   #define CFG_TEE 0
   #define USE_TEE(...)
#endif

#ifdef CONFIG_TIME
   #define CFG_TIME 1
   #define USE_TIME(...) __VA_ARGS__
#else
   #define CFG_TIME 0
   #define USE_TIME(...)
#endif

#ifdef CONFIG_TOUCH
   #define CFG_TOUCH 1
   #define USE_TOUCH(...) __VA_ARGS__
#else
   #define CFG_TOUCH 0
   #define USE_TOUCH(...)
#endif

#ifdef CONFIG_TRUE
   #define CFG_TRUE 1
   #define USE_TRUE(...) __VA_ARGS__
#else
   #define CFG_TRUE 0
   #define USE_TRUE(...)
#endif

#ifdef CONFIG_TTY
   #define CFG_TTY 1
   #define USE_TTY(...) __VA_ARGS__
#else
   #define CFG_TTY 0
   #define USE_TTY(...)
#endif

#ifdef CONFIG_ULIMIT
   #define CFG_ULIMIT 1
   #define USE_ULIMIT(...) __VA_ARGS__
#else
   #define CFG_ULIMIT 0
   #define USE_ULIMIT(...)
#endif

#ifdef CONFIG_UNAME
   #define CFG_UNAME 1
   #define USE_UNAME(...) __VA_ARGS__
#else
   #define CFG_UNAME 0
   #define USE_UNAME(...)
#endif

#ifdef CONFIG_UNIQ
   #define CFG_UNIQ 1
   #define USE_UNIQ(...) __VA_ARGS__
#else
   #define CFG_UNIQ 0
   #define USE_UNIQ(...)
#endif

#ifdef CONFIG_UNLINK
   #define CFG_UNLINK 1
   #define USE_UNLINK(...) __VA_ARGS__
#else
   #define CFG_UNLINK 0
   #define USE_UNLINK(...)
#endif

#ifdef CONFIG_UUDECODE
   #define CFG_UUDECODE 1
   #define USE_UUDECODE(...) __VA_ARGS__
#else
   #define CFG_UUDECODE 0
   #define USE_UUDECODE(...)
#endif

#ifdef CONFIG_UUENCODE
   #define CFG_UUENCODE 1
   #define USE_UUENCODE(...) __VA_ARGS__
#else
   #define CFG_UUENCODE 0
   #define USE_UUENCODE(...)
#endif

#ifdef CONFIG_WC
   #define CFG_WC 1
   #define USE_WC(...) __VA_ARGS__
#else
   #define CFG_WC 0
   #define USE_WC(...)
#endif

#ifdef CONFIG_WHO
   #define CFG_WHO 1
   #define USE_WHO(...) __VA_ARGS__
#else
   #define CFG_WHO 0
   #define USE_WHO(...)
#endif

#ifdef CONFIG_XARGS
   #define CFG_XARGS 1
   #define USE_XARGS(...) __VA_ARGS__
#else
   #define CFG_XARGS 0
   #define USE_XARGS(...)
#endif

#ifdef CONFIG_XARGS_PEDANTIC
   #define CFG_XARGS_PEDANTIC 1
   #define USE_XARGS_PEDANTIC(...) __VA_ARGS__
#else
   #define CFG_XARGS_PEDANTIC 0
   #define USE_XARGS_PEDANTIC(...)
#endif

#ifdef CONFIG_ARP
   #define CFG_ARP 1
   #define USE_ARP(...) __VA_ARGS__
#else
   #define CFG_ARP 0
   #define USE_ARP(...)
#endif

#ifdef CONFIG_ARPING
   #define CFG_ARPING 1
   #define USE_ARPING(...) __VA_ARGS__
#else
   #define CFG_ARPING 0
   #define USE_ARPING(...)
#endif

#ifdef CONFIG_BOOTCHARTD
   #define CFG_BOOTCHARTD 1
   #define USE_BOOTCHARTD(...) __VA_ARGS__
#else
   #define CFG_BOOTCHARTD 0
   #define USE_BOOTCHARTD(...)
#endif

#ifdef CONFIG_BRCTL
   #define CFG_BRCTL 1
   #define USE_BRCTL(...) __VA_ARGS__
#else
   #define CFG_BRCTL 0
   #define USE_BRCTL(...)
#endif

#ifdef CONFIG_COMPRESS
   #define CFG_COMPRESS 1
   #define USE_COMPRESS(...) __VA_ARGS__
#else
   #define CFG_COMPRESS 0
   #define USE_COMPRESS(...)
#endif

#ifdef CONFIG_DECOMPRESS
   #define CFG_DECOMPRESS 1
   #define USE_DECOMPRESS(...) __VA_ARGS__
#else
   #define CFG_DECOMPRESS 0
   #define USE_DECOMPRESS(...)
#endif

#ifdef CONFIG_CROND
   #define CFG_CROND 1
   #define USE_CROND(...) __VA_ARGS__
#else
   #define CFG_CROND 0
   #define USE_CROND(...)
#endif

#ifdef CONFIG_CRONTAB
   #define CFG_CRONTAB 1
   #define USE_CRONTAB(...) __VA_ARGS__
#else
   #define CFG_CRONTAB 0
   #define USE_CRONTAB(...)
#endif

#ifdef CONFIG_DD
   #define CFG_DD 1
   #define USE_DD(...) __VA_ARGS__
#else
   #define CFG_DD 0
   #define USE_DD(...)
#endif

#ifdef CONFIG_DHCP6
   #define CFG_DHCP6 1
   #define USE_DHCP6(...) __VA_ARGS__
#else
   #define CFG_DHCP6 0
   #define USE_DHCP6(...)
#endif

#ifdef CONFIG_DHCP
   #define CFG_DHCP 1
   #define USE_DHCP(...) __VA_ARGS__
#else
   #define CFG_DHCP 0
   #define USE_DHCP(...)
#endif

#ifdef CONFIG_DHCPD
   #define CFG_DHCPD 1
   #define USE_DHCPD(...) __VA_ARGS__
#else
   #define CFG_DHCPD 0
   #define USE_DHCPD(...)
#endif

#ifdef CONFIG_DEBUG_DHCP
   #define CFG_DEBUG_DHCP 1
   #define USE_DEBUG_DHCP(...) __VA_ARGS__
#else
   #define CFG_DEBUG_DHCP 0
   #define USE_DEBUG_DHCP(...)
#endif

#ifdef CONFIG_DIFF
   #define CFG_DIFF 1
   #define USE_DIFF(...) __VA_ARGS__
#else
   #define CFG_DIFF 0
   #define USE_DIFF(...)
#endif

#ifdef CONFIG_DUMPLEASES
   #define CFG_DUMPLEASES 1
   #define USE_DUMPLEASES(...) __VA_ARGS__
#else
   #define CFG_DUMPLEASES 0
   #define USE_DUMPLEASES(...)
#endif

#ifdef CONFIG_EXPR
   #define CFG_EXPR 1
   #define USE_EXPR(...) __VA_ARGS__
#else
   #define CFG_EXPR 0
   #define USE_EXPR(...)
#endif

#ifdef CONFIG_FDISK
   #define CFG_FDISK 1
   #define USE_FDISK(...) __VA_ARGS__
#else
   #define CFG_FDISK 0
   #define USE_FDISK(...)
#endif

#ifdef CONFIG_FOLD
   #define CFG_FOLD 1
   #define USE_FOLD(...) __VA_ARGS__
#else
   #define CFG_FOLD 0
   #define USE_FOLD(...)
#endif

#ifdef CONFIG_FSCK
   #define CFG_FSCK 1
   #define USE_FSCK(...) __VA_ARGS__
#else
   #define CFG_FSCK 0
   #define USE_FSCK(...)
#endif

#ifdef CONFIG_GETFATTR
   #define CFG_GETFATTR 1
   #define USE_GETFATTR(...) __VA_ARGS__
#else
   #define CFG_GETFATTR 0
   #define USE_GETFATTR(...)
#endif

#ifdef CONFIG_GETTY
   #define CFG_GETTY 1
   #define USE_GETTY(...) __VA_ARGS__
#else
   #define CFG_GETTY 0
   #define USE_GETTY(...)
#endif

#ifdef CONFIG_GROUPADD
   #define CFG_GROUPADD 1
   #define USE_GROUPADD(...) __VA_ARGS__
#else
   #define CFG_GROUPADD 0
   #define USE_GROUPADD(...)
#endif

#ifdef CONFIG_GROUPDEL
   #define CFG_GROUPDEL 1
   #define USE_GROUPDEL(...) __VA_ARGS__
#else
   #define CFG_GROUPDEL 0
   #define USE_GROUPDEL(...)
#endif

#ifdef CONFIG_GZIP
   #define CFG_GZIP 1
   #define USE_GZIP(...) __VA_ARGS__
#else
   #define CFG_GZIP 0
   #define USE_GZIP(...)
#endif

#ifdef CONFIG_GUNZIP
   #define CFG_GUNZIP 1
   #define USE_GUNZIP(...) __VA_ARGS__
#else
   #define CFG_GUNZIP 0
   #define USE_GUNZIP(...)
#endif

#ifdef CONFIG_ZCAT
   #define CFG_ZCAT 1
   #define USE_ZCAT(...) __VA_ARGS__
#else
   #define CFG_ZCAT 0
   #define USE_ZCAT(...)
#endif

#ifdef CONFIG_HOST
   #define CFG_HOST 1
   #define USE_HOST(...) __VA_ARGS__
#else
   #define CFG_HOST 0
   #define USE_HOST(...)
#endif

#ifdef CONFIG_ICONV
   #define CFG_ICONV 1
   #define USE_ICONV(...) __VA_ARGS__
#else
   #define CFG_ICONV 0
   #define USE_ICONV(...)
#endif

#ifdef CONFIG_INIT
   #define CFG_INIT 1
   #define USE_INIT(...) __VA_ARGS__
#else
   #define CFG_INIT 0
   #define USE_INIT(...)
#endif

#ifdef CONFIG_IP
   #define CFG_IP 1
   #define USE_IP(...) __VA_ARGS__
#else
   #define CFG_IP 0
   #define USE_IP(...)
#endif

#ifdef CONFIG_IPCRM
   #define CFG_IPCRM 1
   #define USE_IPCRM(...) __VA_ARGS__
#else
   #define CFG_IPCRM 0
   #define USE_IPCRM(...)
#endif

#ifdef CONFIG_IPCS
   #define CFG_IPCS 1
   #define USE_IPCS(...) __VA_ARGS__
#else
   #define CFG_IPCS 0
   #define USE_IPCS(...)
#endif

#ifdef CONFIG_KLOGD
   #define CFG_KLOGD 1
   #define USE_KLOGD(...) __VA_ARGS__
#else
   #define CFG_KLOGD 0
   #define USE_KLOGD(...)
#endif

#ifdef CONFIG_KLOGD_SOURCE_RING_BUFFER
   #define CFG_KLOGD_SOURCE_RING_BUFFER 1
   #define USE_KLOGD_SOURCE_RING_BUFFER(...) __VA_ARGS__
#else
   #define CFG_KLOGD_SOURCE_RING_BUFFER 0
   #define USE_KLOGD_SOURCE_RING_BUFFER(...)
#endif

#ifdef CONFIG_LAST
   #define CFG_LAST 1
   #define USE_LAST(...) __VA_ARGS__
#else
   #define CFG_LAST 0
   #define USE_LAST(...)
#endif

#ifdef CONFIG_LOGGER
   #define CFG_LOGGER 1
   #define USE_LOGGER(...) __VA_ARGS__
#else
   #define CFG_LOGGER 0
   #define USE_LOGGER(...)
#endif

#ifdef CONFIG_LSOF
   #define CFG_LSOF 1
   #define USE_LSOF(...) __VA_ARGS__
#else
   #define CFG_LSOF 0
   #define USE_LSOF(...)
#endif

#ifdef CONFIG_MDEV
   #define CFG_MDEV 1
   #define USE_MDEV(...) __VA_ARGS__
#else
   #define CFG_MDEV 0
   #define USE_MDEV(...)
#endif

#ifdef CONFIG_MDEV_CONF
   #define CFG_MDEV_CONF 1
   #define USE_MDEV_CONF(...) __VA_ARGS__
#else
   #define CFG_MDEV_CONF 0
   #define USE_MDEV_CONF(...)
#endif

#ifdef CONFIG_MKE2FS
   #define CFG_MKE2FS 1
   #define USE_MKE2FS(...) __VA_ARGS__
#else
   #define CFG_MKE2FS 0
   #define USE_MKE2FS(...)
#endif

#ifdef CONFIG_MKE2FS_JOURNAL
   #define CFG_MKE2FS_JOURNAL 1
   #define USE_MKE2FS_JOURNAL(...) __VA_ARGS__
#else
   #define CFG_MKE2FS_JOURNAL 0
   #define USE_MKE2FS_JOURNAL(...)
#endif

#ifdef CONFIG_MKE2FS_GEN
   #define CFG_MKE2FS_GEN 1
   #define USE_MKE2FS_GEN(...) __VA_ARGS__
#else
   #define CFG_MKE2FS_GEN 0
   #define USE_MKE2FS_GEN(...)
#endif

#ifdef CONFIG_MKE2FS_LABEL
   #define CFG_MKE2FS_LABEL 1
   #define USE_MKE2FS_LABEL(...) __VA_ARGS__
#else
   #define CFG_MKE2FS_LABEL 0
   #define USE_MKE2FS_LABEL(...)
#endif

#ifdef CONFIG_MKE2FS_EXTENDED
   #define CFG_MKE2FS_EXTENDED 1
   #define USE_MKE2FS_EXTENDED(...) __VA_ARGS__
#else
   #define CFG_MKE2FS_EXTENDED 0
   #define USE_MKE2FS_EXTENDED(...)
#endif

#ifdef CONFIG_MODPROBE
   #define CFG_MODPROBE 1
   #define USE_MODPROBE(...) __VA_ARGS__
#else
   #define CFG_MODPROBE 0
   #define USE_MODPROBE(...)
#endif

#ifdef CONFIG_MORE
   #define CFG_MORE 1
   #define USE_MORE(...) __VA_ARGS__
#else
   #define CFG_MORE 0
   #define USE_MORE(...)
#endif

#ifdef CONFIG_OPENVT
   #define CFG_OPENVT 1
   #define USE_OPENVT(...) __VA_ARGS__
#else
   #define CFG_OPENVT 0
   #define USE_OPENVT(...)
#endif

#ifdef CONFIG_DEALLOCVT
   #define CFG_DEALLOCVT 1
   #define USE_DEALLOCVT(...) __VA_ARGS__
#else
   #define CFG_DEALLOCVT 0
   #define USE_DEALLOCVT(...)
#endif

#ifdef CONFIG_PING
   #define CFG_PING 1
   #define USE_PING(...) __VA_ARGS__
#else
   #define CFG_PING 0
   #define USE_PING(...)
#endif

#ifdef CONFIG_ROUTE
   #define CFG_ROUTE 1
   #define USE_ROUTE(...) __VA_ARGS__
#else
   #define CFG_ROUTE 0
   #define USE_ROUTE(...)
#endif

#ifdef CONFIG_SETFATTR
   #define CFG_SETFATTR 1
   #define USE_SETFATTR(...) __VA_ARGS__
#else
   #define CFG_SETFATTR 0
   #define USE_SETFATTR(...)
#endif

#ifdef CONFIG_SH
   #define CFG_SH 1
   #define USE_SH(...) __VA_ARGS__
#else
   #define CFG_SH 0
   #define USE_SH(...)
#endif

#ifdef CONFIG_CD
   #define CFG_CD 1
   #define USE_CD(...) __VA_ARGS__
#else
   #define CFG_CD 0
   #define USE_CD(...)
#endif

#ifdef CONFIG_EXIT
   #define CFG_EXIT 1
   #define USE_EXIT(...) __VA_ARGS__
#else
   #define CFG_EXIT 0
   #define USE_EXIT(...)
#endif

#ifdef CONFIG_SULOGIN
   #define CFG_SULOGIN 1
   #define USE_SULOGIN(...) __VA_ARGS__
#else
   #define CFG_SULOGIN 0
   #define USE_SULOGIN(...)
#endif

#ifdef CONFIG_SYSLOGD
   #define CFG_SYSLOGD 1
   #define USE_SYSLOGD(...) __VA_ARGS__
#else
   #define CFG_SYSLOGD 0
   #define USE_SYSLOGD(...)
#endif

#ifdef CONFIG_TAR
   #define CFG_TAR 1
   #define USE_TAR(...) __VA_ARGS__
#else
   #define CFG_TAR 0
   #define USE_TAR(...)
#endif

#ifdef CONFIG_TCPSVD
   #define CFG_TCPSVD 1
   #define USE_TCPSVD(...) __VA_ARGS__
#else
   #define CFG_TCPSVD 0
   #define USE_TCPSVD(...)
#endif

#ifdef CONFIG_TELNET
   #define CFG_TELNET 1
   #define USE_TELNET(...) __VA_ARGS__
#else
   #define CFG_TELNET 0
   #define USE_TELNET(...)
#endif

#ifdef CONFIG_TELNETD
   #define CFG_TELNETD 1
   #define USE_TELNETD(...) __VA_ARGS__
#else
   #define CFG_TELNETD 0
   #define USE_TELNETD(...)
#endif

#ifdef CONFIG_TEST
   #define CFG_TEST 1
   #define USE_TEST(...) __VA_ARGS__
#else
   #define CFG_TEST 0
   #define USE_TEST(...)
#endif

#ifdef CONFIG_TFTP
   #define CFG_TFTP 1
   #define USE_TFTP(...) __VA_ARGS__
#else
   #define CFG_TFTP 0
   #define USE_TFTP(...)
#endif

#ifdef CONFIG_TFTPD
   #define CFG_TFTPD 1
   #define USE_TFTPD(...) __VA_ARGS__
#else
   #define CFG_TFTPD 0
   #define USE_TFTPD(...)
#endif

#ifdef CONFIG_TRACEROUTE
   #define CFG_TRACEROUTE 1
   #define USE_TRACEROUTE(...) __VA_ARGS__
#else
   #define CFG_TRACEROUTE 0
   #define USE_TRACEROUTE(...)
#endif

#ifdef CONFIG_TR
   #define CFG_TR 1
   #define USE_TR(...) __VA_ARGS__
#else
   #define CFG_TR 0
   #define USE_TR(...)
#endif

#ifdef CONFIG_USERADD
   #define CFG_USERADD 1
   #define USE_USERADD(...) __VA_ARGS__
#else
   #define CFG_USERADD 0
   #define USE_USERADD(...)
#endif

#ifdef CONFIG_USERDEL
   #define CFG_USERDEL 1
   #define USE_USERDEL(...) __VA_ARGS__
#else
   #define CFG_USERDEL 0
   #define USE_USERDEL(...)
#endif

#ifdef CONFIG_VI
   #define CFG_VI 1
   #define USE_VI(...) __VA_ARGS__
#else
   #define CFG_VI 0
   #define USE_VI(...)
#endif

#ifdef CONFIG_WATCH
   #define CFG_WATCH 1
   #define USE_WATCH(...) __VA_ARGS__
#else
   #define CFG_WATCH 0
   #define USE_WATCH(...)
#endif

#ifdef CONFIG_WGET
   #define CFG_WGET 1
   #define USE_WGET(...) __VA_ARGS__
#else
   #define CFG_WGET 0
   #define USE_WGET(...)
#endif

#ifdef CONFIG_XZCAT
   #define CFG_XZCAT 1
   #define USE_XZCAT(...) __VA_ARGS__
#else
   #define CFG_XZCAT 0
   #define USE_XZCAT(...)
#endif

#ifdef CONFIG_ACPI
   #define CFG_ACPI 1
   #define USE_ACPI(...) __VA_ARGS__
#else
   #define CFG_ACPI 0
   #define USE_ACPI(...)
#endif

#ifdef CONFIG_ASCII
   #define CFG_ASCII 1
   #define USE_ASCII(...) __VA_ARGS__
#else
   #define CFG_ASCII 0
   #define USE_ASCII(...)
#endif

#ifdef CONFIG_BASE64
   #define CFG_BASE64 1
   #define USE_BASE64(...) __VA_ARGS__
#else
   #define CFG_BASE64 0
   #define USE_BASE64(...)
#endif

#ifdef CONFIG_BLKID
   #define CFG_BLKID 1
   #define USE_BLKID(...) __VA_ARGS__
#else
   #define CFG_BLKID 0
   #define USE_BLKID(...)
#endif

#ifdef CONFIG_FSTYPE
   #define CFG_FSTYPE 1
   #define USE_FSTYPE(...) __VA_ARGS__
#else
   #define CFG_FSTYPE 0
   #define USE_FSTYPE(...)
#endif

#ifdef CONFIG_BLOCKDEV
   #define CFG_BLOCKDEV 1
   #define USE_BLOCKDEV(...) __VA_ARGS__
#else
   #define CFG_BLOCKDEV 0
   #define USE_BLOCKDEV(...)
#endif

#ifdef CONFIG_BUNZIP2
   #define CFG_BUNZIP2 1
   #define USE_BUNZIP2(...) __VA_ARGS__
#else
   #define CFG_BUNZIP2 0
   #define USE_BUNZIP2(...)
#endif

#ifdef CONFIG_BZCAT
   #define CFG_BZCAT 1
   #define USE_BZCAT(...) __VA_ARGS__
#else
   #define CFG_BZCAT 0
   #define USE_BZCAT(...)
#endif

#ifdef CONFIG_CHCON
   #define CFG_CHCON 1
   #define USE_CHCON(...) __VA_ARGS__
#else
   #define CFG_CHCON 0
   #define USE_CHCON(...)
#endif

#ifdef CONFIG_CHROOT
   #define CFG_CHROOT 1
   #define USE_CHROOT(...) __VA_ARGS__
#else
   #define CFG_CHROOT 0
   #define USE_CHROOT(...)
#endif

#ifdef CONFIG_CHRT
   #define CFG_CHRT 1
   #define USE_CHRT(...) __VA_ARGS__
#else
   #define CFG_CHRT 0
   #define USE_CHRT(...)
#endif

#ifdef CONFIG_CHVT
   #define CFG_CHVT 1
   #define USE_CHVT(...) __VA_ARGS__
#else
   #define CFG_CHVT 0
   #define USE_CHVT(...)
#endif

#ifdef CONFIG_CLEAR
   #define CFG_CLEAR 1
   #define USE_CLEAR(...) __VA_ARGS__
#else
   #define CFG_CLEAR 0
   #define USE_CLEAR(...)
#endif

#ifdef CONFIG_COUNT
   #define CFG_COUNT 1
   #define USE_COUNT(...) __VA_ARGS__
#else
   #define CFG_COUNT 0
   #define USE_COUNT(...)
#endif

#ifdef CONFIG_DOS2UNIX
   #define CFG_DOS2UNIX 1
   #define USE_DOS2UNIX(...) __VA_ARGS__
#else
   #define CFG_DOS2UNIX 0
   #define USE_DOS2UNIX(...)
#endif

#ifdef CONFIG_UNIX2DOS
   #define CFG_UNIX2DOS 1
   #define USE_UNIX2DOS(...) __VA_ARGS__
#else
   #define CFG_UNIX2DOS 0
   #define USE_UNIX2DOS(...)
#endif

#ifdef CONFIG_EJECT
   #define CFG_EJECT 1
   #define USE_EJECT(...) __VA_ARGS__
#else
   #define CFG_EJECT 0
   #define USE_EJECT(...)
#endif

#ifdef CONFIG_FACTOR
   #define CFG_FACTOR 1
   #define USE_FACTOR(...) __VA_ARGS__
#else
   #define CFG_FACTOR 0
   #define USE_FACTOR(...)
#endif

#ifdef CONFIG_FALLOCATE
   #define CFG_FALLOCATE 1
   #define USE_FALLOCATE(...) __VA_ARGS__
#else
   #define CFG_FALLOCATE 0
   #define USE_FALLOCATE(...)
#endif

#ifdef CONFIG_FLOCK
   #define CFG_FLOCK 1
   #define USE_FLOCK(...) __VA_ARGS__
#else
   #define CFG_FLOCK 0
   #define USE_FLOCK(...)
#endif

#ifdef CONFIG_FREE
   #define CFG_FREE 1
   #define USE_FREE(...) __VA_ARGS__
#else
   #define CFG_FREE 0
   #define USE_FREE(...)
#endif

#ifdef CONFIG_FREERAMDISK
   #define CFG_FREERAMDISK 1
   #define USE_FREERAMDISK(...) __VA_ARGS__
#else
   #define CFG_FREERAMDISK 0
   #define USE_FREERAMDISK(...)
#endif

#ifdef CONFIG_FSFREEZE
   #define CFG_FSFREEZE 1
   #define USE_FSFREEZE(...) __VA_ARGS__
#else
   #define CFG_FSFREEZE 0
   #define USE_FSFREEZE(...)
#endif

#ifdef CONFIG_FSYNC
   #define CFG_FSYNC 1
   #define USE_FSYNC(...) __VA_ARGS__
#else
   #define CFG_FSYNC 0
   #define USE_FSYNC(...)
#endif

#ifdef CONFIG_HELP
   #define CFG_HELP 1
   #define USE_HELP(...) __VA_ARGS__
#else
   #define CFG_HELP 0
   #define USE_HELP(...)
#endif

#ifdef CONFIG_HELP_EXTRAS
   #define CFG_HELP_EXTRAS 1
   #define USE_HELP_EXTRAS(...) __VA_ARGS__
#else
   #define CFG_HELP_EXTRAS 0
   #define USE_HELP_EXTRAS(...)
#endif

#ifdef CONFIG_HEXEDIT
   #define CFG_HEXEDIT 1
   #define USE_HEXEDIT(...) __VA_ARGS__
#else
   #define CFG_HEXEDIT 0
   #define USE_HEXEDIT(...)
#endif

#ifdef CONFIG_HWCLOCK
   #define CFG_HWCLOCK 1
   #define USE_HWCLOCK(...) __VA_ARGS__
#else
   #define CFG_HWCLOCK 0
   #define USE_HWCLOCK(...)
#endif

#ifdef CONFIG_INOTIFYD
   #define CFG_INOTIFYD 1
   #define USE_INOTIFYD(...) __VA_ARGS__
#else
   #define CFG_INOTIFYD 0
   #define USE_INOTIFYD(...)
#endif

#ifdef CONFIG_INSMOD
   #define CFG_INSMOD 1
   #define USE_INSMOD(...) __VA_ARGS__
#else
   #define CFG_INSMOD 0
   #define USE_INSMOD(...)
#endif

#ifdef CONFIG_IONICE
   #define CFG_IONICE 1
   #define USE_IONICE(...) __VA_ARGS__
#else
   #define CFG_IONICE 0
   #define USE_IONICE(...)
#endif

#ifdef CONFIG_IORENICE
   #define CFG_IORENICE 1
   #define USE_IORENICE(...) __VA_ARGS__
#else
   #define CFG_IORENICE 0
   #define USE_IORENICE(...)
#endif

#ifdef CONFIG_LOGIN
   #define CFG_LOGIN 1
   #define USE_LOGIN(...) __VA_ARGS__
#else
   #define CFG_LOGIN 0
   #define USE_LOGIN(...)
#endif

#ifdef CONFIG_LOSETUP
   #define CFG_LOSETUP 1
   #define USE_LOSETUP(...) __VA_ARGS__
#else
   #define CFG_LOSETUP 0
   #define USE_LOSETUP(...)
#endif

#ifdef CONFIG_LSATTR
   #define CFG_LSATTR 1
   #define USE_LSATTR(...) __VA_ARGS__
#else
   #define CFG_LSATTR 0
   #define USE_LSATTR(...)
#endif

#ifdef CONFIG_CHATTR
   #define CFG_CHATTR 1
   #define USE_CHATTR(...) __VA_ARGS__
#else
   #define CFG_CHATTR 0
   #define USE_CHATTR(...)
#endif

#ifdef CONFIG_LSMOD
   #define CFG_LSMOD 1
   #define USE_LSMOD(...) __VA_ARGS__
#else
   #define CFG_LSMOD 0
   #define USE_LSMOD(...)
#endif

#ifdef CONFIG_LSPCI
   #define CFG_LSPCI 1
   #define USE_LSPCI(...) __VA_ARGS__
#else
   #define CFG_LSPCI 0
   #define USE_LSPCI(...)
#endif

#ifdef CONFIG_LSPCI_TEXT
   #define CFG_LSPCI_TEXT 1
   #define USE_LSPCI_TEXT(...) __VA_ARGS__
#else
   #define CFG_LSPCI_TEXT 0
   #define USE_LSPCI_TEXT(...)
#endif

#ifdef CONFIG_LSUSB
   #define CFG_LSUSB 1
   #define USE_LSUSB(...) __VA_ARGS__
#else
   #define CFG_LSUSB 0
   #define USE_LSUSB(...)
#endif

#ifdef CONFIG_MAKEDEVS
   #define CFG_MAKEDEVS 1
   #define USE_MAKEDEVS(...) __VA_ARGS__
#else
   #define CFG_MAKEDEVS 0
   #define USE_MAKEDEVS(...)
#endif

#ifdef CONFIG_MIX
   #define CFG_MIX 1
   #define USE_MIX(...) __VA_ARGS__
#else
   #define CFG_MIX 0
   #define USE_MIX(...)
#endif

#ifdef CONFIG_MKPASSWD
   #define CFG_MKPASSWD 1
   #define USE_MKPASSWD(...) __VA_ARGS__
#else
   #define CFG_MKPASSWD 0
   #define USE_MKPASSWD(...)
#endif

#ifdef CONFIG_MKSWAP
   #define CFG_MKSWAP 1
   #define USE_MKSWAP(...) __VA_ARGS__
#else
   #define CFG_MKSWAP 0
   #define USE_MKSWAP(...)
#endif

#ifdef CONFIG_MODINFO
   #define CFG_MODINFO 1
   #define USE_MODINFO(...) __VA_ARGS__
#else
   #define CFG_MODINFO 0
   #define USE_MODINFO(...)
#endif

#ifdef CONFIG_MOUNTPOINT
   #define CFG_MOUNTPOINT 1
   #define USE_MOUNTPOINT(...) __VA_ARGS__
#else
   #define CFG_MOUNTPOINT 0
   #define USE_MOUNTPOINT(...)
#endif

#ifdef CONFIG_NBD_CLIENT
   #define CFG_NBD_CLIENT 1
   #define USE_NBD_CLIENT(...) __VA_ARGS__
#else
   #define CFG_NBD_CLIENT 0
   #define USE_NBD_CLIENT(...)
#endif

#ifdef CONFIG_UNSHARE
   #define CFG_UNSHARE 1
   #define USE_UNSHARE(...) __VA_ARGS__
#else
   #define CFG_UNSHARE 0
   #define USE_UNSHARE(...)
#endif

#ifdef CONFIG_NSENTER
   #define CFG_NSENTER 1
   #define USE_NSENTER(...) __VA_ARGS__
#else
   #define CFG_NSENTER 0
   #define USE_NSENTER(...)
#endif

#ifdef CONFIG_ONEIT
   #define CFG_ONEIT 1
   #define USE_ONEIT(...) __VA_ARGS__
#else
   #define CFG_ONEIT 0
   #define USE_ONEIT(...)
#endif

#ifdef CONFIG_PARTPROBE
   #define CFG_PARTPROBE 1
   #define USE_PARTPROBE(...) __VA_ARGS__
#else
   #define CFG_PARTPROBE 0
   #define USE_PARTPROBE(...)
#endif

#ifdef CONFIG_PIVOT_ROOT
   #define CFG_PIVOT_ROOT 1
   #define USE_PIVOT_ROOT(...) __VA_ARGS__
#else
   #define CFG_PIVOT_ROOT 0
   #define USE_PIVOT_ROOT(...)
#endif

#ifdef CONFIG_PMAP
   #define CFG_PMAP 1
   #define USE_PMAP(...) __VA_ARGS__
#else
   #define CFG_PMAP 0
   #define USE_PMAP(...)
#endif

#ifdef CONFIG_PRINTENV
   #define CFG_PRINTENV 1
   #define USE_PRINTENV(...) __VA_ARGS__
#else
   #define CFG_PRINTENV 0
   #define USE_PRINTENV(...)
#endif

#ifdef CONFIG_PWDX
   #define CFG_PWDX 1
   #define USE_PWDX(...) __VA_ARGS__
#else
   #define CFG_PWDX 0
   #define USE_PWDX(...)
#endif

#ifdef CONFIG_READAHEAD
   #define CFG_READAHEAD 1
   #define USE_READAHEAD(...) __VA_ARGS__
#else
   #define CFG_READAHEAD 0
   #define USE_READAHEAD(...)
#endif

#ifdef CONFIG_READLINK
   #define CFG_READLINK 1
   #define USE_READLINK(...) __VA_ARGS__
#else
   #define CFG_READLINK 0
   #define USE_READLINK(...)
#endif

#ifdef CONFIG_REALPATH
   #define CFG_REALPATH 1
   #define USE_REALPATH(...) __VA_ARGS__
#else
   #define CFG_REALPATH 0
   #define USE_REALPATH(...)
#endif

#ifdef CONFIG_REBOOT
   #define CFG_REBOOT 1
   #define USE_REBOOT(...) __VA_ARGS__
#else
   #define CFG_REBOOT 0
   #define USE_REBOOT(...)
#endif

#ifdef CONFIG_RESET
   #define CFG_RESET 1
   #define USE_RESET(...) __VA_ARGS__
#else
   #define CFG_RESET 0
   #define USE_RESET(...)
#endif

#ifdef CONFIG_REV
   #define CFG_REV 1
   #define USE_REV(...) __VA_ARGS__
#else
   #define CFG_REV 0
   #define USE_REV(...)
#endif

#ifdef CONFIG_RMMOD
   #define CFG_RMMOD 1
   #define USE_RMMOD(...) __VA_ARGS__
#else
   #define CFG_RMMOD 0
   #define USE_RMMOD(...)
#endif

#ifdef CONFIG_SETSID
   #define CFG_SETSID 1
   #define USE_SETSID(...) __VA_ARGS__
#else
   #define CFG_SETSID 0
   #define USE_SETSID(...)
#endif

#ifdef CONFIG_SHRED
   #define CFG_SHRED 1
   #define USE_SHRED(...) __VA_ARGS__
#else
   #define CFG_SHRED 0
   #define USE_SHRED(...)
#endif

#ifdef CONFIG_STAT
   #define CFG_STAT 1
   #define USE_STAT(...) __VA_ARGS__
#else
   #define CFG_STAT 0
   #define USE_STAT(...)
#endif

#ifdef CONFIG_SWAPOFF
   #define CFG_SWAPOFF 1
   #define USE_SWAPOFF(...) __VA_ARGS__
#else
   #define CFG_SWAPOFF 0
   #define USE_SWAPOFF(...)
#endif

#ifdef CONFIG_SWAPON
   #define CFG_SWAPON 1
   #define USE_SWAPON(...) __VA_ARGS__
#else
   #define CFG_SWAPON 0
   #define USE_SWAPON(...)
#endif

#ifdef CONFIG_SWITCH_ROOT
   #define CFG_SWITCH_ROOT 1
   #define USE_SWITCH_ROOT(...) __VA_ARGS__
#else
   #define CFG_SWITCH_ROOT 0
   #define USE_SWITCH_ROOT(...)
#endif

#ifdef CONFIG_SYSCTL
   #define CFG_SYSCTL 1
   #define USE_SYSCTL(...) __VA_ARGS__
#else
   #define CFG_SYSCTL 0
   #define USE_SYSCTL(...)
#endif

#ifdef CONFIG_TAC
   #define CFG_TAC 1
   #define USE_TAC(...) __VA_ARGS__
#else
   #define CFG_TAC 0
   #define USE_TAC(...)
#endif

#ifdef CONFIG_NPROC
   #define CFG_NPROC 1
   #define USE_NPROC(...) __VA_ARGS__
#else
   #define CFG_NPROC 0
   #define USE_NPROC(...)
#endif

#ifdef CONFIG_TASKSET
   #define CFG_TASKSET 1
   #define USE_TASKSET(...) __VA_ARGS__
#else
   #define CFG_TASKSET 0
   #define USE_TASKSET(...)
#endif

#ifdef CONFIG_TIMEOUT
   #define CFG_TIMEOUT 1
   #define USE_TIMEOUT(...) __VA_ARGS__
#else
   #define CFG_TIMEOUT 0
   #define USE_TIMEOUT(...)
#endif

#ifdef CONFIG_TRUNCATE
   #define CFG_TRUNCATE 1
   #define USE_TRUNCATE(...) __VA_ARGS__
#else
   #define CFG_TRUNCATE 0
   #define USE_TRUNCATE(...)
#endif

#ifdef CONFIG_UPTIME
   #define CFG_UPTIME 1
   #define USE_UPTIME(...) __VA_ARGS__
#else
   #define CFG_UPTIME 0
   #define USE_UPTIME(...)
#endif

#ifdef CONFIG_USLEEP
   #define CFG_USLEEP 1
   #define USE_USLEEP(...) __VA_ARGS__
#else
   #define CFG_USLEEP 0
   #define USE_USLEEP(...)
#endif

#ifdef CONFIG_VCONFIG
   #define CFG_VCONFIG 1
   #define USE_VCONFIG(...) __VA_ARGS__
#else
   #define CFG_VCONFIG 0
   #define USE_VCONFIG(...)
#endif

#ifdef CONFIG_VMSTAT
   #define CFG_VMSTAT 1
   #define USE_VMSTAT(...) __VA_ARGS__
#else
   #define CFG_VMSTAT 0
   #define USE_VMSTAT(...)
#endif

#ifdef CONFIG_W
   #define CFG_W 1
   #define USE_W(...) __VA_ARGS__
#else
   #define CFG_W 0
   #define USE_W(...)
#endif

#ifdef CONFIG_WHICH
   #define CFG_WHICH 1
   #define USE_WHICH(...) __VA_ARGS__
#else
   #define CFG_WHICH 0
   #define USE_WHICH(...)
#endif

#ifdef CONFIG_XXD
   #define CFG_XXD 1
   #define USE_XXD(...) __VA_ARGS__
#else
   #define CFG_XXD 0
   #define USE_XXD(...)
#endif

#ifdef CONFIG_YES
   #define CFG_YES 1
   #define USE_YES(...) __VA_ARGS__
#else
   #define CFG_YES 0
   #define USE_YES(...)
#endif

#ifdef CONFIG_FTPGET
   #define CFG_FTPGET 1
   #define USE_FTPGET(...) __VA_ARGS__
#else
   #define CFG_FTPGET 0
   #define USE_FTPGET(...)
#endif

#ifdef CONFIG_FTPPUT
   #define CFG_FTPPUT 1
   #define USE_FTPPUT(...) __VA_ARGS__
#else
   #define CFG_FTPPUT 0
   #define USE_FTPPUT(...)
#endif

#ifdef CONFIG_IFCONFIG
   #define CFG_IFCONFIG 1
   #define USE_IFCONFIG(...) __VA_ARGS__
#else
   #define CFG_IFCONFIG 0
   #define USE_IFCONFIG(...)
#endif

#ifdef CONFIG_MICROCOM
   #define CFG_MICROCOM 1
   #define USE_MICROCOM(...) __VA_ARGS__
#else
   #define CFG_MICROCOM 0
   #define USE_MICROCOM(...)
#endif

#ifdef CONFIG_NETCAT
   #define CFG_NETCAT 1
   #define USE_NETCAT(...) __VA_ARGS__
#else
   #define CFG_NETCAT 0
   #define USE_NETCAT(...)
#endif

#ifdef CONFIG_NETCAT_LISTEN
   #define CFG_NETCAT_LISTEN 1
   #define USE_NETCAT_LISTEN(...) __VA_ARGS__
#else
   #define CFG_NETCAT_LISTEN 0
   #define USE_NETCAT_LISTEN(...)
#endif

#ifdef CONFIG_NETSTAT
   #define CFG_NETSTAT 1
   #define USE_NETSTAT(...) __VA_ARGS__
#else
   #define CFG_NETSTAT 0
   #define USE_NETSTAT(...)
#endif

#ifdef CONFIG_RFKILL
   #define CFG_RFKILL 1
   #define USE_RFKILL(...) __VA_ARGS__
#else
   #define CFG_RFKILL 0
   #define USE_RFKILL(...)
#endif

#ifdef CONFIG_TUNCTL
   #define CFG_TUNCTL 1
   #define USE_TUNCTL(...) __VA_ARGS__
#else
   #define CFG_TUNCTL 0
   #define USE_TUNCTL(...)
#endif

#ifdef CONFIG_DMESG
   #define CFG_DMESG 1
   #define USE_DMESG(...) __VA_ARGS__
#else
   #define CFG_DMESG 0
   #define USE_DMESG(...)
#endif

#ifdef CONFIG_HOSTNAME
   #define CFG_HOSTNAME 1
   #define USE_HOSTNAME(...) __VA_ARGS__
#else
   #define CFG_HOSTNAME 0
   #define USE_HOSTNAME(...)
#endif

#ifdef CONFIG_KILLALL
   #define CFG_KILLALL 1
   #define USE_KILLALL(...) __VA_ARGS__
#else
   #define CFG_KILLALL 0
   #define USE_KILLALL(...)
#endif

#ifdef CONFIG_MD5SUM
   #define CFG_MD5SUM 1
   #define USE_MD5SUM(...) __VA_ARGS__
#else
   #define CFG_MD5SUM 0
   #define USE_MD5SUM(...)
#endif

#ifdef CONFIG_SHA1SUM
   #define CFG_SHA1SUM 1
   #define USE_SHA1SUM(...) __VA_ARGS__
#else
   #define CFG_SHA1SUM 0
   #define USE_SHA1SUM(...)
#endif

#ifdef CONFIG_SHA224SUM
   #define CFG_SHA224SUM 1
   #define USE_SHA224SUM(...) __VA_ARGS__
#else
   #define CFG_SHA224SUM 0
   #define USE_SHA224SUM(...)
#endif

#ifdef CONFIG_SHA256SUM
   #define CFG_SHA256SUM 1
   #define USE_SHA256SUM(...) __VA_ARGS__
#else
   #define CFG_SHA256SUM 0
   #define USE_SHA256SUM(...)
#endif

#ifdef CONFIG_SHA384SUM
   #define CFG_SHA384SUM 1
   #define USE_SHA384SUM(...) __VA_ARGS__
#else
   #define CFG_SHA384SUM 0
   #define USE_SHA384SUM(...)
#endif

#ifdef CONFIG_SHA512SUM
   #define CFG_SHA512SUM 1
   #define USE_SHA512SUM(...) __VA_ARGS__
#else
   #define CFG_SHA512SUM 0
   #define USE_SHA512SUM(...)
#endif

#ifdef CONFIG_MKNOD
   #define CFG_MKNOD 1
   #define USE_MKNOD(...) __VA_ARGS__
#else
   #define CFG_MKNOD 0
   #define USE_MKNOD(...)
#endif

#ifdef CONFIG_MKNOD_Z
   #define CFG_MKNOD_Z 1
   #define USE_MKNOD_Z(...) __VA_ARGS__
#else
   #define CFG_MKNOD_Z 0
   #define USE_MKNOD_Z(...)
#endif

#ifdef CONFIG_MKTEMP
   #define CFG_MKTEMP 1
   #define USE_MKTEMP(...) __VA_ARGS__
#else
   #define CFG_MKTEMP 0
   #define USE_MKTEMP(...)
#endif

#ifdef CONFIG_MOUNT
   #define CFG_MOUNT 1
   #define USE_MOUNT(...) __VA_ARGS__
#else
   #define CFG_MOUNT 0
   #define USE_MOUNT(...)
#endif

#ifdef CONFIG_PASSWD
   #define CFG_PASSWD 1
   #define USE_PASSWD(...) __VA_ARGS__
#else
   #define CFG_PASSWD 0
   #define USE_PASSWD(...)
#endif

#ifdef CONFIG_PASSWD_SAD
   #define CFG_PASSWD_SAD 1
   #define USE_PASSWD_SAD(...) __VA_ARGS__
#else
   #define CFG_PASSWD_SAD 0
   #define USE_PASSWD_SAD(...)
#endif

#ifdef CONFIG_PIDOF
   #define CFG_PIDOF 1
   #define USE_PIDOF(...) __VA_ARGS__
#else
   #define CFG_PIDOF 0
   #define USE_PIDOF(...)
#endif

#ifdef CONFIG_SEQ
   #define CFG_SEQ 1
   #define USE_SEQ(...) __VA_ARGS__
#else
   #define CFG_SEQ 0
   #define USE_SEQ(...)
#endif

#ifdef CONFIG_SU
   #define CFG_SU 1
   #define USE_SU(...) __VA_ARGS__
#else
   #define CFG_SU 0
   #define USE_SU(...)
#endif

#ifdef CONFIG_SYNC
   #define CFG_SYNC 1
   #define USE_SYNC(...) __VA_ARGS__
#else
   #define CFG_SYNC 0
   #define USE_SYNC(...)
#endif

#ifdef CONFIG_UMOUNT
   #define CFG_UMOUNT 1
   #define USE_UMOUNT(...) __VA_ARGS__
#else
   #define CFG_UMOUNT 0
   #define USE_UMOUNT(...)
#endif

#ifdef CONFIG_HELLO
   #define CFG_HELLO 1
   #define USE_HELLO(...) __VA_ARGS__
#else
   #define CFG_HELLO 0
   #define USE_HELLO(...)
#endif

#ifdef CONFIG_HOSTID
   #define CFG_HOSTID 1
   #define USE_HOSTID(...) __VA_ARGS__
#else
   #define CFG_HOSTID 0
   #define USE_HOSTID(...)
#endif

#ifdef CONFIG_SKELETON
   #define CFG_SKELETON 1
   #define USE_SKELETON(...) __VA_ARGS__
#else
   #define CFG_SKELETON 0
   #define USE_SKELETON(...)
#endif

#ifdef CONFIG_SKELETON_ALIAS
   #define CFG_SKELETON_ALIAS 1
   #define USE_SKELETON_ALIAS(...) __VA_ARGS__
#else
   #define CFG_SKELETON_ALIAS 0
   #define USE_SKELETON_ALIAS(...)
#endif

#ifdef CONFIG_TEST_HUMAN_READABLE
   #define CFG_TEST_HUMAN_READABLE 1
   #define USE_TEST_HUMAN_READABLE(...) __VA_ARGS__
#else
   #define CFG_TEST_HUMAN_READABLE 0
   #define USE_TEST_HUMAN_READABLE(...)
#endif

#ifdef CONFIG_TEST_MANY_OPTIONS
   #define CFG_TEST_MANY_OPTIONS 1
   #define USE_TEST_MANY_OPTIONS(...) __VA_ARGS__
#else
   #define CFG_TEST_MANY_OPTIONS 0
   #define USE_TEST_MANY_OPTIONS(...)
#endif

#ifdef CONFIG_TEST_SCANKEY
   #define CFG_TEST_SCANKEY 1
   #define USE_TEST_SCANKEY(...) __VA_ARGS__
#else
   #define CFG_TEST_SCANKEY 0
   #define USE_TEST_SCANKEY(...)
#endif

#ifdef CONFIG_TEST_UTF8TOWC
   #define CFG_TEST_UTF8TOWC 1
   #define USE_TEST_UTF8TOWC(...) __VA_ARGS__
#else
   #define CFG_TEST_UTF8TOWC 0
   #define USE_TEST_UTF8TOWC(...)
#endif

#ifdef CONFIG_GETENFORCE
   #define CFG_GETENFORCE 1
   #define USE_GETENFORCE(...) __VA_ARGS__
#else
   #define CFG_GETENFORCE 0
   #define USE_GETENFORCE(...)
#endif

#ifdef CONFIG_GETPROP
   #define CFG_GETPROP 1
   #define USE_GETPROP(...) __VA_ARGS__
#else
   #define CFG_GETPROP 0
   #define USE_GETPROP(...)
#endif

#ifdef CONFIG_LOAD_POLICY
   #define CFG_LOAD_POLICY 1
   #define USE_LOAD_POLICY(...) __VA_ARGS__
#else
   #define CFG_LOAD_POLICY 0
   #define USE_LOAD_POLICY(...)
#endif

#ifdef CONFIG_LOG
   #define CFG_LOG 1
   #define USE_LOG(...) __VA_ARGS__
#else
   #define CFG_LOG 0
   #define USE_LOG(...)
#endif

#ifdef CONFIG_RESTORECON
   #define CFG_RESTORECON 1
   #define USE_RESTORECON(...) __VA_ARGS__
#else
   #define CFG_RESTORECON 0
   #define USE_RESTORECON(...)
#endif

#ifdef CONFIG_RUNCON
   #define CFG_RUNCON 1
   #define USE_RUNCON(...) __VA_ARGS__
#else
   #define CFG_RUNCON 0
   #define USE_RUNCON(...)
#endif

#ifdef CONFIG_SENDEVENT
   #define CFG_SENDEVENT 1
   #define USE_SENDEVENT(...) __VA_ARGS__
#else
   #define CFG_SENDEVENT 0
   #define USE_SENDEVENT(...)
#endif

#ifdef CONFIG_SETENFORCE
   #define CFG_SETENFORCE 1
   #define USE_SETENFORCE(...) __VA_ARGS__
#else
   #define CFG_SETENFORCE 0
   #define USE_SETENFORCE(...)
#endif

#ifdef CONFIG_SETPROP
   #define CFG_SETPROP 1
   #define USE_SETPROP(...) __VA_ARGS__
#else
   #define CFG_SETPROP 0
   #define USE_SETPROP(...)
#endif

#ifdef CONFIG_START
   #define CFG_START 1
   #define USE_START(...) __VA_ARGS__
#else
   #define CFG_START 0
   #define USE_START(...)
#endif

#ifdef CONFIG_STOP
   #define CFG_STOP 1
   #define USE_STOP(...) __VA_ARGS__
#else
   #define CFG_STOP 0
   #define USE_STOP(...)
#endif

#ifdef CONFIG_TOYBOX
   #define CFG_TOYBOX 1
   #define USE_TOYBOX(...) __VA_ARGS__
#else
   #define CFG_TOYBOX 0
   #define USE_TOYBOX(...)
#endif

#ifdef CONFIG_TOYBOX_SUID
   #define CFG_TOYBOX_SUID 1
   #define USE_TOYBOX_SUID(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_SUID 0
   #define USE_TOYBOX_SUID(...)
#endif

#ifdef CONFIG_TOYBOX_LSM_NONE
   #define CFG_TOYBOX_LSM_NONE 1
   #define USE_TOYBOX_LSM_NONE(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_LSM_NONE 0
   #define USE_TOYBOX_LSM_NONE(...)
#endif

#ifdef CONFIG_TOYBOX_SELINUX
   #define CFG_TOYBOX_SELINUX 1
   #define USE_TOYBOX_SELINUX(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_SELINUX 0
   #define USE_TOYBOX_SELINUX(...)
#endif

#ifdef CONFIG_TOYBOX_SMACK
   #define CFG_TOYBOX_SMACK 1
   #define USE_TOYBOX_SMACK(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_SMACK 0
   #define USE_TOYBOX_SMACK(...)
#endif

#ifdef CONFIG_TOYBOX_LIBCRYPTO
   #define CFG_TOYBOX_LIBCRYPTO 1
   #define USE_TOYBOX_LIBCRYPTO(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_LIBCRYPTO 0
   #define USE_TOYBOX_LIBCRYPTO(...)
#endif

#ifdef CONFIG_TOYBOX_LIBZ
   #define CFG_TOYBOX_LIBZ 1
   #define USE_TOYBOX_LIBZ(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_LIBZ 0
   #define USE_TOYBOX_LIBZ(...)
#endif

#ifdef CONFIG_TOYBOX_FLOAT
   #define CFG_TOYBOX_FLOAT 1
   #define USE_TOYBOX_FLOAT(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_FLOAT 0
   #define USE_TOYBOX_FLOAT(...)
#endif

#ifdef CONFIG_TOYBOX_HELP
   #define CFG_TOYBOX_HELP 1
   #define USE_TOYBOX_HELP(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_HELP 0
   #define USE_TOYBOX_HELP(...)
#endif

#ifdef CONFIG_TOYBOX_HELP_DASHDASH
   #define CFG_TOYBOX_HELP_DASHDASH 1
   #define USE_TOYBOX_HELP_DASHDASH(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_HELP_DASHDASH 0
   #define USE_TOYBOX_HELP_DASHDASH(...)
#endif

#ifdef CONFIG_TOYBOX_I18N
   #define CFG_TOYBOX_I18N 1
   #define USE_TOYBOX_I18N(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_I18N 0
   #define USE_TOYBOX_I18N(...)
#endif

#ifdef CONFIG_TOYBOX_FREE
   #define CFG_TOYBOX_FREE 1
   #define USE_TOYBOX_FREE(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_FREE 0
   #define USE_TOYBOX_FREE(...)
#endif

#ifdef CONFIG_TOYBOX_NORECURSE
   #define CFG_TOYBOX_NORECURSE 1
   #define USE_TOYBOX_NORECURSE(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_NORECURSE 0
   #define USE_TOYBOX_NORECURSE(...)
#endif

#ifdef CONFIG_TOYBOX_DEBUG
   #define CFG_TOYBOX_DEBUG 1
   #define USE_TOYBOX_DEBUG(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_DEBUG 0
   #define USE_TOYBOX_DEBUG(...)
#endif

#ifdef CONFIG_TOYBOX_PEDANTIC_ARGS
   #define CFG_TOYBOX_PEDANTIC_ARGS 1
   #define USE_TOYBOX_PEDANTIC_ARGS(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_PEDANTIC_ARGS 0
   #define USE_TOYBOX_PEDANTIC_ARGS(...)
#endif

#ifdef CONFIG_TOYBOX_MUSL_NOMMU_IS_BROKEN
   #define CFG_TOYBOX_MUSL_NOMMU_IS_BROKEN 1
   #define USE_TOYBOX_MUSL_NOMMU_IS_BROKEN(...) __VA_ARGS__
#else
   #define CFG_TOYBOX_MUSL_NOMMU_IS_BROKEN 0
   #define USE_TOYBOX_MUSL_NOMMU_IS_BROKEN(...)
#endif


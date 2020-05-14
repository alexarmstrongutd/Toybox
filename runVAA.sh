#!/bin/bash


path=$(pwd)

filesToProcess() {
  local listFile=filelist
  cat $listFile
}

flags="--bdd  --serializeAST \
  -A cfginnonvoidfunction -A doublefree -A xfree -A uninitializedmemory -A casetermination -A danglingswitchcode -A checkstdlibfuncreturn -A deadstore -A interactiondegree \
  --platfromHeader ../TypeChef-GNUCHeader/platform.h \
  -x CONFIG_ \
  -I . \
  -I ../TypeChef-GNUCHeader/usr_include \
  -I generated \
  -I lib \
  -I kconfig \
  -I toys \
  -I kconfig/lxdialog \
  -I ../TypeChef-GNUCHeader/x86_64-linux-gnu/4.8/include \
  -I ../TypeChef-GNUCHeader/x86_64-linux-gnu/4.8/include-fixed \
  -I ../TypeChef-GNUCHeader/x86_64-linux-gnu \
  -I ../TypeChef-GNUCHeader/perl-5.30.2 \
  -I ../TypeChef-GNUCHeader/httpd-2.4.43/include \
  -I ../TypeChef-GNUCHeader/apr-1.7.0/include \
  -I ../TypeChef-GNUCHeader/apr-util-1.6.1/include \
  -I ../TypeChef-GNUCHeader/httpd-2.4.43/os/unix/ \
  -I ../TypeChef-GNUCHeader/usr_include2 \
  -I ../TypeChef-GNUCHeader/usr_include2/mysql \
  -I ../TypeChef-GNUCHeader/usr_include2/oracle/19.6/client \
  -I ../TypeChef-GNUCHeader/usr_include2/postgresql \
  -I ../TypeChef-GNUCHeader/usr_include2/android \
  -I ../TypeChef-GNUCHeader/local_include/ \
  --openFeat ../TypeChef-GNUCHeader/openfeatures.txt \
  --featureModelDimacs $path/featureModel.dimacs  \
  --recordTiming --parserstatistics --lexNoStdout \
	-U HAVE_LIBDMALLOC \
	-DCONFIG_FIND \
	-U CONFIG_FEATURE_WGET_LONG_OPTIONS \
	-U ENABLE_NC_110_COMPAT \
	-U CONFIG_EXTRA_COMPAT \
	-D_GNU_SOURCE"

filesToProcess|while read i; do
         echo "Analysing $path/$i.c"
         echo "With settings: $flags"
         ../TypeChef-VAA/typechef.sh  $path/$i.c $flags
done

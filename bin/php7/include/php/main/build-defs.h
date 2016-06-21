/*                                                                -*- C -*-
   +----------------------------------------------------------------------+
   | PHP Version 7                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2007 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig S�ther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#define CONFIGURE_COMMAND " './configure'  '--disable-inline-optimization' '--prefix=/home/php/bin/php7' '--exec-prefix=/home/php/bin/php7' '--with-curl=/home/php/bin/php7' '--with-zlib=/home/php/bin/php7' '--with-zlib-dir=/home/php/bin/php7' '--with-mcrypt=/home/php/bin/php7' '--with-gmp=/home/php/bin/php7' '--with-png-dir=/home/php/bin/php7' '--with-yaml=/home/php/bin/php7' '--with-gd' '--without-ncurses' '--without-readline' '--disable-debug' '--enable-mbstring' '--enable-calendar' '--enable-pthreads' '--disable-fileinfo' '--disable-libxml' '--disable-xml' '--disable-dom' '--disable-simplexml' '--disable-xmlreader' '--disable-xmlwriter' '--disable-cgi' '--disable-session' '--disable-pdo' '--without-pear' '--without-iconv' '--without-pdo-sqlite' '--with-pic' '--enable-phar' '--enable-ctype' '--enable-sockets' '--enable-shared=no' '--enable-static=yes' '--enable-shmop' '--enable-maintainer-zts' '--disable-short-tags' '--enable-pcntl' '--enable-embedded-mysqli' '--enable-mysqlnd' '--with-mysqli=mysqlnd' '--enable-bcmath' '--enable-cli' '--enable-zip' '--enable-ftp' '--with-zend-vm=GOTO' '--enable-opcache=yes' 'CC=gcc' 'CFLAGS=-O2 '-fPIC' '-march=native' '-mtune=native' '-fno-gcse' '-m64' 'LDFLAGS=-Wl,-rpath='\''$$ORIGIN/../lib'\'' '-Wl,-rpath-link='\''$$ORIGIN/../lib'\''' 'CPPFLAGS=' 'CXX=g++' 'CXXFLAGS=-O2 '-fPIC' '-march=native' '-mtune=native' '-fno-gcse' '-m64'"
#define PHP_ADA_INCLUDE		""
#define PHP_ADA_LFLAGS		""
#define PHP_ADA_LIBS		""
#define PHP_APACHE_INCLUDE	""
#define PHP_APACHE_TARGET	""
#define PHP_FHTTPD_INCLUDE      ""
#define PHP_FHTTPD_LIB          ""
#define PHP_FHTTPD_TARGET       ""
#define PHP_CFLAGS		"$(CFLAGS_CLEAN) -prefer-non-pic -static"
#define PHP_DBASE_LIB		""
#define PHP_BUILD_DEBUG		""
#define PHP_GDBM_INCLUDE	""
#define PHP_IBASE_INCLUDE	""
#define PHP_IBASE_LFLAGS	""
#define PHP_IBASE_LIBS		""
#define PHP_IFX_INCLUDE		""
#define PHP_IFX_LFLAGS		""
#define PHP_IFX_LIBS		""
#define PHP_INSTALL_IT		""
#define PHP_IODBC_INCLUDE	""
#define PHP_IODBC_LFLAGS	""
#define PHP_IODBC_LIBS		""
#define PHP_MSQL_INCLUDE	""
#define PHP_MSQL_LFLAGS		""
#define PHP_MSQL_LIBS		""
#define PHP_MYSQL_INCLUDE	"@MYSQL_INCLUDE@"
#define PHP_MYSQL_LIBS		"@MYSQL_LIBS@"
#define PHP_MYSQL_TYPE		"@MYSQL_MODULE_TYPE@"
#define PHP_ODBC_INCLUDE	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_SHARED_LIBADD 	""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_ORACLE_SHARED_LIBADD 	"@ORACLE_SHARED_LIBADD@"
#define PHP_ORACLE_DIR				"@ORACLE_DIR@"
#define PHP_ORACLE_VERSION			"@ORACLE_VERSION@"
#define PHP_PGSQL_INCLUDE	""
#define PHP_PGSQL_LFLAGS	""
#define PHP_PGSQL_LIBS		""
#define PHP_PROG_SENDMAIL	""
#define PHP_SOLID_INCLUDE	""
#define PHP_SOLID_LIBS		""
#define PHP_EMPRESS_INCLUDE	""
#define PHP_EMPRESS_LIBS	""
#define PHP_SYBASE_INCLUDE	""
#define PHP_SYBASE_LFLAGS	""
#define PHP_SYBASE_LIBS		""
#define PHP_DBM_TYPE		""
#define PHP_DBM_LIB		""
#define PHP_LDAP_LFLAGS		""
#define PHP_LDAP_INCLUDE	""
#define PHP_LDAP_LIBS		""
#define PHP_BIRDSTEP_INCLUDE     ""
#define PHP_BIRDSTEP_LIBS        ""
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "/home/php/bin/php7/lib/php/extensions/no-debug-zts-20151012"
#define PHP_PREFIX              "/home/php/bin/php7"
#define PHP_BINDIR              "/home/php/bin/php7/bin"
#define PHP_SBINDIR             "/home/php/bin/php7/sbin"
#define PHP_MANDIR              "/home/php/bin/php7/php/man"
#define PHP_LIBDIR              "/home/php/bin/php7/lib/php"
#define PHP_DATADIR             "/home/php/bin/php7/share/php"
#define PHP_SYSCONFDIR          "/home/php/bin/php7/etc"
#define PHP_LOCALSTATEDIR       "/home/php/bin/php7/var"
#define PHP_CONFIG_FILE_PATH    "/home/php/bin/php7/lib"
#define PHP_CONFIG_FILE_SCAN_DIR    ""
#define PHP_SHLIB_SUFFIX        "so"

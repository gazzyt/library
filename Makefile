#
# Makefile
#
# $Id: //poco/1.4/Net/samples/HTTPTimeServer/Makefile#1 $
#
# Makefile for Poco HTTPTimeServer
#

SUBDIRS = LibLibrary Library

all:
	@for i in $(SUBDIRS); do \
	$(MAKE) -C $$i; done

clean:
	@for i in $(SUBDIRS); do \
	$(MAKE) -C $$i clean; done



#
# Makefile
#
# $Id: //poco/1.4/Net/samples/HTTPTimeServer/Makefile#1 $
#
# Makefile for Poco HTTPTimeServer
#

SUBDIRS = Library LibLibrary
.PHONY: subdirs $(SUBDIRS)
subdirs: $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@
Library: LibLibrary

#
# Makefile
#
# $Id: //poco/1.4/Net/samples/HTTPTimeServer/Makefile#1 $
#
# Makefile for Poco HTTPTimeServer
#

include $(POCO_BASE)/build/rules/global

objects = Library

target         = Library
target_version = 1
target_libs    = PocoUtil PocoNet PocoXML PocoFoundation

include $(POCO_BASE)/build/rules/exec

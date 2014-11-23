#
# Makefile
#
# $Id: //poco/1.4/Net/samples/HTTPTimeServer/Makefile#1 $
#
# Makefile for Poco HTTPTimeServer
#


include $(POCO_BASE)/build/rules/global
CXXFLAGS += -std=c++11
objects = Library

target         = Library
target_version = 1
target_libs    = PocoUtil PocoNet PocoXML PocoFoundation PocoNetSSL PocoCrypto

include $(POCO_BASE)/build/rules/exec

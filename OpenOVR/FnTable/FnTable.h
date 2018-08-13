#pragma once
#include "decls_public.gen.h"

/**
 * FnTable.h
 *
 * This defines all the getter methods for the plain-C thunk tables. For each available
 * interface, it defines FnTable::GetCVRxxxx_0xx(CVRxxxx_0xx *) - this method returns the
 * table for the named interface, and takes the instance to proxy to as an argument.
 *
 * Note this (the instance) is stored in a global variable, and there is not a seperate
 * dynamically-generated table per instance you pass in - the function will always return
 * the same pointer.
 *
 * See FnTable.cpp for more information
 */
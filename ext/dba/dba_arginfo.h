/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: b5e8100725ae7e93f3ae4a599d88e6578884d0d4 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_dba_popen, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, handler)
	ZEND_ARG_VARIADIC_INFO(0, handler_params)
ZEND_END_ARG_INFO()

#define arginfo_dba_open arginfo_dba_popen

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dba_close, 0, 1, IS_VOID, 0)
	ZEND_ARG_INFO(0, dba)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dba_exists, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_MASK(0, key, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
	ZEND_ARG_INFO(0, dba)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_dba_fetch, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_MASK(0, key, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
	ZEND_ARG_INFO(0, dba)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, skip, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_dba_key_split, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_MASK(0, key, MAY_BE_STRING|MAY_BE_FALSE|MAY_BE_NULL, NULL)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_dba_firstkey, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, dba)
ZEND_END_ARG_INFO()

#define arginfo_dba_nextkey arginfo_dba_firstkey

#define arginfo_dba_delete arginfo_dba_exists

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dba_insert, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_MASK(0, key, MAY_BE_STRING|MAY_BE_ARRAY, NULL)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
	ZEND_ARG_INFO(0, dba)
ZEND_END_ARG_INFO()

#define arginfo_dba_replace arginfo_dba_insert

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dba_optimize, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dba)
ZEND_END_ARG_INFO()

#define arginfo_dba_sync arginfo_dba_optimize

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dba_handlers, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, full_info, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dba_list, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()


ZEND_FUNCTION(dba_popen);
ZEND_FUNCTION(dba_open);
ZEND_FUNCTION(dba_close);
ZEND_FUNCTION(dba_exists);
ZEND_FUNCTION(dba_fetch);
ZEND_FUNCTION(dba_key_split);
ZEND_FUNCTION(dba_firstkey);
ZEND_FUNCTION(dba_nextkey);
ZEND_FUNCTION(dba_delete);
ZEND_FUNCTION(dba_insert);
ZEND_FUNCTION(dba_replace);
ZEND_FUNCTION(dba_optimize);
ZEND_FUNCTION(dba_sync);
ZEND_FUNCTION(dba_handlers);
ZEND_FUNCTION(dba_list);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(dba_popen, arginfo_dba_popen)
	ZEND_FE(dba_open, arginfo_dba_open)
	ZEND_FE(dba_close, arginfo_dba_close)
	ZEND_FE(dba_exists, arginfo_dba_exists)
	ZEND_FE(dba_fetch, arginfo_dba_fetch)
	ZEND_FE(dba_key_split, arginfo_dba_key_split)
	ZEND_FE(dba_firstkey, arginfo_dba_firstkey)
	ZEND_FE(dba_nextkey, arginfo_dba_nextkey)
	ZEND_FE(dba_delete, arginfo_dba_delete)
	ZEND_FE(dba_insert, arginfo_dba_insert)
	ZEND_FE(dba_replace, arginfo_dba_replace)
	ZEND_FE(dba_optimize, arginfo_dba_optimize)
	ZEND_FE(dba_sync, arginfo_dba_sync)
	ZEND_FE(dba_handlers, arginfo_dba_handlers)
	ZEND_FE(dba_list, arginfo_dba_list)
	ZEND_FE_END
};

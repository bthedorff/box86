#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

//GO(dbus_connection_get_g_connection, 
//GO(dbus_connection_get_g_type, 
//GO(dbus_connection_setup_with_g_main, 
GO(dbus_g_bus_get, pFip)
GO(dbus_g_bus_get_private, pFipp)
GO(dbus_g_connection_flush, vFp)
GO(dbus_g_connection_get_connection, pFp)
GO(dbus_g_connection_get_g_type, iFv)
GO(dbus_g_connection_lookup_g_object, pFpp)
GO(dbus_g_connection_open, pFpp)
GO(dbus_g_connection_ref, pFp)
GO(dbus_g_connection_register_g_object, vFppp)
GO(dbus_g_connection_unref, vFp)
GO(dbus_g_connection_unregister_g_object, vFpp)
//GO(dbus_g_error_domain_register, 
//GO(dbus_g_error_get_name, 
//GO(dbus_g_error_has_name, 
//GO(dbus_g_error_quark, 
//GO(dbus_glib_internal_do_not_use_run_tests, 
//GO(dbus_g_message_get_g_type, 
//GO(dbus_g_message_get_message, 
//GO(dbus_g_message_ref, 
//GO(dbus_g_message_unref, 
//GO(dbus_g_method_get_reply, 
//GO(dbus_g_method_get_sender, 
//GO(dbus_g_method_return, 
//GO(dbus_g_method_return_error, 
//GO(dbus_g_method_send_reply, 
//GO(dbus_g_object_path_get_g_type, 
//GO(dbus_g_object_register_marshaller, 
//GO(dbus_g_object_register_marshaller_array, 
//GO(dbus_g_object_type_install_info, 
//GO(dbus_g_object_type_register_shadow_property, 
//GO(dbus_g_proxy_add_signal, 
//GO(dbus_g_proxy_begin_call, 
//GO(dbus_g_proxy_begin_call_with_timeout, 
//GO(dbus_g_proxy_call, 
//GO(dbus_g_proxy_call_no_reply, 
//GO(dbus_g_proxy_call_with_timeout, 
//GO(dbus_g_proxy_cancel_call, 
//GO(dbus_g_proxy_connect_signal, 
//GO(dbus_g_proxy_disconnect_signal, 
//GO(dbus_g_proxy_end_call, 
//GO(dbus_g_proxy_get_bus_name, 
//GO(dbus_g_proxy_get_interface, 
//GO(dbus_g_proxy_get_path, 
//GO(dbus_g_proxy_get_type, 
//GO(dbus_g_proxy_new_for_name, 
//GO(dbus_g_proxy_new_for_name_owner, 
//GO(dbus_g_proxy_new_for_peer, 
//GO(dbus_g_proxy_new_from_proxy, 
//GO(dbus_g_proxy_send, 
//GO(dbus_g_proxy_set_default_timeout, 
//GO(dbus_g_proxy_set_interface, 
//GO(dbus_g_signature_get_g_type, 
GO(dbus_g_thread_init, vFv)
//GO(dbus_g_type_collection_get_fixed, 
//GO(dbus_g_type_collection_peek_vtable, 
//GO(dbus_g_type_collection_value_iterate, vFpBp)
//GO(dbus_g_type_get_collection, 
//GO(dbus_g_type_get_collection_specialization, 
GO(dbus_g_type_get_map, iFpii)
//GO(dbus_g_type_get_map_key_specialization, 
//GO(dbus_g_type_get_map_value_specialization, 
//GO(dbus_g_type_get_struct, 
//GO(dbus_g_type_get_struct_member_type, 
//GO(dbus_g_type_get_struct_size, 
//GO(dbus_g_type_get_structv, 
//GO(dbus_g_type_is_collection, 
//GO(dbus_g_type_is_map, 
//GO(dbus_g_type_is_struct, 
//GO(dbus_g_type_map_peek_vtable, 
//GO(dbus_g_type_map_value_iterate, 
//GO(dbus_g_type_register_collection, 
//GO(dbus_g_type_register_map, 
//GO(dbus_g_type_register_struct, 
//GO(dbus_g_type_specialized_collection_append, 
//GO(dbus_g_type_specialized_collection_end_append, 
//GO(dbus_g_type_specialized_construct, 
//GO(dbus_g_type_specialized_init, 
//GO(dbus_g_type_specialized_init_append, 
//GO(dbus_g_type_specialized_map_append, 
//GO(dbus_g_type_struct_get, 
//GO(dbus_g_type_struct_get_member, 
//GO(dbus_g_type_struct_peek_vtable, 
//GO(dbus_g_type_struct_set, 
//GO(dbus_g_type_struct_set_member, 
//GO(dbus_message_get_g_type, 
//GO(dbus_server_setup_with_g_main, 
//GO(dbus_set_g_error, 

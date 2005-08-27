#include "utils.h"
#include "conversion.h"
#include "gobject.h"
#include "gtkFuncs.h"
#include "userfuncs.h"


#include "RGtk.h"

USER_OBJECT_
S_GTK_OBJECT_TYPE(USER_OBJECT_ s_object)
{
	GtkObject* object = GTK_OBJECT(getPtrValue(s_object));

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = GTK_OBJECT_TYPE(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_GTK_CHECK_TYPE(USER_OBJECT_ s_object, USER_OBJECT_ s_type)
{
	GtkObject* object = GTK_OBJECT(getPtrValue(s_object));
	guint type = (guint)asNumeric(s_type);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = GTK_CHECK_TYPE(object, type);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_GTK_OBJECT_FLAGS(USER_OBJECT_ s_object)
{
	GtkObject* object = GTK_OBJECT(getPtrValue(s_object));

	GtkWidgetFlags ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = GTK_OBJECT_FLAGS(object);

	_result = asRFlag(ans, GTK_TYPE_WIDGET_FLAGS);

	return(_result);
}
 

USER_OBJECT_
S_GTK_WIDGET_SET_FLAGS(USER_OBJECT_ s_wid, USER_OBJECT_ s_flags)
{
	GtkWidget* wid = GTK_WIDGET(getPtrValue(s_wid));
	GtkWidgetFlags flags = (GtkWidgetFlags)asFlag(s_flags, GTK_TYPE_WIDGET_FLAGS);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	GTK_WIDGET_SET_FLAGS(wid, flags);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_name(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_name(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_name(USER_OBJECT_ s_object, USER_OBJECT_ s_name)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	const gchar* name = GET_LENGTH(s_name) == 0 ? NULL : (const gchar*)asString(s_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_name(object, name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_version(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_version(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_version(USER_OBJECT_ s_object, USER_OBJECT_ s_version)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	const gchar* version = GET_LENGTH(s_version) == 0 ? NULL : (const gchar*)asString(s_version);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_version(object, version);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_copyright(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_copyright(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_copyright(USER_OBJECT_ s_object, USER_OBJECT_ s_copyright)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	const gchar* copyright = GET_LENGTH(s_copyright) == 0 ? NULL : (const gchar*)asString(s_copyright);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_copyright(object, copyright);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_comments(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_comments(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_comments(USER_OBJECT_ s_object, USER_OBJECT_ s_comments)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	const gchar* comments = GET_LENGTH(s_comments) == 0 ? NULL : (const gchar*)asString(s_comments);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_comments(object, comments);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_license(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_license(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_license(USER_OBJECT_ s_object, USER_OBJECT_ s_license)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	const gchar* license = GET_LENGTH(s_license) == 0 ? NULL : (const gchar*)asString(s_license);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_license(object, license);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_wrap_license(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_wrap_license(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_wrap_license(USER_OBJECT_ s_object, USER_OBJECT_ s_wrap_license)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	gboolean wrap_license = (gboolean)asLogical(s_wrap_license);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_wrap_license(object, wrap_license);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_website(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_website(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_website(USER_OBJECT_ s_object, USER_OBJECT_ s_website)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	const gchar* website = GET_LENGTH(s_website) == 0 ? NULL : (const gchar*)asString(s_website);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_website(object, website);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_website_label(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_website_label(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_website_label(USER_OBJECT_ s_object, USER_OBJECT_ s_website_label)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	const gchar* website_label = GET_LENGTH(s_website_label) == 0 ? NULL : (const gchar*)asString(s_website_label);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_website_label(object, website_label);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_authors(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	const gchar** ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_authors(object);

	_result = asRStringArray(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_authors(USER_OBJECT_ s_object, USER_OBJECT_ s_authors)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	const gchar** authors = (const gchar**)asStringArray(s_authors);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_authors(object, authors);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_documenters(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	const gchar** ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_documenters(object);

	_result = asRStringArray(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_documenters(USER_OBJECT_ s_object, USER_OBJECT_ s_documenters)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	const gchar** documenters = (const gchar**)asStringArray(s_documenters);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_documenters(object, documenters);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_artists(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	const gchar** ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_artists(object);

	_result = asRStringArray(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_artists(USER_OBJECT_ s_object, USER_OBJECT_ s_artists)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	const gchar** artists = (const gchar**)asStringArray(s_artists);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_artists(object, artists);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_translator_credits(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_translator_credits(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_translator_credits(USER_OBJECT_ s_object, USER_OBJECT_ s_translator_credits)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	const gchar* translator_credits = GET_LENGTH(s_translator_credits) == 0 ? NULL : (const gchar*)asString(s_translator_credits);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_translator_credits(object, translator_credits);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_logo(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_logo(object);

	_result = toRPointerWithRef(ans, "GdkPixbuf");

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_logo(USER_OBJECT_ s_object, USER_OBJECT_ s_logo)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	GdkPixbuf* logo = GET_LENGTH(s_logo) == 0 ? NULL : GDK_PIXBUF(getPtrValue(s_logo));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_logo(object, logo);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_get_logo_icon_name(USER_OBJECT_ s_object)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_get_logo_icon_name(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_logo_icon_name(USER_OBJECT_ s_object, USER_OBJECT_ s_icon_name)
{
	GtkAboutDialog* object = GTK_ABOUT_DIALOG(getPtrValue(s_object));
	const gchar* icon_name = GET_LENGTH(s_icon_name) == 0 ? NULL : (const gchar*)asString(s_icon_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_about_dialog_set_logo_icon_name(object, icon_name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_email_hook(USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkAboutDialogActivateLinkFunc func = (GtkAboutDialogActivateLinkFunc)S_GtkAboutDialogActivateLinkFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GDestroyNotify destroy = (GDestroyNotify)g_closure_sink;

	GtkAboutDialogActivateLinkFunc ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_set_email_hook(func, data, destroy);

	_result = toRPointer(ans, "GtkAboutDialogActivateLinkFunc");

	return(_result);
}
 

USER_OBJECT_
S_gtk_about_dialog_set_url_hook(USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkAboutDialogActivateLinkFunc func = (GtkAboutDialogActivateLinkFunc)S_GtkAboutDialogActivateLinkFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GDestroyNotify destroy = (GDestroyNotify)g_closure_sink;

	GtkAboutDialogActivateLinkFunc ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_about_dialog_set_url_hook(func, data, destroy);

	_result = toRPointer(ans, "GtkAboutDialogActivateLinkFunc");

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_group_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_group_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_group_new()
{

	GtkAccelGroup* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_group_new();

	_result = toRPointerWithFinalizer(ans, "GtkAccelGroup", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_group_lock(USER_OBJECT_ s_object)
{
	GtkAccelGroup* object = GTK_ACCEL_GROUP(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_group_lock(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_group_unlock(USER_OBJECT_ s_object)
{
	GtkAccelGroup* object = GTK_ACCEL_GROUP(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_group_unlock(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_group_connect(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_key, USER_OBJECT_ s_accel_mods, USER_OBJECT_ s_accel_flags, USER_OBJECT_ s_closure)
{
	GtkAccelGroup* object = GTK_ACCEL_GROUP(getPtrValue(s_object));
	guint accel_key = (guint)asNumeric(s_accel_key);
	GdkModifierType accel_mods = (GdkModifierType)asFlag(s_accel_mods, GDK_TYPE_MODIFIER_TYPE);
	GtkAccelFlags accel_flags = (GtkAccelFlags)asFlag(s_accel_flags, GTK_TYPE_ACCEL_FLAGS);
	GClosure* closure = asGClosure(s_closure);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_group_connect(object, accel_key, accel_mods, accel_flags, closure);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_group_connect_by_path(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_path, USER_OBJECT_ s_closure)
{
	GtkAccelGroup* object = GTK_ACCEL_GROUP(getPtrValue(s_object));
	const gchar* accel_path = (const gchar*)asString(s_accel_path);
	GClosure* closure = asGClosure(s_closure);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_group_connect_by_path(object, accel_path, closure);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_group_disconnect(USER_OBJECT_ s_object, USER_OBJECT_ s_closure)
{
	GtkAccelGroup* object = GTK_ACCEL_GROUP(getPtrValue(s_object));
	GClosure* closure = asGClosure(s_closure);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_group_disconnect(object, closure);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_group_disconnect_key(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_key, USER_OBJECT_ s_accel_mods)
{
	GtkAccelGroup* object = GTK_ACCEL_GROUP(getPtrValue(s_object));
	guint accel_key = (guint)asNumeric(s_accel_key);
	GdkModifierType accel_mods = (GdkModifierType)asFlag(s_accel_mods, GDK_TYPE_MODIFIER_TYPE);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_group_disconnect_key(object, accel_key, accel_mods);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_group_activate(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_quark, USER_OBJECT_ s_acceleratable, USER_OBJECT_ s_accel_key, USER_OBJECT_ s_accel_mods)
{
	GtkAccelGroup* object = GTK_ACCEL_GROUP(getPtrValue(s_object));
	GQuark accel_quark = (GQuark)asNumeric(s_accel_quark);
	GObject* acceleratable = (GObject*)getPtrValue(s_acceleratable);
	guint accel_key = (guint)asNumeric(s_accel_key);
	GdkModifierType accel_mods = (GdkModifierType)asFlag(s_accel_mods, GDK_TYPE_MODIFIER_TYPE);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_group_activate(object, accel_quark, acceleratable, accel_key, accel_mods);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_groups_activate(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_key, USER_OBJECT_ s_accel_mods)
{
	GObject* object = (GObject*)getPtrValue(s_object);
	guint accel_key = (guint)asNumeric(s_accel_key);
	GdkModifierType accel_mods = (GdkModifierType)asFlag(s_accel_mods, GDK_TYPE_MODIFIER_TYPE);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_groups_activate(object, accel_key, accel_mods);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_groups_from_object(USER_OBJECT_ s_object)
{
	GObject* object = (GObject*)getPtrValue(s_object);

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_groups_from_object(object);

	_result = asRGSListWithRef(ans, "GtkAccelGroup");
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_group_find(USER_OBJECT_ s_object, USER_OBJECT_ s_find_func, USER_OBJECT_ s_data)
{
	GtkAccelGroupFindFunc find_func = (GtkAccelGroupFindFunc)S_GtkAccelGroupFindFunc;
	GClosure* data = R_createGClosure(s_find_func, s_data);
	GtkAccelGroup* object = GTK_ACCEL_GROUP(getPtrValue(s_object));

	GtkAccelKey* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_group_find(object, find_func, data);

	_result = toRPointer(ans, "GtkAccelKey");
	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accelerator_valid(USER_OBJECT_ s_keyval, USER_OBJECT_ s_modifiers)
{
	guint keyval = (guint)asNumeric(s_keyval);
	GdkModifierType modifiers = (GdkModifierType)asFlag(s_modifiers, GDK_TYPE_MODIFIER_TYPE);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accelerator_valid(keyval, modifiers);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accelerator_parse(USER_OBJECT_ s_accelerator)
{
	const gchar* accelerator = (const gchar*)asString(s_accelerator);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	guint accelerator_key;
	GdkModifierType accelerator_mods;

	gtk_accelerator_parse(accelerator, &accelerator_key, &accelerator_mods);


	_result = retByVal(_result, "accelerator_key", asRNumeric(accelerator_key), "accelerator_mods", asRFlag(accelerator_mods, GDK_TYPE_MODIFIER_TYPE), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accelerator_name(USER_OBJECT_ s_accelerator_key, USER_OBJECT_ s_accelerator_mods)
{
	guint accelerator_key = (guint)asNumeric(s_accelerator_key);
	GdkModifierType accelerator_mods = (GdkModifierType)asFlag(s_accelerator_mods, GDK_TYPE_MODIFIER_TYPE);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accelerator_name(accelerator_key, accelerator_mods);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accelerator_set_default_mod_mask(USER_OBJECT_ s_default_mod_mask)
{
	GdkModifierType default_mod_mask = (GdkModifierType)asFlag(s_default_mod_mask, GDK_TYPE_MODIFIER_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accelerator_set_default_mod_mask(default_mod_mask);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accelerator_get_default_mod_mask()
{

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accelerator_get_default_mod_mask();

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accelerator_get_label(USER_OBJECT_ s_accelerator_key, USER_OBJECT_ s_accelerator_mods)
{
	guint accelerator_key = (guint)asNumeric(s_accelerator_key);
	GdkModifierType accelerator_mods = (GdkModifierType)asFlag(s_accelerator_mods, GDK_TYPE_MODIFIER_TYPE);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accelerator_get_label(accelerator_key, accelerator_mods);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_label_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_label_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_label_new(USER_OBJECT_ s_string)
{
	char * prop_names[] = { "label", NULL };
	USER_OBJECT_ args[] = { s_string };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_ACCEL_LABEL, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_label_accelerator_width(USER_OBJECT_ s_object)
{
	GtkAccelLabel* object = GTK_ACCEL_LABEL(getPtrValue(s_object));

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_label_accelerator_width(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_label_get_accel_widget(USER_OBJECT_ s_object)
{
	GtkAccelLabel* object = GTK_ACCEL_LABEL(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_label_get_accel_widget(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_label_get_accel_width(USER_OBJECT_ s_object)
{
	GtkAccelLabel* object = GTK_ACCEL_LABEL(getPtrValue(s_object));

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_label_get_accel_width(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_label_set_accel_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_widget)
{
	GtkAccelLabel* object = GTK_ACCEL_LABEL(getPtrValue(s_object));
	GtkWidget* accel_widget = GTK_WIDGET(getPtrValue(s_accel_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_label_set_accel_widget(object, accel_widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_label_set_accel_closure(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_closure)
{
	GtkAccelLabel* object = GTK_ACCEL_LABEL(getPtrValue(s_object));
	GClosure* accel_closure = asGClosure(s_accel_closure);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_label_set_accel_closure(object, accel_closure);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_label_refetch(USER_OBJECT_ s_object)
{
	GtkAccelLabel* object = GTK_ACCEL_LABEL(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_label_refetch(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_add_entry(USER_OBJECT_ s_accel_path, USER_OBJECT_ s_accel_key, USER_OBJECT_ s_accel_mods)
{
	const gchar* accel_path = (const gchar*)asString(s_accel_path);
	guint accel_key = (guint)asNumeric(s_accel_key);
	GdkModifierType accel_mods = (GdkModifierType)asFlag(s_accel_mods, GDK_TYPE_MODIFIER_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_map_add_entry(accel_path, accel_key, accel_mods);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_lookup_entry(USER_OBJECT_ s_accel_path)
{
	const gchar* accel_path = (const gchar*)asString(s_accel_path);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkAccelKey* key = (GtkAccelKey *)g_new0(GtkAccelKey, 1);

	ans = gtk_accel_map_lookup_entry(accel_path, key);

	_result = asRLogical(ans);

	_result = retByVal(_result, "key", toRPointer(key, "GtkAccelKey"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_change_entry(USER_OBJECT_ s_accel_path, USER_OBJECT_ s_accel_key, USER_OBJECT_ s_accel_mods, USER_OBJECT_ s_replace)
{
	const gchar* accel_path = (const gchar*)asString(s_accel_path);
	guint accel_key = (guint)asNumeric(s_accel_key);
	GdkModifierType accel_mods = (GdkModifierType)asFlag(s_accel_mods, GDK_TYPE_MODIFIER_TYPE);
	gboolean replace = (gboolean)asLogical(s_replace);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_map_change_entry(accel_path, accel_key, accel_mods, replace);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_load(USER_OBJECT_ s_file_name)
{
	const gchar* file_name = (const gchar*)asString(s_file_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_map_load(file_name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_save(USER_OBJECT_ s_file_name)
{
	const gchar* file_name = (const gchar*)asString(s_file_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_map_save(file_name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_foreach(USER_OBJECT_ s_data, USER_OBJECT_ s_foreach_func)
{
	GtkAccelMapForeach foreach_func = (GtkAccelMapForeach)S_GtkAccelMapForeach;
	GClosure* data = R_createGClosure(s_foreach_func, s_data);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_map_foreach(data, foreach_func);

	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_load_fd(USER_OBJECT_ s_fd)
{
	gint fd = (gint)asInteger(s_fd);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_map_load_fd(fd);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_load_scanner(USER_OBJECT_ s_scanner)
{
	GScanner* scanner = (GScanner*)getPtrValue(s_scanner);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_map_load_scanner(scanner);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_save_fd(USER_OBJECT_ s_fd)
{
	gint fd = (gint)asInteger(s_fd);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_map_save_fd(fd);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_lock_path(USER_OBJECT_ s_accel_path)
{
	const gchar* accel_path = (const gchar*)asString(s_accel_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_map_lock_path(accel_path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_unlock_path(USER_OBJECT_ s_accel_path)
{
	const gchar* accel_path = (const gchar*)asString(s_accel_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_map_unlock_path(accel_path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_add_filter(USER_OBJECT_ s_filter_pattern)
{
	const gchar* filter_pattern = (const gchar*)asString(s_filter_pattern);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_map_add_filter(filter_pattern);


	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_foreach_unfiltered(USER_OBJECT_ s_data, USER_OBJECT_ s_foreach_func)
{
	GtkAccelMapForeach foreach_func = (GtkAccelMapForeach)S_GtkAccelMapForeach;
	GClosure* data = R_createGClosure(s_foreach_func, s_data);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accel_map_foreach_unfiltered(data, foreach_func);

	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_map_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accel_map_get()
{

	GtkAccelMap* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accel_map_get();

	_result = toRPointer(ans, "GtkAccelMap");

	return(_result);
}
 

USER_OBJECT_
S_gtk_accessible_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_accessible_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_accessible_connect_widget_destroyed(USER_OBJECT_ s_object)
{
	GtkAccessible* object = GTK_ACCESSIBLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_accessible_connect_widget_destroyed(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_new(USER_OBJECT_ s_name, USER_OBJECT_ s_label, USER_OBJECT_ s_tooltip, USER_OBJECT_ s_stock_id)
{
	char * prop_names[] = { "name", "label", "tooltip", "stock_id", NULL };
	USER_OBJECT_ args[] = { s_name, s_label, s_tooltip, s_stock_id };

	GtkAction* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_ACTION, prop_names, args, 4);

	_result = toRPointerWithFinalizer(ans, "GtkAction", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_get_name(USER_OBJECT_ s_object)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_get_name(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_is_sensitive(USER_OBJECT_ s_object)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_is_sensitive(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_get_sensitive(USER_OBJECT_ s_object)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_get_sensitive(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_is_visible(USER_OBJECT_ s_object)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_is_visible(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_get_visible(USER_OBJECT_ s_object)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_get_visible(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_activate(USER_OBJECT_ s_object)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_activate(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_create_icon(USER_OBJECT_ s_object, USER_OBJECT_ s_icon_size)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));
	GtkIconSize icon_size = (GtkIconSize)asEnum(s_icon_size, GTK_TYPE_ICON_SIZE);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_create_icon(object, icon_size);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_create_menu_item(USER_OBJECT_ s_object)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_create_menu_item(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_create_tool_item(USER_OBJECT_ s_object)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_create_tool_item(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_connect_proxy(USER_OBJECT_ s_object, USER_OBJECT_ s_proxy)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));
	GtkWidget* proxy = GTK_WIDGET(getPtrValue(s_proxy));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_connect_proxy(object, proxy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_disconnect_proxy(USER_OBJECT_ s_object, USER_OBJECT_ s_proxy)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));
	GtkWidget* proxy = GTK_WIDGET(getPtrValue(s_proxy));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_disconnect_proxy(object, proxy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_get_proxies(USER_OBJECT_ s_object)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_get_proxies(object);

	_result = asRGSList(ans, "GtkWidget");
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_connect_accelerator(USER_OBJECT_ s_object)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_connect_accelerator(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_disconnect_accelerator(USER_OBJECT_ s_object)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_disconnect_accelerator(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_get_accel_path(USER_OBJECT_ s_object)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_get_accel_path(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_block_activate_from(USER_OBJECT_ s_object, USER_OBJECT_ s_proxy)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));
	GtkWidget* proxy = GTK_WIDGET(getPtrValue(s_proxy));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_block_activate_from(object, proxy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_unblock_activate_from(USER_OBJECT_ s_object, USER_OBJECT_ s_proxy)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));
	GtkWidget* proxy = GTK_WIDGET(getPtrValue(s_proxy));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_unblock_activate_from(object, proxy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_set_accel_path(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_path)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));
	const gchar* accel_path = (const gchar*)asString(s_accel_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_set_accel_path(object, accel_path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_set_accel_group(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_group)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));
	GtkAccelGroup* accel_group = GTK_ACCEL_GROUP(getPtrValue(s_accel_group));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_set_accel_group(object, accel_group);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_set_sensitive(USER_OBJECT_ s_object, USER_OBJECT_ s_sensitive)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));
	gboolean sensitive = (gboolean)asLogical(s_sensitive);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_set_sensitive(object, sensitive);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_set_visible(USER_OBJECT_ s_object, USER_OBJECT_ s_visible)
{
	GtkAction* object = GTK_ACTION(getPtrValue(s_object));
	gboolean visible = (gboolean)asLogical(s_visible);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_set_visible(object, visible);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_group_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_new(USER_OBJECT_ s_name)
{
	char * prop_names[] = { "name", NULL };
	USER_OBJECT_ args[] = { s_name };

	GtkActionGroup* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_ACTION_GROUP, prop_names, args, 1);

	_result = toRPointerWithFinalizer(ans, "GtkActionGroup", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_get_name(USER_OBJECT_ s_object)
{
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_group_get_name(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_get_sensitive(USER_OBJECT_ s_object)
{
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_group_get_sensitive(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_set_sensitive(USER_OBJECT_ s_object, USER_OBJECT_ s_sensitive)
{
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));
	gboolean sensitive = (gboolean)asLogical(s_sensitive);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_group_set_sensitive(object, sensitive);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_get_visible(USER_OBJECT_ s_object)
{
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_group_get_visible(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_set_visible(USER_OBJECT_ s_object, USER_OBJECT_ s_visible)
{
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));
	gboolean visible = (gboolean)asLogical(s_visible);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_group_set_visible(object, visible);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_get_action(USER_OBJECT_ s_object, USER_OBJECT_ s_action_name)
{
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));
	const gchar* action_name = (const gchar*)asString(s_action_name);

	GtkAction* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_group_get_action(object, action_name);

	_result = toRPointerWithRef(ans, "GtkAction");

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_list_actions(USER_OBJECT_ s_object)
{
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_group_list_actions(object);

	_result = asRGListWithRef(ans, "GtkAction");
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_add_action(USER_OBJECT_ s_object, USER_OBJECT_ s_action)
{
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));
	GtkAction* action = GTK_ACTION(getPtrValue(s_action));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_group_add_action(object, action);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_add_action_with_accel(USER_OBJECT_ s_object, USER_OBJECT_ s_action, USER_OBJECT_ s_accelerator)
{
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));
	GtkAction* action = GTK_ACTION(getPtrValue(s_action));
	const gchar* accelerator = GET_LENGTH(s_accelerator) == 0 ? NULL : (const gchar*)asString(s_accelerator);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_group_add_action_with_accel(object, action, accelerator);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_remove_action(USER_OBJECT_ s_object, USER_OBJECT_ s_action)
{
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));
	GtkAction* action = GTK_ACTION(getPtrValue(s_action));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_group_remove_action(object, action);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_set_translate_func(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTranslateFunc func = (GtkTranslateFunc)S_GtkTranslateFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));
	GtkDestroyNotify notify = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_group_set_translate_func(object, func, data, notify);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_set_translation_domain(USER_OBJECT_ s_object, USER_OBJECT_ s_domain)
{
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));
	const gchar* domain = (const gchar*)asString(s_domain);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_action_group_set_translation_domain(object, domain);


	return(_result);
}
 

USER_OBJECT_
S_gtk_action_group_translate_string(USER_OBJECT_ s_object, USER_OBJECT_ s_string)
{
	GtkActionGroup* object = GTK_ACTION_GROUP(getPtrValue(s_object));
	const gchar* string = (const gchar*)asString(s_string);

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_action_group_translate_string(object, string);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_adjustment_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_adjustment_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_adjustment_new(USER_OBJECT_ s_value, USER_OBJECT_ s_lower, USER_OBJECT_ s_upper, USER_OBJECT_ s_step_incr, USER_OBJECT_ s_page_incr, USER_OBJECT_ s_page_size)
{
	char * prop_names[] = { "value", "lower", "upper", "step_increment", "page_increment", "page_size", NULL };
	USER_OBJECT_ args[] = { s_value, s_lower, s_upper, s_step_incr, s_page_incr, s_page_size };

	GtkObject* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_ADJUSTMENT, prop_names, args, 6);

	_result = toRPointer(ans, "GtkObject");

	return(_result);
}
 

USER_OBJECT_
S_gtk_adjustment_changed(USER_OBJECT_ s_object)
{
	GtkAdjustment* object = GTK_ADJUSTMENT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_adjustment_changed(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_adjustment_value_changed(USER_OBJECT_ s_object)
{
	GtkAdjustment* object = GTK_ADJUSTMENT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_adjustment_value_changed(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_adjustment_clamp_page(USER_OBJECT_ s_object, USER_OBJECT_ s_lower, USER_OBJECT_ s_upper)
{
	GtkAdjustment* object = GTK_ADJUSTMENT(getPtrValue(s_object));
	gdouble lower = (gdouble)asNumeric(s_lower);
	gdouble upper = (gdouble)asNumeric(s_upper);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_adjustment_clamp_page(object, lower, upper);


	return(_result);
}
 

USER_OBJECT_
S_gtk_adjustment_get_value(USER_OBJECT_ s_object)
{
	GtkAdjustment* object = GTK_ADJUSTMENT(getPtrValue(s_object));

	gdouble ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_adjustment_get_value(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_adjustment_set_value(USER_OBJECT_ s_object, USER_OBJECT_ s_value)
{
	GtkAdjustment* object = GTK_ADJUSTMENT(getPtrValue(s_object));
	gdouble value = (gdouble)asNumeric(s_value);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_adjustment_set_value(object, value);


	return(_result);
}
 

USER_OBJECT_
S_gtk_alignment_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_alignment_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_alignment_new(USER_OBJECT_ s_xalign, USER_OBJECT_ s_yalign, USER_OBJECT_ s_xscale, USER_OBJECT_ s_yscale)
{
	char * prop_names[] = { "xalign", "yalign", "xscale", "yscale", NULL };
	USER_OBJECT_ args[] = { s_xalign, s_yalign, s_xscale, s_yscale };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_ALIGNMENT, prop_names, args, 4);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_alignment_set(USER_OBJECT_ s_object, USER_OBJECT_ s_xalign, USER_OBJECT_ s_yalign, USER_OBJECT_ s_xscale, USER_OBJECT_ s_yscale)
{
	GtkAlignment* object = GTK_ALIGNMENT(getPtrValue(s_object));
	gfloat xalign = (gfloat)asNumeric(s_xalign);
	gfloat yalign = (gfloat)asNumeric(s_yalign);
	gfloat xscale = (gfloat)asNumeric(s_xscale);
	gfloat yscale = (gfloat)asNumeric(s_yscale);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_alignment_set(object, xalign, yalign, xscale, yscale);


	return(_result);
}
 

USER_OBJECT_
S_gtk_alignment_set_padding(USER_OBJECT_ s_object, USER_OBJECT_ s_padding_top, USER_OBJECT_ s_padding_bottom, USER_OBJECT_ s_padding_left, USER_OBJECT_ s_padding_right)
{
	GtkAlignment* object = GTK_ALIGNMENT(getPtrValue(s_object));
	guint padding_top = (guint)asNumeric(s_padding_top);
	guint padding_bottom = (guint)asNumeric(s_padding_bottom);
	guint padding_left = (guint)asNumeric(s_padding_left);
	guint padding_right = (guint)asNumeric(s_padding_right);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_alignment_set_padding(object, padding_top, padding_bottom, padding_left, padding_right);


	return(_result);
}
 

USER_OBJECT_
S_gtk_alignment_get_padding(USER_OBJECT_ s_object)
{
	GtkAlignment* object = GTK_ALIGNMENT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	guint padding_top;
	guint padding_bottom;
	guint padding_left;
	guint padding_right;

	gtk_alignment_get_padding(object, &padding_top, &padding_bottom, &padding_left, &padding_right);


	_result = retByVal(_result, "padding_top", asRNumeric(padding_top), "padding_bottom", asRNumeric(padding_bottom), "padding_left", asRNumeric(padding_left), "padding_right", asRNumeric(padding_right), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_arrow_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_arrow_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_arrow_new(USER_OBJECT_ s_arrow_type, USER_OBJECT_ s_shadow_type)
{
	char * prop_names[] = { "arrow_type", "shadow_type", NULL };
	USER_OBJECT_ args[] = { s_arrow_type, s_shadow_type };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_ARROW, prop_names, args, 2);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_arrow_set(USER_OBJECT_ s_object, USER_OBJECT_ s_arrow_type, USER_OBJECT_ s_shadow_type)
{
	GtkArrow* object = GTK_ARROW(getPtrValue(s_object));
	GtkArrowType arrow_type = (GtkArrowType)asEnum(s_arrow_type, GTK_TYPE_ARROW_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_arrow_set(object, arrow_type, shadow_type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_aspect_frame_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_aspect_frame_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_aspect_frame_new(USER_OBJECT_ s_label, USER_OBJECT_ s_xalign, USER_OBJECT_ s_yalign, USER_OBJECT_ s_ratio, USER_OBJECT_ s_obey_child)
{
	char * prop_names[] = { "label", "xalign", "yalign", "ratio", "obey_child", NULL };
	USER_OBJECT_ args[] = { s_label, s_xalign, s_yalign, s_ratio, s_obey_child };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_ASPECT_FRAME, prop_names, args, 5);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_aspect_frame_set(USER_OBJECT_ s_object, USER_OBJECT_ s_xalign, USER_OBJECT_ s_yalign, USER_OBJECT_ s_ratio, USER_OBJECT_ s_obey_child)
{
	GtkAspectFrame* object = GTK_ASPECT_FRAME(getPtrValue(s_object));
	gfloat xalign = (gfloat)asNumeric(s_xalign);
	gfloat yalign = (gfloat)asNumeric(s_yalign);
	gfloat ratio = (gfloat)asNumeric(s_ratio);
	gboolean obey_child = (gboolean)asLogical(s_obey_child);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_aspect_frame_set(object, xalign, yalign, ratio, obey_child);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_box_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_box_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_box_get_layout(USER_OBJECT_ s_object)
{
	GtkButtonBox* object = GTK_BUTTON_BOX(getPtrValue(s_object));

	GtkButtonBoxStyle ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_box_get_layout(object);

	_result = asREnum(ans, GTK_TYPE_BUTTON_BOX_STYLE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_box_set_layout(USER_OBJECT_ s_object, USER_OBJECT_ s_layout_style)
{
	GtkButtonBox* object = GTK_BUTTON_BOX(getPtrValue(s_object));
	GtkButtonBoxStyle layout_style = (GtkButtonBoxStyle)asEnum(s_layout_style, GTK_TYPE_BUTTON_BOX_STYLE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_box_set_layout(object, layout_style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_box_get_child_secondary(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkButtonBox* object = GTK_BUTTON_BOX(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_box_get_child_secondary(object, child);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_box_set_child_secondary(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_is_secondary)
{
	GtkButtonBox* object = GTK_BUTTON_BOX(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gboolean is_secondary = (gboolean)asLogical(s_is_secondary);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_box_set_child_secondary(object, child, is_secondary);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_box_set_child_size(USER_OBJECT_ s_object, USER_OBJECT_ s_min_width, USER_OBJECT_ s_min_height)
{
	GtkButtonBox* object = GTK_BUTTON_BOX(getPtrValue(s_object));
	gint min_width = (gint)asInteger(s_min_width);
	gint min_height = (gint)asInteger(s_min_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_box_set_child_size(object, min_width, min_height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_box_set_child_ipadding(USER_OBJECT_ s_object, USER_OBJECT_ s_ipad_x, USER_OBJECT_ s_ipad_y)
{
	GtkButtonBox* object = GTK_BUTTON_BOX(getPtrValue(s_object));
	gint ipad_x = (gint)asInteger(s_ipad_x);
	gint ipad_y = (gint)asInteger(s_ipad_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_box_set_child_ipadding(object, ipad_x, ipad_y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_box_get_child_size(USER_OBJECT_ s_object)
{
	GtkButtonBox* object = GTK_BUTTON_BOX(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint min_width;
	gint min_height;

	gtk_button_box_get_child_size(object, &min_width, &min_height);


	_result = retByVal(_result, "min_width", asRInteger(min_width), "min_height", asRInteger(min_height), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_box_get_child_ipadding(USER_OBJECT_ s_object)
{
	GtkButtonBox* object = GTK_BUTTON_BOX(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint ipad_x;
	gint ipad_y;

	gtk_button_box_get_child_ipadding(object, &ipad_x, &ipad_y);


	_result = retByVal(_result, "ipad_x", asRInteger(ipad_x), "ipad_y", asRInteger(ipad_y), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_bin_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_bin_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_bin_get_child(USER_OBJECT_ s_object)
{
	GtkBin* object = GTK_BIN(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_bin_get_child(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_box_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_box_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_box_pack_start(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_expand, USER_OBJECT_ s_fill, USER_OBJECT_ s_padding)
{
	GtkBox* object = GTK_BOX(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gboolean expand = (gboolean)asLogical(s_expand);
	gboolean fill = (gboolean)asLogical(s_fill);
	guint padding = (guint)asNumeric(s_padding);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_box_pack_start(object, child, expand, fill, padding);


	return(_result);
}
 

USER_OBJECT_
S_gtk_box_pack_end(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_expand, USER_OBJECT_ s_fill, USER_OBJECT_ s_padding)
{
	GtkBox* object = GTK_BOX(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gboolean expand = (gboolean)asLogical(s_expand);
	gboolean fill = (gboolean)asLogical(s_fill);
	guint padding = (guint)asNumeric(s_padding);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_box_pack_end(object, child, expand, fill, padding);


	return(_result);
}
 

USER_OBJECT_
S_gtk_box_pack_start_defaults(USER_OBJECT_ s_object, USER_OBJECT_ s_widget)
{
	GtkBox* object = GTK_BOX(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_box_pack_start_defaults(object, widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_box_pack_end_defaults(USER_OBJECT_ s_object, USER_OBJECT_ s_widget)
{
	GtkBox* object = GTK_BOX(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_box_pack_end_defaults(object, widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_box_set_homogeneous(USER_OBJECT_ s_object, USER_OBJECT_ s_homogeneous)
{
	GtkBox* object = GTK_BOX(getPtrValue(s_object));
	gboolean homogeneous = (gboolean)asLogical(s_homogeneous);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_box_set_homogeneous(object, homogeneous);


	return(_result);
}
 

USER_OBJECT_
S_gtk_box_get_homogeneous(USER_OBJECT_ s_object)
{
	GtkBox* object = GTK_BOX(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_box_get_homogeneous(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_box_set_spacing(USER_OBJECT_ s_object, USER_OBJECT_ s_spacing)
{
	GtkBox* object = GTK_BOX(getPtrValue(s_object));
	gint spacing = (gint)asInteger(s_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_box_set_spacing(object, spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_box_get_spacing(USER_OBJECT_ s_object)
{
	GtkBox* object = GTK_BOX(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_box_get_spacing(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_box_reorder_child(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_position)
{
	GtkBox* object = GTK_BOX(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_box_reorder_child(object, child, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_box_query_child_packing(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkBox* object = GTK_BOX(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gboolean expand;
	gboolean fill;
	guint padding;
	GtkPackType pack_type;

	gtk_box_query_child_packing(object, child, &expand, &fill, &padding, &pack_type);


	_result = retByVal(_result, "expand", asRLogical(expand), "fill", asRLogical(fill), "padding", asRNumeric(padding), "pack_type", asREnum(pack_type, GTK_TYPE_PACK_TYPE), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_box_set_child_packing(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_expand, USER_OBJECT_ s_fill, USER_OBJECT_ s_padding, USER_OBJECT_ s_pack_type)
{
	GtkBox* object = GTK_BOX(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gboolean expand = (gboolean)asLogical(s_expand);
	gboolean fill = (gboolean)asLogical(s_fill);
	guint padding = (guint)asNumeric(s_padding);
	GtkPackType pack_type = (GtkPackType)asEnum(s_pack_type, GTK_TYPE_PACK_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_box_set_child_packing(object, child, expand, fill, padding, pack_type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_new_with_label(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_new_with_label(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_new_from_stock(USER_OBJECT_ s_stock_id)
{
	const gchar* stock_id = (const gchar*)asString(s_stock_id);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_new_from_stock(stock_id);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_new_with_mnemonic(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_new_with_mnemonic(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_pressed(USER_OBJECT_ s_object)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_pressed(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_released(USER_OBJECT_ s_object)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_released(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_clicked(USER_OBJECT_ s_object)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_clicked(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_enter(USER_OBJECT_ s_object)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_enter(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_leave(USER_OBJECT_ s_object)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_leave(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_set_relief(USER_OBJECT_ s_object, USER_OBJECT_ s_newstyle)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));
	GtkReliefStyle newstyle = (GtkReliefStyle)asEnum(s_newstyle, GTK_TYPE_RELIEF_STYLE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_set_relief(object, newstyle);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_get_relief(USER_OBJECT_ s_object)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));

	GtkReliefStyle ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_get_relief(object);

	_result = asREnum(ans, GTK_TYPE_RELIEF_STYLE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_set_label(USER_OBJECT_ s_object, USER_OBJECT_ s_label)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));
	const gchar* label = (const gchar*)asString(s_label);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_set_label(object, label);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_get_label(USER_OBJECT_ s_object)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_get_label(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_set_use_underline(USER_OBJECT_ s_object, USER_OBJECT_ s_use_underline)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));
	gboolean use_underline = (gboolean)asLogical(s_use_underline);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_set_use_underline(object, use_underline);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_get_use_underline(USER_OBJECT_ s_object)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_get_use_underline(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_set_use_stock(USER_OBJECT_ s_object, USER_OBJECT_ s_use_stock)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));
	gboolean use_stock = (gboolean)asLogical(s_use_stock);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_set_use_stock(object, use_stock);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_get_use_stock(USER_OBJECT_ s_object)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_get_use_stock(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_set_focus_on_click(USER_OBJECT_ s_object, USER_OBJECT_ s_focus_on_click)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));
	gboolean focus_on_click = (gboolean)asLogical(s_focus_on_click);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_set_focus_on_click(object, focus_on_click);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_get_focus_on_click(USER_OBJECT_ s_object)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_get_focus_on_click(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_set_alignment(USER_OBJECT_ s_object, USER_OBJECT_ s_xalign, USER_OBJECT_ s_yalign)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));
	gfloat xalign = (gfloat)asNumeric(s_xalign);
	gfloat yalign = (gfloat)asNumeric(s_yalign);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_set_alignment(object, xalign, yalign);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_get_alignment(USER_OBJECT_ s_object)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gfloat xalign;
	gfloat yalign;

	gtk_button_get_alignment(object, &xalign, &yalign);


	_result = retByVal(_result, "xalign", asRNumeric(xalign), "yalign", asRNumeric(yalign), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_button_set_image(USER_OBJECT_ s_object, USER_OBJECT_ s_image)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));
	GtkWidget* image = GTK_WIDGET(getPtrValue(s_image));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_button_set_image(object, image);


	return(_result);
}
 

USER_OBJECT_
S_gtk_button_get_image(USER_OBJECT_ s_object)
{
	GtkButton* object = GTK_BUTTON(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_button_get_image(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_calendar_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_calendar_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_select_month(USER_OBJECT_ s_object, USER_OBJECT_ s_month, USER_OBJECT_ s_year)
{
	GtkCalendar* object = GTK_CALENDAR(getPtrValue(s_object));
	guint month = (guint)asNumeric(s_month);
	guint year = (guint)asNumeric(s_year);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_calendar_select_month(object, month, year);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_select_day(USER_OBJECT_ s_object, USER_OBJECT_ s_day)
{
	GtkCalendar* object = GTK_CALENDAR(getPtrValue(s_object));
	guint day = (guint)asNumeric(s_day);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_calendar_select_day(object, day);


	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_mark_day(USER_OBJECT_ s_object, USER_OBJECT_ s_day)
{
	GtkCalendar* object = GTK_CALENDAR(getPtrValue(s_object));
	guint day = (guint)asNumeric(s_day);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_calendar_mark_day(object, day);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_unmark_day(USER_OBJECT_ s_object, USER_OBJECT_ s_day)
{
	GtkCalendar* object = GTK_CALENDAR(getPtrValue(s_object));
	guint day = (guint)asNumeric(s_day);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_calendar_unmark_day(object, day);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_clear_marks(USER_OBJECT_ s_object)
{
	GtkCalendar* object = GTK_CALENDAR(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_calendar_clear_marks(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_set_display_options(USER_OBJECT_ s_object, USER_OBJECT_ s_flags)
{
	GtkCalendar* object = GTK_CALENDAR(getPtrValue(s_object));
	GtkCalendarDisplayOptions flags = (GtkCalendarDisplayOptions)asFlag(s_flags, GTK_TYPE_CALENDAR_DISPLAY_OPTIONS);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_calendar_set_display_options(object, flags);


	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_get_display_options(USER_OBJECT_ s_object)
{
	GtkCalendar* object = GTK_CALENDAR(getPtrValue(s_object));

	GtkCalendarDisplayOptions ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_calendar_get_display_options(object);

	_result = asRFlag(ans, GTK_TYPE_CALENDAR_DISPLAY_OPTIONS);

	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_display_options(USER_OBJECT_ s_object, USER_OBJECT_ s_flags)
{
	GtkCalendar* object = GTK_CALENDAR(getPtrValue(s_object));
	GtkCalendarDisplayOptions flags = (GtkCalendarDisplayOptions)asFlag(s_flags, GTK_TYPE_CALENDAR_DISPLAY_OPTIONS);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_calendar_display_options(object, flags);


	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_get_date(USER_OBJECT_ s_object)
{
	GtkCalendar* object = GTK_CALENDAR(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	guint year;
	guint month;
	guint day;

	gtk_calendar_get_date(object, &year, &month, &day);


	_result = retByVal(_result, "year", asRNumeric(year), "month", asRNumeric(month), "day", asRNumeric(day), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_freeze(USER_OBJECT_ s_object)
{
	GtkCalendar* object = GTK_CALENDAR(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_calendar_freeze(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_calendar_thaw(USER_OBJECT_ s_object)
{
	GtkCalendar* object = GTK_CALENDAR(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_calendar_thaw(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_editable_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_editable_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_editable_start_editing(USER_OBJECT_ s_object, USER_OBJECT_ s_event)
{
	GtkCellEditable* object = GTK_CELL_EDITABLE(getPtrValue(s_object));
	GdkEvent* event = GET_LENGTH(s_event) == 0 ? NULL : (GdkEvent*)getPtrValue(s_event);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_editable_start_editing(object, event);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_editable_editing_done(USER_OBJECT_ s_object)
{
	GtkCellEditable* object = GTK_CELL_EDITABLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_editable_editing_done(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_editable_remove_widget(USER_OBJECT_ s_object)
{
	GtkCellEditable* object = GTK_CELL_EDITABLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_editable_remove_widget(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_layout_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_layout_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_layout_pack_start(USER_OBJECT_ s_object, USER_OBJECT_ s_cell, USER_OBJECT_ s_expand)
{
	GtkCellLayout* object = GTK_CELL_LAYOUT(getPtrValue(s_object));
	GtkCellRenderer* cell = GTK_CELL_RENDERER(getPtrValue(s_cell));
	gboolean expand = (gboolean)asLogical(s_expand);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_layout_pack_start(object, cell, expand);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_layout_pack_end(USER_OBJECT_ s_object, USER_OBJECT_ s_cell, USER_OBJECT_ s_expand)
{
	GtkCellLayout* object = GTK_CELL_LAYOUT(getPtrValue(s_object));
	GtkCellRenderer* cell = GTK_CELL_RENDERER(getPtrValue(s_cell));
	gboolean expand = (gboolean)asLogical(s_expand);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_layout_pack_end(object, cell, expand);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_layout_clear(USER_OBJECT_ s_object)
{
	GtkCellLayout* object = GTK_CELL_LAYOUT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_layout_clear(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_layout_add_attribute(USER_OBJECT_ s_object, USER_OBJECT_ s_cell, USER_OBJECT_ s_attribute, USER_OBJECT_ s_column)
{
	GtkCellLayout* object = GTK_CELL_LAYOUT(getPtrValue(s_object));
	GtkCellRenderer* cell = GTK_CELL_RENDERER(getPtrValue(s_cell));
	const gchar* attribute = (const gchar*)asString(s_attribute);
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_layout_add_attribute(object, cell, attribute, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_layout_set_cell_data_func(USER_OBJECT_ s_object, USER_OBJECT_ s_cell, USER_OBJECT_ s_func, USER_OBJECT_ s_func_data)
{
	GtkCellLayoutDataFunc func = (GtkCellLayoutDataFunc)S_GtkCellLayoutDataFunc;
	GClosure* func_data = R_createGClosure(s_func, s_func_data);
	GtkCellLayout* object = GTK_CELL_LAYOUT(getPtrValue(s_object));
	GtkCellRenderer* cell = GTK_CELL_RENDERER(getPtrValue(s_cell));
	GDestroyNotify destroy = (GDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_layout_set_cell_data_func(object, cell, func, func_data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_layout_clear_attributes(USER_OBJECT_ s_object, USER_OBJECT_ s_cell)
{
	GtkCellLayout* object = GTK_CELL_LAYOUT(getPtrValue(s_object));
	GtkCellRenderer* cell = GTK_CELL_RENDERER(getPtrValue(s_cell));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_layout_clear_attributes(object, cell);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_layout_reorder(USER_OBJECT_ s_object, USER_OBJECT_ s_cell, USER_OBJECT_ s_position)
{
	GtkCellLayout* object = GTK_CELL_LAYOUT(getPtrValue(s_object));
	GtkCellRenderer* cell = GTK_CELL_RENDERER(getPtrValue(s_cell));
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_layout_reorder(object, cell, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_get_size(USER_OBJECT_ s_object, USER_OBJECT_ s_widget, USER_OBJECT_ s_cell_area)
{
	GtkCellRenderer* object = GTK_CELL_RENDERER(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	GdkRectangle* cell_area = GET_LENGTH(s_cell_area) == 0 ? NULL : asGdkRectangle(s_cell_area);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint x_offset;
	gint y_offset;
	gint width;
	gint height;

	gtk_cell_renderer_get_size(object, widget, cell_area, &x_offset, &y_offset, &width, &height);


	_result = retByVal(_result, "x_offset", asRInteger(x_offset), "y_offset", asRInteger(y_offset), "width", asRInteger(width), "height", asRInteger(height), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_render(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_widget, USER_OBJECT_ s_background_area, USER_OBJECT_ s_cell_area, USER_OBJECT_ s_expose_area, USER_OBJECT_ s_flags)
{
	GtkCellRenderer* object = GTK_CELL_RENDERER(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	GdkRectangle* background_area = asGdkRectangle(s_background_area);
	GdkRectangle* cell_area = asGdkRectangle(s_cell_area);
	GdkRectangle* expose_area = asGdkRectangle(s_expose_area);
	GtkCellRendererState flags = (GtkCellRendererState)asFlag(s_flags, GTK_TYPE_CELL_RENDERER_STATE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_renderer_render(object, window, widget, background_area, cell_area, expose_area, flags);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_activate(USER_OBJECT_ s_object, USER_OBJECT_ s_event, USER_OBJECT_ s_widget, USER_OBJECT_ s_path, USER_OBJECT_ s_background_area, USER_OBJECT_ s_cell_area, USER_OBJECT_ s_flags)
{
	GtkCellRenderer* object = GTK_CELL_RENDERER(getPtrValue(s_object));
	GdkEvent* event = (GdkEvent*)getPtrValue(s_event);
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	const gchar* path = (const gchar*)asString(s_path);
	GdkRectangle* background_area = asGdkRectangle(s_background_area);
	GdkRectangle* cell_area = asGdkRectangle(s_cell_area);
	GtkCellRendererState flags = (GtkCellRendererState)asFlag(s_flags, GTK_TYPE_CELL_RENDERER_STATE);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_activate(object, event, widget, path, background_area, cell_area, flags);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_start_editing(USER_OBJECT_ s_object, USER_OBJECT_ s_event, USER_OBJECT_ s_widget, USER_OBJECT_ s_path, USER_OBJECT_ s_background_area, USER_OBJECT_ s_cell_area, USER_OBJECT_ s_flags)
{
	GtkCellRenderer* object = GTK_CELL_RENDERER(getPtrValue(s_object));
	GdkEvent* event = (GdkEvent*)getPtrValue(s_event);
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	const gchar* path = (const gchar*)asString(s_path);
	GdkRectangle* background_area = asGdkRectangle(s_background_area);
	GdkRectangle* cell_area = asGdkRectangle(s_cell_area);
	GtkCellRendererState flags = (GtkCellRendererState)asFlag(s_flags, GTK_TYPE_CELL_RENDERER_STATE);

	GtkCellEditable* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_start_editing(object, event, widget, path, background_area, cell_area, flags);

	_result = toRPointerWithRef(ans, "GtkCellEditable");

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_set_fixed_size(USER_OBJECT_ s_object, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkCellRenderer* object = GTK_CELL_RENDERER(getPtrValue(s_object));
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_renderer_set_fixed_size(object, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_get_fixed_size(USER_OBJECT_ s_object)
{
	GtkCellRenderer* object = GTK_CELL_RENDERER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint width;
	gint height;

	gtk_cell_renderer_get_fixed_size(object, &width, &height);


	_result = retByVal(_result, "width", asRInteger(width), "height", asRInteger(height), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_editing_canceled(USER_OBJECT_ s_object)
{
	GtkCellRenderer* object = GTK_CELL_RENDERER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_renderer_editing_canceled(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_stop_editing(USER_OBJECT_ s_object, USER_OBJECT_ s_canceled)
{
	GtkCellRenderer* object = GTK_CELL_RENDERER(getPtrValue(s_object));
	gboolean canceled = (gboolean)asLogical(s_canceled);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_renderer_stop_editing(object, canceled);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_combo_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_combo_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_combo_new()
{

	GtkCellRenderer* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_combo_new();

	_result = toRPointer(ans, "GtkCellRenderer");

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_pixbuf_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_pixbuf_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_pixbuf_new()
{

	GtkCellRenderer* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_pixbuf_new();

	_result = toRPointer(ans, "GtkCellRenderer");

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_progress_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_progress_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_progress_new()
{

	GtkCellRenderer* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_progress_new();

	_result = toRPointer(ans, "GtkCellRenderer");

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_text_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_text_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_text_new()
{

	GtkCellRenderer* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_text_new();

	_result = toRPointer(ans, "GtkCellRenderer");

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_text_set_fixed_height_from_font(USER_OBJECT_ s_object, USER_OBJECT_ s_number_of_rows)
{
	GtkCellRendererText* object = GTK_CELL_RENDERER_TEXT(getPtrValue(s_object));
	gint number_of_rows = (gint)asInteger(s_number_of_rows);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_renderer_text_set_fixed_height_from_font(object, number_of_rows);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_toggle_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_toggle_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_toggle_new()
{

	GtkCellRenderer* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_toggle_new();

	_result = toRPointer(ans, "GtkCellRenderer");

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_toggle_get_radio(USER_OBJECT_ s_object)
{
	GtkCellRendererToggle* object = GTK_CELL_RENDERER_TOGGLE(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_toggle_get_radio(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_toggle_set_radio(USER_OBJECT_ s_object, USER_OBJECT_ s_radio)
{
	GtkCellRendererToggle* object = GTK_CELL_RENDERER_TOGGLE(getPtrValue(s_object));
	gboolean radio = (gboolean)asLogical(s_radio);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_renderer_toggle_set_radio(object, radio);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_toggle_get_active(USER_OBJECT_ s_object)
{
	GtkCellRendererToggle* object = GTK_CELL_RENDERER_TOGGLE(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_renderer_toggle_get_active(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_renderer_toggle_set_active(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkCellRendererToggle* object = GTK_CELL_RENDERER_TOGGLE(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_renderer_toggle_set_active(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_view_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_view_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_view_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_view_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_view_new_with_text(USER_OBJECT_ s_text)
{
	const gchar* text = (const gchar*)asString(s_text);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_view_new_with_text(text);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_view_new_with_markup(USER_OBJECT_ s_markup)
{
	const gchar* markup = (const gchar*)asString(s_markup);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_view_new_with_markup(markup);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_view_new_with_pixbuf(USER_OBJECT_ s_pixbuf)
{
	GdkPixbuf* pixbuf = GDK_PIXBUF(getPtrValue(s_pixbuf));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_view_new_with_pixbuf(pixbuf);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_view_set_model(USER_OBJECT_ s_object, USER_OBJECT_ s_model)
{
	GtkCellView* object = GTK_CELL_VIEW(getPtrValue(s_object));
	GtkTreeModel* model = GET_LENGTH(s_model) == 0 ? NULL : GTK_TREE_MODEL(getPtrValue(s_model));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_view_set_model(object, model);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_view_set_displayed_row(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkCellView* object = GTK_CELL_VIEW(getPtrValue(s_object));
	GtkTreePath* path = GET_LENGTH(s_path) == 0 ? NULL : (GtkTreePath*)getPtrValue(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_view_set_displayed_row(object, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_view_get_displayed_row(USER_OBJECT_ s_object)
{
	GtkCellView* object = GTK_CELL_VIEW(getPtrValue(s_object));

	GtkTreePath* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_view_get_displayed_row(object);

	_result = toRPointerWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_view_get_size_of_row(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkCellView* object = GTK_CELL_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkRequisition* requisition = (GtkRequisition *)g_new0(GtkRequisition, 1);

	ans = gtk_cell_view_get_size_of_row(object, path, requisition);

	_result = asRLogical(ans);

	_result = retByVal(_result, "requisition", toRPointer(requisition, "GtkRequisition"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_view_set_background_color(USER_OBJECT_ s_object, USER_OBJECT_ s_color)
{
	GtkCellView* object = GTK_CELL_VIEW(getPtrValue(s_object));
	const GdkColor* color = asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_cell_view_set_background_color(object, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_cell_view_get_cell_renderers(USER_OBJECT_ s_object)
{
	GtkCellView* object = GTK_CELL_VIEW(getPtrValue(s_object));

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_cell_view_get_cell_renderers(object);

	_result = asRGList(ans, "GtkCellRenderer");
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_set_can_store(USER_OBJECT_ s_object, USER_OBJECT_ s_targets)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));
	const GtkTargetEntry* targets = (const GtkTargetEntry*)asArrayRef(s_targets, GtkTargetEntry, asGtkTargetEntry);
	gint n_targets = (gint)GET_LENGTH(s_targets);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clipboard_set_can_store(object, targets, n_targets);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_store(USER_OBJECT_ s_object)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clipboard_store(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_check_button_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_check_button_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_check_button_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_check_button_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_check_button_new_with_label(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_check_button_new_with_label(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_check_button_new_with_mnemonic(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_check_button_new_with_mnemonic(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_check_menu_item_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_check_menu_item_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_new_with_label(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_check_menu_item_new_with_label(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_new_with_mnemonic(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_check_menu_item_new_with_mnemonic(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_set_active(USER_OBJECT_ s_object, USER_OBJECT_ s_is_active)
{
	GtkCheckMenuItem* object = GTK_CHECK_MENU_ITEM(getPtrValue(s_object));
	gboolean is_active = (gboolean)asLogical(s_is_active);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_check_menu_item_set_active(object, is_active);


	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_get_active(USER_OBJECT_ s_object)
{
	GtkCheckMenuItem* object = GTK_CHECK_MENU_ITEM(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_check_menu_item_get_active(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_toggled(USER_OBJECT_ s_object)
{
	GtkCheckMenuItem* object = GTK_CHECK_MENU_ITEM(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_check_menu_item_toggled(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_set_inconsistent(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkCheckMenuItem* object = GTK_CHECK_MENU_ITEM(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_check_menu_item_set_inconsistent(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_get_inconsistent(USER_OBJECT_ s_object)
{
	GtkCheckMenuItem* object = GTK_CHECK_MENU_ITEM(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_check_menu_item_get_inconsistent(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_set_draw_as_radio(USER_OBJECT_ s_object, USER_OBJECT_ s_draw_as_radio)
{
	GtkCheckMenuItem* object = GTK_CHECK_MENU_ITEM(getPtrValue(s_object));
	gboolean draw_as_radio = (gboolean)asLogical(s_draw_as_radio);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_check_menu_item_set_draw_as_radio(object, draw_as_radio);


	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_get_draw_as_radio(USER_OBJECT_ s_object)
{
	GtkCheckMenuItem* object = GTK_CHECK_MENU_ITEM(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_check_menu_item_get_draw_as_radio(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_set_show_toggle(USER_OBJECT_ s_object, USER_OBJECT_ s_always)
{
	GtkCheckMenuItem* object = GTK_CHECK_MENU_ITEM(getPtrValue(s_object));
	gboolean always = (gboolean)asLogical(s_always);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_check_menu_item_set_show_toggle(object, always);


	return(_result);
}
 

USER_OBJECT_
S_gtk_check_menu_item_set_state(USER_OBJECT_ s_object, USER_OBJECT_ s_is_active)
{
	GtkCheckMenuItem* object = GTK_CHECK_MENU_ITEM(getPtrValue(s_object));
	gboolean is_active = (gboolean)asLogical(s_is_active);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_check_menu_item_set_state(object, is_active);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clipboard_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_get_for_display(USER_OBJECT_ s_display, USER_OBJECT_ s_selection)
{
	GdkDisplay* display = GDK_DISPLAY_OBJECT(getPtrValue(s_display));
	GdkAtom selection = asGdkAtom(s_selection);

	GtkClipboard* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clipboard_get_for_display(display, selection);

	_result = toRPointerWithFinalizer(ans, "GtkClipboard", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_get(USER_OBJECT_ s_selection)
{
	GdkAtom selection = asGdkAtom(s_selection);

	GtkClipboard* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clipboard_get(selection);

	_result = toRPointerWithRef(ans, "GtkClipboard");

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_get_display(USER_OBJECT_ s_object)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));

	GdkDisplay* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clipboard_get_display(object);

	_result = toRPointerWithRef(ans, "GdkDisplay");

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_set_with_data(USER_OBJECT_ s_object, USER_OBJECT_ s_targets, USER_OBJECT_ s_get_func, USER_OBJECT_ s_user_data)
{
	GtkClipboardGetFunc get_func = (GtkClipboardGetFunc)S_GtkClipboardGetFunc;
	GClosure* user_data = R_createGClosure(s_get_func, s_user_data);
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));
	const GtkTargetEntry* targets = (const GtkTargetEntry*)asArrayRef(s_targets, GtkTargetEntry, asGtkTargetEntry);
	guint n_targets = (guint)GET_LENGTH(s_targets);
	GtkClipboardClearFunc clear_func = (GtkClipboardClearFunc)S_GtkClipboardClearFunc;

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clipboard_set_with_data(object, targets, n_targets, get_func, clear_func, user_data);

	_result = asRLogical(ans);
	g_closure_sink(user_data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_get_owner(USER_OBJECT_ s_object)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));

	GObject* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clipboard_get_owner(object);

	_result = toRPointer(ans, "GObject");

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_clear(USER_OBJECT_ s_object)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clipboard_clear(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_set_text(USER_OBJECT_ s_object, USER_OBJECT_ s_text, USER_OBJECT_ s_len)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);
	gint len = (gint)asInteger(s_len);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clipboard_set_text(object, text, len);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_request_contents(USER_OBJECT_ s_object, USER_OBJECT_ s_target, USER_OBJECT_ s_callback, USER_OBJECT_ s_user_data)
{
	GtkClipboardReceivedFunc callback = (GtkClipboardReceivedFunc)S_GtkClipboardReceivedFunc;
	GClosure* user_data = R_createGClosure(s_callback, s_user_data);
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));
	GdkAtom target = asGdkAtom(s_target);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clipboard_request_contents(object, target, callback, user_data);

	g_closure_sink(user_data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_request_image(USER_OBJECT_ s_object, USER_OBJECT_ s_callback, USER_OBJECT_ s_user_data)
{
	GtkClipboardImageReceivedFunc callback = (GtkClipboardImageReceivedFunc)S_GtkClipboardImageReceivedFunc;
	GClosure* user_data = R_createGClosure(s_callback, s_user_data);
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clipboard_request_image(object, callback, user_data);

	g_closure_sink(user_data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_request_text(USER_OBJECT_ s_object, USER_OBJECT_ s_callback, USER_OBJECT_ s_user_data)
{
	GtkClipboardTextReceivedFunc callback = (GtkClipboardTextReceivedFunc)S_GtkClipboardTextReceivedFunc;
	GClosure* user_data = R_createGClosure(s_callback, s_user_data);
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clipboard_request_text(object, callback, user_data);

	g_closure_sink(user_data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_request_targets(USER_OBJECT_ s_object, USER_OBJECT_ s_callback, USER_OBJECT_ s_user_data)
{
	GtkClipboardTargetsReceivedFunc callback = (GtkClipboardTargetsReceivedFunc)S_GtkClipboardTargetsReceivedFunc;
	GClosure* user_data = R_createGClosure(s_callback, s_user_data);
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clipboard_request_targets(object, callback, user_data);

	g_closure_sink(user_data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_wait_for_contents(USER_OBJECT_ s_object, USER_OBJECT_ s_target)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));
	GdkAtom target = asGdkAtom(s_target);

	GtkSelectionData* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clipboard_wait_for_contents(object, target);

	_result = toRPointerWithFinalizer(ans, "GtkSelectionData", (RPointerFinalizer) gtk_selection_data_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_wait_for_image(USER_OBJECT_ s_object)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clipboard_wait_for_image(object);

	_result = toRPointerWithFinalizer(ans, "GdkPixbuf", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_wait_for_text(USER_OBJECT_ s_object)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clipboard_wait_for_text(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_wait_is_image_available(USER_OBJECT_ s_object)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clipboard_wait_is_image_available(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_wait_is_text_available(USER_OBJECT_ s_object)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clipboard_wait_is_text_available(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_wait_is_target_available(USER_OBJECT_ s_object, USER_OBJECT_ s_target)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));
	GdkAtom target = asGdkAtom(s_target);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clipboard_wait_is_target_available(object, target);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clipboard_wait_for_targets(USER_OBJECT_ s_object)
{
	GtkClipboard* object = GTK_CLIPBOARD(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkAtom* targets = NULL;
	gint n_targets;

	ans = gtk_clipboard_wait_for_targets(object, &targets, &n_targets);

	_result = asRLogical(ans);

	_result = retByVal(_result, "targets", asRArrayWithSize(targets, asRGdkAtom, n_targets), "n_targets", asRInteger(n_targets), NULL);
	CLEANUP(g_free, targets);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_new(USER_OBJECT_ s_columns)
{
	gint columns = (gint)asInteger(s_columns);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_new(columns);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_new_with_titles(USER_OBJECT_ s_columns, USER_OBJECT_ s_titles)
{
	gint columns = (gint)asInteger(s_columns);
	gchar** titles = (gchar**)asStringArray(s_titles);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_new_with_titles(columns, titles);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_hadjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	GtkAdjustment* adjustment = GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_hadjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_vadjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	GtkAdjustment* adjustment = GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_vadjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_hadjustment(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_get_hadjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_vadjustment(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_get_vadjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_shadow_type(USER_OBJECT_ s_object, USER_OBJECT_ s_type)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	GtkShadowType type = (GtkShadowType)asEnum(s_type, GTK_TYPE_SHADOW_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_shadow_type(object, type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_selection_mode(USER_OBJECT_ s_object, USER_OBJECT_ s_mode)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	GtkSelectionMode mode = (GtkSelectionMode)asEnum(s_mode, GTK_TYPE_SELECTION_MODE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_selection_mode(object, mode);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_reorderable(USER_OBJECT_ s_object, USER_OBJECT_ s_reorderable)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gboolean reorderable = (gboolean)asLogical(s_reorderable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_reorderable(object, reorderable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_use_drag_icons(USER_OBJECT_ s_object, USER_OBJECT_ s_use_icons)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gboolean use_icons = (gboolean)asLogical(s_use_icons);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_use_drag_icons(object, use_icons);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_button_actions(USER_OBJECT_ s_object, USER_OBJECT_ s_button, USER_OBJECT_ s_button_actions)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	guint button = (guint)asNumeric(s_button);
	guint8 button_actions = (guint8)asInteger(s_button_actions);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_button_actions(object, button, button_actions);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_freeze(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_freeze(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_thaw(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_thaw(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_column_titles_show(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_column_titles_show(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_column_titles_hide(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_column_titles_hide(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_column_title_active(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_column_title_active(object, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_column_title_passive(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_column_title_passive(object, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_column_titles_active(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_column_titles_active(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_column_titles_passive(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_column_titles_passive(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_column_title(USER_OBJECT_ s_object, USER_OBJECT_ s_column, USER_OBJECT_ s_title)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);
	const gchar* title = (const gchar*)asString(s_title);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_column_title(object, column, title);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_column_title(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_get_column_title(object, column);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_column_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_column, USER_OBJECT_ s_widget)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_column_widget(object, column, widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_column_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_get_column_widget(object, column);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_column_justification(USER_OBJECT_ s_object, USER_OBJECT_ s_column, USER_OBJECT_ s_justification)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);
	GtkJustification justification = (GtkJustification)asEnum(s_justification, GTK_TYPE_JUSTIFICATION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_column_justification(object, column, justification);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_column_visibility(USER_OBJECT_ s_object, USER_OBJECT_ s_column, USER_OBJECT_ s_visible)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);
	gboolean visible = (gboolean)asLogical(s_visible);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_column_visibility(object, column, visible);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_column_resizeable(USER_OBJECT_ s_object, USER_OBJECT_ s_column, USER_OBJECT_ s_resizeable)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);
	gboolean resizeable = (gboolean)asLogical(s_resizeable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_column_resizeable(object, column, resizeable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_column_auto_resize(USER_OBJECT_ s_object, USER_OBJECT_ s_column, USER_OBJECT_ s_auto_resize)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);
	gboolean auto_resize = (gboolean)asLogical(s_auto_resize);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_column_auto_resize(object, column, auto_resize);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_columns_autosize(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_columns_autosize(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_optimal_column_width(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_optimal_column_width(object, column);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_column_width(USER_OBJECT_ s_object, USER_OBJECT_ s_column, USER_OBJECT_ s_width)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);
	gint width = (gint)asInteger(s_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_column_width(object, column, width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_column_min_width(USER_OBJECT_ s_object, USER_OBJECT_ s_column, USER_OBJECT_ s_min_width)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);
	gint min_width = (gint)asInteger(s_min_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_column_min_width(object, column, min_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_column_max_width(USER_OBJECT_ s_object, USER_OBJECT_ s_column, USER_OBJECT_ s_max_width)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);
	gint max_width = (gint)asInteger(s_max_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_column_max_width(object, column, max_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_row_height(USER_OBJECT_ s_object, USER_OBJECT_ s_height)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	guint height = (guint)asNumeric(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_row_height(object, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_moveto(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column, USER_OBJECT_ s_row_align, USER_OBJECT_ s_col_align)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);
	gfloat row_align = (gfloat)asNumeric(s_row_align);
	gfloat col_align = (gfloat)asNumeric(s_col_align);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_moveto(object, row, column, row_align, col_align);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_row_is_visible(USER_OBJECT_ s_object, USER_OBJECT_ s_row)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);

	GtkVisibility ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_row_is_visible(object, row);

	_result = asREnum(ans, GTK_TYPE_VISIBILITY);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_cell_type(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);

	GtkCellType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_get_cell_type(object, row, column);

	_result = asREnum(ans, GTK_TYPE_CELL_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_text(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column, USER_OBJECT_ s_text)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);
	const gchar* text = (const gchar*)asString(s_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_text(object, row, column, text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_text(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gchar* text = NULL;

	ans = gtk_clist_get_text(object, row, column, &text);

	_result = asRInteger(ans);

	_result = retByVal(_result, "text", asRString(text), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_pixmap(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column, USER_OBJECT_ s_pixmap, USER_OBJECT_ s_mask)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);
	GdkPixmap* pixmap = GDK_PIXMAP(getPtrValue(s_pixmap));
	GdkBitmap* mask = GET_LENGTH(s_mask) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_pixmap(object, row, column, pixmap, mask);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_pixmap(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkPixmap* pixmap = NULL;
	GdkBitmap* mask = NULL;

	ans = gtk_clist_get_pixmap(object, row, column, &pixmap, &mask);

	_result = asRInteger(ans);

	_result = retByVal(_result, "pixmap", toRPointerWithRef(pixmap, "GdkPixmap"), "mask", toRPointerWithRef(mask, "GdkBitmap"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_pixtext(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column, USER_OBJECT_ s_text, USER_OBJECT_ s_spacing, USER_OBJECT_ s_pixmap, USER_OBJECT_ s_mask)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);
	const gchar* text = (const gchar*)asString(s_text);
	guint8 spacing = (guint8)asInteger(s_spacing);
	GdkPixmap* pixmap = GDK_PIXMAP(getPtrValue(s_pixmap));
	GdkBitmap* mask = GDK_DRAWABLE(getPtrValue(s_mask));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_pixtext(object, row, column, text, spacing, pixmap, mask);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_pixtext(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gchar* text = NULL;
	guint8 spacing;
	GdkPixmap* pixmap = NULL;
	GdkBitmap* mask = NULL;

	ans = gtk_clist_get_pixtext(object, row, column, &text, &spacing, &pixmap, &mask);

	_result = asRInteger(ans);

	_result = retByVal(_result, "text", asRString(text), "spacing", asRInteger(spacing), "pixmap", toRPointerWithRef(pixmap, "GdkPixmap"), "mask", toRPointerWithRef(mask, "GdkBitmap"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_foreground(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_color)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	GdkColor* color = asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_foreground(object, row, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_background(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_color)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	GdkColor* color = asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_background(object, row, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_cell_style(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column, USER_OBJECT_ s_style)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);
	GtkStyle* style = GTK_STYLE(getPtrValue(s_style));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_cell_style(object, row, column, style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_cell_style(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);

	GtkStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_get_cell_style(object, row, column);

	_result = toRPointerWithRef(ans, "GtkStyle");

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_row_style(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_style)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	GtkStyle* style = GTK_STYLE(getPtrValue(s_style));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_row_style(object, row, style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_row_style(USER_OBJECT_ s_object, USER_OBJECT_ s_row)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);

	GtkStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_get_row_style(object, row);

	_result = toRPointerWithRef(ans, "GtkStyle");

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_shift(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column, USER_OBJECT_ s_vertical, USER_OBJECT_ s_horizontal)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);
	gint vertical = (gint)asInteger(s_vertical);
	gint horizontal = (gint)asInteger(s_horizontal);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_shift(object, row, column, vertical, horizontal);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_selectable(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_selectable)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gboolean selectable = (gboolean)asLogical(s_selectable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_selectable(object, row, selectable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_selectable(USER_OBJECT_ s_object, USER_OBJECT_ s_row)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_get_selectable(object, row);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_prepend(USER_OBJECT_ s_object, USER_OBJECT_ s_text)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gchar** text = (gchar**)asStringArray(s_text);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_prepend(object, text);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_append(USER_OBJECT_ s_object, USER_OBJECT_ s_text)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gchar** text = (gchar**)asStringArray(s_text);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_append(object, text);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_insert(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_text)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gchar** text = (gchar**)asStringArray(s_text);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_insert(object, row, text);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_remove(USER_OBJECT_ s_object, USER_OBJECT_ s_row)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_remove(object, row);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_row_data_full(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_data)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gpointer data = (gpointer)asGenericData(s_data);
	GtkDestroyNotify destroy = (GtkDestroyNotify)R_ReleaseObject;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_row_data_full(object, row, data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_row_data(USER_OBJECT_ s_object, USER_OBJECT_ s_row)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);

	gpointer ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_get_row_data(object, row);

	_result = ans;

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_find_row_from_data(USER_OBJECT_ s_object, USER_OBJECT_ s_data)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gpointer data = (gpointer)asGenericData(s_data);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_clist_find_row_from_data(object, data);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_select_row(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_select_row(object, row, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_unselect_row(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row = (gint)asInteger(s_row);
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_unselect_row(object, row, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_undo_selection(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_undo_selection(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_clear(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_clear(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_get_selection_info(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint row;
	gint column;

	ans = gtk_clist_get_selection_info(object, x, y, &row, &column);

	_result = asRInteger(ans);

	_result = retByVal(_result, "row", asRInteger(row), "column", asRInteger(column), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_select_all(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_select_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_unselect_all(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_unselect_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_swap_rows(USER_OBJECT_ s_object, USER_OBJECT_ s_row1, USER_OBJECT_ s_row2)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint row1 = (gint)asInteger(s_row1);
	gint row2 = (gint)asInteger(s_row2);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_swap_rows(object, row1, row2);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_row_move(USER_OBJECT_ s_object, USER_OBJECT_ s_source_row, USER_OBJECT_ s_dest_row)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint source_row = (gint)asInteger(s_source_row);
	gint dest_row = (gint)asInteger(s_dest_row);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_row_move(object, source_row, dest_row);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_sort_column(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_sort_column(object, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_sort_type(USER_OBJECT_ s_object, USER_OBJECT_ s_sort_type)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	GtkSortType sort_type = (GtkSortType)asEnum(s_sort_type, GTK_TYPE_SORT_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_sort_type(object, sort_type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_sort(USER_OBJECT_ s_object)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_sort(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_clist_set_auto_sort(USER_OBJECT_ s_object, USER_OBJECT_ s_auto_sort)
{
	GtkCList* object = GTK_CLIST(getPtrValue(s_object));
	gboolean auto_sort = (gboolean)asLogical(s_auto_sort);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_clist_set_auto_sort(object, auto_sort);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_button_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_button_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_button_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_button_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_button_new_with_color(USER_OBJECT_ s_color)
{
	const GdkColor* color = asGdkColor(s_color);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_button_new_with_color(color);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_button_set_color(USER_OBJECT_ s_object, USER_OBJECT_ s_color)
{
	GtkColorButton* object = GTK_COLOR_BUTTON(getPtrValue(s_object));
	const GdkColor* color = asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_button_set_color(object, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_button_set_alpha(USER_OBJECT_ s_object, USER_OBJECT_ s_alpha)
{
	GtkColorButton* object = GTK_COLOR_BUTTON(getPtrValue(s_object));
	guint16 alpha = (guint16)asInteger(s_alpha);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_button_set_alpha(object, alpha);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_button_get_color(USER_OBJECT_ s_object, USER_OBJECT_ s_color)
{
	GtkColorButton* object = GTK_COLOR_BUTTON(getPtrValue(s_object));
	GdkColor* color = asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_button_get_color(object, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_button_get_alpha(USER_OBJECT_ s_object)
{
	GtkColorButton* object = GTK_COLOR_BUTTON(getPtrValue(s_object));

	guint16 ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_button_get_alpha(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_button_set_use_alpha(USER_OBJECT_ s_object, USER_OBJECT_ s_use_alpha)
{
	GtkColorButton* object = GTK_COLOR_BUTTON(getPtrValue(s_object));
	gboolean use_alpha = (gboolean)asLogical(s_use_alpha);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_button_set_use_alpha(object, use_alpha);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_button_get_use_alpha(USER_OBJECT_ s_object)
{
	GtkColorButton* object = GTK_COLOR_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_button_get_use_alpha(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_button_set_title(USER_OBJECT_ s_object, USER_OBJECT_ s_title)
{
	GtkColorButton* object = GTK_COLOR_BUTTON(getPtrValue(s_object));
	const gchar* title = (const gchar*)asString(s_title);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_button_set_title(object, title);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_button_get_title(USER_OBJECT_ s_object)
{
	GtkColorButton* object = GTK_COLOR_BUTTON(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_button_get_title(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_selection_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_selection_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_get_has_opacity_control(USER_OBJECT_ s_object)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_selection_get_has_opacity_control(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_set_has_opacity_control(USER_OBJECT_ s_object, USER_OBJECT_ s_has_opacity)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));
	gboolean has_opacity = (gboolean)asLogical(s_has_opacity);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_selection_set_has_opacity_control(object, has_opacity);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_get_has_palette(USER_OBJECT_ s_object)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_selection_get_has_palette(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_set_has_palette(USER_OBJECT_ s_object, USER_OBJECT_ s_has_palette)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));
	gboolean has_palette = (gboolean)asLogical(s_has_palette);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_selection_set_has_palette(object, has_palette);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_set_current_color(USER_OBJECT_ s_object, USER_OBJECT_ s_color)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));
	GdkColor* color = asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_selection_set_current_color(object, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_set_current_alpha(USER_OBJECT_ s_object, USER_OBJECT_ s_alpha)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));
	guint16 alpha = (guint16)asInteger(s_alpha);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_selection_set_current_alpha(object, alpha);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_get_current_color(USER_OBJECT_ s_object)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkColor* color = (GdkColor *)g_new0(GdkColor, 1);

	gtk_color_selection_get_current_color(object, color);


	_result = retByVal(_result, "color", asRGdkColor(color), NULL);
	CLEANUP(g_free, color);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_get_current_alpha(USER_OBJECT_ s_object)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));

	guint16 ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_selection_get_current_alpha(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_set_previous_color(USER_OBJECT_ s_object, USER_OBJECT_ s_color)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));
	GdkColor* color = asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_selection_set_previous_color(object, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_set_previous_alpha(USER_OBJECT_ s_object, USER_OBJECT_ s_alpha)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));
	guint16 alpha = (guint16)asInteger(s_alpha);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_selection_set_previous_alpha(object, alpha);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_get_previous_color(USER_OBJECT_ s_object, USER_OBJECT_ s_color)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));
	GdkColor* color = asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_selection_get_previous_color(object, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_get_previous_alpha(USER_OBJECT_ s_object)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));

	guint16 ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_selection_get_previous_alpha(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_is_adjusting(USER_OBJECT_ s_object)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_selection_is_adjusting(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_palette_from_string(USER_OBJECT_ s_str)
{
	const gchar* str = (const gchar*)asString(s_str);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkColor* colors = NULL;
	gint n_colors;

	ans = gtk_color_selection_palette_from_string(str, &colors, &n_colors);

	_result = asRLogical(ans);

	_result = retByVal(_result, "colors", asRArrayRefWithSize(colors, asRGdkColor, n_colors), "n_colors", asRInteger(n_colors), NULL);
	CLEANUP(g_free, colors);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_palette_to_string(USER_OBJECT_ s_colors)
{
	const GdkColor* colors = (const GdkColor*)asArrayRef(s_colors, GdkColor, asGdkColor);
	gint n_colors = (gint)GET_LENGTH(s_colors);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_selection_palette_to_string(colors, n_colors);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_set_change_palette_hook(USER_OBJECT_ s_func)
{
	GtkColorSelectionChangePaletteFunc func = (GtkColorSelectionChangePaletteFunc)S_GtkColorSelectionChangePaletteFunc;
	GClosure* GtkColorSelectionChangePaletteFunc_closure = R_createGClosure(s_func, NULL);

	GtkColorSelectionChangePaletteFunc ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_selection_set_change_palette_hook(func);

	_result = toRPointer(ans, "GtkColorSelectionChangePaletteFunc");

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_set_change_palette_with_screen_hook(USER_OBJECT_ s_func)
{
	GtkColorSelectionChangePaletteWithScreenFunc func = (GtkColorSelectionChangePaletteWithScreenFunc)S_GtkColorSelectionChangePaletteWithScreenFunc;
	GClosure* GtkColorSelectionChangePaletteWithScreenFunc_closure = R_createGClosure(s_func, NULL);

	GtkColorSelectionChangePaletteWithScreenFunc ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_selection_set_change_palette_with_screen_hook(func);

	_result = toRPointer(ans, "GtkColorSelectionChangePaletteWithScreenFunc");

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_set_color(USER_OBJECT_ s_object, USER_OBJECT_ s_color)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));
	gdouble* color = (gdouble*)asArray(s_color, gdouble, asNumeric);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_selection_set_color(object, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_get_color(USER_OBJECT_ s_object)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gdouble color;

	gtk_color_selection_get_color(object, &color);


	_result = retByVal(_result, "color", asRNumeric(color), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_set_update_policy(USER_OBJECT_ s_object, USER_OBJECT_ s_policy)
{
	GtkColorSelection* object = GTK_COLOR_SELECTION(getPtrValue(s_object));
	GtkUpdateType policy = (GtkUpdateType)asEnum(s_policy, GTK_TYPE_UPDATE_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_color_selection_set_update_policy(object, policy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_dialog_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_color_selection_dialog_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_color_selection_dialog_new(USER_OBJECT_ s_title)
{
	char * prop_names[] = { "title", NULL };
	USER_OBJECT_ args[] = { s_title };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_COLOR_SELECTION_DIALOG, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_set_value_in_list(USER_OBJECT_ s_object, USER_OBJECT_ s_val, USER_OBJECT_ s_ok_if_empty)
{
	GtkCombo* object = GTK_COMBO(getPtrValue(s_object));
	gboolean val = (gboolean)asLogical(s_val);
	gboolean ok_if_empty = (gboolean)asLogical(s_ok_if_empty);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_set_value_in_list(object, val, ok_if_empty);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_set_use_arrows(USER_OBJECT_ s_object, USER_OBJECT_ s_val)
{
	GtkCombo* object = GTK_COMBO(getPtrValue(s_object));
	gboolean val = (gboolean)asLogical(s_val);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_set_use_arrows(object, val);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_set_use_arrows_always(USER_OBJECT_ s_object, USER_OBJECT_ s_val)
{
	GtkCombo* object = GTK_COMBO(getPtrValue(s_object));
	gboolean val = (gboolean)asLogical(s_val);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_set_use_arrows_always(object, val);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_set_case_sensitive(USER_OBJECT_ s_object, USER_OBJECT_ s_val)
{
	GtkCombo* object = GTK_COMBO(getPtrValue(s_object));
	gboolean val = (gboolean)asLogical(s_val);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_set_case_sensitive(object, val);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_set_item_string(USER_OBJECT_ s_object, USER_OBJECT_ s_item, USER_OBJECT_ s_item_value)
{
	GtkCombo* object = GTK_COMBO(getPtrValue(s_object));
	GtkItem* item = GTK_ITEM(getPtrValue(s_item));
	const gchar* item_value = (const gchar*)asString(s_item_value);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_set_item_string(object, item, item_value);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_set_popdown_strings(USER_OBJECT_ s_object, USER_OBJECT_ s_strings)
{
	GtkCombo* object = GTK_COMBO(getPtrValue(s_object));
	GList* strings = asGList(s_strings);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_set_popdown_strings(object, strings);

	CLEANUP(g_list_free, (GList*)strings);

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_disable_activate(USER_OBJECT_ s_object)
{
	GtkCombo* object = GTK_COMBO(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_disable_activate(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_new_with_model(USER_OBJECT_ s_model)
{
	GtkTreeModel* model = GTK_TREE_MODEL(getPtrValue(s_model));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_new_with_model(model);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_set_wrap_width(USER_OBJECT_ s_object, USER_OBJECT_ s_width)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	gint width = (gint)asInteger(s_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_set_wrap_width(object, width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_set_row_span_column(USER_OBJECT_ s_object, USER_OBJECT_ s_row_span)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	gint row_span = (gint)asInteger(s_row_span);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_set_row_span_column(object, row_span);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_set_column_span_column(USER_OBJECT_ s_object, USER_OBJECT_ s_column_span)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	gint column_span = (gint)asInteger(s_column_span);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_set_column_span_column(object, column_span);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_get_active(USER_OBJECT_ s_object)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_get_active(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_set_active(USER_OBJECT_ s_object, USER_OBJECT_ s_index)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	gint index = (gint)asInteger(s_index);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_set_active(object, index);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_get_active_iter(USER_OBJECT_ s_object)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	ans = gtk_combo_box_get_active_iter(object, iter);

	_result = asRLogical(ans);

	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_set_active_iter(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_set_active_iter(object, iter);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_set_model(USER_OBJECT_ s_object, USER_OBJECT_ s_model)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	GtkTreeModel* model = GET_LENGTH(s_model) == 0 ? NULL : GTK_TREE_MODEL(getPtrValue(s_model));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_set_model(object, model);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_get_model(USER_OBJECT_ s_object)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));

	GtkTreeModel* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_get_model(object);

	_result = toRPointerWithRef(ans, "GtkTreeModel");

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_new_text()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_new_text();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_append_text(USER_OBJECT_ s_object, USER_OBJECT_ s_text)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_append_text(object, text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_insert_text(USER_OBJECT_ s_object, USER_OBJECT_ s_position, USER_OBJECT_ s_text)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	gint position = (gint)asInteger(s_position);
	const gchar* text = (const gchar*)asString(s_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_insert_text(object, position, text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_prepend_text(USER_OBJECT_ s_object, USER_OBJECT_ s_text)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_prepend_text(object, text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_remove_text(USER_OBJECT_ s_object, USER_OBJECT_ s_position)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_remove_text(object, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_popup(USER_OBJECT_ s_object)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_popup(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_popdown(USER_OBJECT_ s_object)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_popdown(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_get_wrap_width(USER_OBJECT_ s_object)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_get_wrap_width(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_get_row_span_column(USER_OBJECT_ s_object)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_get_row_span_column(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_get_column_span_column(USER_OBJECT_ s_object)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_get_column_span_column(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_set_add_tearoffs(USER_OBJECT_ s_object, USER_OBJECT_ s_add_tearoffs)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	gboolean add_tearoffs = (gboolean)asLogical(s_add_tearoffs);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_set_add_tearoffs(object, add_tearoffs);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_get_focus_on_click(USER_OBJECT_ s_object)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_get_focus_on_click(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_set_focus_on_click(USER_OBJECT_ s_object, USER_OBJECT_ s_focus_on_click)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	gboolean focus_on_click = (gboolean)asLogical(s_focus_on_click);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_set_focus_on_click(object, focus_on_click);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_set_row_separator_func(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTreeViewRowSeparatorFunc func = (GtkTreeViewRowSeparatorFunc)S_GtkTreeViewRowSeparatorFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_set_row_separator_func(object, func, data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_get_row_separator_func(USER_OBJECT_ s_object)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));

	GtkTreeViewRowSeparatorFunc ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_get_row_separator_func(object);

	_result = toRPointer(ans, "GtkTreeViewRowSeparatorFunc");

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_get_active_text(USER_OBJECT_ s_object)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_get_active_text(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_get_popup_accessible(USER_OBJECT_ s_object)
{
	GtkComboBox* object = GTK_COMBO_BOX(getPtrValue(s_object));

	AtkObject* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_get_popup_accessible(object);

	_result = toRPointerWithRef(ans, "AtkObject");

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_entry_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_entry_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_entry_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_entry_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_entry_new_with_model(USER_OBJECT_ s_model, USER_OBJECT_ s_text_column)
{
	GtkTreeModel* model = GTK_TREE_MODEL(getPtrValue(s_model));
	gint text_column = (gint)asInteger(s_text_column);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_entry_new_with_model(model, text_column);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_entry_set_text_column(USER_OBJECT_ s_object, USER_OBJECT_ s_text_column)
{
	GtkComboBoxEntry* object = GTK_COMBO_BOX_ENTRY(getPtrValue(s_object));
	gint text_column = (gint)asInteger(s_text_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_combo_box_entry_set_text_column(object, text_column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_entry_get_text_column(USER_OBJECT_ s_object)
{
	GtkComboBoxEntry* object = GTK_COMBO_BOX_ENTRY(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_entry_get_text_column(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_combo_box_entry_new_text()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_combo_box_entry_new_text();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_container_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_set_border_width(USER_OBJECT_ s_object, USER_OBJECT_ s_border_width)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));
	guint border_width = (guint)asNumeric(s_border_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_set_border_width(object, border_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_get_border_width(USER_OBJECT_ s_object)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_container_get_border_width(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_add(USER_OBJECT_ s_object, USER_OBJECT_ s_widget)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_add(object, widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_remove(USER_OBJECT_ s_object, USER_OBJECT_ s_widget)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_remove(object, widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_set_resize_mode(USER_OBJECT_ s_object, USER_OBJECT_ s_resize_mode)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));
	GtkResizeMode resize_mode = (GtkResizeMode)asEnum(s_resize_mode, GTK_TYPE_RESIZE_MODE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_set_resize_mode(object, resize_mode);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_get_resize_mode(USER_OBJECT_ s_object)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	GtkResizeMode ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_container_get_resize_mode(object);

	_result = asREnum(ans, GTK_TYPE_RESIZE_MODE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_check_resize(USER_OBJECT_ s_object)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_check_resize(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_foreach(USER_OBJECT_ s_object, USER_OBJECT_ s_callback, USER_OBJECT_ s_callback_data)
{
	GtkCallback callback = (GtkCallback)S_GtkCallback;
	GClosure* callback_data = R_createGClosure(s_callback, s_callback_data);
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_foreach(object, callback, callback_data);

	g_closure_sink(callback_data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_foreach_full(USER_OBJECT_ s_object, USER_OBJECT_ s_callback, USER_OBJECT_ s_callback_data)
{
	GtkCallback callback = (GtkCallback)S_GtkCallback;
	GClosure* callback_data = R_createGClosure(s_callback, s_callback_data);
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));
	GtkDestroyNotify notify = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_foreach_full(object, callback, NULL, callback_data, notify);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_get_children(USER_OBJECT_ s_object)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_container_get_children(object);

	_result = asRGList(ans, "GtkWidget");
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_children(USER_OBJECT_ s_object)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_container_children(object);

	_result = asRGList(ans, "GtkWidget");
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_propagate_expose(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_event)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	GdkEventExpose* event = (GdkEventExpose*)getPtrValue(s_event);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_propagate_expose(object, child, event);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_set_focus_chain(USER_OBJECT_ s_object, USER_OBJECT_ s_focusable_widgets)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));
	GList* focusable_widgets = asGList(s_focusable_widgets);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_set_focus_chain(object, focusable_widgets);

	CLEANUP(g_list_free, (GList*)focusable_widgets);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_get_focus_chain(USER_OBJECT_ s_object)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GList* focusable_widgets = NULL;

	ans = gtk_container_get_focus_chain(object, &focusable_widgets);

	_result = asRLogical(ans);

	_result = retByVal(_result, "focusable_widgets", asRGList(focusable_widgets, "GtkWidget"), NULL);
	CLEANUP(g_list_free, focusable_widgets);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_unset_focus_chain(USER_OBJECT_ s_object)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_unset_focus_chain(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_set_reallocate_redraws(USER_OBJECT_ s_object, USER_OBJECT_ s_needs_redraws)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));
	gboolean needs_redraws = (gboolean)asLogical(s_needs_redraws);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_set_reallocate_redraws(object, needs_redraws);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_set_focus_child(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_set_focus_child(object, child);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_set_focus_vadjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));
	GtkAdjustment* adjustment = GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_set_focus_vadjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_get_focus_vadjustment(USER_OBJECT_ s_object)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_container_get_focus_vadjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_set_focus_hadjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));
	GtkAdjustment* adjustment = GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_set_focus_hadjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_get_focus_hadjustment(USER_OBJECT_ s_object)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_container_get_focus_hadjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_resize_children(USER_OBJECT_ s_object)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_resize_children(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_container_child_type(USER_OBJECT_ s_object)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_container_child_type(object);

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_class_install_child_property(USER_OBJECT_ s_cclass, USER_OBJECT_ s_property_id, USER_OBJECT_ s_pspec)
{
	GtkContainerClass* cclass = (GtkContainerClass*)getPtrValue(s_cclass);
	guint property_id = (guint)asNumeric(s_property_id);
	GParamSpec* pspec = asGParamSpec(s_pspec);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_class_install_child_property(cclass, property_id, pspec);

	CLEANUP(g_param_spec_sink, (GParamSpec*)pspec);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_class_find_child_property(USER_OBJECT_ s_cclass, USER_OBJECT_ s_property_name)
{
	GObjectClass* cclass = (GObjectClass*)getPtrValue(s_cclass);
	const gchar* property_name = (const gchar*)asString(s_property_name);

	GParamSpec* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_container_class_find_child_property(cclass, property_name);

	_result = asRGParamSpec(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_class_list_child_properties(USER_OBJECT_ s_cclass)
{
	GObjectClass* cclass = (GObjectClass*)getPtrValue(s_cclass);

	GParamSpec** ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	guint n_properties;

	ans = gtk_container_class_list_child_properties(cclass, &n_properties);

	_result = asRArrayWithSize(ans, asRGParamSpec, n_properties);

	_result = retByVal(_result, "n_properties", asRNumeric(n_properties), NULL);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_child_get_property(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_property_name)
{
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	const gchar* property_name = (const gchar*)asString(s_property_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GValue* value = (GValue *)g_new0(GValue, 1);

	gtk_container_child_get_property(object, child, property_name, value);


	_result = retByVal(_result, "value", asRGValue(value), NULL);
	CLEANUP(g_value_unset, value);
	CLEANUP(g_free, value);

	return(_result);
}
 

USER_OBJECT_
S_gtk_container_forall(USER_OBJECT_ s_object, USER_OBJECT_ s_callback, USER_OBJECT_ s_callback_data)
{
	GtkCallback callback = (GtkCallback)S_GtkCallback;
	GClosure* callback_data = R_createGClosure(s_callback, s_callback_data);
	GtkContainer* object = GTK_CONTAINER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_container_forall(object, callback, callback_data);

	g_closure_sink(callback_data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_new_with_titles(USER_OBJECT_ s_columns, USER_OBJECT_ s_tree_column, USER_OBJECT_ s_titles)
{
	gint columns = (gint)asInteger(s_columns);
	gint tree_column = (gint)asInteger(s_tree_column);
	gchar** titles = (gchar**)asStringArray(s_titles);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_new_with_titles(columns, tree_column, titles);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_new(USER_OBJECT_ s_columns, USER_OBJECT_ s_tree_column)
{
	gint columns = (gint)asInteger(s_columns);
	gint tree_column = (gint)asInteger(s_tree_column);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_new(columns, tree_column);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_insert_node(USER_OBJECT_ s_object, USER_OBJECT_ s_parent, USER_OBJECT_ s_sibling, USER_OBJECT_ s_text, USER_OBJECT_ s_spacing, USER_OBJECT_ s_pixmap_closed, USER_OBJECT_ s_mask_closed, USER_OBJECT_ s_pixmap_opened, USER_OBJECT_ s_mask_opened, USER_OBJECT_ s_is_leaf, USER_OBJECT_ s_expanded)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* parent = (GtkCTreeNode*)getPtrValue(s_parent);
	GtkCTreeNode* sibling = (GtkCTreeNode*)getPtrValue(s_sibling);
	gchar** text = (gchar**)asStringArray(s_text);
	guint8 spacing = (guint8)asInteger(s_spacing);
	GdkPixmap* pixmap_closed = GET_LENGTH(s_pixmap_closed) == 0 ? NULL : GDK_PIXMAP(getPtrValue(s_pixmap_closed));
	GdkBitmap* mask_closed = GET_LENGTH(s_mask_closed) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask_closed));
	GdkPixmap* pixmap_opened = GET_LENGTH(s_pixmap_opened) == 0 ? NULL : GDK_PIXMAP(getPtrValue(s_pixmap_opened));
	GdkBitmap* mask_opened = GET_LENGTH(s_mask_opened) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask_opened));
	gboolean is_leaf = (gboolean)asLogical(s_is_leaf);
	gboolean expanded = (gboolean)asLogical(s_expanded);

	GtkCTreeNode* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_insert_node(object, parent, sibling, text, spacing, pixmap_closed, mask_closed, pixmap_opened, mask_opened, is_leaf, expanded);

	_result = toRPointer(ans, "GtkCTreeNode");

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_remove_node(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_remove_node(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_insert_gnode(USER_OBJECT_ s_object, USER_OBJECT_ s_parent, USER_OBJECT_ s_sibling, USER_OBJECT_ s_gnode, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkCTreeGNodeFunc func = (GtkCTreeGNodeFunc)S_GtkCTreeGNodeFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* parent = (GtkCTreeNode*)getPtrValue(s_parent);
	GtkCTreeNode* sibling = (GtkCTreeNode*)getPtrValue(s_sibling);
	GNode* gnode = (GNode*)getPtrValue(s_gnode);

	GtkCTreeNode* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_insert_gnode(object, parent, sibling, gnode, func, data);

	_result = toRPointer(ans, "GtkCTreeNode");
	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_export_to_gnode(USER_OBJECT_ s_object, USER_OBJECT_ s_parent, USER_OBJECT_ s_sibling, USER_OBJECT_ s_node, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkCTreeGNodeFunc func = (GtkCTreeGNodeFunc)S_GtkCTreeGNodeFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GNode* parent = (GNode*)getPtrValue(s_parent);
	GNode* sibling = (GNode*)getPtrValue(s_sibling);
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	GNode* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_export_to_gnode(object, parent, sibling, node, func, data);

	_result = toRPointer(ans, "GNode");
	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_post_recursive(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkCTreeFunc func = (GtkCTreeFunc)S_GtkCTreeFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_post_recursive(object, node, func, data);

	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_post_recursive_to_depth(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_depth, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkCTreeFunc func = (GtkCTreeFunc)S_GtkCTreeFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint depth = (gint)asInteger(s_depth);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_post_recursive_to_depth(object, node, depth, func, data);

	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_pre_recursive(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkCTreeFunc func = (GtkCTreeFunc)S_GtkCTreeFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_pre_recursive(object, node, func, data);

	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_pre_recursive_to_depth(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_depth, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkCTreeFunc func = (GtkCTreeFunc)S_GtkCTreeFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint depth = (gint)asInteger(s_depth);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_pre_recursive_to_depth(object, node, depth, func, data);

	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_is_viewable(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_is_viewable(object, node);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_last(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	GtkCTreeNode* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_last(object, node);

	_result = toRPointer(ans, "GtkCTreeNode");

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_find_node_ptr(USER_OBJECT_ s_object, USER_OBJECT_ s_ctree_row)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeRow* ctree_row = (GtkCTreeRow*)getPtrValue(s_ctree_row);

	GtkCTreeNode* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_find_node_ptr(object, ctree_row);

	_result = toRPointer(ans, "GtkCTreeNode");

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_nth(USER_OBJECT_ s_object, USER_OBJECT_ s_row)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	guint row = (guint)asNumeric(s_row);

	GtkCTreeNode* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_node_nth(object, row);

	_result = toRPointer(ans, "GtkCTreeNode");

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_find(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_child)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	GtkCTreeNode* child = (GtkCTreeNode*)getPtrValue(s_child);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_find(object, node, child);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_is_ancestor(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_child)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	GtkCTreeNode* child = (GtkCTreeNode*)getPtrValue(s_child);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_is_ancestor(object, node, child);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_find_by_row_data(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_data)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gpointer data = (gpointer)asGenericData(s_data);

	GtkCTreeNode* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_find_by_row_data(object, node, data);

	_result = toRPointer(ans, "GtkCTreeNode");

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_find_all_by_row_data(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_data)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gpointer data = (gpointer)asGenericData(s_data);

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_find_all_by_row_data(object, node, data);

	_result = asRGList(ans, "GtkCTreeNode");
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_find_by_row_data_custom(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_data, USER_OBJECT_ s_func)
{
	GCompareFunc func = (GCompareFunc)S_GCompareFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	GtkCTreeNode* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_find_by_row_data_custom(object, node, data, func);

	_result = toRPointer(ans, "GtkCTreeNode");
	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_find_all_by_row_data_custom(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_data, USER_OBJECT_ s_func)
{
	GCompareFunc func = (GCompareFunc)S_GCompareFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_find_all_by_row_data_custom(object, node, data, func);

	_result = asRGList(ans, "GtkCTreeNode");
	CLEANUP(g_list_free, ans);
	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_is_hot_spot(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_is_hot_spot(object, x, y);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_move(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_new_parent, USER_OBJECT_ s_new_sibling)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	GtkCTreeNode* new_parent = GET_LENGTH(s_new_parent) == 0 ? NULL : (GtkCTreeNode*)getPtrValue(s_new_parent);
	GtkCTreeNode* new_sibling = GET_LENGTH(s_new_sibling) == 0 ? NULL : (GtkCTreeNode*)getPtrValue(s_new_sibling);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_move(object, node, new_parent, new_sibling);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_expand(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_expand(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_expand_recursive(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_expand_recursive(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_expand_to_depth(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_depth)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint depth = (gint)asInteger(s_depth);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_expand_to_depth(object, node, depth);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_collapse(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_collapse(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_collapse_recursive(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_collapse_recursive(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_collapse_to_depth(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_depth)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint depth = (gint)asInteger(s_depth);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_collapse_to_depth(object, node, depth);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_toggle_expansion(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_toggle_expansion(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_toggle_expansion_recursive(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_toggle_expansion_recursive(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_select(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_select(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_select_recursive(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_select_recursive(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_unselect(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_unselect(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_unselect_recursive(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_unselect_recursive(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_real_select_recursive(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_state)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint state = (gint)asInteger(s_state);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_real_select_recursive(object, node, state);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_set_text(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_column, USER_OBJECT_ s_text)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint column = (gint)asInteger(s_column);
	const gchar* text = (const gchar*)asString(s_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_node_set_text(object, node, column, text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_set_pixmap(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_column, USER_OBJECT_ s_pixmap, USER_OBJECT_ s_mask)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint column = (gint)asInteger(s_column);
	GdkPixmap* pixmap = GDK_PIXMAP(getPtrValue(s_pixmap));
	GdkBitmap* mask = GET_LENGTH(s_mask) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_node_set_pixmap(object, node, column, pixmap, mask);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_set_pixtext(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_column, USER_OBJECT_ s_text, USER_OBJECT_ s_spacing, USER_OBJECT_ s_pixmap, USER_OBJECT_ s_mask)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint column = (gint)asInteger(s_column);
	const gchar* text = (const gchar*)asString(s_text);
	guint8 spacing = (guint8)asInteger(s_spacing);
	GdkPixmap* pixmap = GDK_PIXMAP(getPtrValue(s_pixmap));
	GdkBitmap* mask = GET_LENGTH(s_mask) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_node_set_pixtext(object, node, column, text, spacing, pixmap, mask);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_set_node_info(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_text, USER_OBJECT_ s_spacing, USER_OBJECT_ s_pixmap_closed, USER_OBJECT_ s_mask_closed, USER_OBJECT_ s_pixmap_opened, USER_OBJECT_ s_mask_opened, USER_OBJECT_ s_is_leaf, USER_OBJECT_ s_expanded)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	const gchar* text = (const gchar*)asString(s_text);
	guint8 spacing = (guint8)asInteger(s_spacing);
	GdkPixmap* pixmap_closed = GET_LENGTH(s_pixmap_closed) == 0 ? NULL : GDK_PIXMAP(getPtrValue(s_pixmap_closed));
	GdkBitmap* mask_closed = GET_LENGTH(s_mask_closed) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask_closed));
	GdkPixmap* pixmap_opened = GET_LENGTH(s_pixmap_opened) == 0 ? NULL : GDK_PIXMAP(getPtrValue(s_pixmap_opened));
	GdkBitmap* mask_opened = GET_LENGTH(s_mask_opened) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask_opened));
	gboolean is_leaf = (gboolean)asLogical(s_is_leaf);
	gboolean expanded = (gboolean)asLogical(s_expanded);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_set_node_info(object, node, text, spacing, pixmap_closed, mask_closed, pixmap_opened, mask_opened, is_leaf, expanded);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_set_shift(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_column, USER_OBJECT_ s_vertical, USER_OBJECT_ s_horizontal)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint column = (gint)asInteger(s_column);
	gint vertical = (gint)asInteger(s_vertical);
	gint horizontal = (gint)asInteger(s_horizontal);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_node_set_shift(object, node, column, vertical, horizontal);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_set_selectable(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_selectable)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gboolean selectable = (gboolean)asLogical(s_selectable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_node_set_selectable(object, node, selectable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_get_selectable(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_node_get_selectable(object, node);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_get_cell_type(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_column)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint column = (gint)asInteger(s_column);

	GtkCellType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_node_get_cell_type(object, node, column);

	_result = asREnum(ans, GTK_TYPE_CELL_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_get_text(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_column)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint column = (gint)asInteger(s_column);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gchar* text = NULL;

	ans = gtk_ctree_node_get_text(object, node, column, &text);

	_result = asRLogical(ans);

	_result = retByVal(_result, "text", asRString(text), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_get_pixmap(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_column)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint column = (gint)asInteger(s_column);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkPixmap* pixmap = NULL;
	GdkBitmap* mask = NULL;

	ans = gtk_ctree_node_get_pixmap(object, node, column, &pixmap, &mask);

	_result = asRLogical(ans);

	_result = retByVal(_result, "pixmap", toRPointerWithRef(pixmap, "GdkPixmap"), "mask", toRPointerWithRef(mask, "GdkBitmap"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_get_pixtext(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_column)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint column = (gint)asInteger(s_column);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gchar* text = NULL;
	guint8 spacing;
	GdkPixmap* pixmap = NULL;
	GdkBitmap* mask = NULL;

	ans = gtk_ctree_node_get_pixtext(object, node, column, &text, &spacing, &pixmap, &mask);

	_result = asRLogical(ans);

	_result = retByVal(_result, "text", asRString(text), "spacing", asRInteger(spacing), "pixmap", toRPointerWithRef(pixmap, "GdkPixmap"), "mask", toRPointerWithRef(mask, "GdkBitmap"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_get_node_info(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gchar* text = NULL;
	guint8 spacing;
	GdkPixmap* pixmap_closed = NULL;
	GdkBitmap* mask_closed = NULL;
	GdkPixmap* pixmap_opened = NULL;
	GdkBitmap* mask_opened = NULL;
	gboolean is_leaf;
	gboolean expanded;

	ans = gtk_ctree_get_node_info(object, node, &text, &spacing, &pixmap_closed, &mask_closed, &pixmap_opened, &mask_opened, &is_leaf, &expanded);

	_result = asRLogical(ans);

	_result = retByVal(_result, "text", asRString(text), "spacing", asRInteger(spacing), "pixmap_closed", toRPointerWithRef(pixmap_closed, "GdkPixmap"), "mask_closed", toRPointerWithRef(mask_closed, "GdkBitmap"), "pixmap_opened", toRPointerWithRef(pixmap_opened, "GdkPixmap"), "mask_opened", toRPointerWithRef(mask_opened, "GdkBitmap"), "is_leaf", asRLogical(is_leaf), "expanded", asRLogical(expanded), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_set_row_style(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_style)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	GtkStyle* style = GTK_STYLE(getPtrValue(s_style));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_node_set_row_style(object, node, style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_get_row_style(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	GtkStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_node_get_row_style(object, node);

	_result = toRPointerWithRef(ans, "GtkStyle");

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_set_cell_style(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_column, USER_OBJECT_ s_style)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint column = (gint)asInteger(s_column);
	GtkStyle* style = GTK_STYLE(getPtrValue(s_style));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_node_set_cell_style(object, node, column, style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_get_cell_style(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_column)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint column = (gint)asInteger(s_column);

	GtkStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_node_get_cell_style(object, node, column);

	_result = toRPointerWithRef(ans, "GtkStyle");

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_set_foreground(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_color)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	GdkColor* color = asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_node_set_foreground(object, node, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_set_background(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_color)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	GdkColor* color = asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_node_set_background(object, node, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_set_row_data_full(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_data)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gpointer data = (gpointer)asGenericData(s_data);
	GtkDestroyNotify destroy = (GtkDestroyNotify)R_ReleaseObject;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_node_set_row_data_full(object, node, data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_get_row_data(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	gpointer ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_node_get_row_data(object, node);

	_result = ans;

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_moveto(USER_OBJECT_ s_object, USER_OBJECT_ s_node, USER_OBJECT_ s_column, USER_OBJECT_ s_row_align, USER_OBJECT_ s_col_align)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);
	gint column = (gint)asInteger(s_column);
	gfloat row_align = (gfloat)asNumeric(s_row_align);
	gfloat col_align = (gfloat)asNumeric(s_col_align);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_node_moveto(object, node, column, row_align, col_align);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_is_visible(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	GtkVisibility ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_node_is_visible(object, node);

	_result = asREnum(ans, GTK_TYPE_VISIBILITY);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_set_indent(USER_OBJECT_ s_object, USER_OBJECT_ s_indent)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	gint indent = (gint)asInteger(s_indent);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_set_indent(object, indent);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_set_spacing(USER_OBJECT_ s_object, USER_OBJECT_ s_spacing)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	gint spacing = (gint)asInteger(s_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_set_spacing(object, spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_set_show_stub(USER_OBJECT_ s_object, USER_OBJECT_ s_show_stub)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	gboolean show_stub = (gboolean)asLogical(s_show_stub);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_set_show_stub(object, show_stub);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_set_line_style(USER_OBJECT_ s_object, USER_OBJECT_ s_line_style)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeLineStyle line_style = (GtkCTreeLineStyle)asEnum(s_line_style, GTK_TYPE_CTREE_LINE_STYLE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_set_line_style(object, line_style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_set_expander_style(USER_OBJECT_ s_object, USER_OBJECT_ s_expander_style)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeExpanderStyle expander_style = (GtkCTreeExpanderStyle)asEnum(s_expander_style, GTK_TYPE_CTREE_EXPANDER_STYLE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_set_expander_style(object, expander_style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_sort_node(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_sort_node(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_sort_recursive(USER_OBJECT_ s_object, USER_OBJECT_ s_node)
{
	GtkCTree* object = GTK_CTREE(getPtrValue(s_object));
	GtkCTreeNode* node = (GtkCTreeNode*)getPtrValue(s_node);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ctree_sort_recursive(object, node);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ctree_node_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ctree_node_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_curve_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_curve_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_curve_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_curve_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_curve_reset(USER_OBJECT_ s_object)
{
	GtkCurve* object = GTK_CURVE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_curve_reset(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_curve_set_gamma(USER_OBJECT_ s_object, USER_OBJECT_ s_gamma)
{
	GtkCurve* object = GTK_CURVE(getPtrValue(s_object));
	gfloat gamma = (gfloat)asNumeric(s_gamma);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_curve_set_gamma(object, gamma);


	return(_result);
}
 

USER_OBJECT_
S_gtk_curve_set_range(USER_OBJECT_ s_object, USER_OBJECT_ s_min_x, USER_OBJECT_ s_max_x, USER_OBJECT_ s_min_y, USER_OBJECT_ s_max_y)
{
	GtkCurve* object = GTK_CURVE(getPtrValue(s_object));
	gfloat min_x = (gfloat)asNumeric(s_min_x);
	gfloat max_x = (gfloat)asNumeric(s_max_x);
	gfloat min_y = (gfloat)asNumeric(s_min_y);
	gfloat max_y = (gfloat)asNumeric(s_max_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_curve_set_range(object, min_x, max_x, min_y, max_y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_curve_set_vector(USER_OBJECT_ s_object, USER_OBJECT_ s_vector)
{
	GtkCurve* object = GTK_CURVE(getPtrValue(s_object));
	int veclen = (int)GET_LENGTH(s_vector);
	gfloat* vector = (gfloat*)asArray(s_vector, gfloat, asNumeric);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_curve_set_vector(object, veclen, vector);


	return(_result);
}
 

USER_OBJECT_
S_gtk_curve_set_curve_type(USER_OBJECT_ s_object, USER_OBJECT_ s_type)
{
	GtkCurve* object = GTK_CURVE(getPtrValue(s_object));
	GtkCurveType type = (GtkCurveType)asEnum(s_type, GTK_TYPE_CURVE_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_curve_set_curve_type(object, type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_dialog_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_dialog_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_dialog_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_dialog_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_dialog_add_action_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_response_id)
{
	GtkDialog* object = GTK_DIALOG(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gint response_id = (gint)asInteger(s_response_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_dialog_add_action_widget(object, child, response_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_dialog_add_button(USER_OBJECT_ s_object, USER_OBJECT_ s_button_text, USER_OBJECT_ s_response_id)
{
	GtkDialog* object = GTK_DIALOG(getPtrValue(s_object));
	const gchar* button_text = (const gchar*)asString(s_button_text);
	gint response_id = (gint)asInteger(s_response_id);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_dialog_add_button(object, button_text, response_id);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_dialog_set_response_sensitive(USER_OBJECT_ s_object, USER_OBJECT_ s_response_id, USER_OBJECT_ s_setting)
{
	GtkDialog* object = GTK_DIALOG(getPtrValue(s_object));
	gint response_id = (gint)asInteger(s_response_id);
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_dialog_set_response_sensitive(object, response_id, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_dialog_set_default_response(USER_OBJECT_ s_object, USER_OBJECT_ s_response_id)
{
	GtkDialog* object = GTK_DIALOG(getPtrValue(s_object));
	gint response_id = (gint)asInteger(s_response_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_dialog_set_default_response(object, response_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_dialog_get_response_for_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_widget)
{
	GtkDialog* object = GTK_DIALOG(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_dialog_get_response_for_widget(object, widget);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_dialog_set_has_separator(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkDialog* object = GTK_DIALOG(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_dialog_set_has_separator(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_dialog_get_has_separator(USER_OBJECT_ s_object)
{
	GtkDialog* object = GTK_DIALOG(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_dialog_get_has_separator(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_dialog_response(USER_OBJECT_ s_object, USER_OBJECT_ s_response_id)
{
	GtkDialog* object = GTK_DIALOG(getPtrValue(s_object));
	gint response_id = (gint)asInteger(s_response_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_dialog_response(object, response_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_dialog_run(USER_OBJECT_ s_object)
{
	GtkDialog* object = GTK_DIALOG(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_dialog_run(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_dialog_set_alternative_button_order_from_array(USER_OBJECT_ s_object, USER_OBJECT_ s_new_order)
{
	GtkDialog* object = GTK_DIALOG(getPtrValue(s_object));
	gint n_params = (gint)GET_LENGTH(s_new_order);
	gint* new_order = (gint*)asArray(s_new_order, gint, asInteger);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_dialog_set_alternative_button_order_from_array(object, n_params, new_order);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_check_threshold(USER_OBJECT_ s_object, USER_OBJECT_ s_start_x, USER_OBJECT_ s_start_y, USER_OBJECT_ s_current_x, USER_OBJECT_ s_current_y)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gint start_x = (gint)asInteger(s_start_x);
	gint start_y = (gint)asInteger(s_start_y);
	gint current_x = (gint)asInteger(s_current_x);
	gint current_y = (gint)asInteger(s_current_y);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_drag_check_threshold(object, start_x, start_y, current_x, current_y);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_get_data(USER_OBJECT_ s_object, USER_OBJECT_ s_context, USER_OBJECT_ s_target, USER_OBJECT_ s_time)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkDragContext* context = GDK_DRAG_CONTEXT(getPtrValue(s_context));
	GdkAtom target = asGdkAtom(s_target);
	guint32 time = (guint32)asNumeric(s_time);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_get_data(object, context, target, time);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_highlight(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_highlight(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_unhighlight(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_unhighlight(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_dest_set(USER_OBJECT_ s_object, USER_OBJECT_ s_flags, USER_OBJECT_ s_targets, USER_OBJECT_ s_actions)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkDestDefaults flags = (GtkDestDefaults)asFlag(s_flags, GTK_TYPE_DEST_DEFAULTS);
	const GtkTargetEntry* targets = (const GtkTargetEntry*)asArrayRef(s_targets, GtkTargetEntry, asGtkTargetEntry);
	gint n_targets = (gint)GET_LENGTH(s_targets);
	GdkDragAction actions = (GdkDragAction)asFlag(s_actions, GDK_TYPE_DRAG_ACTION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_dest_set(object, flags, targets, n_targets, actions);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_dest_set_proxy(USER_OBJECT_ s_object, USER_OBJECT_ s_proxy_window, USER_OBJECT_ s_protocol, USER_OBJECT_ s_use_coordinates)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkWindow* proxy_window = GDK_WINDOW(getPtrValue(s_proxy_window));
	GdkDragProtocol protocol = (GdkDragProtocol)asEnum(s_protocol, GDK_TYPE_DRAG_PROTOCOL);
	gboolean use_coordinates = (gboolean)asLogical(s_use_coordinates);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_dest_set_proxy(object, proxy_window, protocol, use_coordinates);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_dest_unset(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_dest_unset(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_dest_find_target(USER_OBJECT_ s_object, USER_OBJECT_ s_context, USER_OBJECT_ s_target_list)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkDragContext* context = GDK_DRAG_CONTEXT(getPtrValue(s_context));
	GtkTargetList* target_list = (GtkTargetList*)getPtrValue(s_target_list);

	GdkAtom ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_drag_dest_find_target(object, context, target_list);

	_result = asRGdkAtom(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_dest_get_target_list(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GtkTargetList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_drag_dest_get_target_list(object);

	_result = toRPointerWithFinalizer(ans, "GtkTargetList", (RPointerFinalizer) gtk_target_list_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_dest_set_target_list(USER_OBJECT_ s_object, USER_OBJECT_ s_target_list)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkTargetList* target_list = (GtkTargetList*)getPtrValue(s_target_list);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_dest_set_target_list(object, target_list);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_source_set(USER_OBJECT_ s_object, USER_OBJECT_ s_start_button_mask, USER_OBJECT_ s_targets, USER_OBJECT_ s_actions)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkModifierType start_button_mask = (GdkModifierType)asFlag(s_start_button_mask, GDK_TYPE_MODIFIER_TYPE);
	const GtkTargetEntry* targets = (const GtkTargetEntry*)asArrayRef(s_targets, GtkTargetEntry, asGtkTargetEntry);
	gint n_targets = (gint)GET_LENGTH(s_targets);
	GdkDragAction actions = (GdkDragAction)asFlag(s_actions, GDK_TYPE_DRAG_ACTION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_source_set(object, start_button_mask, targets, n_targets, actions);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_source_unset(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_source_unset(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_source_set_icon(USER_OBJECT_ s_object, USER_OBJECT_ s_colormap, USER_OBJECT_ s_pixmap, USER_OBJECT_ s_mask)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkColormap* colormap = GDK_COLORMAP(getPtrValue(s_colormap));
	GdkPixmap* pixmap = GDK_PIXMAP(getPtrValue(s_pixmap));
	GdkBitmap* mask = GET_LENGTH(s_mask) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_source_set_icon(object, colormap, pixmap, mask);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_source_set_icon_pixbuf(USER_OBJECT_ s_object, USER_OBJECT_ s_pixbuf)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkPixbuf* pixbuf = GDK_PIXBUF(getPtrValue(s_pixbuf));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_source_set_icon_pixbuf(object, pixbuf);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_source_set_icon_stock(USER_OBJECT_ s_object, USER_OBJECT_ s_stock_id)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	const gchar* stock_id = (const gchar*)asString(s_stock_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_source_set_icon_stock(object, stock_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_source_get_target_list(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GtkTargetList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_drag_source_get_target_list(object);

	_result = toRPointerWithFinalizer(ans, "GtkTargetList", (RPointerFinalizer) gtk_target_list_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_source_set_target_list(USER_OBJECT_ s_object, USER_OBJECT_ s_target_list)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkTargetList* target_list = (GtkTargetList*)getPtrValue(s_target_list);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_source_set_target_list(object, target_list);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_begin(USER_OBJECT_ s_object, USER_OBJECT_ s_targets, USER_OBJECT_ s_actions, USER_OBJECT_ s_button, USER_OBJECT_ s_event)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkTargetList* targets = (GtkTargetList*)getPtrValue(s_targets);
	GdkDragAction actions = (GdkDragAction)asFlag(s_actions, GDK_TYPE_DRAG_ACTION);
	gint button = (gint)asInteger(s_button);
	GdkEvent* event = (GdkEvent*)getPtrValue(s_event);

	GdkDragContext* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_drag_begin(object, targets, actions, button, event);

	_result = toRPointerWithRef(ans, "GdkDragContext");

	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_set_default_icon(USER_OBJECT_ s_colormap, USER_OBJECT_ s_pixmap, USER_OBJECT_ s_mask, USER_OBJECT_ s_hot_x, USER_OBJECT_ s_hot_y)
{
	GdkColormap* colormap = GDK_COLORMAP(getPtrValue(s_colormap));
	GdkPixmap* pixmap = GDK_PIXMAP(getPtrValue(s_pixmap));
	GdkBitmap* mask = GDK_DRAWABLE(getPtrValue(s_mask));
	gint hot_x = (gint)asInteger(s_hot_x);
	gint hot_y = (gint)asInteger(s_hot_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_set_default_icon(colormap, pixmap, mask, hot_x, hot_y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_dest_add_text_targets(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_dest_add_text_targets(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_dest_add_image_targets(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_dest_add_image_targets(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_dest_add_uri_targets(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_dest_add_uri_targets(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_source_add_text_targets(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_source_add_text_targets(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_source_add_image_targets(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_source_add_image_targets(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_source_add_uri_targets(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_source_add_uri_targets(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_target_list_add_text_targets(USER_OBJECT_ s_list, USER_OBJECT_ s_info)
{
	GtkTargetList* list = (GtkTargetList*)getPtrValue(s_list);
	guint info = (guint)asNumeric(s_info);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_target_list_add_text_targets(list, info);


	return(_result);
}
 

USER_OBJECT_
S_gtk_target_list_add_image_targets(USER_OBJECT_ s_list, USER_OBJECT_ s_info, USER_OBJECT_ s_writable)
{
	GtkTargetList* list = (GtkTargetList*)getPtrValue(s_list);
	guint info = (guint)asNumeric(s_info);
	gboolean writable = (gboolean)asLogical(s_writable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_target_list_add_image_targets(list, info, writable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_target_list_add_uri_targets(USER_OBJECT_ s_list, USER_OBJECT_ s_info)
{
	GtkTargetList* list = (GtkTargetList*)getPtrValue(s_list);
	guint info = (guint)asNumeric(s_info);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_target_list_add_uri_targets(list, info);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_get_source_widget(USER_OBJECT_ s_context)
{
	GdkDragContext* context = GDK_DRAG_CONTEXT(getPtrValue(s_context));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_drag_get_source_widget(context);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_drag_source_set_icon_name(USER_OBJECT_ s_widget, USER_OBJECT_ s_icon_name)
{
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	const gchar* icon_name = (const gchar*)asString(s_icon_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drag_source_set_icon_name(widget, icon_name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_drawing_area_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_drawing_area_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_drawing_area_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_drawing_area_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_drawing_area_size(USER_OBJECT_ s_object, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkDrawingArea* object = GTK_DRAWING_AREA(getPtrValue(s_object));
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_drawing_area_size(object, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_editable_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_select_region(USER_OBJECT_ s_object, USER_OBJECT_ s_start, USER_OBJECT_ s_end)
{
	GtkEditable* object = GTK_EDITABLE(getPtrValue(s_object));
	gint start = (gint)asInteger(s_start);
	gint end = (gint)asInteger(s_end);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_editable_select_region(object, start, end);


	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_get_selection_bounds(USER_OBJECT_ s_object)
{
	GtkEditable* object = GTK_EDITABLE(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint start;
	gint end;

	ans = gtk_editable_get_selection_bounds(object, &start, &end);

	_result = asRLogical(ans);

	_result = retByVal(_result, "start", asRInteger(start), "end", asRInteger(end), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_delete_text(USER_OBJECT_ s_object, USER_OBJECT_ s_start_pos, USER_OBJECT_ s_end_pos)
{
	GtkEditable* object = GTK_EDITABLE(getPtrValue(s_object));
	gint start_pos = (gint)asInteger(s_start_pos);
	gint end_pos = (gint)asInteger(s_end_pos);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_editable_delete_text(object, start_pos, end_pos);


	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_get_chars(USER_OBJECT_ s_object, USER_OBJECT_ s_start_pos, USER_OBJECT_ s_end_pos)
{
	GtkEditable* object = GTK_EDITABLE(getPtrValue(s_object));
	gint start_pos = (gint)asInteger(s_start_pos);
	gint end_pos = (gint)asInteger(s_end_pos);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_editable_get_chars(object, start_pos, end_pos);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_cut_clipboard(USER_OBJECT_ s_object)
{
	GtkEditable* object = GTK_EDITABLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_editable_cut_clipboard(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_copy_clipboard(USER_OBJECT_ s_object)
{
	GtkEditable* object = GTK_EDITABLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_editable_copy_clipboard(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_paste_clipboard(USER_OBJECT_ s_object)
{
	GtkEditable* object = GTK_EDITABLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_editable_paste_clipboard(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_delete_selection(USER_OBJECT_ s_object)
{
	GtkEditable* object = GTK_EDITABLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_editable_delete_selection(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_set_position(USER_OBJECT_ s_object, USER_OBJECT_ s_position)
{
	GtkEditable* object = GTK_EDITABLE(getPtrValue(s_object));
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_editable_set_position(object, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_get_position(USER_OBJECT_ s_object)
{
	GtkEditable* object = GTK_EDITABLE(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_editable_get_position(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_set_editable(USER_OBJECT_ s_object, USER_OBJECT_ s_is_editable)
{
	GtkEditable* object = GTK_EDITABLE(getPtrValue(s_object));
	gboolean is_editable = (gboolean)asLogical(s_is_editable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_editable_set_editable(object, is_editable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_editable_get_editable(USER_OBJECT_ s_object)
{
	GtkEditable* object = GTK_EDITABLE(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_editable_get_editable(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_new_with_max_length(USER_OBJECT_ s_max)
{
	guint16 max = (guint16)asInteger(s_max);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_new_with_max_length(max);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_set_visibility(USER_OBJECT_ s_object, USER_OBJECT_ s_visible)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	gboolean visible = (gboolean)asLogical(s_visible);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_set_visibility(object, visible);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_get_visibility(USER_OBJECT_ s_object)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_get_visibility(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_set_invisible_char(USER_OBJECT_ s_object, USER_OBJECT_ s_ch)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	gunichar ch = (gunichar)asNumeric(s_ch);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_set_invisible_char(object, ch);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_get_invisible_char(USER_OBJECT_ s_object)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));

	gunichar ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_get_invisible_char(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_set_has_frame(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_set_has_frame(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_get_has_frame(USER_OBJECT_ s_object)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_get_has_frame(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_set_max_length(USER_OBJECT_ s_object, USER_OBJECT_ s_max)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	gint max = (gint)asInteger(s_max);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_set_max_length(object, max);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_get_max_length(USER_OBJECT_ s_object)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_get_max_length(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_set_activates_default(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_set_activates_default(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_get_activates_default(USER_OBJECT_ s_object)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_get_activates_default(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_set_width_chars(USER_OBJECT_ s_object, USER_OBJECT_ s_n_chars)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	gint n_chars = (gint)asInteger(s_n_chars);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_set_width_chars(object, n_chars);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_get_width_chars(USER_OBJECT_ s_object)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_get_width_chars(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_set_text(USER_OBJECT_ s_object, USER_OBJECT_ s_text)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_set_text(object, text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_get_text(USER_OBJECT_ s_object)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_get_text(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_get_layout(USER_OBJECT_ s_object)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));

	PangoLayout* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_get_layout(object);

	_result = toRPointerWithRef(ans, "PangoLayout");

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_get_layout_offsets(USER_OBJECT_ s_object)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint x;
	gint y;

	gtk_entry_get_layout_offsets(object, &x, &y);


	_result = retByVal(_result, "x", asRInteger(x), "y", asRInteger(y), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_set_alignment(USER_OBJECT_ s_object, USER_OBJECT_ s_xalign)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	gfloat xalign = (gfloat)asNumeric(s_xalign);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_set_alignment(object, xalign);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_get_alignment(USER_OBJECT_ s_object)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));

	gfloat ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_get_alignment(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_set_completion(USER_OBJECT_ s_object, USER_OBJECT_ s_completion)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	GtkEntryCompletion* completion = GTK_ENTRY_COMPLETION(getPtrValue(s_completion));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_set_completion(object, completion);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_get_completion(USER_OBJECT_ s_object)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));

	GtkEntryCompletion* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_get_completion(object);

	_result = toRPointerWithRef(ans, "GtkEntryCompletion");

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_append_text(USER_OBJECT_ s_object, USER_OBJECT_ s_text)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_append_text(object, text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_prepend_text(USER_OBJECT_ s_object, USER_OBJECT_ s_text)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_prepend_text(object, text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_set_position(USER_OBJECT_ s_object, USER_OBJECT_ s_position)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_set_position(object, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_select_region(USER_OBJECT_ s_object, USER_OBJECT_ s_start, USER_OBJECT_ s_end)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	gint start = (gint)asInteger(s_start);
	gint end = (gint)asInteger(s_end);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_select_region(object, start, end);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_set_editable(USER_OBJECT_ s_object, USER_OBJECT_ s_editable)
{
	GtkEntry* object = GTK_ENTRY(getPtrValue(s_object));
	gboolean editable = (gboolean)asLogical(s_editable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_set_editable(object, editable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_completion_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_new()
{

	GtkEntryCompletion* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_completion_new();

	_result = toRPointerWithFinalizer(ans, "GtkEntryCompletion", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_get_entry(USER_OBJECT_ s_object)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_completion_get_entry(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_set_model(USER_OBJECT_ s_object, USER_OBJECT_ s_model)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));
	GtkTreeModel* model = GET_LENGTH(s_model) == 0 ? NULL : GTK_TREE_MODEL(getPtrValue(s_model));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_set_model(object, model);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_get_model(USER_OBJECT_ s_object)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));

	GtkTreeModel* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_completion_get_model(object);

	_result = toRPointerWithRef(ans, "GtkTreeModel");

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_set_match_func(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_func_data)
{
	GtkEntryCompletionMatchFunc func = (GtkEntryCompletionMatchFunc)S_GtkEntryCompletionMatchFunc;
	GClosure* func_data = R_createGClosure(s_func, s_func_data);
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));
	GDestroyNotify func_notify = (GDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_set_match_func(object, func, func_data, func_notify);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_set_minimum_key_length(USER_OBJECT_ s_object, USER_OBJECT_ s_length)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));
	gint length = (gint)asInteger(s_length);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_set_minimum_key_length(object, length);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_get_minimum_key_length(USER_OBJECT_ s_object)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_completion_get_minimum_key_length(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_complete(USER_OBJECT_ s_object)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_complete(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_insert_action_text(USER_OBJECT_ s_object, USER_OBJECT_ s_index, USER_OBJECT_ s_text)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));
	gint index = (gint)asInteger(s_index);
	const gchar* text = (const gchar*)asString(s_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_insert_action_text(object, index, text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_insert_action_markup(USER_OBJECT_ s_object, USER_OBJECT_ s_index, USER_OBJECT_ s_markup)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));
	gint index = (gint)asInteger(s_index);
	const gchar* markup = (const gchar*)asString(s_markup);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_insert_action_markup(object, index, markup);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_delete_action(USER_OBJECT_ s_object, USER_OBJECT_ s_index)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));
	gint index = (gint)asInteger(s_index);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_delete_action(object, index);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_set_text_column(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_set_text_column(object, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_get_text_column(USER_OBJECT_ s_object)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_completion_get_text_column(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_insert_prefix(USER_OBJECT_ s_object)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_insert_prefix(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_set_inline_completion(USER_OBJECT_ s_object, USER_OBJECT_ s_inline_completion)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));
	gboolean inline_completion = (gboolean)asLogical(s_inline_completion);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_set_inline_completion(object, inline_completion);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_get_inline_completion(USER_OBJECT_ s_object)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_completion_get_inline_completion(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_set_popup_completion(USER_OBJECT_ s_object, USER_OBJECT_ s_popup_completion)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));
	gboolean popup_completion = (gboolean)asLogical(s_popup_completion);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_set_popup_completion(object, popup_completion);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_get_popup_completion(USER_OBJECT_ s_object)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_completion_get_popup_completion(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_set_popup_set_width(USER_OBJECT_ s_object, USER_OBJECT_ s_popup_set_width)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));
	gboolean popup_set_width = (gboolean)asLogical(s_popup_set_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_set_popup_set_width(object, popup_set_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_get_popup_set_width(USER_OBJECT_ s_object)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_completion_get_popup_set_width(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_set_popup_single_match(USER_OBJECT_ s_object, USER_OBJECT_ s_popup_single_match)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));
	gboolean popup_single_match = (gboolean)asLogical(s_popup_single_match);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_entry_completion_set_popup_single_match(object, popup_single_match);


	return(_result);
}
 

USER_OBJECT_
S_gtk_entry_completion_get_popup_single_match(USER_OBJECT_ s_object)
{
	GtkEntryCompletion* object = GTK_ENTRY_COMPLETION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_entry_completion_get_popup_single_match(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_event_box_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_event_box_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_event_box_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_event_box_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_event_box_get_visible_window(USER_OBJECT_ s_object)
{
	GtkEventBox* object = GTK_EVENT_BOX(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_event_box_get_visible_window(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_event_box_set_visible_window(USER_OBJECT_ s_object, USER_OBJECT_ s_visible_window)
{
	GtkEventBox* object = GTK_EVENT_BOX(getPtrValue(s_object));
	gboolean visible_window = (gboolean)asLogical(s_visible_window);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_event_box_set_visible_window(object, visible_window);


	return(_result);
}
 

USER_OBJECT_
S_gtk_event_box_get_above_child(USER_OBJECT_ s_object)
{
	GtkEventBox* object = GTK_EVENT_BOX(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_event_box_get_above_child(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_event_box_set_above_child(USER_OBJECT_ s_object, USER_OBJECT_ s_above_child)
{
	GtkEventBox* object = GTK_EVENT_BOX(getPtrValue(s_object));
	gboolean above_child = (gboolean)asLogical(s_above_child);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_event_box_set_above_child(object, above_child);


	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_expander_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_new(USER_OBJECT_ s_label)
{
	char * prop_names[] = { "label", NULL };
	USER_OBJECT_ args[] = { s_label };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_EXPANDER, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_new_with_mnemonic(USER_OBJECT_ s_label)
{
	const gchar* label = GET_LENGTH(s_label) == 0 ? NULL : (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_expander_new_with_mnemonic(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_set_expanded(USER_OBJECT_ s_object, USER_OBJECT_ s_expanded)
{
	GtkExpander* object = GTK_EXPANDER(getPtrValue(s_object));
	gboolean expanded = (gboolean)asLogical(s_expanded);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_expander_set_expanded(object, expanded);


	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_get_expanded(USER_OBJECT_ s_object)
{
	GtkExpander* object = GTK_EXPANDER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_expander_get_expanded(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_set_spacing(USER_OBJECT_ s_object, USER_OBJECT_ s_spacing)
{
	GtkExpander* object = GTK_EXPANDER(getPtrValue(s_object));
	gint spacing = (gint)asInteger(s_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_expander_set_spacing(object, spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_get_spacing(USER_OBJECT_ s_object)
{
	GtkExpander* object = GTK_EXPANDER(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_expander_get_spacing(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_set_label(USER_OBJECT_ s_object, USER_OBJECT_ s_label)
{
	GtkExpander* object = GTK_EXPANDER(getPtrValue(s_object));
	const gchar* label = GET_LENGTH(s_label) == 0 ? NULL : (const gchar*)asString(s_label);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_expander_set_label(object, label);


	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_get_label(USER_OBJECT_ s_object)
{
	GtkExpander* object = GTK_EXPANDER(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_expander_get_label(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_set_use_underline(USER_OBJECT_ s_object, USER_OBJECT_ s_use_underline)
{
	GtkExpander* object = GTK_EXPANDER(getPtrValue(s_object));
	gboolean use_underline = (gboolean)asLogical(s_use_underline);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_expander_set_use_underline(object, use_underline);


	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_get_use_underline(USER_OBJECT_ s_object)
{
	GtkExpander* object = GTK_EXPANDER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_expander_get_use_underline(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_set_use_markup(USER_OBJECT_ s_object, USER_OBJECT_ s_use_markup)
{
	GtkExpander* object = GTK_EXPANDER(getPtrValue(s_object));
	gboolean use_markup = (gboolean)asLogical(s_use_markup);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_expander_set_use_markup(object, use_markup);


	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_get_use_markup(USER_OBJECT_ s_object)
{
	GtkExpander* object = GTK_EXPANDER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_expander_get_use_markup(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_set_label_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_label_widget)
{
	GtkExpander* object = GTK_EXPANDER(getPtrValue(s_object));
	GtkWidget* label_widget = GET_LENGTH(s_label_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_label_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_expander_set_label_widget(object, label_widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_expander_get_label_widget(USER_OBJECT_ s_object)
{
	GtkExpander* object = GTK_EXPANDER(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_expander_get_label_widget(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_error_quark()
{

	GQuark ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_error_quark();

	_result = asRGQuark(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_action(USER_OBJECT_ s_object, USER_OBJECT_ s_action)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	GtkFileChooserAction action = (GtkFileChooserAction)asEnum(s_action, GTK_TYPE_FILE_CHOOSER_ACTION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_set_action(object, action);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_action(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	GtkFileChooserAction ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_action(object);

	_result = asREnum(ans, GTK_TYPE_FILE_CHOOSER_ACTION);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_local_only(USER_OBJECT_ s_object, USER_OBJECT_ s_local_only)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	gboolean local_only = (gboolean)asLogical(s_local_only);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_set_local_only(object, local_only);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_local_only(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_local_only(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_select_multiple(USER_OBJECT_ s_object, USER_OBJECT_ s_select_multiple)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	gboolean select_multiple = (gboolean)asLogical(s_select_multiple);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_set_select_multiple(object, select_multiple);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_select_multiple(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_select_multiple(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_show_hidden(USER_OBJECT_ s_object, USER_OBJECT_ s_show_hidden)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	gboolean show_hidden = (gboolean)asLogical(s_show_hidden);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_set_show_hidden(object, show_hidden);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_show_hidden(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_show_hidden(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_do_overwrite_confirmation(USER_OBJECT_ s_object, USER_OBJECT_ s_do_overwrite_confirmation)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	gboolean do_overwrite_confirmation = (gboolean)asLogical(s_do_overwrite_confirmation);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_set_do_overwrite_confirmation(object, do_overwrite_confirmation);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_do_overwrite_confirmation(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_do_overwrite_confirmation(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_current_name(USER_OBJECT_ s_object, USER_OBJECT_ s_name)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_set_current_name(object, name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_filename(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_filename(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_filename(USER_OBJECT_ s_object, USER_OBJECT_ s_filename)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const char* filename = (const char*)asString(s_filename);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_set_filename(object, filename);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_select_filename(USER_OBJECT_ s_object, USER_OBJECT_ s_filename)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const char* filename = (const char*)asString(s_filename);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_select_filename(object, filename);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_unselect_filename(USER_OBJECT_ s_object, USER_OBJECT_ s_filename)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const char* filename = (const char*)asString(s_filename);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_unselect_filename(object, filename);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_select_all(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_select_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_unselect_all(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_unselect_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_filenames(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_filenames(object);

	_result = asRGSListConv(ans, (ElementConverter)asRString);
	CLEANUP(GSListFreeStrings, ans);
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_current_folder(USER_OBJECT_ s_object, USER_OBJECT_ s_filename)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const gchar* filename = (const gchar*)asString(s_filename);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_set_current_folder(object, filename);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_current_folder(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_current_folder(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_uri(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_uri(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_uri(USER_OBJECT_ s_object, USER_OBJECT_ s_uri)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const char* uri = (const char*)asString(s_uri);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_set_uri(object, uri);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_select_uri(USER_OBJECT_ s_object, USER_OBJECT_ s_uri)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const char* uri = (const char*)asString(s_uri);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_select_uri(object, uri);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_unselect_uri(USER_OBJECT_ s_object, USER_OBJECT_ s_uri)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const char* uri = (const char*)asString(s_uri);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_unselect_uri(object, uri);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_uris(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_uris(object);

	_result = asRGSListConv(ans, (ElementConverter)asRString);
	CLEANUP(GSListFreeStrings, ans);
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_current_folder_uri(USER_OBJECT_ s_object, USER_OBJECT_ s_uri)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const gchar* uri = (const gchar*)asString(s_uri);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_set_current_folder_uri(object, uri);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_current_folder_uri(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_current_folder_uri(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_preview_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_preview_widget)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	GtkWidget* preview_widget = GTK_WIDGET(getPtrValue(s_preview_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_set_preview_widget(object, preview_widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_preview_widget(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_preview_widget(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_preview_widget_active(USER_OBJECT_ s_object, USER_OBJECT_ s_active)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	gboolean active = (gboolean)asLogical(s_active);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_set_preview_widget_active(object, active);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_preview_widget_active(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_preview_widget_active(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_use_preview_label(USER_OBJECT_ s_object, USER_OBJECT_ s_use_label)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	gboolean use_label = (gboolean)asLogical(s_use_label);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_set_use_preview_label(object, use_label);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_use_preview_label(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_use_preview_label(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_preview_filename(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	char* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_preview_filename(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_preview_uri(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	char* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_preview_uri(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_extra_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_extra_widget)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	GtkWidget* extra_widget = GTK_WIDGET(getPtrValue(s_extra_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_set_extra_widget(object, extra_widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_extra_widget(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_extra_widget(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_add_filter(USER_OBJECT_ s_object, USER_OBJECT_ s_filter)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	GtkFileFilter* filter = GTK_FILE_FILTER(getPtrValue(s_filter));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_add_filter(object, filter);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_remove_filter(USER_OBJECT_ s_object, USER_OBJECT_ s_filter)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	GtkFileFilter* filter = GTK_FILE_FILTER(getPtrValue(s_filter));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_remove_filter(object, filter);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_list_filters(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_list_filters(object);

	_result = asRGSList(ans, "GtkFileFilter");
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_set_filter(USER_OBJECT_ s_object, USER_OBJECT_ s_filter)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	GtkFileFilter* filter = GTK_FILE_FILTER(getPtrValue(s_filter));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_set_filter(object, filter);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_get_filter(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	GtkFileFilter* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_get_filter(object);

	_result = toRPointer(ans, "GtkFileFilter");

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_add_shortcut_folder(USER_OBJECT_ s_object, USER_OBJECT_ s_folder)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const char* folder = (const char*)asString(s_folder);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GError* error = NULL;

	ans = gtk_file_chooser_add_shortcut_folder(object, folder, &error);

	_result = asRLogical(ans);

	_result = retByVal(_result, "error", asRGError(error), NULL);
	CLEANUP(g_error_free, error);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_remove_shortcut_folder(USER_OBJECT_ s_object, USER_OBJECT_ s_folder)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const char* folder = (const char*)asString(s_folder);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GError* error = NULL;

	ans = gtk_file_chooser_remove_shortcut_folder(object, folder, &error);

	_result = asRLogical(ans);

	_result = retByVal(_result, "error", asRGError(error), NULL);
	CLEANUP(g_error_free, error);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_list_shortcut_folders(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_list_shortcut_folders(object);

	_result = asRGSListConv(ans, (ElementConverter)asRString);
	CLEANUP(GSListFreeStrings, ans);
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_add_shortcut_folder_uri(USER_OBJECT_ s_object, USER_OBJECT_ s_uri)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const char* uri = (const char*)asString(s_uri);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GError* error = NULL;

	ans = gtk_file_chooser_add_shortcut_folder_uri(object, uri, &error);

	_result = asRLogical(ans);

	_result = retByVal(_result, "error", asRGError(error), NULL);
	CLEANUP(g_error_free, error);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_remove_shortcut_folder_uri(USER_OBJECT_ s_object, USER_OBJECT_ s_uri)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));
	const char* uri = (const char*)asString(s_uri);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GError* error = NULL;

	ans = gtk_file_chooser_remove_shortcut_folder_uri(object, uri, &error);

	_result = asRLogical(ans);

	_result = retByVal(_result, "error", asRGError(error), NULL);
	CLEANUP(g_error_free, error);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_list_shortcut_folder_uris(USER_OBJECT_ s_object)
{
	GtkFileChooser* object = GTK_FILE_CHOOSER(getPtrValue(s_object));

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_list_shortcut_folder_uris(object);

	_result = asRGSListConv(ans, (ElementConverter)asRString);
	CLEANUP(GSListFreeStrings, ans);
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_button_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_button_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_button_new(USER_OBJECT_ s_title, USER_OBJECT_ s_action)
{
	const gchar* title = (const gchar*)asString(s_title);
	GtkFileChooserAction action = (GtkFileChooserAction)asEnum(s_action, GTK_TYPE_FILE_CHOOSER_ACTION);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_button_new(title, action);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_button_new_with_backend(USER_OBJECT_ s_title, USER_OBJECT_ s_action, USER_OBJECT_ s_backend)
{
	const gchar* title = (const gchar*)asString(s_title);
	GtkFileChooserAction action = (GtkFileChooserAction)asEnum(s_action, GTK_TYPE_FILE_CHOOSER_ACTION);
	const gchar* backend = (const gchar*)asString(s_backend);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_button_new_with_backend(title, action, backend);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_button_new_with_dialog(USER_OBJECT_ s_dialog)
{
	GtkWidget* dialog = GTK_WIDGET(getPtrValue(s_dialog));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_button_new_with_dialog(dialog);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_button_get_title(USER_OBJECT_ s_object)
{
	GtkFileChooserButton* object = GTK_FILE_CHOOSER_BUTTON(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_button_get_title(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_button_set_title(USER_OBJECT_ s_object, USER_OBJECT_ s_title)
{
	GtkFileChooserButton* object = GTK_FILE_CHOOSER_BUTTON(getPtrValue(s_object));
	const gchar* title = (const gchar*)asString(s_title);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_button_set_title(object, title);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_button_get_width_chars(USER_OBJECT_ s_object)
{
	GtkFileChooserButton* object = GTK_FILE_CHOOSER_BUTTON(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_button_get_width_chars(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_button_set_width_chars(USER_OBJECT_ s_object, USER_OBJECT_ s_n_chars)
{
	GtkFileChooserButton* object = GTK_FILE_CHOOSER_BUTTON(getPtrValue(s_object));
	gint n_chars = (gint)asInteger(s_n_chars);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_chooser_button_set_width_chars(object, n_chars);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_dialog_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_dialog_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_widget_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_widget_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_widget_new(USER_OBJECT_ s_action)
{
	GtkFileChooserAction action = (GtkFileChooserAction)asEnum(s_action, GTK_TYPE_FILE_CHOOSER_ACTION);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_widget_new(action);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_chooser_widget_new_with_backend(USER_OBJECT_ s_action, USER_OBJECT_ s_backend)
{
	GtkFileChooserAction action = (GtkFileChooserAction)asEnum(s_action, GTK_TYPE_FILE_CHOOSER_ACTION);
	const gchar* backend = (const gchar*)asString(s_backend);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_chooser_widget_new_with_backend(action, backend);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_filter_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_filter_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_filter_new()
{

	GtkFileFilter* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_filter_new();

	_result = toRPointer(ans, "GtkFileFilter");

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_filter_set_name(USER_OBJECT_ s_object, USER_OBJECT_ s_name)
{
	GtkFileFilter* object = GTK_FILE_FILTER(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_filter_set_name(object, name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_filter_get_name(USER_OBJECT_ s_object)
{
	GtkFileFilter* object = GTK_FILE_FILTER(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_filter_get_name(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_filter_add_mime_type(USER_OBJECT_ s_object, USER_OBJECT_ s_mime_type)
{
	GtkFileFilter* object = GTK_FILE_FILTER(getPtrValue(s_object));
	const gchar* mime_type = (const gchar*)asString(s_mime_type);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_filter_add_mime_type(object, mime_type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_filter_add_pattern(USER_OBJECT_ s_object, USER_OBJECT_ s_pattern)
{
	GtkFileFilter* object = GTK_FILE_FILTER(getPtrValue(s_object));
	const gchar* pattern = (const gchar*)asString(s_pattern);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_filter_add_pattern(object, pattern);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_filter_add_pixbuf_formats(USER_OBJECT_ s_object)
{
	GtkFileFilter* object = GTK_FILE_FILTER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_filter_add_pixbuf_formats(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_filter_add_custom(USER_OBJECT_ s_object, USER_OBJECT_ s_needed, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkFileFilterFunc func = (GtkFileFilterFunc)S_GtkFileFilterFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkFileFilter* object = GTK_FILE_FILTER(getPtrValue(s_object));
	GtkFileFilterFlags needed = (GtkFileFilterFlags)asFlag(s_needed, GTK_TYPE_FILE_FILTER_FLAGS);
	GDestroyNotify notify = (GDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_filter_add_custom(object, needed, func, data, notify);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_filter_get_needed(USER_OBJECT_ s_object)
{
	GtkFileFilter* object = GTK_FILE_FILTER(getPtrValue(s_object));

	GtkFileFilterFlags ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_filter_get_needed(object);

	_result = asRFlag(ans, GTK_TYPE_FILE_FILTER_FLAGS);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_filter_filter(USER_OBJECT_ s_object, USER_OBJECT_ s_filter_info)
{
	GtkFileFilter* object = GTK_FILE_FILTER(getPtrValue(s_object));
	const GtkFileFilterInfo* filter_info = asGtkFileFilterInfo(s_filter_info);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_filter_filter(object, filter_info);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_selection_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_selection_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_selection_new(USER_OBJECT_ s_title)
{
	char * prop_names[] = { "title", NULL };
	USER_OBJECT_ args[] = { s_title };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_FILE_SELECTION, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_selection_set_filename(USER_OBJECT_ s_object, USER_OBJECT_ s_filename)
{
	GtkFileSelection* object = GTK_FILE_SELECTION(getPtrValue(s_object));
	const gchar* filename = (const gchar*)asString(s_filename);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_selection_set_filename(object, filename);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_selection_get_filename(USER_OBJECT_ s_object)
{
	GtkFileSelection* object = GTK_FILE_SELECTION(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_selection_get_filename(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_selection_complete(USER_OBJECT_ s_object, USER_OBJECT_ s_pattern)
{
	GtkFileSelection* object = GTK_FILE_SELECTION(getPtrValue(s_object));
	const gchar* pattern = (const gchar*)asString(s_pattern);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_selection_complete(object, pattern);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_selection_show_fileop_buttons(USER_OBJECT_ s_object)
{
	GtkFileSelection* object = GTK_FILE_SELECTION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_selection_show_fileop_buttons(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_selection_hide_fileop_buttons(USER_OBJECT_ s_object)
{
	GtkFileSelection* object = GTK_FILE_SELECTION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_selection_hide_fileop_buttons(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_selection_get_selections(USER_OBJECT_ s_object)
{
	GtkFileSelection* object = GTK_FILE_SELECTION(getPtrValue(s_object));

	gchar** ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_selection_get_selections(object);

	_result = asRStringArray(ans);
	CLEANUP(g_strfreev, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_file_selection_set_select_multiple(USER_OBJECT_ s_object, USER_OBJECT_ s_select_multiple)
{
	GtkFileSelection* object = GTK_FILE_SELECTION(getPtrValue(s_object));
	gboolean select_multiple = (gboolean)asLogical(s_select_multiple);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_file_selection_set_select_multiple(object, select_multiple);


	return(_result);
}
 

USER_OBJECT_
S_gtk_file_selection_get_select_multiple(USER_OBJECT_ s_object)
{
	GtkFileSelection* object = GTK_FILE_SELECTION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_file_selection_get_select_multiple(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_fixed_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_fixed_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_fixed_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_fixed_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_fixed_put(USER_OBJECT_ s_object, USER_OBJECT_ s_widget, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkFixed* object = GTK_FIXED(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_fixed_put(object, widget, x, y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_fixed_move(USER_OBJECT_ s_object, USER_OBJECT_ s_widget, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkFixed* object = GTK_FIXED(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_fixed_move(object, widget, x, y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_fixed_set_has_window(USER_OBJECT_ s_object, USER_OBJECT_ s_has_window)
{
	GtkFixed* object = GTK_FIXED(getPtrValue(s_object));
	gboolean has_window = (gboolean)asLogical(s_has_window);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_fixed_set_has_window(object, has_window);


	return(_result);
}
 

USER_OBJECT_
S_gtk_fixed_get_has_window(USER_OBJECT_ s_object)
{
	GtkFixed* object = GTK_FIXED(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_fixed_get_has_window(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_button_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_button_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_new_with_font(USER_OBJECT_ s_fontname)
{
	const gchar* fontname = (const gchar*)asString(s_fontname);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_button_new_with_font(fontname);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_get_title(USER_OBJECT_ s_object)
{
	GtkFontButton* object = GTK_FONT_BUTTON(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_button_get_title(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_set_title(USER_OBJECT_ s_object, USER_OBJECT_ s_title)
{
	GtkFontButton* object = GTK_FONT_BUTTON(getPtrValue(s_object));
	const gchar* title = (const gchar*)asString(s_title);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_font_button_set_title(object, title);


	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_get_use_font(USER_OBJECT_ s_object)
{
	GtkFontButton* object = GTK_FONT_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_button_get_use_font(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_set_use_font(USER_OBJECT_ s_object, USER_OBJECT_ s_use_font)
{
	GtkFontButton* object = GTK_FONT_BUTTON(getPtrValue(s_object));
	gboolean use_font = (gboolean)asLogical(s_use_font);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_font_button_set_use_font(object, use_font);


	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_get_use_size(USER_OBJECT_ s_object)
{
	GtkFontButton* object = GTK_FONT_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_button_get_use_size(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_set_use_size(USER_OBJECT_ s_object, USER_OBJECT_ s_use_size)
{
	GtkFontButton* object = GTK_FONT_BUTTON(getPtrValue(s_object));
	gboolean use_size = (gboolean)asLogical(s_use_size);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_font_button_set_use_size(object, use_size);


	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_get_font_name(USER_OBJECT_ s_object)
{
	GtkFontButton* object = GTK_FONT_BUTTON(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_button_get_font_name(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_set_font_name(USER_OBJECT_ s_object, USER_OBJECT_ s_fontname)
{
	GtkFontButton* object = GTK_FONT_BUTTON(getPtrValue(s_object));
	const gchar* fontname = (const gchar*)asString(s_fontname);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_button_set_font_name(object, fontname);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_get_show_style(USER_OBJECT_ s_object)
{
	GtkFontButton* object = GTK_FONT_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_button_get_show_style(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_set_show_style(USER_OBJECT_ s_object, USER_OBJECT_ s_show_style)
{
	GtkFontButton* object = GTK_FONT_BUTTON(getPtrValue(s_object));
	gboolean show_style = (gboolean)asLogical(s_show_style);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_font_button_set_show_style(object, show_style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_get_show_size(USER_OBJECT_ s_object)
{
	GtkFontButton* object = GTK_FONT_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_button_get_show_size(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_button_set_show_size(USER_OBJECT_ s_object, USER_OBJECT_ s_show_size)
{
	GtkFontButton* object = GTK_FONT_BUTTON(getPtrValue(s_object));
	gboolean show_size = (gboolean)asLogical(s_show_size);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_font_button_set_show_size(object, show_size);


	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_selection_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_selection_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_get_font_name(USER_OBJECT_ s_object)
{
	GtkFontSelection* object = GTK_FONT_SELECTION(getPtrValue(s_object));

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_selection_get_font_name(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_get_font(USER_OBJECT_ s_object)
{
	GtkFontSelection* object = GTK_FONT_SELECTION(getPtrValue(s_object));

	GdkFont* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_selection_get_font(object);

	_result = toRGdkFont(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_set_font_name(USER_OBJECT_ s_object, USER_OBJECT_ s_fontname)
{
	GtkFontSelection* object = GTK_FONT_SELECTION(getPtrValue(s_object));
	const gchar* fontname = (const gchar*)asString(s_fontname);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_selection_set_font_name(object, fontname);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_get_preview_text(USER_OBJECT_ s_object)
{
	GtkFontSelection* object = GTK_FONT_SELECTION(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_selection_get_preview_text(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_set_preview_text(USER_OBJECT_ s_object, USER_OBJECT_ s_text)
{
	GtkFontSelection* object = GTK_FONT_SELECTION(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_font_selection_set_preview_text(object, text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_dialog_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_selection_dialog_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_dialog_new(USER_OBJECT_ s_title)
{
	char * prop_names[] = { "title", NULL };
	USER_OBJECT_ args[] = { s_title };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_FONT_SELECTION_DIALOG, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_dialog_get_font_name(USER_OBJECT_ s_object)
{
	GtkFontSelectionDialog* object = GTK_FONT_SELECTION_DIALOG(getPtrValue(s_object));

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_selection_dialog_get_font_name(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_dialog_get_font(USER_OBJECT_ s_object)
{
	GtkFontSelectionDialog* object = GTK_FONT_SELECTION_DIALOG(getPtrValue(s_object));

	GdkFont* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_selection_dialog_get_font(object);

	_result = toRGdkFont(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_dialog_set_font_name(USER_OBJECT_ s_object, USER_OBJECT_ s_fontname)
{
	GtkFontSelectionDialog* object = GTK_FONT_SELECTION_DIALOG(getPtrValue(s_object));
	const gchar* fontname = (const gchar*)asString(s_fontname);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_selection_dialog_set_font_name(object, fontname);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_dialog_get_preview_text(USER_OBJECT_ s_object)
{
	GtkFontSelectionDialog* object = GTK_FONT_SELECTION_DIALOG(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_font_selection_dialog_get_preview_text(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_font_selection_dialog_set_preview_text(USER_OBJECT_ s_object, USER_OBJECT_ s_text)
{
	GtkFontSelectionDialog* object = GTK_FONT_SELECTION_DIALOG(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_font_selection_dialog_set_preview_text(object, text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_frame_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_frame_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_frame_new(USER_OBJECT_ s_label)
{
	char * prop_names[] = { "label", NULL };
	USER_OBJECT_ args[] = { s_label };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_FRAME, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_frame_set_label(USER_OBJECT_ s_object, USER_OBJECT_ s_label)
{
	GtkFrame* object = GTK_FRAME(getPtrValue(s_object));
	const gchar* label = GET_LENGTH(s_label) == 0 ? NULL : (const gchar*)asString(s_label);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_frame_set_label(object, label);


	return(_result);
}
 

USER_OBJECT_
S_gtk_frame_get_label(USER_OBJECT_ s_object)
{
	GtkFrame* object = GTK_FRAME(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_frame_get_label(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_frame_set_label_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_label_widget)
{
	GtkFrame* object = GTK_FRAME(getPtrValue(s_object));
	GtkWidget* label_widget = GTK_WIDGET(getPtrValue(s_label_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_frame_set_label_widget(object, label_widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_frame_get_label_widget(USER_OBJECT_ s_object)
{
	GtkFrame* object = GTK_FRAME(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_frame_get_label_widget(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_frame_set_label_align(USER_OBJECT_ s_object, USER_OBJECT_ s_xalign, USER_OBJECT_ s_yalign)
{
	GtkFrame* object = GTK_FRAME(getPtrValue(s_object));
	gfloat xalign = (gfloat)asNumeric(s_xalign);
	gfloat yalign = (gfloat)asNumeric(s_yalign);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_frame_set_label_align(object, xalign, yalign);


	return(_result);
}
 

USER_OBJECT_
S_gtk_frame_get_label_align(USER_OBJECT_ s_object)
{
	GtkFrame* object = GTK_FRAME(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gfloat xalign;
	gfloat yalign;

	gtk_frame_get_label_align(object, &xalign, &yalign);


	_result = retByVal(_result, "xalign", asRNumeric(xalign), "yalign", asRNumeric(yalign), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_frame_set_shadow_type(USER_OBJECT_ s_object, USER_OBJECT_ s_type)
{
	GtkFrame* object = GTK_FRAME(getPtrValue(s_object));
	GtkShadowType type = (GtkShadowType)asEnum(s_type, GTK_TYPE_SHADOW_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_frame_set_shadow_type(object, type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_frame_get_shadow_type(USER_OBJECT_ s_object)
{
	GtkFrame* object = GTK_FRAME(getPtrValue(s_object));

	GtkShadowType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_frame_get_shadow_type(object);

	_result = asREnum(ans, GTK_TYPE_SHADOW_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_gamma_curve_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_gamma_curve_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_gamma_curve_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_gamma_curve_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_gc_release(USER_OBJECT_ s_gc)
{
	GdkGC* gc = GDK_GC(getPtrValue(s_gc));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_gc_release(gc);


	return(_result);
}
 

USER_OBJECT_
S_gtk_handle_box_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_handle_box_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_handle_box_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_handle_box_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_handle_box_set_shadow_type(USER_OBJECT_ s_object, USER_OBJECT_ s_type)
{
	GtkHandleBox* object = GTK_HANDLE_BOX(getPtrValue(s_object));
	GtkShadowType type = (GtkShadowType)asEnum(s_type, GTK_TYPE_SHADOW_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_handle_box_set_shadow_type(object, type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_handle_box_get_shadow_type(USER_OBJECT_ s_object)
{
	GtkHandleBox* object = GTK_HANDLE_BOX(getPtrValue(s_object));

	GtkShadowType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_handle_box_get_shadow_type(object);

	_result = asREnum(ans, GTK_TYPE_SHADOW_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_handle_box_set_handle_position(USER_OBJECT_ s_object, USER_OBJECT_ s_position)
{
	GtkHandleBox* object = GTK_HANDLE_BOX(getPtrValue(s_object));
	GtkPositionType position = (GtkPositionType)asEnum(s_position, GTK_TYPE_POSITION_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_handle_box_set_handle_position(object, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_handle_box_get_handle_position(USER_OBJECT_ s_object)
{
	GtkHandleBox* object = GTK_HANDLE_BOX(getPtrValue(s_object));

	GtkPositionType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_handle_box_get_handle_position(object);

	_result = asREnum(ans, GTK_TYPE_POSITION_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_handle_box_set_snap_edge(USER_OBJECT_ s_object, USER_OBJECT_ s_edge)
{
	GtkHandleBox* object = GTK_HANDLE_BOX(getPtrValue(s_object));
	GtkPositionType edge = (GtkPositionType)asEnum(s_edge, GTK_TYPE_POSITION_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_handle_box_set_snap_edge(object, edge);


	return(_result);
}
 

USER_OBJECT_
S_gtk_handle_box_get_snap_edge(USER_OBJECT_ s_object)
{
	GtkHandleBox* object = GTK_HANDLE_BOX(getPtrValue(s_object));

	GtkPositionType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_handle_box_get_snap_edge(object);

	_result = asREnum(ans, GTK_TYPE_POSITION_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_hbutton_box_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hbutton_box_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_hbutton_box_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hbutton_box_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_hbutton_box_get_spacing_default()
{

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hbutton_box_get_spacing_default();

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_hbutton_box_get_layout_default()
{

	GtkButtonBoxStyle ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hbutton_box_get_layout_default();

	_result = asREnum(ans, GTK_TYPE_BUTTON_BOX_STYLE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_hbutton_box_set_spacing_default(USER_OBJECT_ s_spacing)
{
	gint spacing = (gint)asInteger(s_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_hbutton_box_set_spacing_default(spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_hbutton_box_set_layout_default(USER_OBJECT_ s_layout)
{
	GtkButtonBoxStyle layout = (GtkButtonBoxStyle)asEnum(s_layout, GTK_TYPE_BUTTON_BOX_STYLE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_hbutton_box_set_layout_default(layout);


	return(_result);
}
 

USER_OBJECT_
S_gtk_hbox_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hbox_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_hbox_new(USER_OBJECT_ s_homogeneous, USER_OBJECT_ s_spacing)
{
	char * prop_names[] = { "homogeneous", "spacing", NULL };
	USER_OBJECT_ args[] = { s_homogeneous, s_spacing };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_HBOX, prop_names, args, 2);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_hpaned_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hpaned_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_hpaned_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hpaned_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_hruler_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hruler_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_hruler_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hruler_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_hscale_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hscale_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_hscale_new(USER_OBJECT_ s_adjustment)
{
	char * prop_names[] = { "adjustment", NULL };
	USER_OBJECT_ args[] = { s_adjustment };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_HSCALE, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_hscale_new_with_range(USER_OBJECT_ s_min, USER_OBJECT_ s_max, USER_OBJECT_ s_step)
{
	gdouble min = (gdouble)asNumeric(s_min);
	gdouble max = (gdouble)asNumeric(s_max);
	gdouble step = (gdouble)asNumeric(s_step);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hscale_new_with_range(min, max, step);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_hscrollbar_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hscrollbar_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_hscrollbar_new(USER_OBJECT_ s_adjustment)
{
	char * prop_names[] = { "adjustment", NULL };
	USER_OBJECT_ args[] = { s_adjustment };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_HSCROLLBAR, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_hseparator_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hseparator_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_hseparator_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_hseparator_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_factory_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_factory_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_factory_new()
{

	GtkIconFactory* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_factory_new();

	_result = toRPointerWithFinalizer(ans, "GtkIconFactory", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_factory_add(USER_OBJECT_ s_object, USER_OBJECT_ s_stock_id, USER_OBJECT_ s_icon_set)
{
	GtkIconFactory* object = GTK_ICON_FACTORY(getPtrValue(s_object));
	const gchar* stock_id = (const gchar*)asString(s_stock_id);
	GtkIconSet* icon_set = (GtkIconSet*)getPtrValue(s_icon_set);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_factory_add(object, stock_id, icon_set);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_factory_lookup(USER_OBJECT_ s_object, USER_OBJECT_ s_stock_id)
{
	GtkIconFactory* object = GTK_ICON_FACTORY(getPtrValue(s_object));
	const gchar* stock_id = (const gchar*)asString(s_stock_id);

	GtkIconSet* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_factory_lookup(object, stock_id);

	_result = toRPointerWithFinalizer(ans, "GtkIconSet", (RPointerFinalizer) gtk_icon_set_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_factory_add_default(USER_OBJECT_ s_object)
{
	GtkIconFactory* object = GTK_ICON_FACTORY(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_factory_add_default(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_factory_remove_default(USER_OBJECT_ s_object)
{
	GtkIconFactory* object = GTK_ICON_FACTORY(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_factory_remove_default(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_factory_lookup_default(USER_OBJECT_ s_stock_id)
{
	const gchar* stock_id = (const gchar*)asString(s_stock_id);

	GtkIconSet* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_factory_lookup_default(stock_id);

	_result = toRPointerWithFinalizer(ans, "GtkIconSet", (RPointerFinalizer) gtk_icon_set_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_size_lookup(USER_OBJECT_ s_size)
{
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint width;
	gint height;

	ans = gtk_icon_size_lookup(size, &width, &height);

	_result = asRLogical(ans);

	_result = retByVal(_result, "width", asRInteger(width), "height", asRInteger(height), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_size_lookup_for_settings(USER_OBJECT_ s_settings, USER_OBJECT_ s_size)
{
	GtkSettings* settings = GTK_SETTINGS(getPtrValue(s_settings));
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint width;
	gint height;

	ans = gtk_icon_size_lookup_for_settings(settings, size, &width, &height);

	_result = asRLogical(ans);

	_result = retByVal(_result, "width", asRInteger(width), "height", asRInteger(height), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_size_register(USER_OBJECT_ s_name, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	const gchar* name = (const gchar*)asString(s_name);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	GtkIconSize ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_size_register(name, width, height);

	_result = asREnum(ans, GTK_TYPE_ICON_SIZE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_size_register_alias(USER_OBJECT_ s_alias, USER_OBJECT_ s_target)
{
	const gchar* alias = (const gchar*)asString(s_alias);
	GtkIconSize target = (GtkIconSize)asEnum(s_target, GTK_TYPE_ICON_SIZE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_size_register_alias(alias, target);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_size_from_name(USER_OBJECT_ s_name)
{
	const gchar* name = (const gchar*)asString(s_name);

	GtkIconSize ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_size_from_name(name);

	_result = asREnum(ans, GTK_TYPE_ICON_SIZE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_size_get_name(USER_OBJECT_ s_size)
{
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_size_get_name(size);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_set_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_set_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_set_new()
{

	GtkIconSet* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_set_new();

	_result = toRPointerWithFinalizer(ans, "GtkIconSet", (RPointerFinalizer) gtk_icon_set_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_set_new_from_pixbuf(USER_OBJECT_ s_pixbuf)
{
	GdkPixbuf* pixbuf = GDK_PIXBUF(getPtrValue(s_pixbuf));

	GtkIconSet* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_set_new_from_pixbuf(pixbuf);

	_result = toRPointerWithFinalizer(ans, "GtkIconSet", (RPointerFinalizer) gtk_icon_set_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_set_ref(USER_OBJECT_ s_object)
{
	GtkIconSet* object = (GtkIconSet*)getPtrValue(s_object);

	GtkIconSet* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_set_ref(object);

	_result = toRPointerWithFinalizer(ans, "GtkIconSet", (RPointerFinalizer) gtk_icon_set_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_set_unref(USER_OBJECT_ s_object)
{
	GtkIconSet* object = (GtkIconSet*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_set_unref(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_set_copy(USER_OBJECT_ s_object)
{
	GtkIconSet* object = (GtkIconSet*)getPtrValue(s_object);

	GtkIconSet* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_set_copy(object);

	_result = toRPointerWithFinalizer(ans, "GtkIconSet", (RPointerFinalizer) gtk_icon_set_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_set_render_icon(USER_OBJECT_ s_object, USER_OBJECT_ s_style, USER_OBJECT_ s_direction, USER_OBJECT_ s_state, USER_OBJECT_ s_size, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail)
{
	GtkIconSet* object = (GtkIconSet*)getPtrValue(s_object);
	GtkStyle* style = GTK_STYLE(getPtrValue(s_style));
	GtkTextDirection direction = (GtkTextDirection)asEnum(s_direction, GTK_TYPE_TEXT_DIRECTION);
	GtkStateType state = (GtkStateType)asEnum(s_state, GTK_TYPE_STATE_TYPE);
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const char* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const char*)asString(s_detail);

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_set_render_icon(object, style, direction, state, size, widget, detail);

	_result = toRPointerWithFinalizer(ans, "GdkPixbuf", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_set_add_source(USER_OBJECT_ s_object, USER_OBJECT_ s_source)
{
	GtkIconSet* object = (GtkIconSet*)getPtrValue(s_object);
	const GtkIconSource* source = (const GtkIconSource*)getPtrValue(s_source);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_set_add_source(object, source);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_set_get_sizes(USER_OBJECT_ s_object)
{
	GtkIconSet* object = (GtkIconSet*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkIconSize* sizes = NULL;
	gint n_sizes;

	gtk_icon_set_get_sizes(object, &sizes, &n_sizes);


	_result = retByVal(_result, "sizes", asREnumArrayWithSize(sizes, GTK_TYPE_ICON_SIZE, n_sizes), "n_sizes", asRInteger(n_sizes), NULL);
	CLEANUP(g_free, sizes);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_source_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_new()
{

	GtkIconSource* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_source_new();

	_result = toRPointerWithFinalizer(ans, "GtkIconSource", (RPointerFinalizer) gtk_icon_source_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_copy(USER_OBJECT_ s_object)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);

	GtkIconSource* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_source_copy(object);

	_result = toRPointerWithFinalizer(ans, "GtkIconSource", (RPointerFinalizer) gtk_icon_source_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_free(USER_OBJECT_ s_object)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_source_free(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_set_filename(USER_OBJECT_ s_object, USER_OBJECT_ s_filename)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);
	const gchar* filename = (const gchar*)asString(s_filename);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_source_set_filename(object, filename);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_set_icon_name(USER_OBJECT_ s_object, USER_OBJECT_ s_icon_name)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);
	const gchar* icon_name = (const gchar*)asString(s_icon_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_source_set_icon_name(object, icon_name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_set_pixbuf(USER_OBJECT_ s_object, USER_OBJECT_ s_pixbuf)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);
	GdkPixbuf* pixbuf = GDK_PIXBUF(getPtrValue(s_pixbuf));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_source_set_pixbuf(object, pixbuf);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_get_filename(USER_OBJECT_ s_object)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_source_get_filename(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_get_icon_name(USER_OBJECT_ s_object)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_source_get_icon_name(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_get_pixbuf(USER_OBJECT_ s_object)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_source_get_pixbuf(object);

	_result = toRPointerWithRef(ans, "GdkPixbuf");

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_set_direction_wildcarded(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_source_set_direction_wildcarded(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_set_state_wildcarded(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_source_set_state_wildcarded(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_set_size_wildcarded(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_source_set_size_wildcarded(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_get_size_wildcarded(USER_OBJECT_ s_object)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_source_get_size_wildcarded(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_get_state_wildcarded(USER_OBJECT_ s_object)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_source_get_state_wildcarded(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_get_direction_wildcarded(USER_OBJECT_ s_object)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_source_get_direction_wildcarded(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_set_direction(USER_OBJECT_ s_object, USER_OBJECT_ s_direction)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);
	GtkTextDirection direction = (GtkTextDirection)asEnum(s_direction, GTK_TYPE_TEXT_DIRECTION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_source_set_direction(object, direction);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_set_state(USER_OBJECT_ s_object, USER_OBJECT_ s_state)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);
	GtkStateType state = (GtkStateType)asEnum(s_state, GTK_TYPE_STATE_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_source_set_state(object, state);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_set_size(USER_OBJECT_ s_object, USER_OBJECT_ s_size)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_source_set_size(object, size);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_get_direction(USER_OBJECT_ s_object)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);

	GtkTextDirection ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_source_get_direction(object);

	_result = asREnum(ans, GTK_TYPE_TEXT_DIRECTION);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_get_state(USER_OBJECT_ s_object)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);

	GtkStateType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_source_get_state(object);

	_result = asREnum(ans, GTK_TYPE_STATE_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_source_get_size(USER_OBJECT_ s_object)
{
	GtkIconSource* object = (GtkIconSource*)getPtrValue(s_object);

	GtkIconSize ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_source_get_size(object);

	_result = asREnum(ans, GTK_TYPE_ICON_SIZE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_error_quark()
{

	GQuark ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_theme_error_quark();

	_result = asRGQuark(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_theme_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_new()
{

	GtkIconTheme* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_theme_new();

	_result = toRPointerWithFinalizer(ans, "GtkIconTheme", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_get_default()
{

	GtkIconTheme* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_theme_get_default();

	_result = toRPointerWithRef(ans, "GtkIconTheme");

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_get_for_screen(USER_OBJECT_ s_screen)
{
	GdkScreen* screen = GDK_SCREEN(getPtrValue(s_screen));

	GtkIconTheme* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_theme_get_for_screen(screen);

	_result = toRPointerWithRef(ans, "GtkIconTheme");

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_set_screen(USER_OBJECT_ s_object, USER_OBJECT_ s_screen)
{
	GtkIconTheme* object = GTK_ICON_THEME(getPtrValue(s_object));
	GdkScreen* screen = GDK_SCREEN(getPtrValue(s_screen));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_theme_set_screen(object, screen);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_get_search_path(USER_OBJECT_ s_object)
{
	GtkIconTheme* object = GTK_ICON_THEME(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gchar** path = NULL;
	gint n_elements;

	gtk_icon_theme_get_search_path(object, &path, &n_elements);


	_result = retByVal(_result, "path", asRStringArrayWithSize(path, n_elements), "n_elements", asRInteger(n_elements), NULL);
	CLEANUP(g_strfreev, path);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_append_search_path(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkIconTheme* object = GTK_ICON_THEME(getPtrValue(s_object));
	const gchar* path = (const gchar*)asString(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_theme_append_search_path(object, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_prepend_search_path(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkIconTheme* object = GTK_ICON_THEME(getPtrValue(s_object));
	const gchar* path = (const gchar*)asString(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_theme_prepend_search_path(object, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_set_custom_theme(USER_OBJECT_ s_object, USER_OBJECT_ s_theme_name)
{
	GtkIconTheme* object = GTK_ICON_THEME(getPtrValue(s_object));
	const gchar* theme_name = (const gchar*)asString(s_theme_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_theme_set_custom_theme(object, theme_name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_has_icon(USER_OBJECT_ s_object, USER_OBJECT_ s_icon_name)
{
	GtkIconTheme* object = GTK_ICON_THEME(getPtrValue(s_object));
	const gchar* icon_name = (const gchar*)asString(s_icon_name);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_theme_has_icon(object, icon_name);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_lookup_icon(USER_OBJECT_ s_object, USER_OBJECT_ s_icon_name, USER_OBJECT_ s_size, USER_OBJECT_ s_flags)
{
	GtkIconTheme* object = GTK_ICON_THEME(getPtrValue(s_object));
	const gchar* icon_name = (const gchar*)asString(s_icon_name);
	gint size = (gint)asInteger(s_size);
	GtkIconLookupFlags flags = (GtkIconLookupFlags)asFlag(s_flags, GTK_TYPE_ICON_LOOKUP_FLAGS);

	GtkIconInfo* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_theme_lookup_icon(object, icon_name, size, flags);

	_result = toRPointerWithFinalizer(ans, "GtkIconInfo", (RPointerFinalizer) gtk_icon_info_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_load_icon(USER_OBJECT_ s_object, USER_OBJECT_ s_icon_name, USER_OBJECT_ s_size, USER_OBJECT_ s_flags)
{
	GtkIconTheme* object = GTK_ICON_THEME(getPtrValue(s_object));
	const gchar* icon_name = (const gchar*)asString(s_icon_name);
	gint size = (gint)asInteger(s_size);
	GtkIconLookupFlags flags = (GtkIconLookupFlags)asFlag(s_flags, GTK_TYPE_ICON_LOOKUP_FLAGS);

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GError* error = NULL;

	ans = gtk_icon_theme_load_icon(object, icon_name, size, flags, &error);

	_result = toRPointerWithFinalizer(ans, "GdkPixbuf", (RPointerFinalizer) g_object_unref);

	_result = retByVal(_result, "error", asRGError(error), NULL);
	CLEANUP(g_error_free, error);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_list_icons(USER_OBJECT_ s_object, USER_OBJECT_ s_context)
{
	GtkIconTheme* object = GTK_ICON_THEME(getPtrValue(s_object));
	const gchar* context = GET_LENGTH(s_context) == 0 ? NULL : (const gchar*)asString(s_context);

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_theme_list_icons(object, context);

	_result = asRGListConv(ans, (ElementConverter)asRString);
	CLEANUP(GListFreeStrings, ans);
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_get_example_icon_name(USER_OBJECT_ s_object)
{
	GtkIconTheme* object = GTK_ICON_THEME(getPtrValue(s_object));

	char* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_theme_get_example_icon_name(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_rescan_if_needed(USER_OBJECT_ s_object)
{
	GtkIconTheme* object = GTK_ICON_THEME(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_theme_rescan_if_needed(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_add_builtin_icon(USER_OBJECT_ s_icon_name, USER_OBJECT_ s_size, USER_OBJECT_ s_pixbuf)
{
	const gchar* icon_name = (const gchar*)asString(s_icon_name);
	gint size = (gint)asInteger(s_size);
	GdkPixbuf* pixbuf = GDK_PIXBUF(getPtrValue(s_pixbuf));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_theme_add_builtin_icon(icon_name, size, pixbuf);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_info_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_info_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_info_copy(USER_OBJECT_ s_object)
{
	GtkIconInfo* object = (GtkIconInfo*)getPtrValue(s_object);

	GtkIconInfo* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_info_copy(object);

	_result = toRPointerWithFinalizer(ans, "GtkIconInfo", (RPointerFinalizer) gtk_icon_info_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_info_free(USER_OBJECT_ s_object)
{
	GtkIconInfo* object = (GtkIconInfo*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_info_free(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_info_get_base_size(USER_OBJECT_ s_object)
{
	GtkIconInfo* object = (GtkIconInfo*)getPtrValue(s_object);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_info_get_base_size(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_info_get_filename(USER_OBJECT_ s_object)
{
	GtkIconInfo* object = (GtkIconInfo*)getPtrValue(s_object);

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_info_get_filename(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_info_get_builtin_pixbuf(USER_OBJECT_ s_object)
{
	GtkIconInfo* object = (GtkIconInfo*)getPtrValue(s_object);

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_info_get_builtin_pixbuf(object);

	_result = toRPointerWithRef(ans, "GdkPixbuf");

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_info_load_icon(USER_OBJECT_ s_object)
{
	GtkIconInfo* object = (GtkIconInfo*)getPtrValue(s_object);

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GError* error = NULL;

	ans = gtk_icon_info_load_icon(object, &error);

	_result = toRPointerWithFinalizer(ans, "GdkPixbuf", (RPointerFinalizer) g_object_unref);

	_result = retByVal(_result, "error", asRGError(error), NULL);
	CLEANUP(g_error_free, error);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_info_set_raw_coordinates(USER_OBJECT_ s_object, USER_OBJECT_ s_raw_coordinates)
{
	GtkIconInfo* object = (GtkIconInfo*)getPtrValue(s_object);
	gboolean raw_coordinates = (gboolean)asLogical(s_raw_coordinates);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_info_set_raw_coordinates(object, raw_coordinates);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_info_get_embedded_rect(USER_OBJECT_ s_object)
{
	GtkIconInfo* object = (GtkIconInfo*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkRectangle* rectangle = (GdkRectangle *)g_new0(GdkRectangle, 1);

	ans = gtk_icon_info_get_embedded_rect(object, rectangle);

	_result = asRLogical(ans);

	_result = retByVal(_result, "rectangle", asRGdkRectangle(rectangle), NULL);
	CLEANUP(g_free, rectangle);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_info_get_attach_points(USER_OBJECT_ s_object)
{
	GtkIconInfo* object = (GtkIconInfo*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkPoint* points = NULL;
	gint n_points;

	ans = gtk_icon_info_get_attach_points(object, &points, &n_points);

	_result = asRLogical(ans);

	_result = retByVal(_result, "points", asRArrayRefWithSize(points, asRGdkPoint, n_points), "n_points", asRInteger(n_points), NULL);
	CLEANUP(g_free, points);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_info_get_display_name(USER_OBJECT_ s_object)
{
	GtkIconInfo* object = (GtkIconInfo*)getPtrValue(s_object);

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_info_get_display_name(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_theme_get_icon_sizes(USER_OBJECT_ s_object, USER_OBJECT_ s_icon_name)
{
	GtkIconTheme* object = GTK_ICON_THEME(getPtrValue(s_object));
	const gchar* icon_name = (const gchar*)asString(s_icon_name);

	gint* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_theme_get_icon_sizes(object, icon_name);

	_result = asRIntegerArray(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_new_with_model(USER_OBJECT_ s_model)
{
	char * prop_names[] = { "model", NULL };
	USER_OBJECT_ args[] = { s_model };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_ICON_VIEW, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_model(USER_OBJECT_ s_object, USER_OBJECT_ s_model)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	GtkTreeModel* model = GET_LENGTH(s_model) == 0 ? NULL : GTK_TREE_MODEL(getPtrValue(s_model));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_model(object, model);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_model(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	GtkTreeModel* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_model(object);

	_result = toRPointerWithRef(ans, "GtkTreeModel");

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_text_column(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_text_column(object, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_text_column(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_text_column(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_markup_column(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_markup_column(object, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_markup_column(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_markup_column(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_pixbuf_column(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_pixbuf_column(object, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_pixbuf_column(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_pixbuf_column(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_orientation(USER_OBJECT_ s_object, USER_OBJECT_ s_orientation)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	GtkOrientation orientation = (GtkOrientation)asEnum(s_orientation, GTK_TYPE_ORIENTATION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_orientation(object, orientation);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_orientation(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	GtkOrientation ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_orientation(object);

	_result = asREnum(ans, GTK_TYPE_ORIENTATION);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_columns(USER_OBJECT_ s_object, USER_OBJECT_ s_columns)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gint columns = (gint)asInteger(s_columns);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_columns(object, columns);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_columns(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_columns(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_item_width(USER_OBJECT_ s_object, USER_OBJECT_ s_item_width)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gint item_width = (gint)asInteger(s_item_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_item_width(object, item_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_item_width(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_item_width(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_spacing(USER_OBJECT_ s_object, USER_OBJECT_ s_spacing)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gint spacing = (gint)asInteger(s_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_spacing(object, spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_spacing(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_spacing(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_row_spacing(USER_OBJECT_ s_object, USER_OBJECT_ s_row_spacing)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gint row_spacing = (gint)asInteger(s_row_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_row_spacing(object, row_spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_row_spacing(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_row_spacing(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_column_spacing(USER_OBJECT_ s_object, USER_OBJECT_ s_column_spacing)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gint column_spacing = (gint)asInteger(s_column_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_column_spacing(object, column_spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_column_spacing(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_column_spacing(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_margin(USER_OBJECT_ s_object, USER_OBJECT_ s_margin)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gint margin = (gint)asInteger(s_margin);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_margin(object, margin);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_margin(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_margin(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_path_at_pos(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	GtkTreePath* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_path_at_pos(object, x, y);

	_result = toRPointerWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_item_at_pos(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreePath* path = NULL;
	GtkCellRenderer* cell = NULL;

	ans = gtk_icon_view_get_item_at_pos(object, x, y, &path, &cell);

	_result = asRLogical(ans);

	_result = retByVal(_result, "path", toRPointerWithFinalizer(path, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free), "cell", toRPointer(cell, "GtkCellRenderer"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_visible_range(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreePath* start_path = NULL;
	GtkTreePath* end_path = NULL;

	ans = gtk_icon_view_get_visible_range(object, &start_path, &end_path);

	_result = asRLogical(ans);

	_result = retByVal(_result, "start_path", toRPointerWithFinalizer(start_path, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free), "end_path", toRPointerWithFinalizer(end_path, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_selected_foreach(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkIconViewForeachFunc func = (GtkIconViewForeachFunc)S_GtkIconViewForeachFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_selected_foreach(object, func, data);

	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_selection_mode(USER_OBJECT_ s_object, USER_OBJECT_ s_mode)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	GtkSelectionMode mode = (GtkSelectionMode)asEnum(s_mode, GTK_TYPE_SELECTION_MODE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_selection_mode(object, mode);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_selection_mode(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	GtkSelectionMode ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_selection_mode(object);

	_result = asREnum(ans, GTK_TYPE_SELECTION_MODE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_select_path(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_select_path(object, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_unselect_path(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_unselect_path(object, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_path_is_selected(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_path_is_selected(object, path);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_selected_items(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_selected_items(object);

	_result = asRGListWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_select_all(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_select_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_unselect_all(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_unselect_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_item_activated(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_item_activated(object, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_cursor(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_cell, USER_OBJECT_ s_start_editing)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkCellRenderer* cell = GTK_CELL_RENDERER(getPtrValue(s_cell));
	gboolean start_editing = (gboolean)asLogical(s_start_editing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_cursor(object, path, cell, start_editing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_cursor(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreePath* path = NULL;
	GtkCellRenderer* cell = NULL;

	ans = gtk_icon_view_get_cursor(object, &path, &cell);

	_result = asRLogical(ans);

	_result = retByVal(_result, "path", toRPointerWithFinalizer(path, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free), "cell", toRPointer(cell, "GtkCellRenderer"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_scroll_to_path(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_use_align, USER_OBJECT_ s_row_align, USER_OBJECT_ s_col_align)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	gboolean use_align = (gboolean)asLogical(s_use_align);
	gfloat row_align = (gfloat)asNumeric(s_row_align);
	gfloat col_align = (gfloat)asNumeric(s_col_align);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_scroll_to_path(object, path, use_align, row_align, col_align);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_enable_model_drag_source(USER_OBJECT_ s_object, USER_OBJECT_ s_start_button_mask, USER_OBJECT_ s_targets, USER_OBJECT_ s_actions)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	GdkModifierType start_button_mask = (GdkModifierType)asFlag(s_start_button_mask, GDK_TYPE_MODIFIER_TYPE);
	const GtkTargetEntry* targets = (const GtkTargetEntry*)asArrayRef(s_targets, GtkTargetEntry, asGtkTargetEntry);
	gint n_targets = (gint)GET_LENGTH(s_targets);
	GdkDragAction actions = (GdkDragAction)asFlag(s_actions, GDK_TYPE_DRAG_ACTION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_enable_model_drag_source(object, start_button_mask, targets, n_targets, actions);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_enable_model_drag_dest(USER_OBJECT_ s_object, USER_OBJECT_ s_targets, USER_OBJECT_ s_actions)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	const GtkTargetEntry* targets = (const GtkTargetEntry*)asArrayRef(s_targets, GtkTargetEntry, asGtkTargetEntry);
	gint n_targets = (gint)GET_LENGTH(s_targets);
	GdkDragAction actions = (GdkDragAction)asFlag(s_actions, GDK_TYPE_DRAG_ACTION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_enable_model_drag_dest(object, targets, n_targets, actions);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_unset_model_drag_source(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_unset_model_drag_source(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_unset_model_drag_dest(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_unset_model_drag_dest(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_reorderable(USER_OBJECT_ s_object, USER_OBJECT_ s_reorderable)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gboolean reorderable = (gboolean)asLogical(s_reorderable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_reorderable(object, reorderable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_reorderable(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_get_reorderable(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_set_drag_dest_item(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_pos)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkIconViewDropPosition pos = (GtkIconViewDropPosition)asEnum(s_pos, GTK_TYPE_ICON_VIEW_DROP_POSITION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_icon_view_set_drag_dest_item(object, path, pos);


	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_drag_dest_item(USER_OBJECT_ s_object)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreePath* path = NULL;
	GtkIconViewDropPosition pos;

	gtk_icon_view_get_drag_dest_item(object, &path, &pos);


	_result = retByVal(_result, "path", toRPointerWithFinalizer(path, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free), "pos", asREnum(pos, GTK_TYPE_ICON_VIEW_DROP_POSITION), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_get_dest_item_at_pos(USER_OBJECT_ s_object, USER_OBJECT_ s_drag_x, USER_OBJECT_ s_drag_y)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	gint drag_x = (gint)asInteger(s_drag_x);
	gint drag_y = (gint)asInteger(s_drag_y);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreePath* path = NULL;
	GtkIconViewDropPosition pos;

	ans = gtk_icon_view_get_dest_item_at_pos(object, drag_x, drag_y, &path, &pos);

	_result = asRLogical(ans);

	_result = retByVal(_result, "path", toRPointerWithFinalizer(path, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free), "pos", asREnum(pos, GTK_TYPE_ICON_VIEW_DROP_POSITION), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_icon_view_create_drag_icon(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkIconView* object = GTK_ICON_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	GdkPixmap* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_icon_view_create_drag_icon(object, path);

	_result = toRPointerWithRef(ans, "GdkPixmap");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_new_from_pixmap(USER_OBJECT_ s_pixmap, USER_OBJECT_ s_mask)
{
	GdkPixmap* pixmap = GET_LENGTH(s_pixmap) == 0 ? NULL : GDK_PIXMAP(getPtrValue(s_pixmap));
	GdkBitmap* mask = GET_LENGTH(s_mask) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_new_from_pixmap(pixmap, mask);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_new_from_image(USER_OBJECT_ s_image, USER_OBJECT_ s_mask)
{
	GdkImage* image = GET_LENGTH(s_image) == 0 ? NULL : GDK_IMAGE(getPtrValue(s_image));
	GdkBitmap* mask = GET_LENGTH(s_mask) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_new_from_image(image, mask);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_new_from_file(USER_OBJECT_ s_filename)
{
	const gchar* filename = (const gchar*)asString(s_filename);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_new_from_file(filename);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_new_from_pixbuf(USER_OBJECT_ s_pixbuf)
{
	GdkPixbuf* pixbuf = GET_LENGTH(s_pixbuf) == 0 ? NULL : GDK_PIXBUF(getPtrValue(s_pixbuf));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_new_from_pixbuf(pixbuf);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_new_from_stock(USER_OBJECT_ s_stock_id, USER_OBJECT_ s_size)
{
	const gchar* stock_id = (const gchar*)asString(s_stock_id);
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_new_from_stock(stock_id, size);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_new_from_icon_set(USER_OBJECT_ s_icon_set, USER_OBJECT_ s_size)
{
	GtkIconSet* icon_set = (GtkIconSet*)getPtrValue(s_icon_set);
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_new_from_icon_set(icon_set, size);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_new_from_animation(USER_OBJECT_ s_animation)
{
	GdkPixbufAnimation* animation = GDK_PIXBUF_ANIMATION(getPtrValue(s_animation));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_new_from_animation(animation);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_clear(USER_OBJECT_ s_object)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_image_clear(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_image_set_from_pixmap(USER_OBJECT_ s_object, USER_OBJECT_ s_pixmap, USER_OBJECT_ s_mask)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));
	GdkPixmap* pixmap = GDK_PIXMAP(getPtrValue(s_pixmap));
	GdkBitmap* mask = GET_LENGTH(s_mask) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_image_set_from_pixmap(object, pixmap, mask);


	return(_result);
}
 

USER_OBJECT_
S_gtk_image_set_from_image(USER_OBJECT_ s_object, USER_OBJECT_ s_gdk_image, USER_OBJECT_ s_mask)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));
	GdkImage* gdk_image = GET_LENGTH(s_gdk_image) == 0 ? NULL : GDK_IMAGE(getPtrValue(s_gdk_image));
	GdkBitmap* mask = GET_LENGTH(s_mask) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_image_set_from_image(object, gdk_image, mask);


	return(_result);
}
 

USER_OBJECT_
S_gtk_image_set_from_file(USER_OBJECT_ s_object, USER_OBJECT_ s_filename)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));
	const gchar* filename = GET_LENGTH(s_filename) == 0 ? NULL : (const gchar*)asString(s_filename);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_image_set_from_file(object, filename);


	return(_result);
}
 

USER_OBJECT_
S_gtk_image_set_from_pixbuf(USER_OBJECT_ s_object, USER_OBJECT_ s_pixbuf)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));
	GdkPixbuf* pixbuf = GET_LENGTH(s_pixbuf) == 0 ? NULL : GDK_PIXBUF(getPtrValue(s_pixbuf));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_image_set_from_pixbuf(object, pixbuf);


	return(_result);
}
 

USER_OBJECT_
S_gtk_image_set_from_stock(USER_OBJECT_ s_object, USER_OBJECT_ s_stock_id, USER_OBJECT_ s_size)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));
	const gchar* stock_id = (const gchar*)asString(s_stock_id);
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_image_set_from_stock(object, stock_id, size);


	return(_result);
}
 

USER_OBJECT_
S_gtk_image_set_from_icon_set(USER_OBJECT_ s_object, USER_OBJECT_ s_icon_set, USER_OBJECT_ s_size)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));
	GtkIconSet* icon_set = (GtkIconSet*)getPtrValue(s_icon_set);
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_image_set_from_icon_set(object, icon_set, size);


	return(_result);
}
 

USER_OBJECT_
S_gtk_image_set_from_animation(USER_OBJECT_ s_object, USER_OBJECT_ s_animation)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));
	GdkPixbufAnimation* animation = GDK_PIXBUF_ANIMATION(getPtrValue(s_animation));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_image_set_from_animation(object, animation);


	return(_result);
}
 

USER_OBJECT_
S_gtk_image_get_storage_type(USER_OBJECT_ s_object)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));

	GtkImageType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_get_storage_type(object);

	_result = asREnum(ans, GTK_TYPE_IMAGE_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_get_pixmap(USER_OBJECT_ s_object)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkPixmap* pixmap = NULL;
	GdkBitmap* mask = NULL;

	gtk_image_get_pixmap(object, &pixmap, &mask);


	_result = retByVal(_result, "pixmap", toRPointerWithRef(pixmap, "GdkPixmap"), "mask", toRPointerWithRef(mask, "GdkBitmap"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_get_image(USER_OBJECT_ s_object)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkImage* gdk_image = NULL;
	GdkBitmap* mask = NULL;

	gtk_image_get_image(object, &gdk_image, &mask);


	_result = retByVal(_result, "gdk_image", toRPointerWithRef(gdk_image, "GdkImage"), "mask", toRPointerWithRef(mask, "GdkBitmap"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_get_pixbuf(USER_OBJECT_ s_object)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_get_pixbuf(object);

	_result = toRPointerWithRef(ans, "GdkPixbuf");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_get_stock(USER_OBJECT_ s_object)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gchar* stock_id = NULL;
	GtkIconSize size;

	gtk_image_get_stock(object, &stock_id, &size);


	_result = retByVal(_result, "stock_id", asRString(stock_id), "size", asREnum(size, GTK_TYPE_ICON_SIZE), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_get_icon_set(USER_OBJECT_ s_object)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkIconSet* icon_set = NULL;
	GtkIconSize size;

	gtk_image_get_icon_set(object, &icon_set, &size);


	_result = retByVal(_result, "icon_set", toRPointerWithFinalizer(icon_set, "GtkIconSet", (RPointerFinalizer) gtk_icon_set_unref), "size", asREnum(size, GTK_TYPE_ICON_SIZE), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_get_animation(USER_OBJECT_ s_object)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));

	GdkPixbufAnimation* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_get_animation(object);

	_result = toRPointerWithRef(ans, "GdkPixbufAnimation");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_set(USER_OBJECT_ s_object, USER_OBJECT_ s_val, USER_OBJECT_ s_mask)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));
	GdkImage* val = GDK_IMAGE(getPtrValue(s_val));
	GdkBitmap* mask = GDK_DRAWABLE(getPtrValue(s_mask));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_image_set(object, val, mask);


	return(_result);
}
 

USER_OBJECT_
S_gtk_image_get(USER_OBJECT_ s_object)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkImage* val = NULL;
	GdkBitmap* mask = NULL;

	gtk_image_get(object, &val, &mask);


	_result = retByVal(_result, "val", toRPointerWithRef(val, "GdkImage"), "mask", toRPointerWithRef(mask, "GdkBitmap"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_new_from_icon_name(USER_OBJECT_ s_icon_name, USER_OBJECT_ s_size)
{
	const gchar* icon_name = (const gchar*)asString(s_icon_name);
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_new_from_icon_name(icon_name, size);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_set_from_icon_name(USER_OBJECT_ s_object, USER_OBJECT_ s_icon_name, USER_OBJECT_ s_size)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));
	const gchar* icon_name = (const gchar*)asString(s_icon_name);
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_image_set_from_icon_name(object, icon_name, size);


	return(_result);
}
 

USER_OBJECT_
S_gtk_image_set_pixel_size(USER_OBJECT_ s_object, USER_OBJECT_ s_pixel_size)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));
	gint pixel_size = (gint)asInteger(s_pixel_size);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_image_set_pixel_size(object, pixel_size);


	return(_result);
}
 

USER_OBJECT_
S_gtk_image_get_icon_name(USER_OBJECT_ s_object)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	const gchar* icon_name = NULL;
	GtkIconSize size;

	gtk_image_get_icon_name(object, &icon_name, &size);


	_result = retByVal(_result, "icon_name", asRString(icon_name), "size", asREnum(size, GTK_TYPE_ICON_SIZE), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_get_pixel_size(USER_OBJECT_ s_object)
{
	GtkImage* object = GTK_IMAGE(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_get_pixel_size(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_menu_item_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_menu_item_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_menu_item_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_menu_item_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_menu_item_new_with_label(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_menu_item_new_with_label(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_menu_item_new_with_mnemonic(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_menu_item_new_with_mnemonic(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_menu_item_new_from_stock(USER_OBJECT_ s_stock_id, USER_OBJECT_ s_accel_group)
{
	const gchar* stock_id = (const gchar*)asString(s_stock_id);
	GtkAccelGroup* accel_group = GTK_ACCEL_GROUP(getPtrValue(s_accel_group));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_menu_item_new_from_stock(stock_id, accel_group);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_image_menu_item_set_image(USER_OBJECT_ s_object, USER_OBJECT_ s_image)
{
	GtkImageMenuItem* object = GTK_IMAGE_MENU_ITEM(getPtrValue(s_object));
	GtkWidget* image = GET_LENGTH(s_image) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_image));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_image_menu_item_set_image(object, image);


	return(_result);
}
 

USER_OBJECT_
S_gtk_image_menu_item_get_image(USER_OBJECT_ s_object)
{
	GtkImageMenuItem* object = GTK_IMAGE_MENU_ITEM(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_image_menu_item_get_image(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_im_context_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_set_client_window(USER_OBJECT_ s_object, USER_OBJECT_ s_window)
{
	GtkIMContext* object = GTK_IM_CONTEXT(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_im_context_set_client_window(object, window);


	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_get_preedit_string(USER_OBJECT_ s_object)
{
	GtkIMContext* object = GTK_IM_CONTEXT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gchar* str = NULL;
	PangoAttrList* attrs = NULL;
	gint cursor_pos;

	gtk_im_context_get_preedit_string(object, &str, &attrs, &cursor_pos);


	_result = retByVal(_result, "str", asRString(str), "attrs", toRPointerWithFinalizer(attrs, "PangoAttrList", (RPointerFinalizer) pango_attr_list_unref), "cursor_pos", asRInteger(cursor_pos), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_filter_keypress(USER_OBJECT_ s_object, USER_OBJECT_ s_event)
{
	GtkIMContext* object = GTK_IM_CONTEXT(getPtrValue(s_object));
	GdkEventKey* event = (GdkEventKey*)getPtrValue(s_event);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_im_context_filter_keypress(object, event);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_focus_in(USER_OBJECT_ s_object)
{
	GtkIMContext* object = GTK_IM_CONTEXT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_im_context_focus_in(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_focus_out(USER_OBJECT_ s_object)
{
	GtkIMContext* object = GTK_IM_CONTEXT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_im_context_focus_out(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_reset(USER_OBJECT_ s_object)
{
	GtkIMContext* object = GTK_IM_CONTEXT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_im_context_reset(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_set_cursor_location(USER_OBJECT_ s_object, USER_OBJECT_ s_area)
{
	GtkIMContext* object = GTK_IM_CONTEXT(getPtrValue(s_object));
	GdkRectangle* area = asGdkRectangle(s_area);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_im_context_set_cursor_location(object, area);


	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_set_use_preedit(USER_OBJECT_ s_object, USER_OBJECT_ s_use_preedit)
{
	GtkIMContext* object = GTK_IM_CONTEXT(getPtrValue(s_object));
	gboolean use_preedit = (gboolean)asLogical(s_use_preedit);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_im_context_set_use_preedit(object, use_preedit);


	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_set_surrounding(USER_OBJECT_ s_object, USER_OBJECT_ s_text, USER_OBJECT_ s_len, USER_OBJECT_ s_cursor_index)
{
	GtkIMContext* object = GTK_IM_CONTEXT(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);
	gint len = (gint)asInteger(s_len);
	gint cursor_index = (gint)asInteger(s_cursor_index);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_im_context_set_surrounding(object, text, len, cursor_index);


	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_get_surrounding(USER_OBJECT_ s_object)
{
	GtkIMContext* object = GTK_IM_CONTEXT(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gchar* text = NULL;
	gint cursor_index;

	ans = gtk_im_context_get_surrounding(object, &text, &cursor_index);

	_result = asRLogical(ans);

	_result = retByVal(_result, "text", asRString(text), "cursor_index", asRInteger(cursor_index), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_delete_surrounding(USER_OBJECT_ s_object, USER_OBJECT_ s_offset, USER_OBJECT_ s_n_chars)
{
	GtkIMContext* object = GTK_IM_CONTEXT(getPtrValue(s_object));
	gint offset = (gint)asInteger(s_offset);
	gint n_chars = (gint)asInteger(s_n_chars);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_im_context_delete_surrounding(object, offset, n_chars);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_simple_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_im_context_simple_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_im_context_simple_new()
{

	GtkIMContext* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_im_context_simple_new();

	_result = toRPointer(ans, "GtkIMContext");

	return(_result);
}
 

USER_OBJECT_
S_gtk_im_multicontext_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_im_multicontext_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_im_multicontext_new()
{

	GtkIMContext* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_im_multicontext_new();

	_result = toRPointer(ans, "GtkIMContext");

	return(_result);
}
 

USER_OBJECT_
S_gtk_im_multicontext_append_menuitems(USER_OBJECT_ s_object, USER_OBJECT_ s_menushell)
{
	GtkIMMulticontext* object = GTK_IM_MULTICONTEXT(getPtrValue(s_object));
	GtkMenuShell* menushell = GTK_MENU_SHELL(getPtrValue(s_menushell));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_im_multicontext_append_menuitems(object, menushell);


	return(_result);
}
 

USER_OBJECT_
S_gtk_input_dialog_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_input_dialog_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_input_dialog_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_input_dialog_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_invisible_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_invisible_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_invisible_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_invisible_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_invisible_new_for_screen(USER_OBJECT_ s_screen)
{
	GdkScreen* screen = GDK_SCREEN(getPtrValue(s_screen));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_invisible_new_for_screen(screen);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_invisible_set_screen(USER_OBJECT_ s_object, USER_OBJECT_ s_screen)
{
	GtkInvisible* object = GTK_INVISIBLE(getPtrValue(s_object));
	GdkScreen* screen = GDK_SCREEN(getPtrValue(s_screen));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_invisible_set_screen(object, screen);


	return(_result);
}
 

USER_OBJECT_
S_gtk_invisible_get_screen(USER_OBJECT_ s_object)
{
	GtkInvisible* object = GTK_INVISIBLE(getPtrValue(s_object));

	GdkScreen* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_invisible_get_screen(object);

	_result = toRPointerWithRef(ans, "GdkScreen");

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_item_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_select(USER_OBJECT_ s_object)
{
	GtkItem* object = GTK_ITEM(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_item_select(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_item_deselect(USER_OBJECT_ s_object)
{
	GtkItem* object = GTK_ITEM(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_item_deselect(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_item_toggle(USER_OBJECT_ s_object)
{
	GtkItem* object = GTK_ITEM(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_item_toggle(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_item_factory_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_new(USER_OBJECT_ s_container_type, USER_OBJECT_ s_path, USER_OBJECT_ s_accel_group)
{
	GType container_type = (GType)asNumeric(s_container_type);
	const gchar* path = (const gchar*)asString(s_path);
	GtkAccelGroup* accel_group = GET_LENGTH(s_accel_group) == 0 ? NULL : GTK_ACCEL_GROUP(getPtrValue(s_accel_group));

	GtkItemFactory* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_item_factory_new(container_type, path, accel_group);

	_result = toRPointer(ans, "GtkItemFactory");

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_construct(USER_OBJECT_ s_object, USER_OBJECT_ s_container_type, USER_OBJECT_ s_path, USER_OBJECT_ s_accel_group)
{
	GtkItemFactory* object = GTK_ITEM_FACTORY(getPtrValue(s_object));
	GType container_type = (GType)asNumeric(s_container_type);
	const gchar* path = (const gchar*)asString(s_path);
	GtkAccelGroup* accel_group = GTK_ACCEL_GROUP(getPtrValue(s_accel_group));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_item_factory_construct(object, container_type, path, accel_group);


	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_add_foreign(USER_OBJECT_ s_accel_widget, USER_OBJECT_ s_full_path, USER_OBJECT_ s_accel_group, USER_OBJECT_ s_keyval, USER_OBJECT_ s_modifiers)
{
	GtkWidget* accel_widget = GTK_WIDGET(getPtrValue(s_accel_widget));
	const gchar* full_path = (const gchar*)asString(s_full_path);
	GtkAccelGroup* accel_group = GTK_ACCEL_GROUP(getPtrValue(s_accel_group));
	guint keyval = (guint)asNumeric(s_keyval);
	GdkModifierType modifiers = (GdkModifierType)asFlag(s_modifiers, GDK_TYPE_MODIFIER_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_item_factory_add_foreign(accel_widget, full_path, accel_group, keyval, modifiers);


	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_from_widget(USER_OBJECT_ s_widget)
{
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	GtkItemFactory* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_item_factory_from_widget(widget);

	_result = toRPointer(ans, "GtkItemFactory");

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_path_from_widget(USER_OBJECT_ s_widget)
{
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_item_factory_path_from_widget(widget);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_get_item(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkItemFactory* object = GTK_ITEM_FACTORY(getPtrValue(s_object));
	const gchar* path = (const gchar*)asString(s_path);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_item_factory_get_item(object, path);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_get_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkItemFactory* object = GTK_ITEM_FACTORY(getPtrValue(s_object));
	const gchar* path = (const gchar*)asString(s_path);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_item_factory_get_widget(object, path);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_get_widget_by_action(USER_OBJECT_ s_object, USER_OBJECT_ s_action)
{
	GtkItemFactory* object = GTK_ITEM_FACTORY(getPtrValue(s_object));
	guint action = (guint)asNumeric(s_action);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_item_factory_get_widget_by_action(object, action);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_get_item_by_action(USER_OBJECT_ s_object, USER_OBJECT_ s_action)
{
	GtkItemFactory* object = GTK_ITEM_FACTORY(getPtrValue(s_object));
	guint action = (guint)asNumeric(s_action);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_item_factory_get_item_by_action(object, action);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_delete_item(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkItemFactory* object = GTK_ITEM_FACTORY(getPtrValue(s_object));
	const gchar* path = (const gchar*)asString(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_item_factory_delete_item(object, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_delete_entry(USER_OBJECT_ s_object, USER_OBJECT_ s_entry)
{
	GtkItemFactory* object = GTK_ITEM_FACTORY(getPtrValue(s_object));
	GtkItemFactoryEntry* entry = asGtkItemFactoryEntry(s_entry);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_item_factory_delete_entry(object, entry);


	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_delete_entries(USER_OBJECT_ s_object, USER_OBJECT_ s_entries)
{
	GtkItemFactory* object = GTK_ITEM_FACTORY(getPtrValue(s_object));
	guint n_entries = (guint)GET_LENGTH(s_entries);
	GtkItemFactoryEntry* entries = (GtkItemFactoryEntry*)asArrayRef(s_entries, GtkItemFactoryEntry, asGtkItemFactoryEntry);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_item_factory_delete_entries(object, n_entries, entries);


	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_popup(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_mouse_button, USER_OBJECT_ s_time)
{
	GtkItemFactory* object = GTK_ITEM_FACTORY(getPtrValue(s_object));
	guint x = (guint)asNumeric(s_x);
	guint y = (guint)asNumeric(s_y);
	guint mouse_button = (guint)asNumeric(s_mouse_button);
	guint32 time = (guint32)asNumeric(s_time);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_item_factory_popup(object, x, y, mouse_button, time);


	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_popup_with_data(USER_OBJECT_ s_object, USER_OBJECT_ s_popup_data, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_mouse_button, USER_OBJECT_ s_time)
{
	GtkItemFactory* object = GTK_ITEM_FACTORY(getPtrValue(s_object));
	gpointer popup_data = (gpointer)asGenericData(s_popup_data);
	GtkDestroyNotify destroy = (GtkDestroyNotify)R_ReleaseObject;
	guint x = (guint)asNumeric(s_x);
	guint y = (guint)asNumeric(s_y);
	guint mouse_button = (guint)asNumeric(s_mouse_button);
	guint32 time = (guint32)asNumeric(s_time);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_item_factory_popup_with_data(object, popup_data, destroy, x, y, mouse_button, time);


	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_popup_data(USER_OBJECT_ s_object)
{
	GtkItemFactory* object = GTK_ITEM_FACTORY(getPtrValue(s_object));

	gpointer ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_item_factory_popup_data(object);

	_result = ans;

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_popup_data_from_widget(USER_OBJECT_ s_widget)
{
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	gpointer ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_item_factory_popup_data_from_widget(widget);

	_result = ans;

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_set_translate_func(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTranslateFunc func = (GtkTranslateFunc)S_GtkTranslateFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkItemFactory* object = GTK_ITEM_FACTORY(getPtrValue(s_object));
	GtkDestroyNotify notify = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_item_factory_set_translate_func(object, func, data, notify);


	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factory_from_path(USER_OBJECT_ s_path)
{
	const gchar* path = (const gchar*)asString(s_path);

	GtkItemFactory* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_item_factory_from_path(path);

	_result = toRPointer(ans, "GtkItemFactory");

	return(_result);
}
 

USER_OBJECT_
S_gtk_item_factories_path_delete(USER_OBJECT_ s_ifactory_path, USER_OBJECT_ s_path)
{
	const gchar* ifactory_path = (const gchar*)asString(s_ifactory_path);
	const gchar* path = (const gchar*)asString(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_item_factories_path_delete(ifactory_path, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_new(USER_OBJECT_ s_str)
{
	char * prop_names[] = { "label", NULL };
	USER_OBJECT_ args[] = { s_str };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_LABEL, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_text(USER_OBJECT_ s_object, USER_OBJECT_ s_str)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	const char* str = (const char*)asString(s_str);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_text(object, str);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_text(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_text(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_attributes(USER_OBJECT_ s_object, USER_OBJECT_ s_attrs)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	PangoAttrList* attrs = (PangoAttrList*)getPtrValue(s_attrs);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_attributes(object, attrs);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_attributes(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	PangoAttrList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_attributes(object);

	_result = toRPointerWithFinalizer(ans, "PangoAttrList", (RPointerFinalizer) pango_attr_list_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_label(USER_OBJECT_ s_object, USER_OBJECT_ s_str)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	const gchar* str = (const gchar*)asString(s_str);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_label(object, str);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_label(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_label(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_markup(USER_OBJECT_ s_object, USER_OBJECT_ s_str)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	const gchar* str = (const gchar*)asString(s_str);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_markup(object, str);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_use_markup(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_use_markup(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_use_markup(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_use_markup(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_use_underline(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_use_underline(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_use_underline(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_use_underline(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_markup_with_mnemonic(USER_OBJECT_ s_object, USER_OBJECT_ s_str)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	const gchar* str = (const gchar*)asString(s_str);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_markup_with_mnemonic(object, str);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_mnemonic_keyval(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_mnemonic_keyval(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_mnemonic_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_widget)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_mnemonic_widget(object, widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_mnemonic_widget(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_mnemonic_widget(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_text_with_mnemonic(USER_OBJECT_ s_object, USER_OBJECT_ s_str)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	const gchar* str = (const gchar*)asString(s_str);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_text_with_mnemonic(object, str);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_justify(USER_OBJECT_ s_object, USER_OBJECT_ s_jtype)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	GtkJustification jtype = (GtkJustification)asEnum(s_jtype, GTK_TYPE_JUSTIFICATION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_justify(object, jtype);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_justify(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	GtkJustification ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_justify(object);

	_result = asREnum(ans, GTK_TYPE_JUSTIFICATION);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_pattern(USER_OBJECT_ s_object, USER_OBJECT_ s_pattern)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	const gchar* pattern = (const gchar*)asString(s_pattern);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_pattern(object, pattern);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_line_wrap(USER_OBJECT_ s_object, USER_OBJECT_ s_wrap)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	gboolean wrap = (gboolean)asLogical(s_wrap);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_line_wrap(object, wrap);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_line_wrap(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_line_wrap(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_selectable(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_selectable(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_selectable(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_selectable(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_select_region(USER_OBJECT_ s_object, USER_OBJECT_ s_start_offset, USER_OBJECT_ s_end_offset)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	gint start_offset = (gint)asInteger(s_start_offset);
	gint end_offset = (gint)asInteger(s_end_offset);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_select_region(object, start_offset, end_offset);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_selection_bounds(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint start;
	gint end;

	ans = gtk_label_get_selection_bounds(object, &start, &end);

	_result = asRLogical(ans);

	_result = retByVal(_result, "start", asRInteger(start), "end", asRInteger(end), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_layout(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	PangoLayout* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_layout(object);

	_result = toRPointerWithRef(ans, "PangoLayout");

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_layout_offsets(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint x;
	gint y;

	gtk_label_get_layout_offsets(object, &x, &y);


	_result = retByVal(_result, "x", asRInteger(x), "y", asRInteger(y), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set(USER_OBJECT_ s_object, USER_OBJECT_ s_str)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	const char* str = (const char*)asString(s_str);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set(object, str);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	char* str = NULL;

	gtk_label_get(object, &str);


	_result = retByVal(_result, "str", asRString(str), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_parse_uline(USER_OBJECT_ s_object, USER_OBJECT_ s_string)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	const gchar* string = (const gchar*)asString(s_string);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_parse_uline(object, string);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_ellipsize(USER_OBJECT_ s_object, USER_OBJECT_ s_mode)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	PangoEllipsizeMode mode = (PangoEllipsizeMode)asEnum(s_mode, PANGO_TYPE_ELLIPSIZE_MODE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_ellipsize(object, mode);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_ellipsize(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	PangoEllipsizeMode ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_ellipsize(object);

	_result = asREnum(ans, PANGO_TYPE_ELLIPSIZE_MODE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_angle(USER_OBJECT_ s_object, USER_OBJECT_ s_angle)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	gint angle = (gint)asInteger(s_angle);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_angle(object, angle);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_angle(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_angle(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_width_chars(USER_OBJECT_ s_object, USER_OBJECT_ s_n_chars)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	gint n_chars = (gint)asInteger(s_n_chars);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_width_chars(object, n_chars);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_width_chars(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_width_chars(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_max_width_chars(USER_OBJECT_ s_object, USER_OBJECT_ s_n_chars)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	gint n_chars = (gint)asInteger(s_n_chars);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_max_width_chars(object, n_chars);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_max_width_chars(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_max_width_chars(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_label_set_single_line_mode(USER_OBJECT_ s_object, USER_OBJECT_ s_single_line_mode)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));
	gboolean single_line_mode = (gboolean)asLogical(s_single_line_mode);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_label_set_single_line_mode(object, single_line_mode);


	return(_result);
}
 

USER_OBJECT_
S_gtk_label_get_single_line_mode(USER_OBJECT_ s_object)
{
	GtkLabel* object = GTK_LABEL(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_label_get_single_line_mode(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_layout_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_layout_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_layout_new(USER_OBJECT_ s_hadjustment, USER_OBJECT_ s_vadjustment)
{
	char * prop_names[] = { "hadjustment", "vadjustment", NULL };
	USER_OBJECT_ args[] = { s_hadjustment, s_vadjustment };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_LAYOUT, prop_names, args, 2);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_layout_put(USER_OBJECT_ s_object, USER_OBJECT_ s_child_widget, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkLayout* object = GTK_LAYOUT(getPtrValue(s_object));
	GtkWidget* child_widget = GTK_WIDGET(getPtrValue(s_child_widget));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_layout_put(object, child_widget, x, y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_layout_move(USER_OBJECT_ s_object, USER_OBJECT_ s_child_widget, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkLayout* object = GTK_LAYOUT(getPtrValue(s_object));
	GtkWidget* child_widget = GTK_WIDGET(getPtrValue(s_child_widget));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_layout_move(object, child_widget, x, y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_layout_set_size(USER_OBJECT_ s_object, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkLayout* object = GTK_LAYOUT(getPtrValue(s_object));
	guint width = (guint)asNumeric(s_width);
	guint height = (guint)asNumeric(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_layout_set_size(object, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_layout_get_size(USER_OBJECT_ s_object)
{
	GtkLayout* object = GTK_LAYOUT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	guint width;
	guint height;

	gtk_layout_get_size(object, &width, &height);


	_result = retByVal(_result, "width", asRNumeric(width), "height", asRNumeric(height), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_layout_get_hadjustment(USER_OBJECT_ s_object)
{
	GtkLayout* object = GTK_LAYOUT(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_layout_get_hadjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_layout_get_vadjustment(USER_OBJECT_ s_object)
{
	GtkLayout* object = GTK_LAYOUT(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_layout_get_vadjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_layout_set_hadjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkLayout* object = GTK_LAYOUT(getPtrValue(s_object));
	GtkAdjustment* adjustment = GET_LENGTH(s_adjustment) == 0 ? NULL : GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_layout_set_hadjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_layout_set_vadjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkLayout* object = GTK_LAYOUT(getPtrValue(s_object));
	GtkAdjustment* adjustment = GET_LENGTH(s_adjustment) == 0 ? NULL : GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_layout_set_vadjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_layout_freeze(USER_OBJECT_ s_object)
{
	GtkLayout* object = GTK_LAYOUT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_layout_freeze(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_layout_thaw(USER_OBJECT_ s_object)
{
	GtkLayout* object = GTK_LAYOUT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_layout_thaw(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_list_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_list_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_insert_items(USER_OBJECT_ s_object, USER_OBJECT_ s_items, USER_OBJECT_ s_position)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GList* items = asGList(s_items);
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_insert_items(object, items, position);

	CLEANUP(g_list_free, (GList*)items);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_append_items(USER_OBJECT_ s_object, USER_OBJECT_ s_items)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GList* items = asGList(s_items);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_append_items(object, items);

	CLEANUP(g_list_free, (GList*)items);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_prepend_items(USER_OBJECT_ s_object, USER_OBJECT_ s_items)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GList* items = asGList(s_items);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_prepend_items(object, items);

	CLEANUP(g_list_free, (GList*)items);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_remove_items(USER_OBJECT_ s_object, USER_OBJECT_ s_items)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GList* items = asGList(s_items);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_remove_items(object, items);

	CLEANUP(g_list_free, (GList*)items);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_remove_items_no_unref(USER_OBJECT_ s_object, USER_OBJECT_ s_items)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GList* items = asGList(s_items);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_remove_items_no_unref(object, items);

	CLEANUP(g_list_free, (GList*)items);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_clear_items(USER_OBJECT_ s_object, USER_OBJECT_ s_start, USER_OBJECT_ s_end)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	gint start = (gint)asInteger(s_start);
	gint end = (gint)asInteger(s_end);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_clear_items(object, start, end);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_select_item(USER_OBJECT_ s_object, USER_OBJECT_ s_item)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	gint item = (gint)asInteger(s_item);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_select_item(object, item);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_unselect_item(USER_OBJECT_ s_object, USER_OBJECT_ s_item)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	gint item = (gint)asInteger(s_item);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_unselect_item(object, item);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_select_child(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_select_child(object, child);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_unselect_child(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_unselect_child(object, child);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_child_position(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_list_child_position(object, child);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_set_selection_mode(USER_OBJECT_ s_object, USER_OBJECT_ s_mode)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GtkSelectionMode mode = (GtkSelectionMode)asEnum(s_mode, GTK_TYPE_SELECTION_MODE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_set_selection_mode(object, mode);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_extend_selection(USER_OBJECT_ s_object, USER_OBJECT_ s_scroll_type, USER_OBJECT_ s_position, USER_OBJECT_ s_auto_start_selection)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GtkScrollType scroll_type = (GtkScrollType)asEnum(s_scroll_type, GTK_TYPE_SCROLL_TYPE);
	gfloat position = (gfloat)asNumeric(s_position);
	gboolean auto_start_selection = (gboolean)asLogical(s_auto_start_selection);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_extend_selection(object, scroll_type, position, auto_start_selection);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_start_selection(USER_OBJECT_ s_object)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_start_selection(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_end_selection(USER_OBJECT_ s_object)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_end_selection(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_select_all(USER_OBJECT_ s_object)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_select_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_unselect_all(USER_OBJECT_ s_object)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_unselect_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_scroll_horizontal(USER_OBJECT_ s_object, USER_OBJECT_ s_scroll_type, USER_OBJECT_ s_position)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GtkScrollType scroll_type = (GtkScrollType)asEnum(s_scroll_type, GTK_TYPE_SCROLL_TYPE);
	gfloat position = (gfloat)asNumeric(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_scroll_horizontal(object, scroll_type, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_scroll_vertical(USER_OBJECT_ s_object, USER_OBJECT_ s_scroll_type, USER_OBJECT_ s_position)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GtkScrollType scroll_type = (GtkScrollType)asEnum(s_scroll_type, GTK_TYPE_SCROLL_TYPE);
	gfloat position = (gfloat)asNumeric(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_scroll_vertical(object, scroll_type, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_toggle_add_mode(USER_OBJECT_ s_object)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_toggle_add_mode(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_toggle_focus_row(USER_OBJECT_ s_object)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_toggle_focus_row(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_toggle_row(USER_OBJECT_ s_object, USER_OBJECT_ s_item)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));
	GtkWidget* item = GTK_WIDGET(getPtrValue(s_item));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_toggle_row(object, item);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_undo_selection(USER_OBJECT_ s_object)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_undo_selection(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_end_drag_selection(USER_OBJECT_ s_object)
{
	GtkList* object = GTK_LIST(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_end_drag_selection(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_item_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_list_item_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_item_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_list_item_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_item_new_with_label(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_list_item_new_with_label(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_item_select(USER_OBJECT_ s_object)
{
	GtkListItem* object = GTK_LIST_ITEM(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_item_select(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_item_deselect(USER_OBJECT_ s_object)
{
	GtkListItem* object = GTK_LIST_ITEM(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_item_deselect(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_list_store_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_newv(USER_OBJECT_ s_value)
{
	gint n_columns = (gint)GET_LENGTH(s_value);
	GType* value = (GType*)asArray(s_value, GType, asNumeric);

	GtkListStore* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_list_store_newv(n_columns, value);

	_result = toRPointerWithFinalizer(ans, "GtkListStore", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_set_column_types(USER_OBJECT_ s_object, USER_OBJECT_ s_types)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));
	gint n_columns = (gint)GET_LENGTH(s_types);
	GType* types = (GType*)asArray(s_types, GType, asNumeric);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_store_set_column_types(object, n_columns, types);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_remove(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_list_store_remove(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_insert(USER_OBJECT_ s_object, USER_OBJECT_ s_position)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_list_store_insert(object, iter, position);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_insert_before(USER_OBJECT_ s_object, USER_OBJECT_ s_sibling)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));
	GtkTreeIter* sibling = (GtkTreeIter*)getPtrValue(s_sibling);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_list_store_insert_before(object, iter, sibling);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_insert_after(USER_OBJECT_ s_object, USER_OBJECT_ s_sibling)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));
	GtkTreeIter* sibling = (GtkTreeIter*)getPtrValue(s_sibling);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_list_store_insert_after(object, iter, sibling);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_prepend(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_store_prepend(object, iter);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_append(USER_OBJECT_ s_object)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_list_store_append(object, iter);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_clear(USER_OBJECT_ s_object)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_store_clear(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_iter_is_valid(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_list_store_iter_is_valid(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_reorder(USER_OBJECT_ s_object, USER_OBJECT_ s_new_order)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));
	gint* new_order = (gint*)asArray(s_new_order, gint, asInteger);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_store_reorder(object, new_order);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_swap(USER_OBJECT_ s_object, USER_OBJECT_ s_a, USER_OBJECT_ s_b)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));
	GtkTreeIter* a = (GtkTreeIter*)getPtrValue(s_a);
	GtkTreeIter* b = (GtkTreeIter*)getPtrValue(s_b);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_store_swap(object, a, b);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_move_after(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_position)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);
	GtkTreeIter* position = GET_LENGTH(s_position) == 0 ? NULL : (GtkTreeIter*)getPtrValue(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_store_move_after(object, iter, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_list_store_move_before(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_position)
{
	GtkListStore* object = GTK_LIST_STORE(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);
	GtkTreeIter* position = GET_LENGTH(s_position) == 0 ? NULL : (GtkTreeIter*)getPtrValue(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_list_store_move_before(object, iter, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_check_version(USER_OBJECT_ s_required_major, USER_OBJECT_ s_required_minor, USER_OBJECT_ s_required_micro)
{
	guint required_major = (guint)asNumeric(s_required_major);
	guint required_minor = (guint)asNumeric(s_required_minor);
	guint required_micro = (guint)asNumeric(s_required_micro);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_check_version(required_major, required_minor, required_micro);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_exit(USER_OBJECT_ s_error_code)
{
	gint error_code = (gint)asInteger(s_error_code);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_exit(error_code);


	return(_result);
}
 

USER_OBJECT_
S_gtk_disable_setlocale()
{

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_disable_setlocale();


	return(_result);
}
 

USER_OBJECT_
S_gtk_set_locale()
{

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_set_locale();

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_get_default_language()
{

	PangoLanguage* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_get_default_language();

	_result = toRPointer(ans, "PangoLanguage");

	return(_result);
}
 

USER_OBJECT_
S_gtk_events_pending()
{

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_events_pending();

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_main_do_event(USER_OBJECT_ s_event)
{
	GdkEvent* event = (GdkEvent*)getPtrValue(s_event);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_main_do_event(event);


	return(_result);
}
 

USER_OBJECT_
S_gtk_main()
{

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_main();


	return(_result);
}
 

USER_OBJECT_
S_gtk_main_level()
{

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_main_level();

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_main_quit()
{

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_main_quit();


	return(_result);
}
 

USER_OBJECT_
S_gtk_main_iteration()
{

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_main_iteration();

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_main_iteration_do(USER_OBJECT_ s_blocking)
{
	gboolean blocking = (gboolean)asLogical(s_blocking);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_main_iteration_do(blocking);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_true()
{

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_true();

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_false()
{

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_false();

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_grab_add(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_grab_add(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_grab_get_current()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_grab_get_current();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_grab_remove(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_grab_remove(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_init_add(USER_OBJECT_ s_function, USER_OBJECT_ s_data)
{
	GtkFunction function = (GtkFunction)S_GtkFunction;
	GClosure* data = R_createGClosure(s_function, s_data);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_init_add(function, data);

	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_quit_add_destroy(USER_OBJECT_ s_main_level, USER_OBJECT_ s_object)
{
	guint main_level = (guint)asNumeric(s_main_level);
	GtkObject* object = GTK_OBJECT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_quit_add_destroy(main_level, object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_quit_add(USER_OBJECT_ s_main_level, USER_OBJECT_ s_function, USER_OBJECT_ s_data)
{
	GtkFunction function = (GtkFunction)S_GtkFunction;
	GClosure* data = R_createGClosure(s_function, s_data);
	guint main_level = (guint)asNumeric(s_main_level);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_quit_add(main_level, function, data);

	_result = asRNumeric(ans);
	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_quit_add_full(USER_OBJECT_ s_main_level, USER_OBJECT_ s_function, USER_OBJECT_ s_data)
{
	GtkFunction function = (GtkFunction)S_GtkFunction;
	GClosure* data = R_createGClosure(s_function, s_data);
	guint main_level = (guint)asNumeric(s_main_level);
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_quit_add_full(main_level, function, NULL, data, destroy);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_quit_remove(USER_OBJECT_ s_quit_handler_id)
{
	guint quit_handler_id = (guint)asNumeric(s_quit_handler_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_quit_remove(quit_handler_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_quit_remove_by_data(USER_OBJECT_ s_data)
{
	gpointer data = (gpointer)asGenericData(s_data);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_quit_remove_by_data(data);


	return(_result);
}
 

USER_OBJECT_
S_gtk_timeout_add(USER_OBJECT_ s_interval, USER_OBJECT_ s_function, USER_OBJECT_ s_data)
{
	GtkFunction function = (GtkFunction)S_GtkFunction;
	GClosure* data = R_createGClosure(s_function, s_data);
	guint32 interval = (guint32)asNumeric(s_interval);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_timeout_add(interval, function, data);

	_result = asRNumeric(ans);
	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_timeout_add_full(USER_OBJECT_ s_interval, USER_OBJECT_ s_function, USER_OBJECT_ s_data)
{
	GtkFunction function = (GtkFunction)S_GtkFunction;
	GClosure* data = R_createGClosure(s_function, s_data);
	guint32 interval = (guint32)asNumeric(s_interval);
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_timeout_add_full(interval, function, NULL, data, destroy);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_timeout_remove(USER_OBJECT_ s_timeout_handler_id)
{
	guint timeout_handler_id = (guint)asNumeric(s_timeout_handler_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_timeout_remove(timeout_handler_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_idle_add(USER_OBJECT_ s_function, USER_OBJECT_ s_data)
{
	GtkFunction function = (GtkFunction)S_GtkFunction;
	GClosure* data = R_createGClosure(s_function, s_data);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_idle_add(function, data);

	_result = asRNumeric(ans);
	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_idle_add_priority(USER_OBJECT_ s_priority, USER_OBJECT_ s_function, USER_OBJECT_ s_data)
{
	GtkFunction function = (GtkFunction)S_GtkFunction;
	GClosure* data = R_createGClosure(s_function, s_data);
	gint priority = (gint)asInteger(s_priority);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_idle_add_priority(priority, function, data);

	_result = asRNumeric(ans);
	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_idle_add_full(USER_OBJECT_ s_priority, USER_OBJECT_ s_function, USER_OBJECT_ s_data)
{
	GtkFunction function = (GtkFunction)S_GtkFunction;
	GClosure* data = R_createGClosure(s_function, s_data);
	gint priority = (gint)asInteger(s_priority);
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_idle_add_full(priority, function, NULL, data, destroy);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_idle_remove(USER_OBJECT_ s_idle_handler_id)
{
	guint idle_handler_id = (guint)asNumeric(s_idle_handler_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_idle_remove(idle_handler_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_idle_remove_by_data(USER_OBJECT_ s_data)
{
	gpointer data = (gpointer)asGenericData(s_data);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_idle_remove_by_data(data);


	return(_result);
}
 

USER_OBJECT_
S_gtk_input_add_full(USER_OBJECT_ s_source, USER_OBJECT_ s_condition, USER_OBJECT_ s_function, USER_OBJECT_ s_data)
{
	GdkInputFunction function = (GdkInputFunction)S_GdkInputFunction;
	GClosure* data = R_createGClosure(s_function, s_data);
	gint source = (gint)asInteger(s_source);
	GdkInputCondition condition = (GdkInputCondition)asFlag(s_condition, GDK_TYPE_INPUT_CONDITION);
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_input_add_full(source, condition, function, NULL, data, destroy);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_input_remove(USER_OBJECT_ s_input_handler_id)
{
	guint input_handler_id = (guint)asNumeric(s_input_handler_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_input_remove(input_handler_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_key_snooper_install(USER_OBJECT_ s_snooper, USER_OBJECT_ s_func_data)
{
	GtkKeySnoopFunc snooper = (GtkKeySnoopFunc)S_GtkKeySnoopFunc;
	GClosure* func_data = R_createGClosure(s_snooper, s_func_data);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_key_snooper_install(snooper, func_data);

	_result = asRNumeric(ans);
	g_closure_sink(func_data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_key_snooper_remove(USER_OBJECT_ s_snooper_handler_id)
{
	guint snooper_handler_id = (guint)asNumeric(s_snooper_handler_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_key_snooper_remove(snooper_handler_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_get_current_event()
{

	GdkEvent* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_get_current_event();

	_result = asRGdkEvent(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_get_current_event_time()
{

	guint32 ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_get_current_event_time();

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_get_current_event_state(USER_OBJECT_ s_state)
{
	GdkModifierType* state = (GdkModifierType*)asFlag(s_state, GDK_TYPE_MODIFIER_TYPE);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_get_current_event_state(state);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_get_event_widget(USER_OBJECT_ s_event)
{
	GdkEvent* event = (GdkEvent*)getPtrValue(s_event);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_get_event_widget(event);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_propagate_event(USER_OBJECT_ s_object, USER_OBJECT_ s_event)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkEvent* event = (GdkEvent*)getPtrValue(s_event);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_propagate_event(object, event);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_popup(USER_OBJECT_ s_object, USER_OBJECT_ s_parent_menu_shell, USER_OBJECT_ s_parent_menu_item, USER_OBJECT_ s_func, USER_OBJECT_ s_data, USER_OBJECT_ s_button, USER_OBJECT_ s_activate_time)
{
	GtkMenuPositionFunc func = (GtkMenuPositionFunc)S_GtkMenuPositionFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));
	GtkWidget* parent_menu_shell = GTK_WIDGET(getPtrValue(s_parent_menu_shell));
	GtkWidget* parent_menu_item = GTK_WIDGET(getPtrValue(s_parent_menu_item));
	guint button = (guint)asNumeric(s_button);
	guint32 activate_time = (guint32)asNumeric(s_activate_time);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_popup(object, parent_menu_shell, parent_menu_item, func, data, button, activate_time);

	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_reposition(USER_OBJECT_ s_object)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_reposition(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_popdown(USER_OBJECT_ s_object)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_popdown(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_get_active(USER_OBJECT_ s_object)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_get_active(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_set_active(USER_OBJECT_ s_object, USER_OBJECT_ s_index)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));
	guint index = (guint)asNumeric(s_index);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_set_active(object, index);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_set_accel_group(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_group)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));
	GtkAccelGroup* accel_group = GTK_ACCEL_GROUP(getPtrValue(s_accel_group));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_set_accel_group(object, accel_group);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_get_accel_group(USER_OBJECT_ s_object)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));

	GtkAccelGroup* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_get_accel_group(object);

	_result = toRPointerWithRef(ans, "GtkAccelGroup");

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_set_accel_path(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_path)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));
	const gchar* accel_path = (const gchar*)asString(s_accel_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_set_accel_path(object, accel_path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_detach(USER_OBJECT_ s_object)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_detach(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_get_attach_widget(USER_OBJECT_ s_object)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_get_attach_widget(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_set_tearoff_state(USER_OBJECT_ s_object, USER_OBJECT_ s_torn_off)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));
	gboolean torn_off = (gboolean)asLogical(s_torn_off);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_set_tearoff_state(object, torn_off);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_get_tearoff_state(USER_OBJECT_ s_object)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_get_tearoff_state(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_set_title(USER_OBJECT_ s_object, USER_OBJECT_ s_title)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));
	const gchar* title = (const gchar*)asString(s_title);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_set_title(object, title);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_get_title(USER_OBJECT_ s_object)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_get_title(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_reorder_child(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_position)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_reorder_child(object, child, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_set_screen(USER_OBJECT_ s_object, USER_OBJECT_ s_screen)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));
	GdkScreen* screen = GET_LENGTH(s_screen) == 0 ? NULL : GDK_SCREEN(getPtrValue(s_screen));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_set_screen(object, screen);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_attach(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_left_attach, USER_OBJECT_ s_right_attach, USER_OBJECT_ s_top_attach, USER_OBJECT_ s_bottom_attach)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	guint left_attach = (guint)asNumeric(s_left_attach);
	guint right_attach = (guint)asNumeric(s_right_attach);
	guint top_attach = (guint)asNumeric(s_top_attach);
	guint bottom_attach = (guint)asNumeric(s_bottom_attach);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_attach(object, child, left_attach, right_attach, top_attach, bottom_attach);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_set_monitor(USER_OBJECT_ s_object, USER_OBJECT_ s_monitor_num)
{
	GtkMenu* object = GTK_MENU(getPtrValue(s_object));
	gint monitor_num = (gint)asInteger(s_monitor_num);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_set_monitor(object, monitor_num);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_bar_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_bar_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_bar_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_bar_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_bar_get_pack_direction(USER_OBJECT_ s_object)
{
	GtkMenuBar* object = GTK_MENU_BAR(getPtrValue(s_object));

	GtkPackDirection ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_bar_get_pack_direction(object);

	_result = asREnum(ans, GTK_TYPE_PACK_DIRECTION);

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_bar_set_pack_direction(USER_OBJECT_ s_object, USER_OBJECT_ s_pack_dir)
{
	GtkMenuBar* object = GTK_MENU_BAR(getPtrValue(s_object));
	GtkPackDirection pack_dir = (GtkPackDirection)asEnum(s_pack_dir, GTK_TYPE_PACK_DIRECTION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_bar_set_pack_direction(object, pack_dir);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_bar_get_child_pack_direction(USER_OBJECT_ s_object)
{
	GtkMenuBar* object = GTK_MENU_BAR(getPtrValue(s_object));

	GtkPackDirection ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_bar_get_child_pack_direction(object);

	_result = asREnum(ans, GTK_TYPE_PACK_DIRECTION);

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_bar_set_child_pack_direction(USER_OBJECT_ s_object, USER_OBJECT_ s_child_pack_dir)
{
	GtkMenuBar* object = GTK_MENU_BAR(getPtrValue(s_object));
	GtkPackDirection child_pack_dir = (GtkPackDirection)asEnum(s_child_pack_dir, GTK_TYPE_PACK_DIRECTION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_bar_set_child_pack_direction(object, child_pack_dir);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_item_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_item_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_new_with_label(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_item_new_with_label(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_new_with_mnemonic(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_item_new_with_mnemonic(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_set_submenu(USER_OBJECT_ s_object, USER_OBJECT_ s_submenu)
{
	GtkMenuItem* object = GTK_MENU_ITEM(getPtrValue(s_object));
	GtkWidget* submenu = GTK_WIDGET(getPtrValue(s_submenu));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_item_set_submenu(object, submenu);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_get_submenu(USER_OBJECT_ s_object)
{
	GtkMenuItem* object = GTK_MENU_ITEM(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_item_get_submenu(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_remove_submenu(USER_OBJECT_ s_object)
{
	GtkMenuItem* object = GTK_MENU_ITEM(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_item_remove_submenu(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_select(USER_OBJECT_ s_object)
{
	GtkMenuItem* object = GTK_MENU_ITEM(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_item_select(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_deselect(USER_OBJECT_ s_object)
{
	GtkMenuItem* object = GTK_MENU_ITEM(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_item_deselect(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_activate(USER_OBJECT_ s_object)
{
	GtkMenuItem* object = GTK_MENU_ITEM(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_item_activate(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_toggle_size_request(USER_OBJECT_ s_object, USER_OBJECT_ s_requisition)
{
	GtkMenuItem* object = GTK_MENU_ITEM(getPtrValue(s_object));
	gint* requisition = (gint*)asArray(s_requisition, gint, asInteger);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_item_toggle_size_request(object, requisition);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_toggle_size_allocate(USER_OBJECT_ s_object, USER_OBJECT_ s_allocation)
{
	GtkMenuItem* object = GTK_MENU_ITEM(getPtrValue(s_object));
	gint allocation = (gint)asInteger(s_allocation);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_item_toggle_size_allocate(object, allocation);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_set_right_justified(USER_OBJECT_ s_object, USER_OBJECT_ s_right_justified)
{
	GtkMenuItem* object = GTK_MENU_ITEM(getPtrValue(s_object));
	gboolean right_justified = (gboolean)asLogical(s_right_justified);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_item_set_right_justified(object, right_justified);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_get_right_justified(USER_OBJECT_ s_object)
{
	GtkMenuItem* object = GTK_MENU_ITEM(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_item_get_right_justified(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_set_accel_path(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_path)
{
	GtkMenuItem* object = GTK_MENU_ITEM(getPtrValue(s_object));
	const gchar* accel_path = (const gchar*)asString(s_accel_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_item_set_accel_path(object, accel_path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_item_right_justify(USER_OBJECT_ s_object)
{
	GtkMenuItem* object = GTK_MENU_ITEM(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_item_right_justify(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_shell_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_shell_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_shell_append(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkMenuShell* object = GTK_MENU_SHELL(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_shell_append(object, child);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_shell_prepend(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkMenuShell* object = GTK_MENU_SHELL(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_shell_prepend(object, child);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_shell_insert(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_position)
{
	GtkMenuShell* object = GTK_MENU_SHELL(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_shell_insert(object, child, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_shell_deactivate(USER_OBJECT_ s_object)
{
	GtkMenuShell* object = GTK_MENU_SHELL(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_shell_deactivate(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_shell_select_item(USER_OBJECT_ s_object, USER_OBJECT_ s_menu_item)
{
	GtkMenuShell* object = GTK_MENU_SHELL(getPtrValue(s_object));
	GtkWidget* menu_item = GTK_WIDGET(getPtrValue(s_menu_item));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_shell_select_item(object, menu_item);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_shell_deselect(USER_OBJECT_ s_object)
{
	GtkMenuShell* object = GTK_MENU_SHELL(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_shell_deselect(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_shell_activate_item(USER_OBJECT_ s_object, USER_OBJECT_ s_menu_item, USER_OBJECT_ s_force_deactivate)
{
	GtkMenuShell* object = GTK_MENU_SHELL(getPtrValue(s_object));
	GtkWidget* menu_item = GTK_WIDGET(getPtrValue(s_menu_item));
	gboolean force_deactivate = (gboolean)asLogical(s_force_deactivate);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_shell_activate_item(object, menu_item, force_deactivate);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_shell_select_first(USER_OBJECT_ s_object, USER_OBJECT_ s_search_sensitive)
{
	GtkMenuShell* object = GTK_MENU_SHELL(getPtrValue(s_object));
	gboolean search_sensitive = (gboolean)asLogical(s_search_sensitive);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_shell_select_first(object, search_sensitive);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_shell_cancel(USER_OBJECT_ s_object)
{
	GtkMenuShell* object = GTK_MENU_SHELL(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_shell_cancel(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_shell_get_take_focus(USER_OBJECT_ s_object)
{
	GtkMenuShell* object = GTK_MENU_SHELL(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_shell_get_take_focus(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_shell_set_take_focus(USER_OBJECT_ s_object, USER_OBJECT_ s_take_focus)
{
	GtkMenuShell* object = GTK_MENU_SHELL(getPtrValue(s_object));
	gboolean take_focus = (gboolean)asLogical(s_take_focus);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_shell_set_take_focus(object, take_focus);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_tool_button_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_tool_button_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_tool_button_new(USER_OBJECT_ s_icon_widget, USER_OBJECT_ s_label)
{
	GtkWidget* icon_widget = GTK_WIDGET(getPtrValue(s_icon_widget));
	const gchar* label = (const gchar*)asString(s_label);

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_tool_button_new(icon_widget, label);

	_result = toRPointer(ans, "GtkToolItem");

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_tool_button_new_from_stock(USER_OBJECT_ s_stock_id)
{
	const gchar* stock_id = (const gchar*)asString(s_stock_id);

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_tool_button_new_from_stock(stock_id);

	_result = toRPointer(ans, "GtkToolItem");

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_tool_button_set_menu(USER_OBJECT_ s_object, USER_OBJECT_ s_menu)
{
	GtkMenuToolButton* object = GTK_MENU_TOOL_BUTTON(getPtrValue(s_object));
	GtkWidget* menu = GTK_WIDGET(getPtrValue(s_menu));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_tool_button_set_menu(object, menu);


	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_tool_button_get_menu(USER_OBJECT_ s_object)
{
	GtkMenuToolButton* object = GTK_MENU_TOOL_BUTTON(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_menu_tool_button_get_menu(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_menu_tool_button_set_arrow_tooltip(USER_OBJECT_ s_object, USER_OBJECT_ s_tooltips, USER_OBJECT_ s_tip_text, USER_OBJECT_ s_tip_private)
{
	GtkMenuToolButton* object = GTK_MENU_TOOL_BUTTON(getPtrValue(s_object));
	GtkTooltips* tooltips = GTK_TOOLTIPS(getPtrValue(s_tooltips));
	const gchar* tip_text = GET_LENGTH(s_tip_text) == 0 ? NULL : (const gchar*)asString(s_tip_text);
	const gchar* tip_private = GET_LENGTH(s_tip_private) == 0 ? NULL : (const gchar*)asString(s_tip_private);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_menu_tool_button_set_arrow_tooltip(object, tooltips, tip_text, tip_private);


	return(_result);
}
 

USER_OBJECT_
S_gtk_message_dialog_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_message_dialog_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_message_dialog_set_markup(USER_OBJECT_ s_object, USER_OBJECT_ s_str)
{
	GtkMessageDialog* object = GTK_MESSAGE_DIALOG(getPtrValue(s_object));
	const gchar* str = (const gchar*)asString(s_str);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_message_dialog_set_markup(object, str);


	return(_result);
}
 

USER_OBJECT_
S_gtk_misc_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_misc_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_misc_set_alignment(USER_OBJECT_ s_object, USER_OBJECT_ s_xalign, USER_OBJECT_ s_yalign)
{
	GtkMisc* object = GTK_MISC(getPtrValue(s_object));
	gfloat xalign = (gfloat)asNumeric(s_xalign);
	gfloat yalign = (gfloat)asNumeric(s_yalign);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_misc_set_alignment(object, xalign, yalign);


	return(_result);
}
 

USER_OBJECT_
S_gtk_misc_get_alignment(USER_OBJECT_ s_object)
{
	GtkMisc* object = GTK_MISC(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gfloat xalign;
	gfloat yalign;

	gtk_misc_get_alignment(object, &xalign, &yalign);


	_result = retByVal(_result, "xalign", asRNumeric(xalign), "yalign", asRNumeric(yalign), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_misc_set_padding(USER_OBJECT_ s_object, USER_OBJECT_ s_xpad, USER_OBJECT_ s_ypad)
{
	GtkMisc* object = GTK_MISC(getPtrValue(s_object));
	gint xpad = (gint)asInteger(s_xpad);
	gint ypad = (gint)asInteger(s_ypad);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_misc_set_padding(object, xpad, ypad);


	return(_result);
}
 

USER_OBJECT_
S_gtk_misc_get_padding(USER_OBJECT_ s_object)
{
	GtkMisc* object = GTK_MISC(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint xpad;
	gint ypad;

	gtk_misc_get_padding(object, &xpad, &ypad);


	_result = retByVal(_result, "xpad", asRInteger(xpad), "ypad", asRInteger(ypad), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_append_page(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_tab_label)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	GtkWidget* tab_label = GET_LENGTH(s_tab_label) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_tab_label));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_append_page(object, child, tab_label);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_append_page_menu(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_tab_label, USER_OBJECT_ s_menu_label)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	GtkWidget* tab_label = GET_LENGTH(s_tab_label) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_tab_label));
	GtkWidget* menu_label = GET_LENGTH(s_menu_label) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_menu_label));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_append_page_menu(object, child, tab_label, menu_label);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_prepend_page(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_tab_label)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	GtkWidget* tab_label = GET_LENGTH(s_tab_label) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_tab_label));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_prepend_page(object, child, tab_label);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_prepend_page_menu(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_tab_label, USER_OBJECT_ s_menu_label)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	GtkWidget* tab_label = GET_LENGTH(s_tab_label) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_tab_label));
	GtkWidget* menu_label = GET_LENGTH(s_menu_label) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_menu_label));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_prepend_page_menu(object, child, tab_label, menu_label);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_insert_page(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_tab_label, USER_OBJECT_ s_position)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	GtkWidget* tab_label = GET_LENGTH(s_tab_label) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_tab_label));
	gint position = (gint)asInteger(s_position);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_insert_page(object, child, tab_label, position);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_insert_page_menu(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_tab_label, USER_OBJECT_ s_menu_label, USER_OBJECT_ s_position)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	GtkWidget* tab_label = GET_LENGTH(s_tab_label) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_tab_label));
	GtkWidget* menu_label = GET_LENGTH(s_menu_label) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_menu_label));
	gint position = (gint)asInteger(s_position);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_insert_page_menu(object, child, tab_label, menu_label, position);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_remove_page(USER_OBJECT_ s_object, USER_OBJECT_ s_page_num)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	gint page_num = (gint)asInteger(s_page_num);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_remove_page(object, page_num);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_get_current_page(USER_OBJECT_ s_object)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_get_current_page(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_get_nth_page(USER_OBJECT_ s_object, USER_OBJECT_ s_page_num)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	gint page_num = (gint)asInteger(s_page_num);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_get_nth_page(object, page_num);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_get_n_pages(USER_OBJECT_ s_object)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_get_n_pages(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_page_num(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_page_num(object, child);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_current_page(USER_OBJECT_ s_object, USER_OBJECT_ s_page_num)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	gint page_num = (gint)asInteger(s_page_num);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_current_page(object, page_num);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_next_page(USER_OBJECT_ s_object)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_next_page(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_prev_page(USER_OBJECT_ s_object)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_prev_page(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_show_border(USER_OBJECT_ s_object, USER_OBJECT_ s_show_border)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	gboolean show_border = (gboolean)asLogical(s_show_border);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_show_border(object, show_border);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_get_show_border(USER_OBJECT_ s_object)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_get_show_border(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_show_tabs(USER_OBJECT_ s_object, USER_OBJECT_ s_show_tabs)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	gboolean show_tabs = (gboolean)asLogical(s_show_tabs);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_show_tabs(object, show_tabs);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_get_show_tabs(USER_OBJECT_ s_object)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_get_show_tabs(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_tab_pos(USER_OBJECT_ s_object, USER_OBJECT_ s_pos)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkPositionType pos = (GtkPositionType)asEnum(s_pos, GTK_TYPE_POSITION_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_tab_pos(object, pos);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_get_tab_pos(USER_OBJECT_ s_object)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));

	GtkPositionType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_get_tab_pos(object);

	_result = asREnum(ans, GTK_TYPE_POSITION_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_homogeneous_tabs(USER_OBJECT_ s_object, USER_OBJECT_ s_homogeneous)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	gboolean homogeneous = (gboolean)asLogical(s_homogeneous);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_homogeneous_tabs(object, homogeneous);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_tab_border(USER_OBJECT_ s_object, USER_OBJECT_ s_border_width)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	guint border_width = (guint)asNumeric(s_border_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_tab_border(object, border_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_tab_hborder(USER_OBJECT_ s_object, USER_OBJECT_ s_tab_hborder)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	guint tab_hborder = (guint)asNumeric(s_tab_hborder);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_tab_hborder(object, tab_hborder);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_tab_vborder(USER_OBJECT_ s_object, USER_OBJECT_ s_tab_vborder)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	guint tab_vborder = (guint)asNumeric(s_tab_vborder);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_tab_vborder(object, tab_vborder);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_scrollable(USER_OBJECT_ s_object, USER_OBJECT_ s_scrollable)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	gboolean scrollable = (gboolean)asLogical(s_scrollable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_scrollable(object, scrollable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_get_scrollable(USER_OBJECT_ s_object)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_get_scrollable(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_popup_enable(USER_OBJECT_ s_object)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_popup_enable(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_popup_disable(USER_OBJECT_ s_object)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_popup_disable(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_get_tab_label(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_get_tab_label(object, child);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_tab_label(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_tab_label)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	GtkWidget* tab_label = GET_LENGTH(s_tab_label) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_tab_label));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_tab_label(object, child, tab_label);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_tab_label_text(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_tab_text)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	const gchar* tab_text = (const gchar*)asString(s_tab_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_tab_label_text(object, child, tab_text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_get_tab_label_text(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_get_tab_label_text(object, child);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_get_menu_label(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_get_menu_label(object, child);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_menu_label(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_menu_label)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	GtkWidget* menu_label = GET_LENGTH(s_menu_label) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_menu_label));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_menu_label(object, child, menu_label);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_menu_label_text(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_menu_text)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	const gchar* menu_text = (const gchar*)asString(s_menu_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_menu_label_text(object, child, menu_text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_get_menu_label_text(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_get_menu_label_text(object, child);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_query_tab_label_packing(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gboolean expand;
	gboolean fill;
	GtkPackType pack_type;

	gtk_notebook_query_tab_label_packing(object, child, &expand, &fill, &pack_type);


	_result = retByVal(_result, "expand", asRLogical(expand), "fill", asRLogical(fill), "pack_type", asREnum(pack_type, GTK_TYPE_PACK_TYPE), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_tab_label_packing(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_expand, USER_OBJECT_ s_fill, USER_OBJECT_ s_pack_type)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gboolean expand = (gboolean)asLogical(s_expand);
	gboolean fill = (gboolean)asLogical(s_fill);
	GtkPackType pack_type = (GtkPackType)asEnum(s_pack_type, GTK_TYPE_PACK_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_tab_label_packing(object, child, expand, fill, pack_type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_reorder_child(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_position)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_reorder_child(object, child, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_current_page(USER_OBJECT_ s_object)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_notebook_current_page(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_notebook_set_page(USER_OBJECT_ s_object, USER_OBJECT_ s_page_num)
{
	GtkNotebook* object = GTK_NOTEBOOK(getPtrValue(s_object));
	gint page_num = (gint)asInteger(s_page_num);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_notebook_set_page(object, page_num);


	return(_result);
}
 

USER_OBJECT_
S_gtk_object_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_object_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_object_sink(USER_OBJECT_ s_object)
{
	GtkObject* object = GTK_OBJECT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_object_sink(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_object_destroy(USER_OBJECT_ s_object)
{
	GtkObject* object = GTK_OBJECT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_object_destroy(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_old_editable_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_old_editable_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_old_editable_claim_selection(USER_OBJECT_ s_object, USER_OBJECT_ s_claim, USER_OBJECT_ s_time)
{
	GtkOldEditable* object = GTK_OLD_EDITABLE(getPtrValue(s_object));
	gboolean claim = (gboolean)asLogical(s_claim);
	guint32 time = (guint32)asNumeric(s_time);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_old_editable_claim_selection(object, claim, time);


	return(_result);
}
 

USER_OBJECT_
S_gtk_old_editable_changed(USER_OBJECT_ s_object)
{
	GtkOldEditable* object = GTK_OLD_EDITABLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_old_editable_changed(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_option_menu_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_option_menu_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_option_menu_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_option_menu_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_option_menu_get_menu(USER_OBJECT_ s_object)
{
	GtkOptionMenu* object = GTK_OPTION_MENU(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_option_menu_get_menu(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_option_menu_set_menu(USER_OBJECT_ s_object, USER_OBJECT_ s_menu)
{
	GtkOptionMenu* object = GTK_OPTION_MENU(getPtrValue(s_object));
	GtkWidget* menu = GTK_WIDGET(getPtrValue(s_menu));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_option_menu_set_menu(object, menu);


	return(_result);
}
 

USER_OBJECT_
S_gtk_option_menu_remove_menu(USER_OBJECT_ s_object)
{
	GtkOptionMenu* object = GTK_OPTION_MENU(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_option_menu_remove_menu(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_option_menu_get_history(USER_OBJECT_ s_object)
{
	GtkOptionMenu* object = GTK_OPTION_MENU(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_option_menu_get_history(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_option_menu_set_history(USER_OBJECT_ s_object, USER_OBJECT_ s_index)
{
	GtkOptionMenu* object = GTK_OPTION_MENU(getPtrValue(s_object));
	guint index = (guint)asNumeric(s_index);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_option_menu_set_history(object, index);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paned_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_paned_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_paned_add1(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkPaned* object = GTK_PANED(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paned_add1(object, child);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paned_add2(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkPaned* object = GTK_PANED(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paned_add2(object, child);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paned_pack1(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_resize, USER_OBJECT_ s_shrink)
{
	GtkPaned* object = GTK_PANED(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gboolean resize = (gboolean)asLogical(s_resize);
	gboolean shrink = (gboolean)asLogical(s_shrink);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paned_pack1(object, child, resize, shrink);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paned_pack2(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_resize, USER_OBJECT_ s_shrink)
{
	GtkPaned* object = GTK_PANED(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gboolean resize = (gboolean)asLogical(s_resize);
	gboolean shrink = (gboolean)asLogical(s_shrink);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paned_pack2(object, child, resize, shrink);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paned_get_position(USER_OBJECT_ s_object)
{
	GtkPaned* object = GTK_PANED(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_paned_get_position(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_paned_set_position(USER_OBJECT_ s_object, USER_OBJECT_ s_position)
{
	GtkPaned* object = GTK_PANED(getPtrValue(s_object));
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paned_set_position(object, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paned_get_child1(USER_OBJECT_ s_object)
{
	GtkPaned* object = GTK_PANED(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_paned_get_child1(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_paned_get_child2(USER_OBJECT_ s_object)
{
	GtkPaned* object = GTK_PANED(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_paned_get_child2(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_paned_compute_position(USER_OBJECT_ s_object, USER_OBJECT_ s_allocation, USER_OBJECT_ s_child1_req, USER_OBJECT_ s_child2_req)
{
	GtkPaned* object = GTK_PANED(getPtrValue(s_object));
	gint allocation = (gint)asInteger(s_allocation);
	gint child1_req = (gint)asInteger(s_child1_req);
	gint child2_req = (gint)asInteger(s_child2_req);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paned_compute_position(object, allocation, child1_req, child2_req);


	return(_result);
}
 

USER_OBJECT_
S_gtk_pixmap_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_pixmap_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_pixmap_new(USER_OBJECT_ s_pixmap, USER_OBJECT_ s_mask)
{
	GdkPixmap* pixmap = GDK_PIXMAP(getPtrValue(s_pixmap));
	GdkBitmap* mask = GET_LENGTH(s_mask) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_pixmap_new(pixmap, mask);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_pixmap_set(USER_OBJECT_ s_object, USER_OBJECT_ s_val, USER_OBJECT_ s_mask)
{
	GtkPixmap* object = GTK_PIXMAP(getPtrValue(s_object));
	GdkPixmap* val = GDK_PIXMAP(getPtrValue(s_val));
	GdkBitmap* mask = GET_LENGTH(s_mask) == 0 ? NULL : GDK_DRAWABLE(getPtrValue(s_mask));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_pixmap_set(object, val, mask);


	return(_result);
}
 

USER_OBJECT_
S_gtk_pixmap_get(USER_OBJECT_ s_object)
{
	GtkPixmap* object = GTK_PIXMAP(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkPixmap* val = NULL;
	GdkBitmap* mask = NULL;

	gtk_pixmap_get(object, &val, &mask);


	_result = retByVal(_result, "val", toRPointerWithRef(val, "GdkPixmap"), "mask", toRPointerWithRef(mask, "GdkBitmap"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_pixmap_set_build_insensitive(USER_OBJECT_ s_object, USER_OBJECT_ s_build)
{
	GtkPixmap* object = GTK_PIXMAP(getPtrValue(s_object));
	gboolean build = (gboolean)asLogical(s_build);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_pixmap_set_build_insensitive(object, build);


	return(_result);
}
 

USER_OBJECT_
S_gtk_plug_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_plug_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_plug_construct(USER_OBJECT_ s_object, USER_OBJECT_ s_socket_id)
{
	GtkPlug* object = GTK_PLUG(getPtrValue(s_object));
	GdkNativeWindow socket_id = asGdkNativeWindow(s_socket_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_plug_construct(object, socket_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_plug_new(USER_OBJECT_ s_socket_id)
{
	GdkNativeWindow socket_id = asGdkNativeWindow(s_socket_id);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_plug_new(socket_id);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_plug_construct_for_display(USER_OBJECT_ s_object, USER_OBJECT_ s_display, USER_OBJECT_ s_socket_id)
{
	GtkPlug* object = GTK_PLUG(getPtrValue(s_object));
	GdkDisplay* display = GDK_DISPLAY_OBJECT(getPtrValue(s_display));
	GdkNativeWindow socket_id = asGdkNativeWindow(s_socket_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_plug_construct_for_display(object, display, socket_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_plug_new_for_display(USER_OBJECT_ s_display, USER_OBJECT_ s_socket_id)
{
	GdkDisplay* display = GDK_DISPLAY_OBJECT(getPtrValue(s_display));
	GdkNativeWindow socket_id = asGdkNativeWindow(s_socket_id);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_plug_new_for_display(display, socket_id);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_plug_get_id(USER_OBJECT_ s_object)
{
	GtkPlug* object = GTK_PLUG(getPtrValue(s_object));

	GdkNativeWindow ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_plug_get_id(object);

	_result = asRGdkNativeWindow(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_preview_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_uninit()
{

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_preview_uninit();


	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_new(USER_OBJECT_ s_type)
{
	GtkPreviewType type = (GtkPreviewType)asEnum(s_type, GTK_TYPE_PREVIEW_TYPE);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_preview_new(type);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_size(USER_OBJECT_ s_object, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkPreview* object = GTK_PREVIEW(getPtrValue(s_object));
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_preview_size(object, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_put(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_gc, USER_OBJECT_ s_srcx, USER_OBJECT_ s_srcy, USER_OBJECT_ s_destx, USER_OBJECT_ s_desty, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkPreview* object = GTK_PREVIEW(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GdkGC* gc = GDK_GC(getPtrValue(s_gc));
	gint srcx = (gint)asInteger(s_srcx);
	gint srcy = (gint)asInteger(s_srcy);
	gint destx = (gint)asInteger(s_destx);
	gint desty = (gint)asInteger(s_desty);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_preview_put(object, window, gc, srcx, srcy, destx, desty, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_draw_row(USER_OBJECT_ s_object, USER_OBJECT_ s_data, USER_OBJECT_ s_y, USER_OBJECT_ s_w)
{
	GtkPreview* object = GTK_PREVIEW(getPtrValue(s_object));
	guchar* data = (guchar*)asArray(s_data, guchar, asInteger);
	gint x = (gint)GET_LENGTH(s_data);
	gint y = (gint)asInteger(s_y);
	gint w = (gint)asInteger(s_w);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_preview_draw_row(object, data, x, y, w);


	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_set_expand(USER_OBJECT_ s_object, USER_OBJECT_ s_expand)
{
	GtkPreview* object = GTK_PREVIEW(getPtrValue(s_object));
	gboolean expand = (gboolean)asLogical(s_expand);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_preview_set_expand(object, expand);


	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_set_gamma(USER_OBJECT_ s_gamma)
{
	double gamma = (double)asNumeric(s_gamma);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_preview_set_gamma(gamma);


	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_set_color_cube(USER_OBJECT_ s_nred_shades, USER_OBJECT_ s_ngreen_shades, USER_OBJECT_ s_nblue_shades, USER_OBJECT_ s_ngray_shades)
{
	guint nred_shades = (guint)asNumeric(s_nred_shades);
	guint ngreen_shades = (guint)asNumeric(s_ngreen_shades);
	guint nblue_shades = (guint)asNumeric(s_nblue_shades);
	guint ngray_shades = (guint)asNumeric(s_ngray_shades);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_preview_set_color_cube(nred_shades, ngreen_shades, nblue_shades, ngray_shades);


	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_set_install_cmap(USER_OBJECT_ s_install_cmap)
{
	gint install_cmap = (gint)asInteger(s_install_cmap);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_preview_set_install_cmap(install_cmap);


	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_set_reserved(USER_OBJECT_ s_nreserved)
{
	gint nreserved = (gint)asInteger(s_nreserved);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_preview_set_reserved(nreserved);


	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_set_dither(USER_OBJECT_ s_object, USER_OBJECT_ s_dither)
{
	GtkPreview* object = GTK_PREVIEW(getPtrValue(s_object));
	GdkRgbDither dither = (GdkRgbDither)asEnum(s_dither, GDK_TYPE_RGB_DITHER);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_preview_set_dither(object, dither);


	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_get_visual()
{

	GdkVisual* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_preview_get_visual();

	_result = toRPointerWithRef(ans, "GdkVisual");

	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_get_cmap()
{

	GdkColormap* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_preview_get_cmap();

	_result = toRPointerWithRef(ans, "GdkColormap");

	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_get_info()
{

	GtkPreviewInfo* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_preview_get_info();

	_result = toRPointer(ans, "GtkPreviewInfo");

	return(_result);
}
 

USER_OBJECT_
S_gtk_preview_reset()
{

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_preview_reset();


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_set_show_text(USER_OBJECT_ s_object, USER_OBJECT_ s_show_text)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));
	gboolean show_text = (gboolean)asLogical(s_show_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_set_show_text(object, show_text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_set_text_alignment(USER_OBJECT_ s_object, USER_OBJECT_ s_x_align, USER_OBJECT_ s_y_align)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));
	gfloat x_align = (gfloat)asNumeric(s_x_align);
	gfloat y_align = (gfloat)asNumeric(s_y_align);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_set_text_alignment(object, x_align, y_align);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_set_format_string(USER_OBJECT_ s_object, USER_OBJECT_ s_format)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));
	const gchar* format = (const gchar*)asString(s_format);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_set_format_string(object, format);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_set_adjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));
	GtkAdjustment* adjustment = GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_set_adjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_configure(USER_OBJECT_ s_object, USER_OBJECT_ s_value, USER_OBJECT_ s_min, USER_OBJECT_ s_max)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));
	gdouble value = (gdouble)asNumeric(s_value);
	gdouble min = (gdouble)asNumeric(s_min);
	gdouble max = (gdouble)asNumeric(s_max);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_configure(object, value, min, max);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_set_percentage(USER_OBJECT_ s_object, USER_OBJECT_ s_percentage)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));
	gdouble percentage = (gdouble)asNumeric(s_percentage);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_set_percentage(object, percentage);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_set_value(USER_OBJECT_ s_object, USER_OBJECT_ s_value)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));
	gdouble value = (gdouble)asNumeric(s_value);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_set_value(object, value);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_get_value(USER_OBJECT_ s_object)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));

	gdouble ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_get_value(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_set_activity_mode(USER_OBJECT_ s_object, USER_OBJECT_ s_activity_mode)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));
	gboolean activity_mode = (gboolean)asLogical(s_activity_mode);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_set_activity_mode(object, activity_mode);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_get_current_text(USER_OBJECT_ s_object)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_get_current_text(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_get_text_from_value(USER_OBJECT_ s_object, USER_OBJECT_ s_value)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));
	gdouble value = (gdouble)asNumeric(s_value);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_get_text_from_value(object, value);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_get_current_percentage(USER_OBJECT_ s_object)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));

	gdouble ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_get_current_percentage(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_get_percentage_from_value(USER_OBJECT_ s_object, USER_OBJECT_ s_value)
{
	GtkProgress* object = GTK_PROGRESS(getPtrValue(s_object));
	gdouble value = (gdouble)asNumeric(s_value);

	gdouble ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_get_percentage_from_value(object, value);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_bar_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_bar_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_pulse(USER_OBJECT_ s_object)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_bar_pulse(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_set_text(USER_OBJECT_ s_object, USER_OBJECT_ s_text)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_bar_set_text(object, text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_set_fraction(USER_OBJECT_ s_object, USER_OBJECT_ s_fraction)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));
	gdouble fraction = (gdouble)asNumeric(s_fraction);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_bar_set_fraction(object, fraction);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_set_pulse_step(USER_OBJECT_ s_object, USER_OBJECT_ s_fraction)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));
	gdouble fraction = (gdouble)asNumeric(s_fraction);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_bar_set_pulse_step(object, fraction);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_set_orientation(USER_OBJECT_ s_object, USER_OBJECT_ s_orientation)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));
	GtkProgressBarOrientation orientation = (GtkProgressBarOrientation)asEnum(s_orientation, GTK_TYPE_PROGRESS_BAR_ORIENTATION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_bar_set_orientation(object, orientation);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_get_text(USER_OBJECT_ s_object)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_bar_get_text(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_get_fraction(USER_OBJECT_ s_object)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));

	gdouble ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_bar_get_fraction(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_get_pulse_step(USER_OBJECT_ s_object)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));

	gdouble ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_bar_get_pulse_step(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_get_orientation(USER_OBJECT_ s_object)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));

	GtkProgressBarOrientation ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_bar_get_orientation(object);

	_result = asREnum(ans, GTK_TYPE_PROGRESS_BAR_ORIENTATION);

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_new_with_adjustment(USER_OBJECT_ s_adjustment)
{
	GtkAdjustment* adjustment = GET_LENGTH(s_adjustment) == 0 ? NULL : GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_bar_new_with_adjustment(adjustment);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_set_bar_style(USER_OBJECT_ s_object, USER_OBJECT_ s_style)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));
	GtkProgressBarStyle style = (GtkProgressBarStyle)asEnum(s_style, GTK_TYPE_PROGRESS_BAR_STYLE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_bar_set_bar_style(object, style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_set_discrete_blocks(USER_OBJECT_ s_object, USER_OBJECT_ s_blocks)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));
	guint blocks = (guint)asNumeric(s_blocks);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_bar_set_discrete_blocks(object, blocks);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_set_activity_step(USER_OBJECT_ s_object, USER_OBJECT_ s_step)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));
	guint step = (guint)asNumeric(s_step);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_bar_set_activity_step(object, step);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_set_activity_blocks(USER_OBJECT_ s_object, USER_OBJECT_ s_blocks)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));
	guint blocks = (guint)asNumeric(s_blocks);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_bar_set_activity_blocks(object, blocks);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_update(USER_OBJECT_ s_object, USER_OBJECT_ s_percentage)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));
	gfloat percentage = (gfloat)asNumeric(s_percentage);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_bar_update(object, percentage);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_set_ellipsize(USER_OBJECT_ s_object, USER_OBJECT_ s_mode)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));
	PangoEllipsizeMode mode = (PangoEllipsizeMode)asEnum(s_mode, PANGO_TYPE_ELLIPSIZE_MODE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_progress_bar_set_ellipsize(object, mode);


	return(_result);
}
 

USER_OBJECT_
S_gtk_progress_bar_get_ellipsize(USER_OBJECT_ s_object)
{
	GtkProgressBar* object = GTK_PROGRESS_BAR(getPtrValue(s_object));

	PangoEllipsizeMode ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_progress_bar_get_ellipsize(object);

	_result = asREnum(ans, PANGO_TYPE_ELLIPSIZE_MODE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_action_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_action_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_action_new(USER_OBJECT_ s_name, USER_OBJECT_ s_label, USER_OBJECT_ s_tooltip, USER_OBJECT_ s_stock_id, USER_OBJECT_ s_value)
{
	char * prop_names[] = { "name", "label", "tooltip", "stock_id", "value", NULL };
	USER_OBJECT_ args[] = { s_name, s_label, s_tooltip, s_stock_id, s_value };

	GtkRadioAction* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_RADIO_ACTION, prop_names, args, 5);

	_result = toRPointerWithFinalizer(ans, "GtkRadioAction", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_action_set_group(USER_OBJECT_ s_object, USER_OBJECT_ s_group)
{
	GtkRadioAction* object = GTK_RADIO_ACTION(getPtrValue(s_object));
	GSList* group = asGSList(s_group);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_radio_action_set_group(object, group);

	CLEANUP(g_slist_free, (GSList*)group);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_action_get_group(USER_OBJECT_ s_object)
{
	GtkRadioAction* object = GTK_RADIO_ACTION(getPtrValue(s_object));

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_action_get_group(object);

	_result = asRGSListWithRef(ans, "GtkRadioAction");
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_action_get_current_value(USER_OBJECT_ s_object)
{
	GtkRadioAction* object = GTK_RADIO_ACTION(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_action_get_current_value(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_button_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_button_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_button_new(USER_OBJECT_ s_group)
{
	GSList* group = GET_LENGTH(s_group) == 0 ? NULL : asGSList(s_group);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_button_new(group);

	_result = toRPointer(ans, "GtkWidget");
	CLEANUP(g_slist_free, (GSList*)group);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_button_new_from_widget(USER_OBJECT_ s_group)
{
	GtkRadioButton* group = GTK_RADIO_BUTTON(getPtrValue(s_group));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_button_new_from_widget(group);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_button_new_with_label(USER_OBJECT_ s_group, USER_OBJECT_ s_label)
{
	GSList* group = GET_LENGTH(s_group) == 0 ? NULL : asGSList(s_group);
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_button_new_with_label(group, label);

	_result = toRPointer(ans, "GtkWidget");
	CLEANUP(g_slist_free, (GSList*)group);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_button_new_with_label_from_widget(USER_OBJECT_ s_group, USER_OBJECT_ s_label)
{
	GtkRadioButton* group = GTK_RADIO_BUTTON(getPtrValue(s_group));
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_button_new_with_label_from_widget(group, label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_button_new_with_mnemonic(USER_OBJECT_ s_group, USER_OBJECT_ s_label)
{
	GSList* group = asGSList(s_group);
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_button_new_with_mnemonic(group, label);

	_result = toRPointer(ans, "GtkWidget");
	CLEANUP(g_slist_free, (GSList*)group);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_button_new_with_mnemonic_from_widget(USER_OBJECT_ s_group, USER_OBJECT_ s_label)
{
	GtkRadioButton* group = GTK_RADIO_BUTTON(getPtrValue(s_group));
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_button_new_with_mnemonic_from_widget(group, label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_button_get_group(USER_OBJECT_ s_object)
{
	GtkRadioButton* object = GTK_RADIO_BUTTON(getPtrValue(s_object));

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_button_get_group(object);

	_result = asRGSList(ans, "GtkRadioButton");

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_button_set_group(USER_OBJECT_ s_object, USER_OBJECT_ s_group)
{
	GtkRadioButton* object = GTK_RADIO_BUTTON(getPtrValue(s_object));
	GSList* group = asGSList(s_group);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_radio_button_set_group(object, group);

	CLEANUP(g_slist_free, (GSList*)group);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_button_group(USER_OBJECT_ s_object)
{
	GtkRadioButton* object = GTK_RADIO_BUTTON(getPtrValue(s_object));

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_button_group(object);

	_result = asRGSList(ans, "GtkRadioButton");
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_menu_item_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_menu_item_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_menu_item_new(USER_OBJECT_ s_group)
{
	GSList* group = asGSList(s_group);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_menu_item_new(group);

	_result = toRPointer(ans, "GtkWidget");
	CLEANUP(g_slist_free, (GSList*)group);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_menu_item_new_with_label(USER_OBJECT_ s_group, USER_OBJECT_ s_label)
{
	GSList* group = asGSList(s_group);
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_menu_item_new_with_label(group, label);

	_result = toRPointer(ans, "GtkWidget");
	CLEANUP(g_slist_free, (GSList*)group);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_menu_item_new_with_mnemonic(USER_OBJECT_ s_group, USER_OBJECT_ s_label)
{
	GSList* group = asGSList(s_group);
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_menu_item_new_with_mnemonic(group, label);

	_result = toRPointer(ans, "GtkWidget");
	CLEANUP(g_slist_free, (GSList*)group);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_menu_item_new_from_widget(USER_OBJECT_ s_group)
{
	GtkRadioMenuItem* group = GTK_RADIO_MENU_ITEM(getPtrValue(s_group));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_menu_item_new_from_widget(group);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_menu_item_new_with_mnemonic_from_widget(USER_OBJECT_ s_group, USER_OBJECT_ s_label)
{
	GtkRadioMenuItem* group = GTK_RADIO_MENU_ITEM(getPtrValue(s_group));
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_menu_item_new_with_mnemonic_from_widget(group, label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_menu_item_new_with_label_from_widget(USER_OBJECT_ s_group, USER_OBJECT_ s_label)
{
	GtkRadioMenuItem* group = GTK_RADIO_MENU_ITEM(getPtrValue(s_group));
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_menu_item_new_with_label_from_widget(group, label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_menu_item_get_group(USER_OBJECT_ s_object)
{
	GtkRadioMenuItem* object = GTK_RADIO_MENU_ITEM(getPtrValue(s_object));

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_menu_item_get_group(object);

	_result = asRGSList(ans, "GtkRadioMenuItem");
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_menu_item_set_group(USER_OBJECT_ s_object, USER_OBJECT_ s_group)
{
	GtkRadioMenuItem* object = GTK_RADIO_MENU_ITEM(getPtrValue(s_object));
	GSList* group = asGSList(s_group);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_radio_menu_item_set_group(object, group);

	CLEANUP(g_slist_free, (GSList*)group);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_menu_item_group(USER_OBJECT_ s_object)
{
	GtkRadioMenuItem* object = GTK_RADIO_MENU_ITEM(getPtrValue(s_object));

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_menu_item_group(object);

	_result = asRGSList(ans, "GtkRadioMenuItem");
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_tool_button_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_tool_button_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_tool_button_new(USER_OBJECT_ s_group)
{
	GSList* group = asGSList(s_group);

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_tool_button_new(group);

	_result = toRPointer(ans, "GtkToolItem");
	CLEANUP(g_slist_free, (GSList*)group);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_tool_button_new_from_stock(USER_OBJECT_ s_group, USER_OBJECT_ s_stock_id)
{
	GSList* group = asGSList(s_group);
	const gchar* stock_id = (const gchar*)asString(s_stock_id);

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_tool_button_new_from_stock(group, stock_id);

	_result = toRPointer(ans, "GtkToolItem");
	CLEANUP(g_slist_free, (GSList*)group);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_tool_button_new_from_widget(USER_OBJECT_ s_group)
{
	GtkRadioToolButton* group = GTK_RADIO_TOOL_BUTTON(getPtrValue(s_group));

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_tool_button_new_from_widget(group);

	_result = toRPointer(ans, "GtkToolItem");

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_tool_button_new_with_stock_from_widget(USER_OBJECT_ s_group, USER_OBJECT_ s_stock_id)
{
	GtkRadioToolButton* group = GTK_RADIO_TOOL_BUTTON(getPtrValue(s_group));
	const gchar* stock_id = (const gchar*)asString(s_stock_id);

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_tool_button_new_with_stock_from_widget(group, stock_id);

	_result = toRPointer(ans, "GtkToolItem");

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_tool_button_set_group(USER_OBJECT_ s_object, USER_OBJECT_ s_group)
{
	GtkRadioToolButton* object = GTK_RADIO_TOOL_BUTTON(getPtrValue(s_object));
	GSList* group = asGSList(s_group);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_radio_tool_button_set_group(object, group);

	CLEANUP(g_slist_free, (GSList*)group);

	return(_result);
}
 

USER_OBJECT_
S_gtk_radio_tool_button_get_group(USER_OBJECT_ s_object)
{
	GtkRadioToolButton* object = GTK_RADIO_TOOL_BUTTON(getPtrValue(s_object));

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_radio_tool_button_get_group(object);

	_result = asRGSList(ans, "GtkRadioToolButton");
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_range_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_range_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_range_set_update_policy(USER_OBJECT_ s_object, USER_OBJECT_ s_policy)
{
	GtkRange* object = GTK_RANGE(getPtrValue(s_object));
	GtkUpdateType policy = (GtkUpdateType)asEnum(s_policy, GTK_TYPE_UPDATE_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_range_set_update_policy(object, policy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_range_get_update_policy(USER_OBJECT_ s_object)
{
	GtkRange* object = GTK_RANGE(getPtrValue(s_object));

	GtkUpdateType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_range_get_update_policy(object);

	_result = asREnum(ans, GTK_TYPE_UPDATE_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_range_set_adjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkRange* object = GTK_RANGE(getPtrValue(s_object));
	GtkAdjustment* adjustment = GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_range_set_adjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_range_get_adjustment(USER_OBJECT_ s_object)
{
	GtkRange* object = GTK_RANGE(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_range_get_adjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_range_set_inverted(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkRange* object = GTK_RANGE(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_range_set_inverted(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_range_get_inverted(USER_OBJECT_ s_object)
{
	GtkRange* object = GTK_RANGE(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_range_get_inverted(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_range_set_increments(USER_OBJECT_ s_object, USER_OBJECT_ s_step, USER_OBJECT_ s_page)
{
	GtkRange* object = GTK_RANGE(getPtrValue(s_object));
	gdouble step = (gdouble)asNumeric(s_step);
	gdouble page = (gdouble)asNumeric(s_page);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_range_set_increments(object, step, page);


	return(_result);
}
 

USER_OBJECT_
S_gtk_range_set_range(USER_OBJECT_ s_object, USER_OBJECT_ s_min, USER_OBJECT_ s_max)
{
	GtkRange* object = GTK_RANGE(getPtrValue(s_object));
	gdouble min = (gdouble)asNumeric(s_min);
	gdouble max = (gdouble)asNumeric(s_max);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_range_set_range(object, min, max);


	return(_result);
}
 

USER_OBJECT_
S_gtk_range_set_value(USER_OBJECT_ s_object, USER_OBJECT_ s_value)
{
	GtkRange* object = GTK_RANGE(getPtrValue(s_object));
	gdouble value = (gdouble)asNumeric(s_value);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_range_set_value(object, value);


	return(_result);
}
 

USER_OBJECT_
S_gtk_range_get_value(USER_OBJECT_ s_object)
{
	GtkRange* object = GTK_RANGE(getPtrValue(s_object));

	gdouble ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_range_get_value(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_add_default_file(USER_OBJECT_ s_filename)
{
	const gchar* filename = (const gchar*)asString(s_filename);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_rc_add_default_file(filename);


	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_set_default_files(USER_OBJECT_ s_filenames)
{
	gchar** filenames = (gchar**)asStringArray(s_filenames);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_rc_set_default_files(filenames);


	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_get_default_files()
{

	gchar** ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_get_default_files();

	_result = asRStringArray(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_get_style(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GtkStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_get_style(object);

	_result = toRPointerWithRef(ans, "GtkStyle");

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_get_style_by_paths(USER_OBJECT_ s_settings, USER_OBJECT_ s_widget_path, USER_OBJECT_ s_class_path, USER_OBJECT_ s_type)
{
	GtkSettings* settings = GTK_SETTINGS(getPtrValue(s_settings));
	const char* widget_path = (const char*)asString(s_widget_path);
	const char* class_path = (const char*)asString(s_class_path);
	GType type = (GType)asNumeric(s_type);

	GtkStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_get_style_by_paths(settings, widget_path, class_path, type);

	_result = toRPointerWithRef(ans, "GtkStyle");

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_reparse_all_for_settings(USER_OBJECT_ s_settings, USER_OBJECT_ s_force_load)
{
	GtkSettings* settings = GTK_SETTINGS(getPtrValue(s_settings));
	gboolean force_load = (gboolean)asLogical(s_force_load);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_reparse_all_for_settings(settings, force_load);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_reset_styles(USER_OBJECT_ s_settings)
{
	GtkSettings* settings = GTK_SETTINGS(getPtrValue(s_settings));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_rc_reset_styles(settings);


	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_find_pixmap_in_path(USER_OBJECT_ s_settings, USER_OBJECT_ s_scanner, USER_OBJECT_ s_pixmap_file)
{
	GtkSettings* settings = GTK_SETTINGS(getPtrValue(s_settings));
	GScanner* scanner = GET_LENGTH(s_scanner) == 0 ? NULL : (GScanner*)getPtrValue(s_scanner);
	const gchar* pixmap_file = (const gchar*)asString(s_pixmap_file);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_find_pixmap_in_path(settings, scanner, pixmap_file);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_parse(USER_OBJECT_ s_filename)
{
	const gchar* filename = (const gchar*)asString(s_filename);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_rc_parse(filename);


	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_parse_string(USER_OBJECT_ s_rc_string)
{
	const gchar* rc_string = (const gchar*)asString(s_rc_string);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_rc_parse_string(rc_string);


	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_reparse_all()
{

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_reparse_all();

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_add_widget_name_style(USER_OBJECT_ s_object, USER_OBJECT_ s_pattern)
{
	GtkRcStyle* object = GTK_RC_STYLE(getPtrValue(s_object));
	const gchar* pattern = (const gchar*)asString(s_pattern);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_rc_add_widget_name_style(object, pattern);


	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_add_widget_class_style(USER_OBJECT_ s_object, USER_OBJECT_ s_pattern)
{
	GtkRcStyle* object = GTK_RC_STYLE(getPtrValue(s_object));
	const gchar* pattern = (const gchar*)asString(s_pattern);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_rc_add_widget_class_style(object, pattern);


	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_add_class_style(USER_OBJECT_ s_object, USER_OBJECT_ s_pattern)
{
	GtkRcStyle* object = GTK_RC_STYLE(getPtrValue(s_object));
	const gchar* pattern = (const gchar*)asString(s_pattern);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_rc_add_class_style(object, pattern);


	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_style_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_style_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_style_new()
{

	GtkRcStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_style_new();

	_result = toRPointerWithFinalizer(ans, "GtkRcStyle", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_style_copy(USER_OBJECT_ s_object)
{
	GtkRcStyle* object = GTK_RC_STYLE(getPtrValue(s_object));

	GtkRcStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_style_copy(object);

	_result = toRPointerWithFinalizer(ans, "GtkRcStyle", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_style_ref(USER_OBJECT_ s_object)
{
	GtkRcStyle* object = GTK_RC_STYLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_rc_style_ref(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_style_unref(USER_OBJECT_ s_object)
{
	GtkRcStyle* object = GTK_RC_STYLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_rc_style_unref(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_find_module_in_path(USER_OBJECT_ s_module_file)
{
	const gchar* module_file = (const gchar*)asString(s_module_file);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_find_module_in_path(module_file);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_get_theme_dir()
{

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_get_theme_dir();

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_get_module_dir()
{

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_get_module_dir();

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_get_im_module_path()
{

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_get_im_module_path();

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_get_im_module_file()
{

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_get_im_module_file();

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_scanner_new()
{

	GScanner* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_scanner_new();

	_result = toRPointer(ans, "GScanner");

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_parse_color(USER_OBJECT_ s_scanner, USER_OBJECT_ s_color)
{
	GScanner* scanner = (GScanner*)getPtrValue(s_scanner);
	GdkColor* color = asGdkColor(s_color);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_parse_color(scanner, color);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_parse_state(USER_OBJECT_ s_scanner, USER_OBJECT_ s_state)
{
	GScanner* scanner = (GScanner*)getPtrValue(s_scanner);
	GtkStateType* state = (GtkStateType*)asEnum(s_state, GTK_TYPE_STATE_TYPE);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_parse_state(scanner, state);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_parse_priority(USER_OBJECT_ s_scanner, USER_OBJECT_ s_priority)
{
	GScanner* scanner = (GScanner*)getPtrValue(s_scanner);
	GtkPathPriorityType* priority = (GtkPathPriorityType*)asEnum(s_priority, GTK_TYPE_PATH_PRIORITY_TYPE);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_rc_parse_priority(scanner, priority);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ruler_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ruler_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ruler_set_metric(USER_OBJECT_ s_object, USER_OBJECT_ s_metric)
{
	GtkRuler* object = GTK_RULER(getPtrValue(s_object));
	GtkMetricType metric = (GtkMetricType)asEnum(s_metric, GTK_TYPE_METRIC_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ruler_set_metric(object, metric);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ruler_set_range(USER_OBJECT_ s_object, USER_OBJECT_ s_lower, USER_OBJECT_ s_upper, USER_OBJECT_ s_position, USER_OBJECT_ s_max_size)
{
	GtkRuler* object = GTK_RULER(getPtrValue(s_object));
	gdouble lower = (gdouble)asNumeric(s_lower);
	gdouble upper = (gdouble)asNumeric(s_upper);
	gdouble position = (gdouble)asNumeric(s_position);
	gdouble max_size = (gdouble)asNumeric(s_max_size);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ruler_set_range(object, lower, upper, position, max_size);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ruler_draw_ticks(USER_OBJECT_ s_object)
{
	GtkRuler* object = GTK_RULER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ruler_draw_ticks(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ruler_draw_pos(USER_OBJECT_ s_object)
{
	GtkRuler* object = GTK_RULER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ruler_draw_pos(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ruler_get_metric(USER_OBJECT_ s_object)
{
	GtkRuler* object = GTK_RULER(getPtrValue(s_object));

	GtkMetricType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ruler_get_metric(object);

	_result = asREnum(ans, GTK_TYPE_METRIC_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ruler_get_range(USER_OBJECT_ s_object)
{
	GtkRuler* object = GTK_RULER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gdouble lower;
	gdouble upper;
	gdouble position;
	gdouble max_size;

	gtk_ruler_get_range(object, &lower, &upper, &position, &max_size);


	_result = retByVal(_result, "lower", asRNumeric(lower), "upper", asRNumeric(upper), "position", asRNumeric(position), "max_size", asRNumeric(max_size), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_scale_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scale_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_scale_set_digits(USER_OBJECT_ s_object, USER_OBJECT_ s_digits)
{
	GtkScale* object = GTK_SCALE(getPtrValue(s_object));
	gint digits = (gint)asInteger(s_digits);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_scale_set_digits(object, digits);


	return(_result);
}
 

USER_OBJECT_
S_gtk_scale_get_digits(USER_OBJECT_ s_object)
{
	GtkScale* object = GTK_SCALE(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scale_get_digits(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_scale_set_draw_value(USER_OBJECT_ s_object, USER_OBJECT_ s_draw_value)
{
	GtkScale* object = GTK_SCALE(getPtrValue(s_object));
	gboolean draw_value = (gboolean)asLogical(s_draw_value);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_scale_set_draw_value(object, draw_value);


	return(_result);
}
 

USER_OBJECT_
S_gtk_scale_get_draw_value(USER_OBJECT_ s_object)
{
	GtkScale* object = GTK_SCALE(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scale_get_draw_value(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_scale_set_value_pos(USER_OBJECT_ s_object, USER_OBJECT_ s_pos)
{
	GtkScale* object = GTK_SCALE(getPtrValue(s_object));
	GtkPositionType pos = (GtkPositionType)asEnum(s_pos, GTK_TYPE_POSITION_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_scale_set_value_pos(object, pos);


	return(_result);
}
 

USER_OBJECT_
S_gtk_scale_get_value_pos(USER_OBJECT_ s_object)
{
	GtkScale* object = GTK_SCALE(getPtrValue(s_object));

	GtkPositionType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scale_get_value_pos(object);

	_result = asREnum(ans, GTK_TYPE_POSITION_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_scale_get_layout(USER_OBJECT_ s_object)
{
	GtkScale* object = GTK_SCALE(getPtrValue(s_object));

	PangoLayout* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scale_get_layout(object);

	_result = toRPointerWithRef(ans, "PangoLayout");

	return(_result);
}
 

USER_OBJECT_
S_gtk_scale_get_layout_offsets(USER_OBJECT_ s_object)
{
	GtkScale* object = GTK_SCALE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint x;
	gint y;

	gtk_scale_get_layout_offsets(object, &x, &y);


	_result = retByVal(_result, "x", asRInteger(x), "y", asRInteger(y), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_scrollbar_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scrollbar_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scrolled_window_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_new(USER_OBJECT_ s_hadjustment, USER_OBJECT_ s_vadjustment)
{
	char * prop_names[] = { "hadjustment", "vadjustment", NULL };
	USER_OBJECT_ args[] = { s_hadjustment, s_vadjustment };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_SCROLLED_WINDOW, prop_names, args, 2);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_set_hadjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_hadjustment)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));
	GtkAdjustment* hadjustment = GTK_ADJUSTMENT(getPtrValue(s_hadjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_scrolled_window_set_hadjustment(object, hadjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_set_vadjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_hadjustment)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));
	GtkAdjustment* hadjustment = GTK_ADJUSTMENT(getPtrValue(s_hadjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_scrolled_window_set_vadjustment(object, hadjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_get_hadjustment(USER_OBJECT_ s_object)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scrolled_window_get_hadjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_get_vadjustment(USER_OBJECT_ s_object)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scrolled_window_get_vadjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_get_hscrollbar(USER_OBJECT_ s_object)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scrolled_window_get_hscrollbar(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_get_vscrollbar(USER_OBJECT_ s_object)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scrolled_window_get_vscrollbar(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_set_policy(USER_OBJECT_ s_object, USER_OBJECT_ s_hscrollbar_policy, USER_OBJECT_ s_vscrollbar_policy)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));
	GtkPolicyType hscrollbar_policy = (GtkPolicyType)asEnum(s_hscrollbar_policy, GTK_TYPE_POLICY_TYPE);
	GtkPolicyType vscrollbar_policy = (GtkPolicyType)asEnum(s_vscrollbar_policy, GTK_TYPE_POLICY_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_scrolled_window_set_policy(object, hscrollbar_policy, vscrollbar_policy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_get_policy(USER_OBJECT_ s_object)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkPolicyType hscrollbar_policy;
	GtkPolicyType vscrollbar_policy;

	gtk_scrolled_window_get_policy(object, &hscrollbar_policy, &vscrollbar_policy);


	_result = retByVal(_result, "hscrollbar_policy", asREnum(hscrollbar_policy, GTK_TYPE_POLICY_TYPE), "vscrollbar_policy", asREnum(vscrollbar_policy, GTK_TYPE_POLICY_TYPE), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_set_placement(USER_OBJECT_ s_object, USER_OBJECT_ s_window_placement)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));
	GtkCornerType window_placement = (GtkCornerType)asEnum(s_window_placement, GTK_TYPE_CORNER_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_scrolled_window_set_placement(object, window_placement);


	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_get_placement(USER_OBJECT_ s_object)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));

	GtkCornerType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scrolled_window_get_placement(object);

	_result = asREnum(ans, GTK_TYPE_CORNER_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_set_shadow_type(USER_OBJECT_ s_object, USER_OBJECT_ s_type)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));
	GtkShadowType type = (GtkShadowType)asEnum(s_type, GTK_TYPE_SHADOW_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_scrolled_window_set_shadow_type(object, type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_get_shadow_type(USER_OBJECT_ s_object)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));

	GtkShadowType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_scrolled_window_get_shadow_type(object);

	_result = asREnum(ans, GTK_TYPE_SHADOW_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_scrolled_window_add_with_viewport(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkScrolledWindow* object = GTK_SCROLLED_WINDOW(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_scrolled_window_add_with_viewport(object, child);


	return(_result);
}
 

USER_OBJECT_
S_gtk_target_list_new(USER_OBJECT_ s_targets)
{
	const GtkTargetEntry* targets = (const GtkTargetEntry*)asArrayRef(s_targets, GtkTargetEntry, asGtkTargetEntry);
	guint ntargets = (guint)GET_LENGTH(s_targets);

	GtkTargetList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_target_list_new(targets, ntargets);

	_result = toRPointerWithFinalizer(ans, "GtkTargetList", (RPointerFinalizer) gtk_target_list_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_target_list_ref(USER_OBJECT_ s_object)
{
	GtkTargetList* object = (GtkTargetList*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_target_list_ref(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_target_list_unref(USER_OBJECT_ s_object)
{
	GtkTargetList* object = (GtkTargetList*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_target_list_unref(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_target_list_add(USER_OBJECT_ s_object, USER_OBJECT_ s_target, USER_OBJECT_ s_flags, USER_OBJECT_ s_info)
{
	GtkTargetList* object = (GtkTargetList*)getPtrValue(s_object);
	GdkAtom target = asGdkAtom(s_target);
	guint flags = (guint)asNumeric(s_flags);
	guint info = (guint)asNumeric(s_info);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_target_list_add(object, target, flags, info);


	return(_result);
}
 

USER_OBJECT_
S_gtk_target_list_add_table(USER_OBJECT_ s_object, USER_OBJECT_ s_targets)
{
	GtkTargetList* object = (GtkTargetList*)getPtrValue(s_object);
	const GtkTargetEntry* targets = (const GtkTargetEntry*)asArrayRef(s_targets, GtkTargetEntry, asGtkTargetEntry);
	guint ntargets = (guint)GET_LENGTH(s_targets);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_target_list_add_table(object, targets, ntargets);


	return(_result);
}
 

USER_OBJECT_
S_gtk_target_list_remove(USER_OBJECT_ s_object, USER_OBJECT_ s_target)
{
	GtkTargetList* object = (GtkTargetList*)getPtrValue(s_object);
	GdkAtom target = asGdkAtom(s_target);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_target_list_remove(object, target);


	return(_result);
}
 

USER_OBJECT_
S_gtk_target_list_find(USER_OBJECT_ s_object, USER_OBJECT_ s_target)
{
	GtkTargetList* object = (GtkTargetList*)getPtrValue(s_object);
	GdkAtom target = asGdkAtom(s_target);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	guint info;

	ans = gtk_target_list_find(object, target, &info);

	_result = asRLogical(ans);

	_result = retByVal(_result, "info", asRNumeric(info), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_owner_set(USER_OBJECT_ s_object, USER_OBJECT_ s_selection, USER_OBJECT_ s_time)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkAtom selection = asGdkAtom(s_selection);
	guint32 time = (guint32)asNumeric(s_time);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_owner_set(object, selection, time);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_owner_set_for_display(USER_OBJECT_ s_display, USER_OBJECT_ s_widget, USER_OBJECT_ s_selection, USER_OBJECT_ s_time)
{
	GdkDisplay* display = GDK_DISPLAY_OBJECT(getPtrValue(s_display));
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	GdkAtom selection = asGdkAtom(s_selection);
	guint32 time = (guint32)asNumeric(s_time);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_owner_set_for_display(display, widget, selection, time);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_add_target(USER_OBJECT_ s_object, USER_OBJECT_ s_selection, USER_OBJECT_ s_target, USER_OBJECT_ s_info)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkAtom selection = asGdkAtom(s_selection);
	GdkAtom target = asGdkAtom(s_target);
	guint info = (guint)asNumeric(s_info);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_selection_add_target(object, selection, target, info);


	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_add_targets(USER_OBJECT_ s_object, USER_OBJECT_ s_selection, USER_OBJECT_ s_targets)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkAtom selection = asGdkAtom(s_selection);
	const GtkTargetEntry* targets = (const GtkTargetEntry*)asArrayRef(s_targets, GtkTargetEntry, asGtkTargetEntry);
	guint ntargets = (guint)GET_LENGTH(s_targets);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_selection_add_targets(object, selection, targets, ntargets);


	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_clear_targets(USER_OBJECT_ s_object, USER_OBJECT_ s_selection)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkAtom selection = asGdkAtom(s_selection);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_selection_clear_targets(object, selection);


	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_convert(USER_OBJECT_ s_object, USER_OBJECT_ s_selection, USER_OBJECT_ s_target, USER_OBJECT_ s_time)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkAtom selection = asGdkAtom(s_selection);
	GdkAtom target = asGdkAtom(s_target);
	guint32 time = (guint32)asNumeric(s_time);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_convert(object, selection, target, time);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_set(USER_OBJECT_ s_object, USER_OBJECT_ s_type, USER_OBJECT_ s_data)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);
	GdkAtom type = asGdkAtom(s_type);
	gint format = (gint)GET_LENGTH(s_data);
	const guchar* data = (const guchar*)asArray(s_data, guchar, asInteger);
	gint length = (gint)GET_LENGTH(s_data);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_selection_data_set(object, type, format, data, length);


	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_set_text(USER_OBJECT_ s_object, USER_OBJECT_ s_str, USER_OBJECT_ s_len)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);
	const gchar* str = (const gchar*)asString(s_str);
	gint len = (gint)asInteger(s_len);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_data_set_text(object, str, len);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_get_text(USER_OBJECT_ s_object)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);

	guchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_data_get_text(object);

	_result = asRIntegerArray(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_get_targets(USER_OBJECT_ s_object)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkAtom* targets = NULL;
	gint n_atoms;

	ans = gtk_selection_data_get_targets(object, &targets, &n_atoms);

	_result = asRLogical(ans);

	_result = retByVal(_result, "targets", asRArrayWithSize(targets, asRGdkAtom, n_atoms), "n_atoms", asRInteger(n_atoms), NULL);
	CLEANUP(g_free, targets);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_targets_include_text(USER_OBJECT_ s_object)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_data_targets_include_text(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_remove_all(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_selection_remove_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_clear(USER_OBJECT_ s_object, USER_OBJECT_ s_event)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkEventSelection* event = (GdkEventSelection*)getPtrValue(s_event);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_clear(object, event);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_data_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_copy(USER_OBJECT_ s_object)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);

	GtkSelectionData* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_data_copy(object);

	_result = toRPointerWithFinalizer(ans, "GtkSelectionData", (RPointerFinalizer) gtk_selection_data_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_free(USER_OBJECT_ s_object)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_selection_data_free(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_set_pixbuf(USER_OBJECT_ s_object, USER_OBJECT_ s_pixbuf)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);
	GdkPixbuf* pixbuf = GDK_PIXBUF(getPtrValue(s_pixbuf));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_data_set_pixbuf(object, pixbuf);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_get_pixbuf(USER_OBJECT_ s_object)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_data_get_pixbuf(object);

	_result = toRPointerWithFinalizer(ans, "GdkPixbuf", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_set_uris(USER_OBJECT_ s_object, USER_OBJECT_ s_uris)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);
	gchar** uris = (gchar**)asStringArray(s_uris);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_data_set_uris(object, uris);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_get_uris(USER_OBJECT_ s_object)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);

	gchar** ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_data_get_uris(object);

	_result = asRStringArray(ans);
	CLEANUP(g_strfreev, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_selection_data_targets_include_image(USER_OBJECT_ s_object, USER_OBJECT_ s_writable)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);
	gboolean writable = (gboolean)asLogical(s_writable);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_selection_data_targets_include_image(object, writable);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_separator_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_separator_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_separator_menu_item_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_separator_menu_item_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_separator_menu_item_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_separator_menu_item_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_separator_tool_item_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_separator_tool_item_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_separator_tool_item_new()
{

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_separator_tool_item_new();

	_result = toRPointer(ans, "GtkToolItem");

	return(_result);
}
 

USER_OBJECT_
S_gtk_separator_tool_item_get_draw(USER_OBJECT_ s_object)
{
	GtkSeparatorToolItem* object = GTK_SEPARATOR_TOOL_ITEM(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_separator_tool_item_get_draw(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_separator_tool_item_set_draw(USER_OBJECT_ s_object, USER_OBJECT_ s_draw)
{
	GtkSeparatorToolItem* object = GTK_SEPARATOR_TOOL_ITEM(getPtrValue(s_object));
	gboolean draw = (gboolean)asLogical(s_draw);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_separator_tool_item_set_draw(object, draw);


	return(_result);
}
 

USER_OBJECT_
S_gtk_settings_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_settings_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_settings_get_default()
{

	GtkSettings* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_settings_get_default();

	_result = toRPointerWithRef(ans, "GtkSettings");

	return(_result);
}
 

USER_OBJECT_
S_gtk_settings_get_for_screen(USER_OBJECT_ s_screen)
{
	GdkScreen* screen = GDK_SCREEN(getPtrValue(s_screen));

	GtkSettings* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_settings_get_for_screen(screen);

	_result = toRPointerWithRef(ans, "GtkSettings");

	return(_result);
}
 

USER_OBJECT_
S_gtk_settings_install_property(USER_OBJECT_ s_pspec)
{
	GParamSpec* pspec = asGParamSpec(s_pspec);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_settings_install_property(pspec);

	CLEANUP(g_param_spec_sink, (GParamSpec*)pspec);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_property_parse_color(USER_OBJECT_ s_pspec, USER_OBJECT_ s_gstring)
{
	const GParamSpec* pspec = asGParamSpec(s_pspec);
	const GString* gstring = asGString(s_gstring);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GValue* property_value = (GValue *)g_new0(GValue, 1);

	ans = gtk_rc_property_parse_color(pspec, gstring, property_value);

	_result = asRLogical(ans);

	_result = retByVal(_result, "property_value", asRGValue(property_value), NULL);
	CLEANUP(g_param_spec_sink, (GParamSpec*)pspec);
	CLEANUP(free_g_string, (GString*)gstring);
	CLEANUP(g_value_unset, property_value);
	CLEANUP(g_free, property_value);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_property_parse_enum(USER_OBJECT_ s_pspec, USER_OBJECT_ s_gstring)
{
	const GParamSpec* pspec = asGParamSpec(s_pspec);
	const GString* gstring = asGString(s_gstring);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GValue* property_value = (GValue *)g_new0(GValue, 1);

	ans = gtk_rc_property_parse_enum(pspec, gstring, property_value);

	_result = asRLogical(ans);

	_result = retByVal(_result, "property_value", asRGValue(property_value), NULL);
	CLEANUP(g_param_spec_sink, (GParamSpec*)pspec);
	CLEANUP(free_g_string, (GString*)gstring);
	CLEANUP(g_value_unset, property_value);
	CLEANUP(g_free, property_value);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_property_parse_flags(USER_OBJECT_ s_pspec, USER_OBJECT_ s_gstring)
{
	const GParamSpec* pspec = asGParamSpec(s_pspec);
	const GString* gstring = asGString(s_gstring);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GValue* property_value = (GValue *)g_new0(GValue, 1);

	ans = gtk_rc_property_parse_flags(pspec, gstring, property_value);

	_result = asRLogical(ans);

	_result = retByVal(_result, "property_value", asRGValue(property_value), NULL);
	CLEANUP(g_param_spec_sink, (GParamSpec*)pspec);
	CLEANUP(free_g_string, (GString*)gstring);
	CLEANUP(g_value_unset, property_value);
	CLEANUP(g_free, property_value);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_property_parse_requisition(USER_OBJECT_ s_pspec, USER_OBJECT_ s_gstring)
{
	const GParamSpec* pspec = asGParamSpec(s_pspec);
	const GString* gstring = asGString(s_gstring);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GValue* property_value = (GValue *)g_new0(GValue, 1);

	ans = gtk_rc_property_parse_requisition(pspec, gstring, property_value);

	_result = asRLogical(ans);

	_result = retByVal(_result, "property_value", asRGValue(property_value), NULL);
	CLEANUP(g_param_spec_sink, (GParamSpec*)pspec);
	CLEANUP(free_g_string, (GString*)gstring);
	CLEANUP(g_value_unset, property_value);
	CLEANUP(g_free, property_value);

	return(_result);
}
 

USER_OBJECT_
S_gtk_rc_property_parse_border(USER_OBJECT_ s_pspec, USER_OBJECT_ s_gstring)
{
	const GParamSpec* pspec = asGParamSpec(s_pspec);
	const GString* gstring = asGString(s_gstring);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GValue* property_value = (GValue *)g_new0(GValue, 1);

	ans = gtk_rc_property_parse_border(pspec, gstring, property_value);

	_result = asRLogical(ans);

	_result = retByVal(_result, "property_value", asRGValue(property_value), NULL);
	CLEANUP(g_param_spec_sink, (GParamSpec*)pspec);
	CLEANUP(free_g_string, (GString*)gstring);
	CLEANUP(g_value_unset, property_value);
	CLEANUP(g_free, property_value);

	return(_result);
}
 

USER_OBJECT_
S_gtk_settings_set_property_value(USER_OBJECT_ s_object, USER_OBJECT_ s_name, USER_OBJECT_ s_svalue)
{
	GtkSettings* object = GTK_SETTINGS(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);
	const GtkSettingsValue* svalue = asGtkSettingsValue(s_svalue);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_settings_set_property_value(object, name, svalue);


	return(_result);
}
 

USER_OBJECT_
S_gtk_settings_set_string_property(USER_OBJECT_ s_object, USER_OBJECT_ s_name, USER_OBJECT_ s_v_string, USER_OBJECT_ s_origin)
{
	GtkSettings* object = GTK_SETTINGS(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);
	const gchar* v_string = (const gchar*)asString(s_v_string);
	const gchar* origin = (const gchar*)asString(s_origin);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_settings_set_string_property(object, name, v_string, origin);


	return(_result);
}
 

USER_OBJECT_
S_gtk_settings_set_long_property(USER_OBJECT_ s_object, USER_OBJECT_ s_name, USER_OBJECT_ s_v_long, USER_OBJECT_ s_origin)
{
	GtkSettings* object = GTK_SETTINGS(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);
	glong v_long = (glong)asNumeric(s_v_long);
	const gchar* origin = (const gchar*)asString(s_origin);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_settings_set_long_property(object, name, v_long, origin);


	return(_result);
}
 

USER_OBJECT_
S_gtk_settings_set_double_property(USER_OBJECT_ s_object, USER_OBJECT_ s_name, USER_OBJECT_ s_v_double, USER_OBJECT_ s_origin)
{
	GtkSettings* object = GTK_SETTINGS(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);
	gdouble v_double = (gdouble)asNumeric(s_v_double);
	const gchar* origin = (const gchar*)asString(s_origin);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_settings_set_double_property(object, name, v_double, origin);


	return(_result);
}
 

USER_OBJECT_
S_gtk_size_group_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_size_group_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_size_group_new(USER_OBJECT_ s_mode)
{
	char * prop_names[] = { "mode", NULL };
	USER_OBJECT_ args[] = { s_mode };

	GtkSizeGroup* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_SIZE_GROUP, prop_names, args, 1);

	_result = toRPointerWithFinalizer(ans, "GtkSizeGroup", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_size_group_set_mode(USER_OBJECT_ s_object, USER_OBJECT_ s_mode)
{
	GtkSizeGroup* object = GTK_SIZE_GROUP(getPtrValue(s_object));
	GtkSizeGroupMode mode = (GtkSizeGroupMode)asEnum(s_mode, GTK_TYPE_SIZE_GROUP_MODE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_size_group_set_mode(object, mode);


	return(_result);
}
 

USER_OBJECT_
S_gtk_size_group_get_mode(USER_OBJECT_ s_object)
{
	GtkSizeGroup* object = GTK_SIZE_GROUP(getPtrValue(s_object));

	GtkSizeGroupMode ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_size_group_get_mode(object);

	_result = asREnum(ans, GTK_TYPE_SIZE_GROUP_MODE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_size_group_set_ignore_hidden(USER_OBJECT_ s_object, USER_OBJECT_ s_ignore_hidden)
{
	GtkSizeGroup* object = GTK_SIZE_GROUP(getPtrValue(s_object));
	gboolean ignore_hidden = (gboolean)asLogical(s_ignore_hidden);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_size_group_set_ignore_hidden(object, ignore_hidden);


	return(_result);
}
 

USER_OBJECT_
S_gtk_size_group_get_ignore_hidden(USER_OBJECT_ s_object)
{
	GtkSizeGroup* object = GTK_SIZE_GROUP(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_size_group_get_ignore_hidden(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_size_group_add_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_widget)
{
	GtkSizeGroup* object = GTK_SIZE_GROUP(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_size_group_add_widget(object, widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_size_group_remove_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_widget)
{
	GtkSizeGroup* object = GTK_SIZE_GROUP(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_size_group_remove_widget(object, widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_socket_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_socket_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_socket_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_socket_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_socket_add_id(USER_OBJECT_ s_object, USER_OBJECT_ s_window_id)
{
	GtkSocket* object = GTK_SOCKET(getPtrValue(s_object));
	GdkNativeWindow window_id = asGdkNativeWindow(s_window_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_socket_add_id(object, window_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_socket_get_id(USER_OBJECT_ s_object)
{
	GtkSocket* object = GTK_SOCKET(getPtrValue(s_object));

	GdkNativeWindow ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_socket_get_id(object);

	_result = asRGdkNativeWindow(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_socket_steal(USER_OBJECT_ s_object, USER_OBJECT_ s_wid)
{
	GtkSocket* object = GTK_SOCKET(getPtrValue(s_object));
	GdkNativeWindow wid = asGdkNativeWindow(s_wid);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_socket_steal(object, wid);


	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_spin_button_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_configure(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment, USER_OBJECT_ s_climb_rate, USER_OBJECT_ s_digits)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));
	GtkAdjustment* adjustment = GET_LENGTH(s_adjustment) == 0 ? NULL : GTK_ADJUSTMENT(getPtrValue(s_adjustment));
	gdouble climb_rate = (gdouble)asNumeric(s_climb_rate);
	guint digits = (guint)asNumeric(s_digits);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_spin_button_configure(object, adjustment, climb_rate, digits);


	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_new(USER_OBJECT_ s_adjustment, USER_OBJECT_ s_climb_rate, USER_OBJECT_ s_digits)
{
	char * prop_names[] = { "adjustment", "climb_rate", "digits", NULL };
	USER_OBJECT_ args[] = { s_adjustment, s_climb_rate, s_digits };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_SPIN_BUTTON, prop_names, args, 3);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_new_with_range(USER_OBJECT_ s_min, USER_OBJECT_ s_max, USER_OBJECT_ s_step)
{
	gdouble min = (gdouble)asNumeric(s_min);
	gdouble max = (gdouble)asNumeric(s_max);
	gdouble step = (gdouble)asNumeric(s_step);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_spin_button_new_with_range(min, max, step);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_set_adjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));
	GtkAdjustment* adjustment = GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_spin_button_set_adjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_get_adjustment(USER_OBJECT_ s_object)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_spin_button_get_adjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_set_digits(USER_OBJECT_ s_object, USER_OBJECT_ s_digits)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));
	guint digits = (guint)asNumeric(s_digits);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_spin_button_set_digits(object, digits);


	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_get_digits(USER_OBJECT_ s_object)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_spin_button_get_digits(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_set_increments(USER_OBJECT_ s_object, USER_OBJECT_ s_step, USER_OBJECT_ s_page)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));
	gdouble step = (gdouble)asNumeric(s_step);
	gdouble page = (gdouble)asNumeric(s_page);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_spin_button_set_increments(object, step, page);


	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_get_increments(USER_OBJECT_ s_object)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gdouble step;
	gdouble page;

	gtk_spin_button_get_increments(object, &step, &page);


	_result = retByVal(_result, "step", asRNumeric(step), "page", asRNumeric(page), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_set_range(USER_OBJECT_ s_object, USER_OBJECT_ s_min, USER_OBJECT_ s_max)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));
	gdouble min = (gdouble)asNumeric(s_min);
	gdouble max = (gdouble)asNumeric(s_max);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_spin_button_set_range(object, min, max);


	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_get_range(USER_OBJECT_ s_object)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gdouble min;
	gdouble max;

	gtk_spin_button_get_range(object, &min, &max);


	_result = retByVal(_result, "min", asRNumeric(min), "max", asRNumeric(max), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_get_value(USER_OBJECT_ s_object)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));

	gdouble ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_spin_button_get_value(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_get_value_as_int(USER_OBJECT_ s_object)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_spin_button_get_value_as_int(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_set_value(USER_OBJECT_ s_object, USER_OBJECT_ s_value)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));
	gdouble value = (gdouble)asNumeric(s_value);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_spin_button_set_value(object, value);


	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_set_update_policy(USER_OBJECT_ s_object, USER_OBJECT_ s_policy)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));
	GtkSpinButtonUpdatePolicy policy = (GtkSpinButtonUpdatePolicy)asEnum(s_policy, GTK_TYPE_SPIN_BUTTON_UPDATE_POLICY);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_spin_button_set_update_policy(object, policy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_get_update_policy(USER_OBJECT_ s_object)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_spin_button_get_update_policy(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_set_numeric(USER_OBJECT_ s_object, USER_OBJECT_ s_numeric)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));
	gboolean numeric = (gboolean)asLogical(s_numeric);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_spin_button_set_numeric(object, numeric);


	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_get_numeric(USER_OBJECT_ s_object)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_spin_button_get_numeric(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_spin(USER_OBJECT_ s_object, USER_OBJECT_ s_direction, USER_OBJECT_ s_increment)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));
	GtkSpinType direction = (GtkSpinType)asEnum(s_direction, GTK_TYPE_SPIN_TYPE);
	gdouble increment = (gdouble)asNumeric(s_increment);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_spin_button_spin(object, direction, increment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_set_wrap(USER_OBJECT_ s_object, USER_OBJECT_ s_wrap)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));
	gboolean wrap = (gboolean)asLogical(s_wrap);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_spin_button_set_wrap(object, wrap);


	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_get_wrap(USER_OBJECT_ s_object)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_spin_button_get_wrap(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_set_snap_to_ticks(USER_OBJECT_ s_object, USER_OBJECT_ s_snap_to_ticks)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));
	gboolean snap_to_ticks = (gboolean)asLogical(s_snap_to_ticks);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_spin_button_set_snap_to_ticks(object, snap_to_ticks);


	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_get_snap_to_ticks(USER_OBJECT_ s_object)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_spin_button_get_snap_to_ticks(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_spin_button_update(USER_OBJECT_ s_object)
{
	GtkSpinButton* object = GTK_SPIN_BUTTON(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_spin_button_update(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_statusbar_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_statusbar_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_statusbar_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_statusbar_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_statusbar_get_context_id(USER_OBJECT_ s_object, USER_OBJECT_ s_context_description)
{
	GtkStatusbar* object = GTK_STATUSBAR(getPtrValue(s_object));
	const gchar* context_description = (const gchar*)asString(s_context_description);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_statusbar_get_context_id(object, context_description);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_statusbar_push(USER_OBJECT_ s_object, USER_OBJECT_ s_context_id, USER_OBJECT_ s_text)
{
	GtkStatusbar* object = GTK_STATUSBAR(getPtrValue(s_object));
	guint context_id = (guint)asNumeric(s_context_id);
	const gchar* text = (const gchar*)asString(s_text);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_statusbar_push(object, context_id, text);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_statusbar_pop(USER_OBJECT_ s_object, USER_OBJECT_ s_context_id)
{
	GtkStatusbar* object = GTK_STATUSBAR(getPtrValue(s_object));
	guint context_id = (guint)asNumeric(s_context_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_statusbar_pop(object, context_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_statusbar_remove(USER_OBJECT_ s_object, USER_OBJECT_ s_context_id, USER_OBJECT_ s_message_id)
{
	GtkStatusbar* object = GTK_STATUSBAR(getPtrValue(s_object));
	guint context_id = (guint)asNumeric(s_context_id);
	guint message_id = (guint)asNumeric(s_message_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_statusbar_remove(object, context_id, message_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_statusbar_set_has_resize_grip(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkStatusbar* object = GTK_STATUSBAR(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_statusbar_set_has_resize_grip(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_statusbar_get_has_resize_grip(USER_OBJECT_ s_object)
{
	GtkStatusbar* object = GTK_STATUSBAR(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_statusbar_get_has_resize_grip(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_stock_add(USER_OBJECT_ s_items)
{
	const GtkStockItem* items = (const GtkStockItem*)asArrayRef(s_items, GtkStockItem, asGtkStockItem);
	guint n_items = (guint)GET_LENGTH(s_items);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_stock_add(items, n_items);


	return(_result);
}
 

USER_OBJECT_
S_gtk_stock_add_static(USER_OBJECT_ s_items)
{
	const GtkStockItem* items = (const GtkStockItem*)asArrayRef(s_items, GtkStockItem, asGtkStockItem);
	guint n_items = (guint)GET_LENGTH(s_items);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_stock_add_static(items, n_items);


	return(_result);
}
 

USER_OBJECT_
S_gtk_stock_lookup(USER_OBJECT_ s_stock_id)
{
	const gchar* stock_id = (const gchar*)asString(s_stock_id);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkStockItem* item = (GtkStockItem *)g_new0(GtkStockItem, 1);

	ans = gtk_stock_lookup(stock_id, item);

	_result = asRLogical(ans);

	_result = retByVal(_result, "item", asRGtkStockItem(item), NULL);
	CLEANUP(g_free, item);

	return(_result);
}
 

USER_OBJECT_
S_gtk_stock_list_ids()
{

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_stock_list_ids();

	_result = asRGSListConv(ans, (ElementConverter)asRString);
	CLEANUP(GSListFreeStrings, ans);
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_stock_item_copy(USER_OBJECT_ s_object)
{
	GtkStockItem* object = asGtkStockItem(s_object);

	GtkStockItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_stock_item_copy(object);

	_result = asRGtkStockItem(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_stock_item_free(USER_OBJECT_ s_object)
{
	GtkStockItem* object = asGtkStockItem(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_stock_item_free(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_stock_set_translate_func(USER_OBJECT_ s_domain, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTranslateFunc func = (GtkTranslateFunc)S_GtkTranslateFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	const gchar* domain = (const gchar*)asString(s_domain);
	GtkDestroyNotify notify = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_stock_set_translate_func(domain, func, data, notify);


	return(_result);
}
 

USER_OBJECT_
S_gtk_style_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_style_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_style_new()
{

	GtkStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_style_new();

	_result = toRPointerWithFinalizer(ans, "GtkStyle", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_style_copy(USER_OBJECT_ s_object)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));

	GtkStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_style_copy(object);

	_result = toRPointerWithFinalizer(ans, "GtkStyle", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_style_attach(USER_OBJECT_ s_object, USER_OBJECT_ s_window)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));

	GtkStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_style_attach(object, window);

	_result = toRPointerWithFinalizer(ans, "GtkStyle", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_style_detach(USER_OBJECT_ s_object)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_style_detach(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_style_ref(USER_OBJECT_ s_object)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));

	GtkStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_style_ref(object);

	_result = toRPointerWithRef(ans, "GtkStyle");

	return(_result);
}
 

USER_OBJECT_
S_gtk_style_unref(USER_OBJECT_ s_object)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_style_unref(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_style_get_font(USER_OBJECT_ s_object)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));

	GdkFont* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_style_get_font(object);

	_result = toRGdkFont(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_style_set_font(USER_OBJECT_ s_object, USER_OBJECT_ s_font)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkFont* font = (GdkFont*)getPtrValue(s_font);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_style_set_font(object, font);


	return(_result);
}
 

USER_OBJECT_
S_gtk_style_set_background(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_style_set_background(object, window, state_type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_style_apply_default_background(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_set_bg, USER_OBJECT_ s_state_type, USER_OBJECT_ s_area, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	gboolean set_bg = (gboolean)asLogical(s_set_bg);
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_style_apply_default_background(object, window, set_bg, state_type, area, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_style_lookup_icon_set(USER_OBJECT_ s_object, USER_OBJECT_ s_stock_id)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	const gchar* stock_id = (const gchar*)asString(s_stock_id);

	GtkIconSet* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_style_lookup_icon_set(object, stock_id);

	_result = toRPointerWithFinalizer(ans, "GtkIconSet", (RPointerFinalizer) gtk_icon_set_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_style_render_icon(USER_OBJECT_ s_object, USER_OBJECT_ s_source, USER_OBJECT_ s_direction, USER_OBJECT_ s_state, USER_OBJECT_ s_size, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	const GtkIconSource* source = (const GtkIconSource*)getPtrValue(s_source);
	GtkTextDirection direction = (GtkTextDirection)asEnum(s_direction, GTK_TYPE_TEXT_DIRECTION);
	GtkStateType state = (GtkStateType)asEnum(s_state, GTK_TYPE_STATE_TYPE);
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_style_render_icon(object, source, direction, state, size, widget, detail);

	_result = toRPointerWithFinalizer(ans, "GdkPixbuf", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_hline(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_x1, USER_OBJECT_ s_x2, USER_OBJECT_ s_y)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	gint x1 = (gint)asInteger(s_x1);
	gint x2 = (gint)asInteger(s_x2);
	gint y = (gint)asInteger(s_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_hline(object, window, state_type, x1, x2, y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_vline(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_y1, USER_OBJECT_ s_y2, USER_OBJECT_ s_x)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	gint y1 = (gint)asInteger(s_y1);
	gint y2 = (gint)asInteger(s_y2);
	gint x = (gint)asInteger(s_x);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_vline(object, window, state_type, y1, y2, x);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_shadow(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_shadow(object, window, state_type, shadow_type, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_polygon(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_points, USER_OBJECT_ s_fill)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkPoint* points = (GdkPoint*)asArrayRef(s_points, GdkPoint, asGdkPoint);
	gint npoints = (gint)GET_LENGTH(s_points);
	gboolean fill = (gboolean)asLogical(s_fill);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_polygon(object, window, state_type, shadow_type, points, npoints, fill);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_arrow(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_arrow_type, USER_OBJECT_ s_fill, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GtkArrowType arrow_type = (GtkArrowType)asEnum(s_arrow_type, GTK_TYPE_ARROW_TYPE);
	gboolean fill = (gboolean)asLogical(s_fill);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_arrow(object, window, state_type, shadow_type, arrow_type, fill, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_diamond(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_diamond(object, window, state_type, shadow_type, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_box(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_box(object, window, state_type, shadow_type, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_flat_box(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_flat_box(object, window, state_type, shadow_type, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_check(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_check(object, window, state_type, shadow_type, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_option(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_option(object, window, state_type, shadow_type, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_tab(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_tab(object, window, state_type, shadow_type, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_shadow_gap(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height, USER_OBJECT_ s_gap_side, USER_OBJECT_ s_gap_x, USER_OBJECT_ s_gap_width)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);
	GtkPositionType gap_side = (GtkPositionType)asEnum(s_gap_side, GTK_TYPE_POSITION_TYPE);
	gint gap_x = (gint)asInteger(s_gap_x);
	gint gap_width = (gint)asInteger(s_gap_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_shadow_gap(object, window, state_type, shadow_type, x, y, width, height, gap_side, gap_x, gap_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_box_gap(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height, USER_OBJECT_ s_gap_side, USER_OBJECT_ s_gap_x, USER_OBJECT_ s_gap_width)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);
	GtkPositionType gap_side = (GtkPositionType)asEnum(s_gap_side, GTK_TYPE_POSITION_TYPE);
	gint gap_x = (gint)asInteger(s_gap_x);
	gint gap_width = (gint)asInteger(s_gap_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_box_gap(object, window, state_type, shadow_type, x, y, width, height, gap_side, gap_x, gap_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_extension(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height, USER_OBJECT_ s_gap_side)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);
	GtkPositionType gap_side = (GtkPositionType)asEnum(s_gap_side, GTK_TYPE_POSITION_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_extension(object, window, state_type, shadow_type, x, y, width, height, gap_side);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_focus(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_focus(object, window, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_slider(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height, USER_OBJECT_ s_orientation)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);
	GtkOrientation orientation = (GtkOrientation)asEnum(s_orientation, GTK_TYPE_ORIENTATION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_slider(object, window, state_type, shadow_type, x, y, width, height, orientation);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_handle(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height, USER_OBJECT_ s_orientation)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);
	GtkOrientation orientation = (GtkOrientation)asEnum(s_orientation, GTK_TYPE_ORIENTATION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_handle(object, window, state_type, shadow_type, x, y, width, height, orientation);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_expander(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_is_open)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gboolean is_open = (gboolean)asLogical(s_is_open);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_expander(object, window, state_type, x, y, is_open);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_layout(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_use_text, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_layout)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	gboolean use_text = (gboolean)asLogical(s_use_text);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	PangoLayout* layout = PANGO_LAYOUT(getPtrValue(s_layout));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_layout(object, window, state_type, use_text, x, y, layout);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_resize_grip(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_edge, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GdkWindowEdge edge = (GdkWindowEdge)asEnum(s_edge, GDK_TYPE_WINDOW_EDGE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_resize_grip(object, window, state_type, edge, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_hline(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x1, USER_OBJECT_ s_x2, USER_OBJECT_ s_y)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x1 = (gint)asInteger(s_x1);
	gint x2 = (gint)asInteger(s_x2);
	gint y = (gint)asInteger(s_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_hline(object, window, state_type, area, widget, detail, x1, x2, y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_vline(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_y1, USER_OBJECT_ s_y2, USER_OBJECT_ s_x)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint y1 = (gint)asInteger(s_y1);
	gint y2 = (gint)asInteger(s_y2);
	gint x = (gint)asInteger(s_x);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_vline(object, window, state_type, area, widget, detail, y1, y2, x);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_shadow(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_shadow(object, window, state_type, shadow_type, area, widget, detail, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_polygon(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_points, USER_OBJECT_ s_fill)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	GdkPoint* points = (GdkPoint*)asArrayRef(s_points, GdkPoint, asGdkPoint);
	gint npoints = (gint)GET_LENGTH(s_points);
	gboolean fill = (gboolean)asLogical(s_fill);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_polygon(object, window, state_type, shadow_type, area, widget, detail, points, npoints, fill);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_arrow(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_arrow_type, USER_OBJECT_ s_fill, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	GtkArrowType arrow_type = (GtkArrowType)asEnum(s_arrow_type, GTK_TYPE_ARROW_TYPE);
	gboolean fill = (gboolean)asLogical(s_fill);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_arrow(object, window, state_type, shadow_type, area, widget, detail, arrow_type, fill, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_diamond(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_diamond(object, window, state_type, shadow_type, area, widget, detail, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_box(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_box(object, window, state_type, shadow_type, area, widget, detail, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_flat_box(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_flat_box(object, window, state_type, shadow_type, area, widget, detail, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_check(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_check(object, window, state_type, shadow_type, area, widget, detail, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_option(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_option(object, window, state_type, shadow_type, area, widget, detail, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_tab(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_tab(object, window, state_type, shadow_type, area, widget, detail, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_shadow_gap(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height, USER_OBJECT_ s_gap_side, USER_OBJECT_ s_gap_x, USER_OBJECT_ s_gap_width)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);
	GtkPositionType gap_side = (GtkPositionType)asEnum(s_gap_side, GTK_TYPE_POSITION_TYPE);
	gint gap_x = (gint)asInteger(s_gap_x);
	gint gap_width = (gint)asInteger(s_gap_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_shadow_gap(object, window, state_type, shadow_type, area, widget, detail, x, y, width, height, gap_side, gap_x, gap_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_box_gap(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height, USER_OBJECT_ s_gap_side, USER_OBJECT_ s_gap_x, USER_OBJECT_ s_gap_width)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);
	GtkPositionType gap_side = (GtkPositionType)asEnum(s_gap_side, GTK_TYPE_POSITION_TYPE);
	gint gap_x = (gint)asInteger(s_gap_x);
	gint gap_width = (gint)asInteger(s_gap_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_box_gap(object, window, state_type, shadow_type, area, widget, detail, x, y, width, height, gap_side, gap_x, gap_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_extension(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height, USER_OBJECT_ s_gap_side)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);
	GtkPositionType gap_side = (GtkPositionType)asEnum(s_gap_side, GTK_TYPE_POSITION_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_extension(object, window, state_type, shadow_type, area, widget, detail, x, y, width, height, gap_side);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_focus(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_focus(object, window, state_type, area, widget, detail, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_slider(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height, USER_OBJECT_ s_orientation)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);
	GtkOrientation orientation = (GtkOrientation)asEnum(s_orientation, GTK_TYPE_ORIENTATION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_slider(object, window, state_type, shadow_type, area, widget, detail, x, y, width, height, orientation);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_handle(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_shadow_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height, USER_OBJECT_ s_orientation)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GtkShadowType shadow_type = (GtkShadowType)asEnum(s_shadow_type, GTK_TYPE_SHADOW_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);
	GtkOrientation orientation = (GtkOrientation)asEnum(s_orientation, GTK_TYPE_ORIENTATION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_handle(object, window, state_type, shadow_type, area, widget, detail, x, y, width, height, orientation);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_expander(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_expander_style)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	GtkExpanderStyle expander_style = (GtkExpanderStyle)asEnum(s_expander_style, GTK_TYPE_EXPANDER_STYLE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_expander(object, window, state_type, area, widget, detail, x, y, expander_style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_layout(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_use_text, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_layout)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	gboolean use_text = (gboolean)asLogical(s_use_text);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	PangoLayout* layout = PANGO_LAYOUT(getPtrValue(s_layout));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_layout(object, window, state_type, use_text, area, widget, detail, x, y, layout);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_resize_grip(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_edge, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	GdkWindowEdge edge = (GdkWindowEdge)asEnum(s_edge, GDK_TYPE_WINDOW_EDGE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_resize_grip(object, window, state_type, area, widget, detail, edge, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_border_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_border_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_border_copy(USER_OBJECT_ s_object)
{
	GtkBorder* object = (GtkBorder*)getPtrValue(s_object);

	GtkBorder* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_border_copy(object);

	_result = toRPointerWithFinalizer(ans, "GtkBorder", (RPointerFinalizer) gtk_border_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_border_free(USER_OBJECT_ s_object)
{
	GtkBorder* object = (GtkBorder*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_border_free(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_style_apply_default_pixmap(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_set_bg, USER_OBJECT_ s_area, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	gboolean set_bg = (gboolean)asLogical(s_set_bg);
	GdkRectangle* area = asGdkRectangle(s_area);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_style_apply_default_pixmap(object, window, set_bg, area, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_string(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_string)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	const gchar* string = (const gchar*)asString(s_string);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_string(object, window, state_type, x, y, string);


	return(_result);
}
 

USER_OBJECT_
S_gtk_paint_string(USER_OBJECT_ s_object, USER_OBJECT_ s_window, USER_OBJECT_ s_state_type, USER_OBJECT_ s_area, USER_OBJECT_ s_widget, USER_OBJECT_ s_detail, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_string)
{
	GtkStyle* object = GTK_STYLE(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));
	GtkStateType state_type = (GtkStateType)asEnum(s_state_type, GTK_TYPE_STATE_TYPE);
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	const gchar* string = (const gchar*)asString(s_string);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_paint_string(object, window, state_type, area, widget, detail, x, y, string);


	return(_result);
}
 

USER_OBJECT_
S_gtk_draw_insertion_cursor(USER_OBJECT_ s_widget, USER_OBJECT_ s_drawable, USER_OBJECT_ s_area, USER_OBJECT_ s_location, USER_OBJECT_ s_is_primary, USER_OBJECT_ s_direction, USER_OBJECT_ s_draw_arrow)
{
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	GdkDrawable* drawable = GDK_DRAWABLE(getPtrValue(s_drawable));
	GdkRectangle* area = GET_LENGTH(s_area) == 0 ? NULL : asGdkRectangle(s_area);
	GdkRectangle* location = asGdkRectangle(s_location);
	gboolean is_primary = (gboolean)asLogical(s_is_primary);
	GtkTextDirection direction = (GtkTextDirection)asEnum(s_direction, GTK_TYPE_TEXT_DIRECTION);
	gboolean draw_arrow = (gboolean)asLogical(s_draw_arrow);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_draw_insertion_cursor(widget, drawable, area, location, is_primary, direction, draw_arrow);


	return(_result);
}
 

USER_OBJECT_
S_gtk_table_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_table_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_table_new(USER_OBJECT_ s_rows, USER_OBJECT_ s_columns, USER_OBJECT_ s_homogeneous)
{
	char * prop_names[] = { "n_rows", "n_columns", "homogeneous", NULL };
	USER_OBJECT_ args[] = { s_rows, s_columns, s_homogeneous };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_TABLE, prop_names, args, 3);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_table_resize(USER_OBJECT_ s_object, USER_OBJECT_ s_rows, USER_OBJECT_ s_columns)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));
	guint rows = (guint)asNumeric(s_rows);
	guint columns = (guint)asNumeric(s_columns);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_table_resize(object, rows, columns);


	return(_result);
}
 

USER_OBJECT_
S_gtk_table_attach(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_left_attach, USER_OBJECT_ s_right_attach, USER_OBJECT_ s_top_attach, USER_OBJECT_ s_bottom_attach, USER_OBJECT_ s_xoptions, USER_OBJECT_ s_yoptions, USER_OBJECT_ s_xpadding, USER_OBJECT_ s_ypadding)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	guint left_attach = (guint)asNumeric(s_left_attach);
	guint right_attach = (guint)asNumeric(s_right_attach);
	guint top_attach = (guint)asNumeric(s_top_attach);
	guint bottom_attach = (guint)asNumeric(s_bottom_attach);
	GtkAttachOptions xoptions = (GtkAttachOptions)asFlag(s_xoptions, GTK_TYPE_ATTACH_OPTIONS);
	GtkAttachOptions yoptions = (GtkAttachOptions)asFlag(s_yoptions, GTK_TYPE_ATTACH_OPTIONS);
	guint xpadding = (guint)asNumeric(s_xpadding);
	guint ypadding = (guint)asNumeric(s_ypadding);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_table_attach(object, child, left_attach, right_attach, top_attach, bottom_attach, xoptions, yoptions, xpadding, ypadding);


	return(_result);
}
 

USER_OBJECT_
S_gtk_table_attach_defaults(USER_OBJECT_ s_object, USER_OBJECT_ s_widget, USER_OBJECT_ s_left_attach, USER_OBJECT_ s_right_attach, USER_OBJECT_ s_top_attach, USER_OBJECT_ s_bottom_attach)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	guint left_attach = (guint)asNumeric(s_left_attach);
	guint right_attach = (guint)asNumeric(s_right_attach);
	guint top_attach = (guint)asNumeric(s_top_attach);
	guint bottom_attach = (guint)asNumeric(s_bottom_attach);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_table_attach_defaults(object, widget, left_attach, right_attach, top_attach, bottom_attach);


	return(_result);
}
 

USER_OBJECT_
S_gtk_table_set_row_spacing(USER_OBJECT_ s_object, USER_OBJECT_ s_row, USER_OBJECT_ s_spacing)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));
	guint row = (guint)asNumeric(s_row);
	guint spacing = (guint)asNumeric(s_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_table_set_row_spacing(object, row, spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_table_get_row_spacing(USER_OBJECT_ s_object, USER_OBJECT_ s_row)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));
	guint row = (guint)asNumeric(s_row);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_table_get_row_spacing(object, row);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_table_set_col_spacing(USER_OBJECT_ s_object, USER_OBJECT_ s_column, USER_OBJECT_ s_spacing)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));
	guint column = (guint)asNumeric(s_column);
	guint spacing = (guint)asNumeric(s_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_table_set_col_spacing(object, column, spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_table_get_col_spacing(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));
	guint column = (guint)asNumeric(s_column);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_table_get_col_spacing(object, column);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_table_set_row_spacings(USER_OBJECT_ s_object, USER_OBJECT_ s_spacing)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));
	guint spacing = (guint)asNumeric(s_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_table_set_row_spacings(object, spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_table_get_default_row_spacing(USER_OBJECT_ s_object)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_table_get_default_row_spacing(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_table_set_col_spacings(USER_OBJECT_ s_object, USER_OBJECT_ s_spacing)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));
	guint spacing = (guint)asNumeric(s_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_table_set_col_spacings(object, spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_table_get_default_col_spacing(USER_OBJECT_ s_object)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_table_get_default_col_spacing(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_table_set_homogeneous(USER_OBJECT_ s_object, USER_OBJECT_ s_homogeneous)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));
	gboolean homogeneous = (gboolean)asLogical(s_homogeneous);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_table_set_homogeneous(object, homogeneous);


	return(_result);
}
 

USER_OBJECT_
S_gtk_table_get_homogeneous(USER_OBJECT_ s_object)
{
	GtkTable* object = GTK_TABLE(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_table_get_homogeneous(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tearoff_menu_item_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tearoff_menu_item_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tearoff_menu_item_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tearoff_menu_item_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_new(USER_OBJECT_ s_table)
{
	char * prop_names[] = { "tag_table", NULL };
	USER_OBJECT_ args[] = { s_table };

	GtkTextBuffer* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_TEXT_BUFFER, prop_names, args, 1);

	_result = toRPointerWithFinalizer(ans, "GtkTextBuffer", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_line_count(USER_OBJECT_ s_object)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_get_line_count(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_char_count(USER_OBJECT_ s_object)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_get_char_count(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_tag_table(USER_OBJECT_ s_object)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));

	GtkTextTagTable* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_get_tag_table(object);

	_result = toRPointerWithRef(ans, "GtkTextTagTable");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_set_text(USER_OBJECT_ s_object, USER_OBJECT_ s_text, USER_OBJECT_ s_len)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);
	gint len = (gint)asInteger(s_len);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_set_text(object, text, len);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_insert(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_text, USER_OBJECT_ s_len)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);
	const gchar* text = (const gchar*)asString(s_text);
	gint len = (gint)asInteger(s_len);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_insert(object, iter, text, len);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_insert_at_cursor(USER_OBJECT_ s_object, USER_OBJECT_ s_text, USER_OBJECT_ s_len)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);
	gint len = (gint)asInteger(s_len);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_insert_at_cursor(object, text, len);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_insert_interactive(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_text, USER_OBJECT_ s_len, USER_OBJECT_ s_default_editable)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);
	const gchar* text = (const gchar*)asString(s_text);
	gint len = (gint)asInteger(s_len);
	gboolean default_editable = (gboolean)asLogical(s_default_editable);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_insert_interactive(object, iter, text, len, default_editable);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_insert_interactive_at_cursor(USER_OBJECT_ s_object, USER_OBJECT_ s_text, USER_OBJECT_ s_len, USER_OBJECT_ s_default_editable)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);
	gint len = (gint)asInteger(s_len);
	gboolean default_editable = (gboolean)asLogical(s_default_editable);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_insert_interactive_at_cursor(object, text, len, default_editable);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_insert_range(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_start, USER_OBJECT_ s_end)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);
	const GtkTextIter* start = (const GtkTextIter*)getPtrValue(s_start);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_insert_range(object, iter, start, end);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_insert_range_interactive(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_start, USER_OBJECT_ s_end, USER_OBJECT_ s_default_editable)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);
	const GtkTextIter* start = (const GtkTextIter*)getPtrValue(s_start);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);
	gboolean default_editable = (gboolean)asLogical(s_default_editable);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_insert_range_interactive(object, iter, start, end, default_editable);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_delete(USER_OBJECT_ s_object, USER_OBJECT_ s_start, USER_OBJECT_ s_end)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextIter* start = (GtkTextIter*)getPtrValue(s_start);
	GtkTextIter* end = (GtkTextIter*)getPtrValue(s_end);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_delete(object, start, end);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_delete_interactive(USER_OBJECT_ s_object, USER_OBJECT_ s_start_iter, USER_OBJECT_ s_end_iter, USER_OBJECT_ s_default_editable)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextIter* start_iter = (GtkTextIter*)getPtrValue(s_start_iter);
	GtkTextIter* end_iter = (GtkTextIter*)getPtrValue(s_end_iter);
	gboolean default_editable = (gboolean)asLogical(s_default_editable);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_delete_interactive(object, start_iter, end_iter, default_editable);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_text(USER_OBJECT_ s_object, USER_OBJECT_ s_start, USER_OBJECT_ s_end, USER_OBJECT_ s_include_hidden_chars)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const GtkTextIter* start = (const GtkTextIter*)getPtrValue(s_start);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);
	gboolean include_hidden_chars = (gboolean)asLogical(s_include_hidden_chars);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_get_text(object, start, end, include_hidden_chars);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_slice(USER_OBJECT_ s_object, USER_OBJECT_ s_start, USER_OBJECT_ s_end, USER_OBJECT_ s_include_hidden_chars)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const GtkTextIter* start = (const GtkTextIter*)getPtrValue(s_start);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);
	gboolean include_hidden_chars = (gboolean)asLogical(s_include_hidden_chars);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_get_slice(object, start, end, include_hidden_chars);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_insert_pixbuf(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_pixbuf)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);
	GdkPixbuf* pixbuf = GDK_PIXBUF(getPtrValue(s_pixbuf));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_insert_pixbuf(object, iter, pixbuf);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_insert_child_anchor(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_anchor)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);
	GtkTextChildAnchor* anchor = GTK_TEXT_CHILD_ANCHOR(getPtrValue(s_anchor));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_insert_child_anchor(object, iter, anchor);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_create_child_anchor(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);

	GtkTextChildAnchor* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_create_child_anchor(object, iter);

	_result = toRPointerWithRef(ans, "GtkTextChildAnchor");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_create_mark(USER_OBJECT_ s_object, USER_OBJECT_ s_mark_name, USER_OBJECT_ s_where, USER_OBJECT_ s_left_gravity)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const gchar* mark_name = GET_LENGTH(s_mark_name) == 0 ? NULL : (const gchar*)asString(s_mark_name);
	const GtkTextIter* where = (const GtkTextIter*)getPtrValue(s_where);
	gboolean left_gravity = (gboolean)asLogical(s_left_gravity);

	GtkTextMark* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_create_mark(object, mark_name, where, left_gravity);

	_result = toRPointerWithRef(ans, "GtkTextMark");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_move_mark(USER_OBJECT_ s_object, USER_OBJECT_ s_mark, USER_OBJECT_ s_where)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextMark* mark = GTK_TEXT_MARK(getPtrValue(s_mark));
	const GtkTextIter* where = (const GtkTextIter*)getPtrValue(s_where);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_move_mark(object, mark, where);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_delete_mark(USER_OBJECT_ s_object, USER_OBJECT_ s_mark)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextMark* mark = GTK_TEXT_MARK(getPtrValue(s_mark));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_delete_mark(object, mark);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_mark(USER_OBJECT_ s_object, USER_OBJECT_ s_name)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);

	GtkTextMark* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_get_mark(object, name);

	_result = toRPointerWithRef(ans, "GtkTextMark");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_move_mark_by_name(USER_OBJECT_ s_object, USER_OBJECT_ s_name, USER_OBJECT_ s_where)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);
	const GtkTextIter* where = (const GtkTextIter*)getPtrValue(s_where);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_move_mark_by_name(object, name, where);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_delete_mark_by_name(USER_OBJECT_ s_object, USER_OBJECT_ s_name)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_delete_mark_by_name(object, name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_insert(USER_OBJECT_ s_object)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));

	GtkTextMark* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_get_insert(object);

	_result = toRPointerWithRef(ans, "GtkTextMark");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_selection_bound(USER_OBJECT_ s_object)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));

	GtkTextMark* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_get_selection_bound(object);

	_result = toRPointerWithRef(ans, "GtkTextMark");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_place_cursor(USER_OBJECT_ s_object, USER_OBJECT_ s_where)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const GtkTextIter* where = (const GtkTextIter*)getPtrValue(s_where);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_place_cursor(object, where);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_select_range(USER_OBJECT_ s_object, USER_OBJECT_ s_ins, USER_OBJECT_ s_bound)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const GtkTextIter* ins = (const GtkTextIter*)getPtrValue(s_ins);
	const GtkTextIter* bound = (const GtkTextIter*)getPtrValue(s_bound);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_select_range(object, ins, bound);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_apply_tag(USER_OBJECT_ s_object, USER_OBJECT_ s_tag, USER_OBJECT_ s_start, USER_OBJECT_ s_end)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextTag* tag = GTK_TEXT_TAG(getPtrValue(s_tag));
	const GtkTextIter* start = (const GtkTextIter*)getPtrValue(s_start);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_apply_tag(object, tag, start, end);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_remove_tag(USER_OBJECT_ s_object, USER_OBJECT_ s_tag, USER_OBJECT_ s_start, USER_OBJECT_ s_end)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextTag* tag = GTK_TEXT_TAG(getPtrValue(s_tag));
	const GtkTextIter* start = (const GtkTextIter*)getPtrValue(s_start);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_remove_tag(object, tag, start, end);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_apply_tag_by_name(USER_OBJECT_ s_object, USER_OBJECT_ s_name, USER_OBJECT_ s_start, USER_OBJECT_ s_end)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);
	const GtkTextIter* start = (const GtkTextIter*)getPtrValue(s_start);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_apply_tag_by_name(object, name, start, end);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_remove_tag_by_name(USER_OBJECT_ s_object, USER_OBJECT_ s_name, USER_OBJECT_ s_start, USER_OBJECT_ s_end)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);
	const GtkTextIter* start = (const GtkTextIter*)getPtrValue(s_start);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_remove_tag_by_name(object, name, start, end);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_remove_all_tags(USER_OBJECT_ s_object, USER_OBJECT_ s_start, USER_OBJECT_ s_end)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	const GtkTextIter* start = (const GtkTextIter*)getPtrValue(s_start);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_remove_all_tags(object, start, end);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_iter_at_line_offset(USER_OBJECT_ s_object, USER_OBJECT_ s_line_number, USER_OBJECT_ s_char_offset)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	gint line_number = (gint)asInteger(s_line_number);
	gint char_offset = (gint)asInteger(s_char_offset);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* iter = (GtkTextIter *)g_new0(GtkTextIter, 1);

	gtk_text_buffer_get_iter_at_line_offset(object, iter, line_number, char_offset);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_iter_at_line_index(USER_OBJECT_ s_object, USER_OBJECT_ s_line_number, USER_OBJECT_ s_byte_index)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	gint line_number = (gint)asInteger(s_line_number);
	gint byte_index = (gint)asInteger(s_byte_index);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* iter = (GtkTextIter *)g_new0(GtkTextIter, 1);

	gtk_text_buffer_get_iter_at_line_index(object, iter, line_number, byte_index);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_iter_at_offset(USER_OBJECT_ s_object, USER_OBJECT_ s_char_offset)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	gint char_offset = (gint)asInteger(s_char_offset);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* iter = (GtkTextIter *)g_new0(GtkTextIter, 1);

	gtk_text_buffer_get_iter_at_offset(object, iter, char_offset);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_iter_at_line(USER_OBJECT_ s_object, USER_OBJECT_ s_line_number)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	gint line_number = (gint)asInteger(s_line_number);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* iter = (GtkTextIter *)g_new0(GtkTextIter, 1);

	gtk_text_buffer_get_iter_at_line(object, iter, line_number);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_start_iter(USER_OBJECT_ s_object)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* iter = (GtkTextIter *)g_new0(GtkTextIter, 1);

	gtk_text_buffer_get_start_iter(object, iter);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_end_iter(USER_OBJECT_ s_object)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* iter = (GtkTextIter *)g_new0(GtkTextIter, 1);

	gtk_text_buffer_get_end_iter(object, iter);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_bounds(USER_OBJECT_ s_object)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* start = (GtkTextIter *)g_new0(GtkTextIter, 1);
	GtkTextIter* end = (GtkTextIter *)g_new0(GtkTextIter, 1);

	gtk_text_buffer_get_bounds(object, start, end);


	_result = retByVal(_result, "start", toRPointerWithFinalizer(start, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), "end", toRPointerWithFinalizer(end, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_iter_at_mark(USER_OBJECT_ s_object, USER_OBJECT_ s_mark)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextMark* mark = GTK_TEXT_MARK(getPtrValue(s_mark));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* iter = (GtkTextIter *)g_new0(GtkTextIter, 1);

	gtk_text_buffer_get_iter_at_mark(object, iter, mark);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_iter_at_child_anchor(USER_OBJECT_ s_object, USER_OBJECT_ s_anchor)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextChildAnchor* anchor = GTK_TEXT_CHILD_ANCHOR(getPtrValue(s_anchor));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* iter = (GtkTextIter *)g_new0(GtkTextIter, 1);

	gtk_text_buffer_get_iter_at_child_anchor(object, iter, anchor);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_modified(USER_OBJECT_ s_object)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_get_modified(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_set_modified(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_set_modified(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_add_selection_clipboard(USER_OBJECT_ s_object, USER_OBJECT_ s_clipboard)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkClipboard* clipboard = GTK_CLIPBOARD(getPtrValue(s_clipboard));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_add_selection_clipboard(object, clipboard);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_remove_selection_clipboard(USER_OBJECT_ s_object, USER_OBJECT_ s_clipboard)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkClipboard* clipboard = GTK_CLIPBOARD(getPtrValue(s_clipboard));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_remove_selection_clipboard(object, clipboard);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_cut_clipboard(USER_OBJECT_ s_object, USER_OBJECT_ s_clipboard, USER_OBJECT_ s_default_editable)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkClipboard* clipboard = GTK_CLIPBOARD(getPtrValue(s_clipboard));
	gboolean default_editable = (gboolean)asLogical(s_default_editable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_cut_clipboard(object, clipboard, default_editable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_copy_clipboard(USER_OBJECT_ s_object, USER_OBJECT_ s_clipboard)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkClipboard* clipboard = GTK_CLIPBOARD(getPtrValue(s_clipboard));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_copy_clipboard(object, clipboard);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_paste_clipboard(USER_OBJECT_ s_object, USER_OBJECT_ s_clipboard, USER_OBJECT_ s_override_location, USER_OBJECT_ s_default_editable)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkClipboard* clipboard = GTK_CLIPBOARD(getPtrValue(s_clipboard));
	GtkTextIter* override_location = GET_LENGTH(s_override_location) == 0 ? NULL : (GtkTextIter*)getPtrValue(s_override_location);
	gboolean default_editable = (gboolean)asLogical(s_default_editable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_paste_clipboard(object, clipboard, override_location, default_editable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_get_selection_bounds(USER_OBJECT_ s_object)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* start = (GtkTextIter *)g_new0(GtkTextIter, 1);
	GtkTextIter* end = (GtkTextIter *)g_new0(GtkTextIter, 1);

	ans = gtk_text_buffer_get_selection_bounds(object, start, end);

	_result = asRLogical(ans);

	_result = retByVal(_result, "start", toRPointerWithFinalizer(start, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), "end", toRPointerWithFinalizer(end, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_delete_selection(USER_OBJECT_ s_object, USER_OBJECT_ s_interactive, USER_OBJECT_ s_default_editable)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	gboolean interactive = (gboolean)asLogical(s_interactive);
	gboolean default_editable = (gboolean)asLogical(s_default_editable);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_delete_selection(object, interactive, default_editable);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_begin_user_action(USER_OBJECT_ s_object)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_begin_user_action(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_end_user_action(USER_OBJECT_ s_object)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_buffer_end_user_action(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_child_anchor_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_child_anchor_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_child_anchor_new()
{

	GtkTextChildAnchor* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_child_anchor_new();

	_result = toRPointerWithFinalizer(ans, "GtkTextChildAnchor", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_child_anchor_get_widgets(USER_OBJECT_ s_object)
{
	GtkTextChildAnchor* object = GTK_TEXT_CHILD_ANCHOR(getPtrValue(s_object));

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_child_anchor_get_widgets(object);

	_result = asRGList(ans, "GtkWidget");
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_child_anchor_get_deleted(USER_OBJECT_ s_object)
{
	GtkTextChildAnchor* object = GTK_TEXT_CHILD_ANCHOR(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_child_anchor_get_deleted(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_buffer_backspace(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_interactive, USER_OBJECT_ s_default_editable)
{
	GtkTextBuffer* object = GTK_TEXT_BUFFER(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);
	gboolean interactive = (gboolean)asLogical(s_interactive);
	gboolean default_editable = (gboolean)asLogical(s_default_editable);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_buffer_backspace(object, iter, interactive, default_editable);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_buffer(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	GtkTextBuffer* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_buffer(object);

	_result = toRPointerWithRef(ans, "GtkTextBuffer");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_copy(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	GtkTextIter* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_copy(object);

	_result = toRPointerWithFinalizer(ans, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_free(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_iter_free(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_offset(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_offset(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_line(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_line(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_line_offset(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_line_offset(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_line_index(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_line_index(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_visible_line_offset(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_visible_line_offset(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_visible_line_index(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_visible_line_index(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_char(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gunichar ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_char(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_slice(USER_OBJECT_ s_object, USER_OBJECT_ s_end)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_slice(object, end);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_text(USER_OBJECT_ s_object, USER_OBJECT_ s_end)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_text(object, end);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_visible_slice(USER_OBJECT_ s_object, USER_OBJECT_ s_end)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_visible_slice(object, end);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_visible_text(USER_OBJECT_ s_object, USER_OBJECT_ s_end)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_visible_text(object, end);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_pixbuf(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_pixbuf(object);

	_result = toRPointerWithRef(ans, "GdkPixbuf");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_marks(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_marks(object);

	_result = asRGSListWithRef(ans, "GtkTextMark");
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_child_anchor(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	GtkTextChildAnchor* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_child_anchor(object);

	_result = toRPointerWithRef(ans, "GtkTextChildAnchor");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_toggled_tags(USER_OBJECT_ s_object, USER_OBJECT_ s_toggled_on)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gboolean toggled_on = (gboolean)asLogical(s_toggled_on);

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_toggled_tags(object, toggled_on);

	_result = asRGSListWithRef(ans, "GtkTextTag");
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_begins_tag(USER_OBJECT_ s_object, USER_OBJECT_ s_tag)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	GtkTextTag* tag = GET_LENGTH(s_tag) == 0 ? NULL : GTK_TEXT_TAG(getPtrValue(s_tag));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_begins_tag(object, tag);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_ends_tag(USER_OBJECT_ s_object, USER_OBJECT_ s_tag)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	GtkTextTag* tag = GET_LENGTH(s_tag) == 0 ? NULL : GTK_TEXT_TAG(getPtrValue(s_tag));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_ends_tag(object, tag);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_toggles_tag(USER_OBJECT_ s_object, USER_OBJECT_ s_tag)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	GtkTextTag* tag = GET_LENGTH(s_tag) == 0 ? NULL : GTK_TEXT_TAG(getPtrValue(s_tag));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_toggles_tag(object, tag);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_has_tag(USER_OBJECT_ s_object, USER_OBJECT_ s_tag)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	GtkTextTag* tag = GTK_TEXT_TAG(getPtrValue(s_tag));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_has_tag(object, tag);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_tags(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_tags(object);

	_result = asRGSListWithRef(ans, "GtkTextTag");
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_editable(USER_OBJECT_ s_object, USER_OBJECT_ s_default_setting)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gboolean default_setting = (gboolean)asLogical(s_default_setting);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_editable(object, default_setting);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_can_insert(USER_OBJECT_ s_object, USER_OBJECT_ s_default_editability)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gboolean default_editability = (gboolean)asLogical(s_default_editability);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_can_insert(object, default_editability);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_starts_word(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_starts_word(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_ends_word(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_ends_word(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_inside_word(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_inside_word(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_starts_sentence(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_starts_sentence(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_ends_sentence(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_ends_sentence(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_inside_sentence(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_inside_sentence(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_starts_line(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_starts_line(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_ends_line(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_ends_line(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_is_cursor_position(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_is_cursor_position(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_chars_in_line(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_chars_in_line(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_bytes_in_line(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_bytes_in_line(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_attributes(USER_OBJECT_ s_object, USER_OBJECT_ s_values)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	GtkTextAttributes* values = (GtkTextAttributes*)getPtrValue(s_values);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_attributes(object, values);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_get_language(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	PangoLanguage* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_get_language(object);

	_result = toRPointer(ans, "PangoLanguage");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_is_end(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_is_end(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_is_start(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_is_start(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_char(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_char(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_char(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_char(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_chars(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_chars(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_chars(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_chars(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_line(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_line(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_line(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_line(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_lines(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_lines(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_lines(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_lines(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_word_end(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_word_end(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_word_start(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_word_start(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_word_ends(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_word_ends(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_word_starts(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_word_starts(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_visible_line(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_visible_line(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_visible_line(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_visible_line(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_visible_lines(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_visible_lines(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_visible_lines(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_visible_lines(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_visible_word_end(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_visible_word_end(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_visible_word_start(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_visible_word_start(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_visible_word_ends(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_visible_word_ends(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_visible_word_starts(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_visible_word_starts(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_sentence_end(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_sentence_end(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_sentence_start(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_sentence_start(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_sentence_ends(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_sentence_ends(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_sentence_starts(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_sentence_starts(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_cursor_position(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_cursor_position(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_cursor_position(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_cursor_position(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_cursor_positions(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_cursor_positions(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_cursor_positions(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_cursor_positions(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_visible_cursor_position(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_visible_cursor_position(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_visible_cursor_position(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_visible_cursor_position(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_visible_cursor_positions(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_visible_cursor_positions(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_visible_cursor_positions(USER_OBJECT_ s_object, USER_OBJECT_ s_count)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_visible_cursor_positions(object, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_set_offset(USER_OBJECT_ s_object, USER_OBJECT_ s_char_offset)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint char_offset = (gint)asInteger(s_char_offset);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_iter_set_offset(object, char_offset);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_set_line(USER_OBJECT_ s_object, USER_OBJECT_ s_line_number)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint line_number = (gint)asInteger(s_line_number);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_iter_set_line(object, line_number);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_set_line_offset(USER_OBJECT_ s_object, USER_OBJECT_ s_char_on_line)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint char_on_line = (gint)asInteger(s_char_on_line);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_iter_set_line_offset(object, char_on_line);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_set_line_index(USER_OBJECT_ s_object, USER_OBJECT_ s_byte_on_line)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint byte_on_line = (gint)asInteger(s_byte_on_line);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_iter_set_line_index(object, byte_on_line);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_to_end(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_iter_forward_to_end(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_to_line_end(USER_OBJECT_ s_object)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_to_line_end(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_set_visible_line_offset(USER_OBJECT_ s_object, USER_OBJECT_ s_char_on_line)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint char_on_line = (gint)asInteger(s_char_on_line);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_iter_set_visible_line_offset(object, char_on_line);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_set_visible_line_index(USER_OBJECT_ s_object, USER_OBJECT_ s_byte_on_line)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	gint byte_on_line = (gint)asInteger(s_byte_on_line);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_iter_set_visible_line_index(object, byte_on_line);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_to_tag_toggle(USER_OBJECT_ s_object, USER_OBJECT_ s_tag)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	GtkTextTag* tag = GET_LENGTH(s_tag) == 0 ? NULL : GTK_TEXT_TAG(getPtrValue(s_tag));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_to_tag_toggle(object, tag);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_to_tag_toggle(USER_OBJECT_ s_object, USER_OBJECT_ s_tag)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	GtkTextTag* tag = GET_LENGTH(s_tag) == 0 ? NULL : GTK_TEXT_TAG(getPtrValue(s_tag));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_to_tag_toggle(object, tag);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_find_char(USER_OBJECT_ s_object, USER_OBJECT_ s_pred, USER_OBJECT_ s_user_data, USER_OBJECT_ s_limit)
{
	GtkTextCharPredicate pred = (GtkTextCharPredicate)S_GtkTextCharPredicate;
	GClosure* user_data = R_createGClosure(s_pred, s_user_data);
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	const GtkTextIter* limit = (const GtkTextIter*)getPtrValue(s_limit);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_forward_find_char(object, pred, user_data, limit);

	_result = asRLogical(ans);
	g_closure_sink(user_data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_find_char(USER_OBJECT_ s_object, USER_OBJECT_ s_pred, USER_OBJECT_ s_user_data, USER_OBJECT_ s_limit)
{
	GtkTextCharPredicate pred = (GtkTextCharPredicate)S_GtkTextCharPredicate;
	GClosure* user_data = R_createGClosure(s_pred, s_user_data);
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	const GtkTextIter* limit = (const GtkTextIter*)getPtrValue(s_limit);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_backward_find_char(object, pred, user_data, limit);

	_result = asRLogical(ans);
	g_closure_sink(user_data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_forward_search(USER_OBJECT_ s_object, USER_OBJECT_ s_str, USER_OBJECT_ s_flags, USER_OBJECT_ s_limit)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	const gchar* str = (const gchar*)asString(s_str);
	GtkTextSearchFlags flags = (GtkTextSearchFlags)asFlag(s_flags, GTK_TYPE_TEXT_SEARCH_FLAGS);
	const GtkTextIter* limit = GET_LENGTH(s_limit) == 0 ? NULL : (const GtkTextIter*)getPtrValue(s_limit);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* match_start = (GtkTextIter *)g_new0(GtkTextIter, 1);
	GtkTextIter* match_end = (GtkTextIter *)g_new0(GtkTextIter, 1);

	ans = gtk_text_iter_forward_search(object, str, flags, match_start, match_end, limit);

	_result = asRLogical(ans);

	_result = retByVal(_result, "match_start", toRPointerWithFinalizer(match_start, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), "match_end", toRPointerWithFinalizer(match_end, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_backward_search(USER_OBJECT_ s_object, USER_OBJECT_ s_str, USER_OBJECT_ s_flags, USER_OBJECT_ s_limit)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	const gchar* str = (const gchar*)asString(s_str);
	GtkTextSearchFlags flags = (GtkTextSearchFlags)asFlag(s_flags, GTK_TYPE_TEXT_SEARCH_FLAGS);
	const GtkTextIter* limit = GET_LENGTH(s_limit) == 0 ? NULL : (const GtkTextIter*)getPtrValue(s_limit);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* match_start = (GtkTextIter *)g_new0(GtkTextIter, 1);
	GtkTextIter* match_end = (GtkTextIter *)g_new0(GtkTextIter, 1);

	ans = gtk_text_iter_backward_search(object, str, flags, match_start, match_end, limit);

	_result = asRLogical(ans);

	_result = retByVal(_result, "match_start", toRPointerWithFinalizer(match_start, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), "match_end", toRPointerWithFinalizer(match_end, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_equal(USER_OBJECT_ s_object, USER_OBJECT_ s_rhs)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	const GtkTextIter* rhs = (const GtkTextIter*)getPtrValue(s_rhs);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_equal(object, rhs);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_compare(USER_OBJECT_ s_object, USER_OBJECT_ s_rhs)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	const GtkTextIter* rhs = (const GtkTextIter*)getPtrValue(s_rhs);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_compare(object, rhs);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_in_range(USER_OBJECT_ s_object, USER_OBJECT_ s_start, USER_OBJECT_ s_end)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	const GtkTextIter* start = (const GtkTextIter*)getPtrValue(s_start);
	const GtkTextIter* end = (const GtkTextIter*)getPtrValue(s_end);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_iter_in_range(object, start, end);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_iter_order(USER_OBJECT_ s_object, USER_OBJECT_ s_second)
{
	GtkTextIter* object = (GtkTextIter*)getPtrValue(s_object);
	GtkTextIter* second = (GtkTextIter*)getPtrValue(s_second);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_iter_order(object, second);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_mark_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_mark_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_mark_set_visible(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkTextMark* object = GTK_TEXT_MARK(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_mark_set_visible(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_mark_get_visible(USER_OBJECT_ s_object)
{
	GtkTextMark* object = GTK_TEXT_MARK(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_mark_get_visible(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_mark_get_name(USER_OBJECT_ s_object)
{
	GtkTextMark* object = GTK_TEXT_MARK(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_mark_get_name(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_mark_get_deleted(USER_OBJECT_ s_object)
{
	GtkTextMark* object = GTK_TEXT_MARK(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_mark_get_deleted(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_mark_get_buffer(USER_OBJECT_ s_object)
{
	GtkTextMark* object = GTK_TEXT_MARK(getPtrValue(s_object));

	GtkTextBuffer* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_mark_get_buffer(object);

	_result = toRPointerWithRef(ans, "GtkTextBuffer");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_mark_get_left_gravity(USER_OBJECT_ s_object)
{
	GtkTextMark* object = GTK_TEXT_MARK(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_mark_get_left_gravity(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_tag_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_tag_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_tag_new(USER_OBJECT_ s_name)
{
	char * prop_names[] = { "name", NULL };
	USER_OBJECT_ args[] = { s_name };

	GtkTextTag* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_TEXT_TAG, prop_names, args, 1);

	_result = toRPointerWithFinalizer(ans, "GtkTextTag", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_tag_get_priority(USER_OBJECT_ s_object)
{
	GtkTextTag* object = GTK_TEXT_TAG(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_tag_get_priority(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_tag_set_priority(USER_OBJECT_ s_object, USER_OBJECT_ s_priority)
{
	GtkTextTag* object = GTK_TEXT_TAG(getPtrValue(s_object));
	gint priority = (gint)asInteger(s_priority);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_tag_set_priority(object, priority);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_tag_event(USER_OBJECT_ s_object, USER_OBJECT_ s_event_object, USER_OBJECT_ s_event, USER_OBJECT_ s_iter)
{
	GtkTextTag* object = GTK_TEXT_TAG(getPtrValue(s_object));
	GObject* event_object = (GObject*)getPtrValue(s_event_object);
	GdkEvent* event = (GdkEvent*)getPtrValue(s_event);
	const GtkTextIter* iter = (const GtkTextIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_tag_event(object, event_object, event, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_attributes_new()
{

	GtkTextAttributes* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_attributes_new();

	_result = toRPointerWithFinalizer(ans, "GtkTextAttributes", (RPointerFinalizer) gtk_text_attributes_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_attributes_copy(USER_OBJECT_ s_object)
{
	GtkTextAttributes* object = (GtkTextAttributes*)getPtrValue(s_object);

	GtkTextAttributes* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_attributes_copy(object);

	_result = toRPointerWithFinalizer(ans, "GtkTextAttributes", (RPointerFinalizer) gtk_text_attributes_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_attributes_copy_values(USER_OBJECT_ s_object, USER_OBJECT_ s_dest)
{
	GtkTextAttributes* object = (GtkTextAttributes*)getPtrValue(s_object);
	GtkTextAttributes* dest = (GtkTextAttributes*)getPtrValue(s_dest);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_attributes_copy_values(object, dest);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_attributes_unref(USER_OBJECT_ s_object)
{
	GtkTextAttributes* object = (GtkTextAttributes*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_attributes_unref(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_attributes_ref(USER_OBJECT_ s_object)
{
	GtkTextAttributes* object = (GtkTextAttributes*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_attributes_ref(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_attributes_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_attributes_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_tag_table_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_tag_table_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_tag_table_new()
{

	GtkTextTagTable* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_tag_table_new();

	_result = toRPointerWithFinalizer(ans, "GtkTextTagTable", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_tag_table_add(USER_OBJECT_ s_object, USER_OBJECT_ s_tag)
{
	GtkTextTagTable* object = GTK_TEXT_TAG_TABLE(getPtrValue(s_object));
	GtkTextTag* tag = GTK_TEXT_TAG(getPtrValue(s_tag));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_tag_table_add(object, tag);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_tag_table_remove(USER_OBJECT_ s_object, USER_OBJECT_ s_tag)
{
	GtkTextTagTable* object = GTK_TEXT_TAG_TABLE(getPtrValue(s_object));
	GtkTextTag* tag = GTK_TEXT_TAG(getPtrValue(s_tag));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_tag_table_remove(object, tag);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_tag_table_lookup(USER_OBJECT_ s_object, USER_OBJECT_ s_name)
{
	GtkTextTagTable* object = GTK_TEXT_TAG_TABLE(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);

	GtkTextTag* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_tag_table_lookup(object, name);

	_result = toRPointerWithRef(ans, "GtkTextTag");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_tag_table_foreach(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTextTagTableForeach func = (GtkTextTagTableForeach)S_GtkTextTagTableForeach;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkTextTagTable* object = GTK_TEXT_TAG_TABLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_tag_table_foreach(object, func, data);

	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_tag_table_get_size(USER_OBJECT_ s_object)
{
	GtkTextTagTable* object = GTK_TEXT_TAG_TABLE(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_tag_table_get_size(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_new_with_buffer(USER_OBJECT_ s_buffer)
{
	char * prop_names[] = { "buffer", NULL };
	USER_OBJECT_ args[] = { s_buffer };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_TEXT_VIEW, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_buffer(USER_OBJECT_ s_object, USER_OBJECT_ s_buffer)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextBuffer* buffer = GTK_TEXT_BUFFER(getPtrValue(s_buffer));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_buffer(object, buffer);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_buffer(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	GtkTextBuffer* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_buffer(object);

	_result = toRPointerWithRef(ans, "GtkTextBuffer");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_scroll_to_iter(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_within_margin, USER_OBJECT_ s_use_align, USER_OBJECT_ s_xalign, USER_OBJECT_ s_yalign)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);
	gdouble within_margin = (gdouble)asNumeric(s_within_margin);
	gboolean use_align = (gboolean)asLogical(s_use_align);
	gdouble xalign = (gdouble)asNumeric(s_xalign);
	gdouble yalign = (gdouble)asNumeric(s_yalign);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_scroll_to_iter(object, iter, within_margin, use_align, xalign, yalign);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_scroll_to_mark(USER_OBJECT_ s_object, USER_OBJECT_ s_mark, USER_OBJECT_ s_within_margin, USER_OBJECT_ s_use_align, USER_OBJECT_ s_xalign, USER_OBJECT_ s_yalign)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextMark* mark = GTK_TEXT_MARK(getPtrValue(s_mark));
	gdouble within_margin = (gdouble)asNumeric(s_within_margin);
	gboolean use_align = (gboolean)asLogical(s_use_align);
	gdouble xalign = (gdouble)asNumeric(s_xalign);
	gdouble yalign = (gdouble)asNumeric(s_yalign);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_scroll_to_mark(object, mark, within_margin, use_align, xalign, yalign);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_scroll_mark_onscreen(USER_OBJECT_ s_object, USER_OBJECT_ s_mark)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextMark* mark = GTK_TEXT_MARK(getPtrValue(s_mark));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_scroll_mark_onscreen(object, mark);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_move_mark_onscreen(USER_OBJECT_ s_object, USER_OBJECT_ s_mark)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextMark* mark = GTK_TEXT_MARK(getPtrValue(s_mark));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_move_mark_onscreen(object, mark);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_place_cursor_onscreen(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_place_cursor_onscreen(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_visible_rect(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkRectangle* visible_rect = (GdkRectangle *)g_new0(GdkRectangle, 1);

	gtk_text_view_get_visible_rect(object, visible_rect);


	_result = retByVal(_result, "visible_rect", asRGdkRectangle(visible_rect), NULL);
	CLEANUP(g_free, visible_rect);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_cursor_visible(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_cursor_visible(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_cursor_visible(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_cursor_visible(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_iter_location(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	const GtkTextIter* iter = (const GtkTextIter*)getPtrValue(s_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkRectangle* location = (GdkRectangle *)g_new0(GdkRectangle, 1);

	gtk_text_view_get_iter_location(object, iter, location);


	_result = retByVal(_result, "location", asRGdkRectangle(location), NULL);
	CLEANUP(g_free, location);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_iter_at_location(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* iter = (GtkTextIter *)g_new0(GtkTextIter, 1);

	gtk_text_view_get_iter_at_location(object, iter, x, y);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_iter_at_position(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* iter = (GtkTextIter *)g_new0(GtkTextIter, 1);
	gint trailing;

	gtk_text_view_get_iter_at_position(object, iter, &trailing, x, y);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), "trailing", asRInteger(trailing), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_line_yrange(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	const GtkTextIter* iter = (const GtkTextIter*)getPtrValue(s_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint y;
	gint height;

	gtk_text_view_get_line_yrange(object, iter, &y, &height);


	_result = retByVal(_result, "y", asRInteger(y), "height", asRInteger(height), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_line_at_y(USER_OBJECT_ s_object, USER_OBJECT_ s_y)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gint y = (gint)asInteger(s_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTextIter* target_iter = (GtkTextIter *)g_new0(GtkTextIter, 1);
	gint line_top;

	gtk_text_view_get_line_at_y(object, target_iter, y, &line_top);


	_result = retByVal(_result, "target_iter", toRPointerWithFinalizer(target_iter, "GtkTextIter", (RPointerFinalizer) gtk_text_iter_free), "line_top", asRInteger(line_top), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_buffer_to_window_coords(USER_OBJECT_ s_object, USER_OBJECT_ s_win, USER_OBJECT_ s_buffer_x, USER_OBJECT_ s_buffer_y)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextWindowType win = (GtkTextWindowType)asEnum(s_win, GTK_TYPE_TEXT_WINDOW_TYPE);
	gint buffer_x = (gint)asInteger(s_buffer_x);
	gint buffer_y = (gint)asInteger(s_buffer_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint window_x;
	gint window_y;

	gtk_text_view_buffer_to_window_coords(object, win, buffer_x, buffer_y, &window_x, &window_y);


	_result = retByVal(_result, "window_x", asRInteger(window_x), "window_y", asRInteger(window_y), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_window_to_buffer_coords(USER_OBJECT_ s_object, USER_OBJECT_ s_win, USER_OBJECT_ s_window_x, USER_OBJECT_ s_window_y)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextWindowType win = (GtkTextWindowType)asEnum(s_win, GTK_TYPE_TEXT_WINDOW_TYPE);
	gint window_x = (gint)asInteger(s_window_x);
	gint window_y = (gint)asInteger(s_window_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint buffer_x;
	gint buffer_y;

	gtk_text_view_window_to_buffer_coords(object, win, window_x, window_y, &buffer_x, &buffer_y);


	_result = retByVal(_result, "buffer_x", asRInteger(buffer_x), "buffer_y", asRInteger(buffer_y), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_window(USER_OBJECT_ s_object, USER_OBJECT_ s_win)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextWindowType win = (GtkTextWindowType)asEnum(s_win, GTK_TYPE_TEXT_WINDOW_TYPE);

	GdkWindow* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_window(object, win);

	_result = toRPointerWithRef(ans, "GdkWindow");

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_window_type(USER_OBJECT_ s_object, USER_OBJECT_ s_window)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GdkWindow* window = GDK_WINDOW(getPtrValue(s_window));

	GtkTextWindowType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_window_type(object, window);

	_result = asREnum(ans, GTK_TYPE_TEXT_WINDOW_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_border_window_size(USER_OBJECT_ s_object, USER_OBJECT_ s_type, USER_OBJECT_ s_size)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextWindowType type = (GtkTextWindowType)asEnum(s_type, GTK_TYPE_TEXT_WINDOW_TYPE);
	gint size = (gint)asInteger(s_size);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_border_window_size(object, type, size);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_border_window_size(USER_OBJECT_ s_object, USER_OBJECT_ s_type)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextWindowType type = (GtkTextWindowType)asEnum(s_type, GTK_TYPE_TEXT_WINDOW_TYPE);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_border_window_size(object, type);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_forward_display_line(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_forward_display_line(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_backward_display_line(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_backward_display_line(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_forward_display_line_end(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_forward_display_line_end(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_backward_display_line_start(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_backward_display_line_start(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_starts_display_line(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	const GtkTextIter* iter = (const GtkTextIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_starts_display_line(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_move_visually(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_count)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkTextIter* iter = (GtkTextIter*)getPtrValue(s_iter);
	gint count = (gint)asInteger(s_count);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_move_visually(object, iter, count);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_add_child_at_anchor(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_anchor)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	GtkTextChildAnchor* anchor = GTK_TEXT_CHILD_ANCHOR(getPtrValue(s_anchor));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_add_child_at_anchor(object, child, anchor);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_add_child_in_window(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_which_window, USER_OBJECT_ s_xpos, USER_OBJECT_ s_ypos)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	GtkTextWindowType which_window = (GtkTextWindowType)asEnum(s_which_window, GTK_TYPE_TEXT_WINDOW_TYPE);
	gint xpos = (gint)asInteger(s_xpos);
	gint ypos = (gint)asInteger(s_ypos);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_add_child_in_window(object, child, which_window, xpos, ypos);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_move_child(USER_OBJECT_ s_object, USER_OBJECT_ s_child, USER_OBJECT_ s_xpos, USER_OBJECT_ s_ypos)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkWidget* child = GTK_WIDGET(getPtrValue(s_child));
	gint xpos = (gint)asInteger(s_xpos);
	gint ypos = (gint)asInteger(s_ypos);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_move_child(object, child, xpos, ypos);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_wrap_mode(USER_OBJECT_ s_object, USER_OBJECT_ s_wrap_mode)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkWrapMode wrap_mode = (GtkWrapMode)asEnum(s_wrap_mode, GTK_TYPE_WRAP_MODE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_wrap_mode(object, wrap_mode);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_wrap_mode(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	GtkWrapMode ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_wrap_mode(object);

	_result = asREnum(ans, GTK_TYPE_WRAP_MODE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_editable(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_editable(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_editable(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_editable(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_overwrite(USER_OBJECT_ s_object, USER_OBJECT_ s_overwrite)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gboolean overwrite = (gboolean)asLogical(s_overwrite);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_overwrite(object, overwrite);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_overwrite(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_overwrite(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_accepts_tab(USER_OBJECT_ s_object, USER_OBJECT_ s_accepts_tab)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gboolean accepts_tab = (gboolean)asLogical(s_accepts_tab);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_accepts_tab(object, accepts_tab);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_accepts_tab(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_accepts_tab(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_pixels_above_lines(USER_OBJECT_ s_object, USER_OBJECT_ s_pixels_above_lines)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gint pixels_above_lines = (gint)asInteger(s_pixels_above_lines);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_pixels_above_lines(object, pixels_above_lines);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_pixels_above_lines(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_pixels_above_lines(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_pixels_below_lines(USER_OBJECT_ s_object, USER_OBJECT_ s_pixels_below_lines)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gint pixels_below_lines = (gint)asInteger(s_pixels_below_lines);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_pixels_below_lines(object, pixels_below_lines);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_pixels_below_lines(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_pixels_below_lines(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_pixels_inside_wrap(USER_OBJECT_ s_object, USER_OBJECT_ s_pixels_inside_wrap)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gint pixels_inside_wrap = (gint)asInteger(s_pixels_inside_wrap);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_pixels_inside_wrap(object, pixels_inside_wrap);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_pixels_inside_wrap(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_pixels_inside_wrap(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_justification(USER_OBJECT_ s_object, USER_OBJECT_ s_justification)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	GtkJustification justification = (GtkJustification)asEnum(s_justification, GTK_TYPE_JUSTIFICATION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_justification(object, justification);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_justification(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	GtkJustification ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_justification(object);

	_result = asREnum(ans, GTK_TYPE_JUSTIFICATION);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_left_margin(USER_OBJECT_ s_object, USER_OBJECT_ s_left_margin)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gint left_margin = (gint)asInteger(s_left_margin);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_left_margin(object, left_margin);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_left_margin(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_left_margin(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_right_margin(USER_OBJECT_ s_object, USER_OBJECT_ s_right_margin)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gint right_margin = (gint)asInteger(s_right_margin);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_right_margin(object, right_margin);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_right_margin(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_right_margin(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_indent(USER_OBJECT_ s_object, USER_OBJECT_ s_indent)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	gint indent = (gint)asInteger(s_indent);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_indent(object, indent);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_indent(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_indent(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_set_tabs(USER_OBJECT_ s_object, USER_OBJECT_ s_tabs)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));
	PangoTabArray* tabs = (PangoTabArray*)getPtrValue(s_tabs);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_text_view_set_tabs(object, tabs);


	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_tabs(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	PangoTabArray* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_tabs(object);

	_result = toRPointerWithFinalizer(ans, "PangoTabArray", (RPointerFinalizer) pango_tab_array_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_text_view_get_default_attributes(USER_OBJECT_ s_object)
{
	GtkTextView* object = GTK_TEXT_VIEW(getPtrValue(s_object));

	GtkTextAttributes* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_text_view_get_default_attributes(object);

	_result = toRPointerWithFinalizer(ans, "GtkTextAttributes", (RPointerFinalizer) gtk_text_attributes_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tips_query_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tips_query_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tips_query_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tips_query_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tips_query_start_query(USER_OBJECT_ s_object)
{
	GtkTipsQuery* object = GTK_TIPS_QUERY(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tips_query_start_query(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tips_query_stop_query(USER_OBJECT_ s_object)
{
	GtkTipsQuery* object = GTK_TIPS_QUERY(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tips_query_stop_query(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tips_query_set_caller(USER_OBJECT_ s_object, USER_OBJECT_ s_caller)
{
	GtkTipsQuery* object = GTK_TIPS_QUERY(getPtrValue(s_object));
	GtkWidget* caller = GTK_WIDGET(getPtrValue(s_caller));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tips_query_set_caller(object, caller);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tips_query_set_labels(USER_OBJECT_ s_object, USER_OBJECT_ s_label_inactive, USER_OBJECT_ s_label_no_tip)
{
	GtkTipsQuery* object = GTK_TIPS_QUERY(getPtrValue(s_object));
	const gchar* label_inactive = (const gchar*)asString(s_label_inactive);
	const gchar* label_no_tip = (const gchar*)asString(s_label_no_tip);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tips_query_set_labels(object, label_inactive, label_no_tip);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_action_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_action_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_action_new(USER_OBJECT_ s_name, USER_OBJECT_ s_label, USER_OBJECT_ s_tooltip, USER_OBJECT_ s_stock_id)
{
	char * prop_names[] = { "name", "label", "tooltip", "stock_id", NULL };
	USER_OBJECT_ args[] = { s_name, s_label, s_tooltip, s_stock_id };

	GtkToggleAction* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_TOGGLE_ACTION, prop_names, args, 4);

	_result = toRPointerWithFinalizer(ans, "GtkToggleAction", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_action_toggled(USER_OBJECT_ s_object)
{
	GtkToggleAction* object = GTK_TOGGLE_ACTION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toggle_action_toggled(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_action_set_active(USER_OBJECT_ s_object, USER_OBJECT_ s_is_active)
{
	GtkToggleAction* object = GTK_TOGGLE_ACTION(getPtrValue(s_object));
	gboolean is_active = (gboolean)asLogical(s_is_active);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toggle_action_set_active(object, is_active);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_action_get_active(USER_OBJECT_ s_object)
{
	GtkToggleAction* object = GTK_TOGGLE_ACTION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_action_get_active(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_action_set_draw_as_radio(USER_OBJECT_ s_object, USER_OBJECT_ s_draw_as_radio)
{
	GtkToggleAction* object = GTK_TOGGLE_ACTION(getPtrValue(s_object));
	gboolean draw_as_radio = (gboolean)asLogical(s_draw_as_radio);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toggle_action_set_draw_as_radio(object, draw_as_radio);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_action_get_draw_as_radio(USER_OBJECT_ s_object)
{
	GtkToggleAction* object = GTK_TOGGLE_ACTION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_action_get_draw_as_radio(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_button_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_button_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_button_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_button_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_button_new_with_label(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_button_new_with_label(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_button_new_with_mnemonic(USER_OBJECT_ s_label)
{
	const gchar* label = (const gchar*)asString(s_label);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_button_new_with_mnemonic(label);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_button_set_mode(USER_OBJECT_ s_object, USER_OBJECT_ s_draw_indicator)
{
	GtkToggleButton* object = GTK_TOGGLE_BUTTON(getPtrValue(s_object));
	gboolean draw_indicator = (gboolean)asLogical(s_draw_indicator);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toggle_button_set_mode(object, draw_indicator);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_button_get_mode(USER_OBJECT_ s_object)
{
	GtkToggleButton* object = GTK_TOGGLE_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_button_get_mode(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_button_set_active(USER_OBJECT_ s_object, USER_OBJECT_ s_is_active)
{
	GtkToggleButton* object = GTK_TOGGLE_BUTTON(getPtrValue(s_object));
	gboolean is_active = (gboolean)asLogical(s_is_active);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toggle_button_set_active(object, is_active);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_button_get_active(USER_OBJECT_ s_object)
{
	GtkToggleButton* object = GTK_TOGGLE_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_button_get_active(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_button_toggled(USER_OBJECT_ s_object)
{
	GtkToggleButton* object = GTK_TOGGLE_BUTTON(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toggle_button_toggled(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_button_set_inconsistent(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkToggleButton* object = GTK_TOGGLE_BUTTON(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toggle_button_set_inconsistent(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_button_get_inconsistent(USER_OBJECT_ s_object)
{
	GtkToggleButton* object = GTK_TOGGLE_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_button_get_inconsistent(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_button_set_state(USER_OBJECT_ s_object, USER_OBJECT_ s_is_active)
{
	GtkToggleButton* object = GTK_TOGGLE_BUTTON(getPtrValue(s_object));
	gboolean is_active = (gboolean)asLogical(s_is_active);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toggle_button_set_state(object, is_active);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_tool_button_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_tool_button_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_tool_button_new()
{

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_tool_button_new();

	_result = toRPointer(ans, "GtkToolItem");

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_tool_button_new_from_stock(USER_OBJECT_ s_stock_id)
{
	const gchar* stock_id = (const gchar*)asString(s_stock_id);

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_tool_button_new_from_stock(stock_id);

	_result = toRPointer(ans, "GtkToolItem");

	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_tool_button_set_active(USER_OBJECT_ s_object, USER_OBJECT_ s_is_active)
{
	GtkToggleToolButton* object = GTK_TOGGLE_TOOL_BUTTON(getPtrValue(s_object));
	gboolean is_active = (gboolean)asLogical(s_is_active);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toggle_tool_button_set_active(object, is_active);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toggle_tool_button_get_active(USER_OBJECT_ s_object)
{
	GtkToggleToolButton* object = GTK_TOGGLE_TOOL_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toggle_tool_button_get_active(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toolbar_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toolbar_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_insert(USER_OBJECT_ s_object, USER_OBJECT_ s_item, USER_OBJECT_ s_pos)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	GtkToolItem* item = GTK_TOOL_ITEM(getPtrValue(s_item));
	gint pos = (gint)asInteger(s_pos);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_insert(object, item, pos);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_get_item_index(USER_OBJECT_ s_object, USER_OBJECT_ s_item)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	GtkToolItem* item = GTK_TOOL_ITEM(getPtrValue(s_item));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toolbar_get_item_index(object, item);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_get_n_items(USER_OBJECT_ s_object)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toolbar_get_n_items(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_get_nth_item(USER_OBJECT_ s_object, USER_OBJECT_ s_n)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	gint n = (gint)asInteger(s_n);

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toolbar_get_nth_item(object, n);

	_result = toRPointer(ans, "GtkToolItem");

	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_get_drop_index(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toolbar_get_drop_index(object, x, y);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_set_drop_highlight_item(USER_OBJECT_ s_object, USER_OBJECT_ s_tool_item, USER_OBJECT_ s_index)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	GtkToolItem* tool_item = GET_LENGTH(s_tool_item) == 0 ? NULL : GTK_TOOL_ITEM(getPtrValue(s_tool_item));
	gint index = (gint)asInteger(s_index);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_set_drop_highlight_item(object, tool_item, index);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_set_show_arrow(USER_OBJECT_ s_object, USER_OBJECT_ s_show_arrow)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	gboolean show_arrow = (gboolean)asLogical(s_show_arrow);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_set_show_arrow(object, show_arrow);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_get_show_arrow(USER_OBJECT_ s_object)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toolbar_get_show_arrow(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_get_relief_style(USER_OBJECT_ s_object)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));

	GtkReliefStyle ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toolbar_get_relief_style(object);

	_result = asREnum(ans, GTK_TYPE_RELIEF_STYLE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_append_space(USER_OBJECT_ s_object)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_append_space(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_prepend_space(USER_OBJECT_ s_object)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_prepend_space(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_insert_space(USER_OBJECT_ s_object, USER_OBJECT_ s_position)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_insert_space(object, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_remove_space(USER_OBJECT_ s_object, USER_OBJECT_ s_position)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_remove_space(object, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_append_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_widget, USER_OBJECT_ s_tooltip_text, USER_OBJECT_ s_tooltip_private_text)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	const char* tooltip_text = GET_LENGTH(s_tooltip_text) == 0 ? NULL : (const char*)asString(s_tooltip_text);
	const char* tooltip_private_text = GET_LENGTH(s_tooltip_private_text) == 0 ? NULL : (const char*)asString(s_tooltip_private_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_append_widget(object, widget, tooltip_text, tooltip_private_text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_prepend_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_widget, USER_OBJECT_ s_tooltip_text, USER_OBJECT_ s_tooltip_private_text)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	const char* tooltip_text = GET_LENGTH(s_tooltip_text) == 0 ? NULL : (const char*)asString(s_tooltip_text);
	const char* tooltip_private_text = GET_LENGTH(s_tooltip_private_text) == 0 ? NULL : (const char*)asString(s_tooltip_private_text);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_prepend_widget(object, widget, tooltip_text, tooltip_private_text);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_insert_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_widget, USER_OBJECT_ s_tooltip_text, USER_OBJECT_ s_tooltip_private_text, USER_OBJECT_ s_position)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	const char* tooltip_text = GET_LENGTH(s_tooltip_text) == 0 ? NULL : (const char*)asString(s_tooltip_text);
	const char* tooltip_private_text = GET_LENGTH(s_tooltip_private_text) == 0 ? NULL : (const char*)asString(s_tooltip_private_text);
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_insert_widget(object, widget, tooltip_text, tooltip_private_text, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_set_orientation(USER_OBJECT_ s_object, USER_OBJECT_ s_orientation)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	GtkOrientation orientation = (GtkOrientation)asEnum(s_orientation, GTK_TYPE_ORIENTATION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_set_orientation(object, orientation);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_set_style(USER_OBJECT_ s_object, USER_OBJECT_ s_style)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	GtkToolbarStyle style = (GtkToolbarStyle)asEnum(s_style, GTK_TYPE_TOOLBAR_STYLE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_set_style(object, style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_set_icon_size(USER_OBJECT_ s_object, USER_OBJECT_ s_icon_size)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	GtkIconSize icon_size = (GtkIconSize)asEnum(s_icon_size, GTK_TYPE_ICON_SIZE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_set_icon_size(object, icon_size);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_set_tooltips(USER_OBJECT_ s_object, USER_OBJECT_ s_enable)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));
	gboolean enable = (gboolean)asLogical(s_enable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_set_tooltips(object, enable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_unset_style(USER_OBJECT_ s_object)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_unset_style(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_unset_icon_size(USER_OBJECT_ s_object)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_toolbar_unset_icon_size(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_get_orientation(USER_OBJECT_ s_object)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));

	GtkOrientation ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toolbar_get_orientation(object);

	_result = asREnum(ans, GTK_TYPE_ORIENTATION);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_get_style(USER_OBJECT_ s_object)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));

	GtkToolbarStyle ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toolbar_get_style(object);

	_result = asREnum(ans, GTK_TYPE_TOOLBAR_STYLE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_get_icon_size(USER_OBJECT_ s_object)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));

	GtkIconSize ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toolbar_get_icon_size(object);

	_result = asREnum(ans, GTK_TYPE_ICON_SIZE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_toolbar_get_tooltips(USER_OBJECT_ s_object)
{
	GtkToolbar* object = GTK_TOOLBAR(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_toolbar_get_tooltips(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_button_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_new(USER_OBJECT_ s_icon_widget, USER_OBJECT_ s_label)
{
	GtkWidget* icon_widget = GET_LENGTH(s_icon_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_icon_widget));
	const gchar* label = GET_LENGTH(s_label) == 0 ? NULL : (const gchar*)asString(s_label);

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_button_new(icon_widget, label);

	_result = toRPointer(ans, "GtkToolItem");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_new_from_stock(USER_OBJECT_ s_stock_id)
{
	const gchar* stock_id = (const gchar*)asString(s_stock_id);

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_button_new_from_stock(stock_id);

	_result = toRPointer(ans, "GtkToolItem");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_set_label(USER_OBJECT_ s_object, USER_OBJECT_ s_label)
{
	GtkToolButton* object = GTK_TOOL_BUTTON(getPtrValue(s_object));
	const gchar* label = GET_LENGTH(s_label) == 0 ? NULL : (const gchar*)asString(s_label);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_button_set_label(object, label);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_get_label(USER_OBJECT_ s_object)
{
	GtkToolButton* object = GTK_TOOL_BUTTON(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_button_get_label(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_set_use_underline(USER_OBJECT_ s_object, USER_OBJECT_ s_use_underline)
{
	GtkToolButton* object = GTK_TOOL_BUTTON(getPtrValue(s_object));
	gboolean use_underline = (gboolean)asLogical(s_use_underline);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_button_set_use_underline(object, use_underline);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_get_use_underline(USER_OBJECT_ s_object)
{
	GtkToolButton* object = GTK_TOOL_BUTTON(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_button_get_use_underline(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_set_stock_id(USER_OBJECT_ s_object, USER_OBJECT_ s_stock_id)
{
	GtkToolButton* object = GTK_TOOL_BUTTON(getPtrValue(s_object));
	const gchar* stock_id = GET_LENGTH(s_stock_id) == 0 ? NULL : (const gchar*)asString(s_stock_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_button_set_stock_id(object, stock_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_set_icon_name(USER_OBJECT_ s_object, USER_OBJECT_ s_icon_name)
{
	GtkToolButton* object = GTK_TOOL_BUTTON(getPtrValue(s_object));
	const gchar* icon_name = (const gchar*)asString(s_icon_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_button_set_icon_name(object, icon_name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_get_icon_name(USER_OBJECT_ s_object)
{
	GtkToolButton* object = GTK_TOOL_BUTTON(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_button_get_icon_name(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_get_stock_id(USER_OBJECT_ s_object)
{
	GtkToolButton* object = GTK_TOOL_BUTTON(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_button_get_stock_id(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_set_icon_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_icon_widget)
{
	GtkToolButton* object = GTK_TOOL_BUTTON(getPtrValue(s_object));
	GtkWidget* icon_widget = GET_LENGTH(s_icon_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_icon_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_button_set_icon_widget(object, icon_widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_get_icon_widget(USER_OBJECT_ s_object)
{
	GtkToolButton* object = GTK_TOOL_BUTTON(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_button_get_icon_widget(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_set_label_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_label_widget)
{
	GtkToolButton* object = GTK_TOOL_BUTTON(getPtrValue(s_object));
	GtkWidget* label_widget = GET_LENGTH(s_label_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_label_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_button_set_label_widget(object, label_widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_button_get_label_widget(USER_OBJECT_ s_object)
{
	GtkToolButton* object = GTK_TOOL_BUTTON(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_button_get_label_widget(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_new()
{

	GtkToolItem* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_new();

	_result = toRPointer(ans, "GtkToolItem");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_set_homogeneous(USER_OBJECT_ s_object, USER_OBJECT_ s_homogeneous)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));
	gboolean homogeneous = (gboolean)asLogical(s_homogeneous);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_item_set_homogeneous(object, homogeneous);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_get_homogeneous(USER_OBJECT_ s_object)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_get_homogeneous(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_set_expand(USER_OBJECT_ s_object, USER_OBJECT_ s_expand)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));
	gboolean expand = (gboolean)asLogical(s_expand);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_item_set_expand(object, expand);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_get_expand(USER_OBJECT_ s_object)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_get_expand(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_set_tooltip(USER_OBJECT_ s_object, USER_OBJECT_ s_tooltips, USER_OBJECT_ s_tip_text, USER_OBJECT_ s_tip_private)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));
	GtkTooltips* tooltips = GTK_TOOLTIPS(getPtrValue(s_tooltips));
	const gchar* tip_text = GET_LENGTH(s_tip_text) == 0 ? NULL : (const gchar*)asString(s_tip_text);
	const gchar* tip_private = GET_LENGTH(s_tip_private) == 0 ? NULL : (const gchar*)asString(s_tip_private);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_item_set_tooltip(object, tooltips, tip_text, tip_private);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_set_use_drag_window(USER_OBJECT_ s_object, USER_OBJECT_ s_use_drag_window)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));
	gboolean use_drag_window = (gboolean)asLogical(s_use_drag_window);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_item_set_use_drag_window(object, use_drag_window);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_get_use_drag_window(USER_OBJECT_ s_object)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_get_use_drag_window(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_set_visible_horizontal(USER_OBJECT_ s_object, USER_OBJECT_ s_visible_horizontal)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));
	gboolean visible_horizontal = (gboolean)asLogical(s_visible_horizontal);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_item_set_visible_horizontal(object, visible_horizontal);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_get_visible_horizontal(USER_OBJECT_ s_object)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_get_visible_horizontal(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_set_visible_vertical(USER_OBJECT_ s_object, USER_OBJECT_ s_visible_vertical)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));
	gboolean visible_vertical = (gboolean)asLogical(s_visible_vertical);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_item_set_visible_vertical(object, visible_vertical);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_get_visible_vertical(USER_OBJECT_ s_object)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_get_visible_vertical(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_set_is_important(USER_OBJECT_ s_object, USER_OBJECT_ s_is_important)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));
	gboolean is_important = (gboolean)asLogical(s_is_important);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_item_set_is_important(object, is_important);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_get_is_important(USER_OBJECT_ s_object)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_get_is_important(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_get_icon_size(USER_OBJECT_ s_object)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));

	GtkIconSize ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_get_icon_size(object);

	_result = asREnum(ans, GTK_TYPE_ICON_SIZE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_get_orientation(USER_OBJECT_ s_object)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));

	GtkOrientation ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_get_orientation(object);

	_result = asREnum(ans, GTK_TYPE_ORIENTATION);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_get_toolbar_style(USER_OBJECT_ s_object)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));

	GtkToolbarStyle ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_get_toolbar_style(object);

	_result = asREnum(ans, GTK_TYPE_TOOLBAR_STYLE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_get_relief_style(USER_OBJECT_ s_object)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));

	GtkReliefStyle ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_get_relief_style(object);

	_result = asREnum(ans, GTK_TYPE_RELIEF_STYLE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_retrieve_proxy_menu_item(USER_OBJECT_ s_object)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_retrieve_proxy_menu_item(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_set_proxy_menu_item(USER_OBJECT_ s_object, USER_OBJECT_ s_menu_item_id, USER_OBJECT_ s_menu_item)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));
	const gchar* menu_item_id = (const gchar*)asString(s_menu_item_id);
	GtkWidget* menu_item = GET_LENGTH(s_menu_item) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_menu_item));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_item_set_proxy_menu_item(object, menu_item_id, menu_item);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_get_proxy_menu_item(USER_OBJECT_ s_object, USER_OBJECT_ s_menu_item_id)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));
	const gchar* menu_item_id = (const gchar*)asString(s_menu_item_id);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tool_item_get_proxy_menu_item(object, menu_item_id);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tool_item_rebuild_menu(USER_OBJECT_ s_object)
{
	GtkToolItem* object = GTK_TOOL_ITEM(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tool_item_rebuild_menu(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tooltips_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tooltips_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tooltips_new()
{

	GtkTooltips* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tooltips_new();

	_result = toRPointer(ans, "GtkTooltips");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tooltips_enable(USER_OBJECT_ s_object)
{
	GtkTooltips* object = GTK_TOOLTIPS(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tooltips_enable(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tooltips_disable(USER_OBJECT_ s_object)
{
	GtkTooltips* object = GTK_TOOLTIPS(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tooltips_disable(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tooltips_set_delay(USER_OBJECT_ s_object, USER_OBJECT_ s_delay)
{
	GtkTooltips* object = GTK_TOOLTIPS(getPtrValue(s_object));
	guint delay = (guint)asNumeric(s_delay);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tooltips_set_delay(object, delay);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tooltips_set_tip(USER_OBJECT_ s_object, USER_OBJECT_ s_widget, USER_OBJECT_ s_tip_text, USER_OBJECT_ s_tip_private)
{
	GtkTooltips* object = GTK_TOOLTIPS(getPtrValue(s_object));
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));
	const gchar* tip_text = GET_LENGTH(s_tip_text) == 0 ? NULL : (const gchar*)asString(s_tip_text);
	const gchar* tip_private = GET_LENGTH(s_tip_private) == 0 ? NULL : (const gchar*)asString(s_tip_private);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tooltips_set_tip(object, widget, tip_text, tip_private);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tooltips_data_get(USER_OBJECT_ s_widget)
{
	GtkWidget* widget = GTK_WIDGET(getPtrValue(s_widget));

	GtkTooltipsData* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tooltips_data_get(widget);

	_result = toRPointer(ans, "GtkTooltipsData");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tooltips_force_window(USER_OBJECT_ s_object)
{
	GtkTooltips* object = GTK_TOOLTIPS(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tooltips_force_window(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tooltips_get_info_from_tip_window(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTooltips* tooltips = NULL;
	GtkWidget* current_widget = NULL;

	ans = gtk_tooltips_get_info_from_tip_window(object, &tooltips, &current_widget);

	_result = asRLogical(ans);

	_result = retByVal(_result, "tooltips", toRPointer(tooltips, "GtkTooltips"), "current_widget", toRPointer(current_widget, "GtkWidget"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_drag_source_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_drag_source_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_drag_source_row_draggable(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkTreeDragSource* object = GTK_TREE_DRAG_SOURCE(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_drag_source_row_draggable(object, path);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_drag_source_drag_data_delete(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkTreeDragSource* object = GTK_TREE_DRAG_SOURCE(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_drag_source_drag_data_delete(object, path);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_drag_source_drag_data_get(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkTreeDragSource* object = GTK_TREE_DRAG_SOURCE(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkSelectionData* selection_data = (GtkSelectionData *)g_new0(GtkSelectionData, 1);

	ans = gtk_tree_drag_source_drag_data_get(object, path, selection_data);

	_result = asRLogical(ans);

	_result = retByVal(_result, "selection_data", toRPointerWithFinalizer(selection_data, "GtkSelectionData", (RPointerFinalizer) gtk_selection_data_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_drag_dest_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_drag_dest_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_drag_dest_drag_data_received(USER_OBJECT_ s_object, USER_OBJECT_ s_dest, USER_OBJECT_ s_selection_data)
{
	GtkTreeDragDest* object = GTK_TREE_DRAG_DEST(getPtrValue(s_object));
	GtkTreePath* dest = (GtkTreePath*)getPtrValue(s_dest);
	GtkSelectionData* selection_data = (GtkSelectionData*)getPtrValue(s_selection_data);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_drag_dest_drag_data_received(object, dest, selection_data);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_drag_dest_row_drop_possible(USER_OBJECT_ s_object, USER_OBJECT_ s_dest_path, USER_OBJECT_ s_selection_data)
{
	GtkTreeDragDest* object = GTK_TREE_DRAG_DEST(getPtrValue(s_object));
	GtkTreePath* dest_path = (GtkTreePath*)getPtrValue(s_dest_path);
	GtkSelectionData* selection_data = (GtkSelectionData*)getPtrValue(s_selection_data);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_drag_dest_row_drop_possible(object, dest_path, selection_data);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_set_row_drag_data(USER_OBJECT_ s_object, USER_OBJECT_ s_tree_model, USER_OBJECT_ s_path)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);
	GtkTreeModel* tree_model = GTK_TREE_MODEL(getPtrValue(s_tree_model));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_set_row_drag_data(object, tree_model, path);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_get_row_drag_data(USER_OBJECT_ s_object)
{
	GtkSelectionData* object = (GtkSelectionData*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeModel* tree_model = NULL;
	GtkTreePath* path = NULL;

	ans = gtk_tree_get_row_drag_data(object, &tree_model, &path);

	_result = asRLogical(ans);

	_result = retByVal(_result, "tree_model", toRPointerWithRef(tree_model, "GtkTreeModel"), "path", toRPointerWithFinalizer(path, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_new()
{

	GtkTreePath* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_path_new();

	_result = toRPointerWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_new_from_string(USER_OBJECT_ s_path)
{
	gchar* path = (gchar*)asString(s_path);

	GtkTreePath* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_path_new_from_string(path);

	_result = toRPointerWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_to_string(USER_OBJECT_ s_object)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_path_to_string(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_new_first()
{

	GtkTreePath* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_path_new_first();

	_result = toRPointerWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_append_index(USER_OBJECT_ s_object, USER_OBJECT_ s_index)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);
	gint index = (gint)asInteger(s_index);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_path_append_index(object, index);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_prepend_index(USER_OBJECT_ s_object, USER_OBJECT_ s_index)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);
	gint index = (gint)asInteger(s_index);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_path_prepend_index(object, index);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_get_depth(USER_OBJECT_ s_object)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_path_get_depth(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_free(USER_OBJECT_ s_object)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_path_free(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_copy(USER_OBJECT_ s_object)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);

	GtkTreePath* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_path_copy(object);

	_result = toRPointerWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_compare(USER_OBJECT_ s_object, USER_OBJECT_ s_b)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);
	const GtkTreePath* b = (const GtkTreePath*)getPtrValue(s_b);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_path_compare(object, b);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_next(USER_OBJECT_ s_object)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_path_next(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_prev(USER_OBJECT_ s_object)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_path_prev(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_up(USER_OBJECT_ s_object)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_path_up(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_down(USER_OBJECT_ s_object)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_path_down(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_is_ancestor(USER_OBJECT_ s_object, USER_OBJECT_ s_descendant)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);
	GtkTreePath* descendant = (GtkTreePath*)getPtrValue(s_descendant);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_path_is_ancestor(object, descendant);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_path_is_descendant(USER_OBJECT_ s_object, USER_OBJECT_ s_ancestor)
{
	GtkTreePath* object = (GtkTreePath*)getPtrValue(s_object);
	GtkTreePath* ancestor = (GtkTreePath*)getPtrValue(s_ancestor);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_path_is_descendant(object, ancestor);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_row_reference_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_row_reference_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_row_reference_new(USER_OBJECT_ s_model, USER_OBJECT_ s_path)
{
	GtkTreeModel* model = GTK_TREE_MODEL(getPtrValue(s_model));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	GtkTreeRowReference* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_row_reference_new(model, path);

	_result = toRPointerWithFinalizer(ans, "GtkTreeRowReference", (RPointerFinalizer) gtk_tree_row_reference_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_row_reference_new_proxy(USER_OBJECT_ s_proxy, USER_OBJECT_ s_model, USER_OBJECT_ s_path)
{
	GObject* proxy = (GObject*)getPtrValue(s_proxy);
	GtkTreeModel* model = GTK_TREE_MODEL(getPtrValue(s_model));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	GtkTreeRowReference* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_row_reference_new_proxy(proxy, model, path);

	_result = toRPointerWithFinalizer(ans, "GtkTreeRowReference", (RPointerFinalizer) gtk_tree_row_reference_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_row_reference_get_path(USER_OBJECT_ s_object)
{
	GtkTreeRowReference* object = (GtkTreeRowReference*)getPtrValue(s_object);

	GtkTreePath* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_row_reference_get_path(object);

	_result = toRPointerWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_row_reference_get_model(USER_OBJECT_ s_object)
{
	GtkTreeRowReference* object = (GtkTreeRowReference*)getPtrValue(s_object);

	GtkTreeModel* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_row_reference_get_model(object);

	_result = toRPointerWithRef(ans, "GtkTreeModel");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_row_reference_valid(USER_OBJECT_ s_object)
{
	GtkTreeRowReference* object = (GtkTreeRowReference*)getPtrValue(s_object);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_row_reference_valid(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_row_reference_copy(USER_OBJECT_ s_object)
{
	GtkTreeRowReference* object = (GtkTreeRowReference*)getPtrValue(s_object);

	GtkTreeRowReference* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_row_reference_copy(object);

	_result = toRPointerWithFinalizer(ans, "GtkTreeRowReference", (RPointerFinalizer) gtk_tree_row_reference_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_row_reference_free(USER_OBJECT_ s_object)
{
	GtkTreeRowReference* object = (GtkTreeRowReference*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_row_reference_free(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_row_reference_inserted(USER_OBJECT_ s_proxy, USER_OBJECT_ s_path)
{
	GObject* proxy = (GObject*)getPtrValue(s_proxy);
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_row_reference_inserted(proxy, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_row_reference_deleted(USER_OBJECT_ s_proxy, USER_OBJECT_ s_path)
{
	GObject* proxy = (GObject*)getPtrValue(s_proxy);
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_row_reference_deleted(proxy, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_row_reference_reordered(USER_OBJECT_ s_proxy, USER_OBJECT_ s_path, USER_OBJECT_ s_iter, USER_OBJECT_ s_new_order)
{
	GObject* proxy = (GObject*)getPtrValue(s_proxy);
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);
	gint* new_order = (gint*)asArray(s_new_order, gint, asInteger);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_row_reference_reordered(proxy, path, iter, new_order);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_iter_copy(USER_OBJECT_ s_object)
{
	GtkTreeIter* object = (GtkTreeIter*)getPtrValue(s_object);

	GtkTreeIter* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_iter_copy(object);

	_result = toRPointerWithFinalizer(ans, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_iter_free(USER_OBJECT_ s_object)
{
	GtkTreeIter* object = (GtkTreeIter*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_iter_free(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_iter_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_iter_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_get_flags(USER_OBJECT_ s_object)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));

	GtkTreeModelFlags ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_get_flags(object);

	_result = asRFlag(ans, GTK_TYPE_TREE_MODEL_FLAGS);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_get_n_columns(USER_OBJECT_ s_object)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_get_n_columns(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_get_column_type(USER_OBJECT_ s_object, USER_OBJECT_ s_index)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	gint index = (gint)asInteger(s_index);

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_get_column_type(object, index);

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_get_iter(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	ans = gtk_tree_model_get_iter(object, iter, path);

	_result = asRLogical(ans);

	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_get_iter_from_string(USER_OBJECT_ s_object, USER_OBJECT_ s_path_string)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	const gchar* path_string = (const gchar*)asString(s_path_string);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	ans = gtk_tree_model_get_iter_from_string(object, iter, path_string);

	_result = asRLogical(ans);

	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_get_string_from_iter(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_get_string_from_iter(object, iter);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_get_iter_root(USER_OBJECT_ s_object)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	ans = gtk_tree_model_get_iter_root(object, iter);

	_result = asRLogical(ans);

	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_get_iter_first(USER_OBJECT_ s_object)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	ans = gtk_tree_model_get_iter_first(object, iter);

	_result = asRLogical(ans);

	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_get_path(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	GtkTreePath* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_get_path(object, iter);

	_result = toRPointerWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_get_value(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_column)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GValue* value = (GValue *)g_new0(GValue, 1);

	gtk_tree_model_get_value(object, iter, column, value);


	_result = retByVal(_result, "value", asRGValue(value), NULL);
	CLEANUP(g_value_unset, value);
	CLEANUP(g_free, value);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_iter_next(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_iter_next(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_iter_children(USER_OBJECT_ s_object, USER_OBJECT_ s_parent)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreeIter* parent = GET_LENGTH(s_parent) == 0 ? NULL : (GtkTreeIter*)getPtrValue(s_parent);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	ans = gtk_tree_model_iter_children(object, iter, parent);

	_result = asRLogical(ans);

	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_iter_has_child(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_iter_has_child(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_iter_n_children(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreeIter* iter = GET_LENGTH(s_iter) == 0 ? NULL : (GtkTreeIter*)getPtrValue(s_iter);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_iter_n_children(object, iter);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_iter_nth_child(USER_OBJECT_ s_object, USER_OBJECT_ s_parent, USER_OBJECT_ s_n)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreeIter* parent = GET_LENGTH(s_parent) == 0 ? NULL : (GtkTreeIter*)getPtrValue(s_parent);
	gint n = (gint)asInteger(s_n);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	ans = gtk_tree_model_iter_nth_child(object, iter, parent, n);

	_result = asRLogical(ans);

	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_iter_parent(USER_OBJECT_ s_object, USER_OBJECT_ s_child)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreeIter* child = (GtkTreeIter*)getPtrValue(s_child);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	ans = gtk_tree_model_iter_parent(object, iter, child);

	_result = asRLogical(ans);

	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_ref_node(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_ref_node(object, iter);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_unref_node(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_unref_node(object, iter);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_foreach(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_user_data)
{
	GtkTreeModelForeachFunc func = (GtkTreeModelForeachFunc)S_GtkTreeModelForeachFunc;
	GClosure* user_data = R_createGClosure(s_func, s_user_data);
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_foreach(object, func, user_data);

	g_closure_sink(user_data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_row_changed(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_iter)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_row_changed(object, path, iter);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_row_inserted(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_iter)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_row_inserted(object, path, iter);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_row_has_child_toggled(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_iter)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_row_has_child_toggled(object, path, iter);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_row_deleted(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_row_deleted(object, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_rows_reordered(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_iter, USER_OBJECT_ s_new_order)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);
	gint* new_order = (gint*)asArray(s_new_order, gint, asInteger);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_rows_reordered(object, path, iter, new_order);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_filter_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_filter_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_filter_new(USER_OBJECT_ s_object, USER_OBJECT_ s_root)
{
	GtkTreeModel* object = GTK_TREE_MODEL(getPtrValue(s_object));
	GtkTreePath* root = GET_LENGTH(s_root) == 0 ? NULL : (GtkTreePath*)getPtrValue(s_root);

	GtkTreeModel* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_filter_new(object, root);

	_result = toRPointerWithRef(ans, "GtkTreeModel");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_filter_set_visible_func(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTreeModelFilterVisibleFunc func = (GtkTreeModelFilterVisibleFunc)S_GtkTreeModelFilterVisibleFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkTreeModelFilter* object = GTK_TREE_MODEL_FILTER(getPtrValue(s_object));
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_filter_set_visible_func(object, func, data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_filter_set_modify_func(USER_OBJECT_ s_object, USER_OBJECT_ s_types, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTreeModelFilterModifyFunc func = (GtkTreeModelFilterModifyFunc)S_GtkTreeModelFilterModifyFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkTreeModelFilter* object = GTK_TREE_MODEL_FILTER(getPtrValue(s_object));
	gint n_columns = (gint)GET_LENGTH(s_types);
	GType* types = (GType*)asArray(s_types, GType, asNumeric);
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_filter_set_modify_func(object, n_columns, types, func, data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_filter_set_visible_column(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkTreeModelFilter* object = GTK_TREE_MODEL_FILTER(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_filter_set_visible_column(object, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_filter_get_model(USER_OBJECT_ s_object)
{
	GtkTreeModelFilter* object = GTK_TREE_MODEL_FILTER(getPtrValue(s_object));

	GtkTreeModel* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_filter_get_model(object);

	_result = toRPointerWithRef(ans, "GtkTreeModel");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_filter_convert_child_iter_to_iter(USER_OBJECT_ s_object, USER_OBJECT_ s_child_iter)
{
	GtkTreeModelFilter* object = GTK_TREE_MODEL_FILTER(getPtrValue(s_object));
	GtkTreeIter* child_iter = (GtkTreeIter*)getPtrValue(s_child_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* filter_iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_tree_model_filter_convert_child_iter_to_iter(object, filter_iter, child_iter);


	_result = retByVal(_result, "filter_iter", toRPointerWithFinalizer(filter_iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_filter_convert_iter_to_child_iter(USER_OBJECT_ s_object, USER_OBJECT_ s_filter_iter)
{
	GtkTreeModelFilter* object = GTK_TREE_MODEL_FILTER(getPtrValue(s_object));
	GtkTreeIter* filter_iter = (GtkTreeIter*)getPtrValue(s_filter_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* child_iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_tree_model_filter_convert_iter_to_child_iter(object, child_iter, filter_iter);


	_result = retByVal(_result, "child_iter", toRPointerWithFinalizer(child_iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_filter_convert_child_path_to_path(USER_OBJECT_ s_object, USER_OBJECT_ s_child_path)
{
	GtkTreeModelFilter* object = GTK_TREE_MODEL_FILTER(getPtrValue(s_object));
	GtkTreePath* child_path = (GtkTreePath*)getPtrValue(s_child_path);

	GtkTreePath* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_filter_convert_child_path_to_path(object, child_path);

	_result = toRPointerWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_filter_convert_path_to_child_path(USER_OBJECT_ s_object, USER_OBJECT_ s_filter_path)
{
	GtkTreeModelFilter* object = GTK_TREE_MODEL_FILTER(getPtrValue(s_object));
	GtkTreePath* filter_path = (GtkTreePath*)getPtrValue(s_filter_path);

	GtkTreePath* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_filter_convert_path_to_child_path(object, filter_path);

	_result = toRPointerWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_filter_refilter(USER_OBJECT_ s_object)
{
	GtkTreeModelFilter* object = GTK_TREE_MODEL_FILTER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_filter_refilter(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_filter_clear_cache(USER_OBJECT_ s_object)
{
	GtkTreeModelFilter* object = GTK_TREE_MODEL_FILTER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_filter_clear_cache(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_sort_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_sort_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_sort_new_with_model(USER_OBJECT_ s_child_model)
{
	char * prop_names[] = { "model", NULL };
	USER_OBJECT_ args[] = { s_child_model };

	GtkTreeModel* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_TREE_MODEL_SORT, prop_names, args, 1);

	_result = toRPointerWithFinalizer(ans, "GtkTreeModel", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_sort_get_model(USER_OBJECT_ s_object)
{
	GtkTreeModelSort* object = GTK_TREE_MODEL_SORT(getPtrValue(s_object));

	GtkTreeModel* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_sort_get_model(object);

	_result = toRPointerWithRef(ans, "GtkTreeModel");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_sort_convert_child_path_to_path(USER_OBJECT_ s_object, USER_OBJECT_ s_child_path)
{
	GtkTreeModelSort* object = GTK_TREE_MODEL_SORT(getPtrValue(s_object));
	GtkTreePath* child_path = (GtkTreePath*)getPtrValue(s_child_path);

	GtkTreePath* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_sort_convert_child_path_to_path(object, child_path);

	_result = toRPointerWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_sort_convert_child_iter_to_iter(USER_OBJECT_ s_object, USER_OBJECT_ s_child_iter)
{
	GtkTreeModelSort* object = GTK_TREE_MODEL_SORT(getPtrValue(s_object));
	GtkTreeIter* child_iter = (GtkTreeIter*)getPtrValue(s_child_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* sort_iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_tree_model_sort_convert_child_iter_to_iter(object, sort_iter, child_iter);


	_result = retByVal(_result, "sort_iter", toRPointerWithFinalizer(sort_iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_sort_convert_path_to_child_path(USER_OBJECT_ s_object, USER_OBJECT_ s_sorted_path)
{
	GtkTreeModelSort* object = GTK_TREE_MODEL_SORT(getPtrValue(s_object));
	GtkTreePath* sorted_path = (GtkTreePath*)getPtrValue(s_sorted_path);

	GtkTreePath* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_sort_convert_path_to_child_path(object, sorted_path);

	_result = toRPointerWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_sort_convert_iter_to_child_iter(USER_OBJECT_ s_object, USER_OBJECT_ s_sorted_iter)
{
	GtkTreeModelSort* object = GTK_TREE_MODEL_SORT(getPtrValue(s_object));
	GtkTreeIter* sorted_iter = (GtkTreeIter*)getPtrValue(s_sorted_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* child_iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_tree_model_sort_convert_iter_to_child_iter(object, child_iter, sorted_iter);


	_result = retByVal(_result, "child_iter", toRPointerWithFinalizer(child_iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_sort_reset_default_sort_func(USER_OBJECT_ s_object)
{
	GtkTreeModelSort* object = GTK_TREE_MODEL_SORT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_sort_reset_default_sort_func(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_sort_clear_cache(USER_OBJECT_ s_object)
{
	GtkTreeModelSort* object = GTK_TREE_MODEL_SORT(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_model_sort_clear_cache(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_model_sort_iter_is_valid(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeModelSort* object = GTK_TREE_MODEL_SORT(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_model_sort_iter_is_valid(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_selection_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_set_mode(USER_OBJECT_ s_object, USER_OBJECT_ s_type)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));
	GtkSelectionMode type = (GtkSelectionMode)asEnum(s_type, GTK_TYPE_SELECTION_MODE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_selection_set_mode(object, type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_get_mode(USER_OBJECT_ s_object)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));

	GtkSelectionMode ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_selection_get_mode(object);

	_result = asREnum(ans, GTK_TYPE_SELECTION_MODE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_set_select_function(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTreeSelectionFunc func = (GtkTreeSelectionFunc)S_GtkTreeSelectionFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_selection_set_select_function(object, func, data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_get_user_data(USER_OBJECT_ s_object)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));

	gpointer ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_selection_get_user_data(object);

	_result = ans;

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_get_tree_view(USER_OBJECT_ s_object)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));

	GtkTreeView* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_selection_get_tree_view(object);

	_result = toRPointer(ans, "GtkTreeView");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_get_selected(USER_OBJECT_ s_object)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeModel* model = NULL;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	ans = gtk_tree_selection_get_selected(object, &model, iter);

	_result = asRLogical(ans);

	_result = retByVal(_result, "model", toRPointerWithRef(model, "GtkTreeModel"), "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_get_selected_rows(USER_OBJECT_ s_object)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeModel* model = NULL;

	ans = gtk_tree_selection_get_selected_rows(object, &model);

	_result = asRGListWithFinalizer(ans, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free);

	_result = retByVal(_result, "model", toRPointerWithRef(model, "GtkTreeModel"), NULL);
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_count_selected_rows(USER_OBJECT_ s_object)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_selection_count_selected_rows(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_selected_foreach(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTreeSelectionForeachFunc func = (GtkTreeSelectionForeachFunc)S_GtkTreeSelectionForeachFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_selection_selected_foreach(object, func, data);

	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_select_path(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_selection_select_path(object, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_unselect_path(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_selection_unselect_path(object, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_select_iter(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_selection_select_iter(object, iter);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_unselect_iter(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_selection_unselect_iter(object, iter);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_path_is_selected(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_selection_path_is_selected(object, path);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_iter_is_selected(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_selection_iter_is_selected(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_select_all(USER_OBJECT_ s_object)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_selection_select_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_unselect_all(USER_OBJECT_ s_object)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_selection_unselect_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_select_range(USER_OBJECT_ s_object, USER_OBJECT_ s_start_path, USER_OBJECT_ s_end_path)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));
	GtkTreePath* start_path = (GtkTreePath*)getPtrValue(s_start_path);
	GtkTreePath* end_path = (GtkTreePath*)getPtrValue(s_end_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_selection_select_range(object, start_path, end_path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_selection_unselect_range(USER_OBJECT_ s_object, USER_OBJECT_ s_start_path, USER_OBJECT_ s_end_path)
{
	GtkTreeSelection* object = GTK_TREE_SELECTION(getPtrValue(s_object));
	GtkTreePath* start_path = (GtkTreePath*)getPtrValue(s_start_path);
	GtkTreePath* end_path = (GtkTreePath*)getPtrValue(s_end_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_selection_unselect_range(object, start_path, end_path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_sortable_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_sortable_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_sortable_sort_column_changed(USER_OBJECT_ s_object)
{
	GtkTreeSortable* object = GTK_TREE_SORTABLE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_sortable_sort_column_changed(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_sortable_get_sort_column_id(USER_OBJECT_ s_object)
{
	GtkTreeSortable* object = GTK_TREE_SORTABLE(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint sort_column_id;
	GtkSortType order;

	ans = gtk_tree_sortable_get_sort_column_id(object, &sort_column_id, &order);

	_result = asRLogical(ans);

	_result = retByVal(_result, "sort_column_id", asRInteger(sort_column_id), "order", asREnum(order, GTK_TYPE_SORT_TYPE), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_sortable_set_sort_column_id(USER_OBJECT_ s_object, USER_OBJECT_ s_sort_column_id, USER_OBJECT_ s_order)
{
	GtkTreeSortable* object = GTK_TREE_SORTABLE(getPtrValue(s_object));
	gint sort_column_id = (gint)asInteger(s_sort_column_id);
	GtkSortType order = (GtkSortType)asEnum(s_order, GTK_TYPE_SORT_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_sortable_set_sort_column_id(object, sort_column_id, order);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_sortable_set_sort_func(USER_OBJECT_ s_object, USER_OBJECT_ s_sort_column_id, USER_OBJECT_ s_sort_func, USER_OBJECT_ s_user_data)
{
	GtkTreeIterCompareFunc sort_func = (GtkTreeIterCompareFunc)S_GtkTreeIterCompareFunc;
	GClosure* user_data = R_createGClosure(s_sort_func, s_user_data);
	GtkTreeSortable* object = GTK_TREE_SORTABLE(getPtrValue(s_object));
	gint sort_column_id = (gint)asInteger(s_sort_column_id);
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_sortable_set_sort_func(object, sort_column_id, sort_func, user_data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_sortable_set_default_sort_func(USER_OBJECT_ s_object, USER_OBJECT_ s_sort_func, USER_OBJECT_ s_user_data)
{
	GtkTreeIterCompareFunc sort_func = (GtkTreeIterCompareFunc)S_GtkTreeIterCompareFunc;
	GClosure* user_data = R_createGClosure(s_sort_func, s_user_data);
	GtkTreeSortable* object = GTK_TREE_SORTABLE(getPtrValue(s_object));
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_sortable_set_default_sort_func(object, sort_func, user_data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_sortable_has_default_sort_func(USER_OBJECT_ s_object)
{
	GtkTreeSortable* object = GTK_TREE_SORTABLE(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_sortable_has_default_sort_func(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_store_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_newv(USER_OBJECT_ s_types)
{
	gint n_columns = (gint)GET_LENGTH(s_types);
	GType* types = (GType*)asArray(s_types, GType, asNumeric);

	GtkTreeStore* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_store_newv(n_columns, types);

	_result = toRPointerWithFinalizer(ans, "GtkTreeStore", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_set_column_types(USER_OBJECT_ s_object, USER_OBJECT_ s_types)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	gint n_columns = (gint)GET_LENGTH(s_types);
	GType* types = (GType*)asArray(s_types, GType, asNumeric);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_store_set_column_types(object, n_columns, types);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_remove(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_store_remove(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_insert(USER_OBJECT_ s_object, USER_OBJECT_ s_parent, USER_OBJECT_ s_position)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* parent = (GtkTreeIter*)getPtrValue(s_parent);
	gint position = (gint)asInteger(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_tree_store_insert(object, iter, parent, position);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_insert_before(USER_OBJECT_ s_object, USER_OBJECT_ s_parent, USER_OBJECT_ s_sibling)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* parent = (GtkTreeIter*)getPtrValue(s_parent);
	GtkTreeIter* sibling = (GtkTreeIter*)getPtrValue(s_sibling);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_tree_store_insert_before(object, iter, parent, sibling);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_insert_after(USER_OBJECT_ s_object, USER_OBJECT_ s_parent, USER_OBJECT_ s_sibling)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* parent = (GtkTreeIter*)getPtrValue(s_parent);
	GtkTreeIter* sibling = (GtkTreeIter*)getPtrValue(s_sibling);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_tree_store_insert_after(object, iter, parent, sibling);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_prepend(USER_OBJECT_ s_object, USER_OBJECT_ s_parent)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* parent = GET_LENGTH(s_parent) == 0 ? NULL : (GtkTreeIter*)getPtrValue(s_parent);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_tree_store_prepend(object, iter, parent);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_append(USER_OBJECT_ s_object, USER_OBJECT_ s_parent)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* parent = GET_LENGTH(s_parent) == 0 ? NULL : (GtkTreeIter*)getPtrValue(s_parent);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreeIter* iter = (GtkTreeIter *)g_new0(GtkTreeIter, 1);

	gtk_tree_store_append(object, iter, parent);


	_result = retByVal(_result, "iter", toRPointerWithFinalizer(iter, "GtkTreeIter", (RPointerFinalizer) gtk_tree_iter_free), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_is_ancestor(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_descendant)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);
	GtkTreeIter* descendant = (GtkTreeIter*)getPtrValue(s_descendant);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_store_is_ancestor(object, iter, descendant);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_iter_depth(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_store_iter_depth(object, iter);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_clear(USER_OBJECT_ s_object)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_store_clear(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_iter_is_valid(USER_OBJECT_ s_object, USER_OBJECT_ s_iter)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_store_iter_is_valid(object, iter);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_reorder(USER_OBJECT_ s_object, USER_OBJECT_ s_parent, USER_OBJECT_ s_new_order)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* parent = (GtkTreeIter*)getPtrValue(s_parent);
	gint* new_order = (gint*)asArray(s_new_order, gint, asInteger);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_store_reorder(object, parent, new_order);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_swap(USER_OBJECT_ s_object, USER_OBJECT_ s_a, USER_OBJECT_ s_b)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* a = (GtkTreeIter*)getPtrValue(s_a);
	GtkTreeIter* b = (GtkTreeIter*)getPtrValue(s_b);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_store_swap(object, a, b);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_move_after(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_position)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);
	GtkTreeIter* position = GET_LENGTH(s_position) == 0 ? NULL : (GtkTreeIter*)getPtrValue(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_store_move_after(object, iter, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_store_move_before(USER_OBJECT_ s_object, USER_OBJECT_ s_iter, USER_OBJECT_ s_position)
{
	GtkTreeStore* object = GTK_TREE_STORE(getPtrValue(s_object));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);
	GtkTreeIter* position = GET_LENGTH(s_position) == 0 ? NULL : (GtkTreeIter*)getPtrValue(s_position);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_store_move_before(object, iter, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_queue_resize(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_queue_resize(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_new_with_model(USER_OBJECT_ s_model)
{
	char * prop_names[] = { "model", NULL };
	USER_OBJECT_ args[] = { s_model };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_TREE_VIEW, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_model(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	GtkTreeModel* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_model(object);

	_result = toRPointerWithRef(ans, "GtkTreeModel");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_model(USER_OBJECT_ s_object, USER_OBJECT_ s_model)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreeModel* model = GET_LENGTH(s_model) == 0 ? NULL : GTK_TREE_MODEL(getPtrValue(s_model));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_model(object, model);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_selection(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	GtkTreeSelection* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_selection(object);

	_result = toRPointerWithRef(ans, "GtkTreeSelection");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_hadjustment(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_hadjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_hadjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkAdjustment* adjustment = GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_hadjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_vadjustment(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_vadjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_vadjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkAdjustment* adjustment = GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_vadjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_headers_visible(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_headers_visible(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_headers_visible(USER_OBJECT_ s_object, USER_OBJECT_ s_headers_visible)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gboolean headers_visible = (gboolean)asLogical(s_headers_visible);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_headers_visible(object, headers_visible);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_columns_autosize(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_columns_autosize(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_headers_clickable(USER_OBJECT_ s_object, USER_OBJECT_ s_active)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gboolean active = (gboolean)asLogical(s_active);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_headers_clickable(object, active);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_rules_hint(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_rules_hint(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_rules_hint(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_rules_hint(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_append_column(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreeViewColumn* column = GTK_TREE_VIEW_COLUMN(getPtrValue(s_column));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_append_column(object, column);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_remove_column(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreeViewColumn* column = GTK_TREE_VIEW_COLUMN(getPtrValue(s_column));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_remove_column(object, column);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_insert_column(USER_OBJECT_ s_object, USER_OBJECT_ s_column, USER_OBJECT_ s_position)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreeViewColumn* column = GTK_TREE_VIEW_COLUMN(getPtrValue(s_column));
	gint position = (gint)asInteger(s_position);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_insert_column(object, column, position);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_insert_column_with_data_func(USER_OBJECT_ s_object, USER_OBJECT_ s_position, USER_OBJECT_ s_title, USER_OBJECT_ s_cell, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTreeCellDataFunc func = (GtkTreeCellDataFunc)S_GtkTreeCellDataFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gint position = (gint)asInteger(s_position);
	const gchar* title = (const gchar*)asString(s_title);
	GtkCellRenderer* cell = GTK_CELL_RENDERER(getPtrValue(s_cell));
	GDestroyNotify dnotify = (GDestroyNotify)g_closure_sink;

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_insert_column_with_data_func(object, position, title, cell, func, data, dnotify);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_column(USER_OBJECT_ s_object, USER_OBJECT_ s_n)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gint n = (gint)asInteger(s_n);

	GtkTreeViewColumn* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_column(object, n);

	_result = toRPointer(ans, "GtkTreeViewColumn");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_columns(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_columns(object);

	_result = asRGList(ans, "GtkTreeViewColumn");
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_move_column_after(USER_OBJECT_ s_object, USER_OBJECT_ s_column, USER_OBJECT_ s_base_column)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreeViewColumn* column = GTK_TREE_VIEW_COLUMN(getPtrValue(s_column));
	GtkTreeViewColumn* base_column = GET_LENGTH(s_base_column) == 0 ? NULL : GTK_TREE_VIEW_COLUMN(getPtrValue(s_base_column));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_move_column_after(object, column, base_column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_expander_column(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreeViewColumn* column = GTK_TREE_VIEW_COLUMN(getPtrValue(s_column));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_expander_column(object, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_expander_column(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	GtkTreeViewColumn* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_expander_column(object);

	_result = toRPointer(ans, "GtkTreeViewColumn");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_column_drag_function(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_user_data)
{
	GtkTreeViewColumnDropFunc func = (GtkTreeViewColumnDropFunc)S_GtkTreeViewColumnDropFunc;
	GClosure* user_data = R_createGClosure(s_func, s_user_data);
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_column_drag_function(object, func, user_data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_scroll_to_point(USER_OBJECT_ s_object, USER_OBJECT_ s_tree_x, USER_OBJECT_ s_tree_y)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gint tree_x = (gint)asInteger(s_tree_x);
	gint tree_y = (gint)asInteger(s_tree_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_scroll_to_point(object, tree_x, tree_y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_scroll_to_cell(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_column, USER_OBJECT_ s_use_align, USER_OBJECT_ s_row_align, USER_OBJECT_ s_col_align)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkTreeViewColumn* column = GET_LENGTH(s_column) == 0 ? NULL : GTK_TREE_VIEW_COLUMN(getPtrValue(s_column));
	gboolean use_align = (gboolean)asLogical(s_use_align);
	gfloat row_align = (gfloat)asNumeric(s_row_align);
	gfloat col_align = (gfloat)asNumeric(s_col_align);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_scroll_to_cell(object, path, column, use_align, row_align, col_align);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_row_activated(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_column)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkTreeViewColumn* column = GTK_TREE_VIEW_COLUMN(getPtrValue(s_column));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_row_activated(object, path, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_expand_all(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_expand_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_collapse_all(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_collapse_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_expand_to_path(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_expand_to_path(object, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_expand_row(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_open_all)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	gboolean open_all = (gboolean)asLogical(s_open_all);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_expand_row(object, path, open_all);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_collapse_row(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_collapse_row(object, path);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_map_expanded_rows(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTreeViewMappingFunc func = (GtkTreeViewMappingFunc)S_GtkTreeViewMappingFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_map_expanded_rows(object, func, data);

	g_closure_sink(data);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_row_expanded(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_row_expanded(object, path);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_reorderable(USER_OBJECT_ s_object, USER_OBJECT_ s_reorderable)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gboolean reorderable = (gboolean)asLogical(s_reorderable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_reorderable(object, reorderable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_reorderable(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_reorderable(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_cursor(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_focus_column, USER_OBJECT_ s_start_editing)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkTreeViewColumn* focus_column = GET_LENGTH(s_focus_column) == 0 ? NULL : GTK_TREE_VIEW_COLUMN(getPtrValue(s_focus_column));
	gboolean start_editing = (gboolean)asLogical(s_start_editing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_cursor(object, path, focus_column, start_editing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_cursor_on_cell(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_focus_column, USER_OBJECT_ s_focus_cell, USER_OBJECT_ s_start_editing)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkTreeViewColumn* focus_column = GET_LENGTH(s_focus_column) == 0 ? NULL : GTK_TREE_VIEW_COLUMN(getPtrValue(s_focus_column));
	GtkCellRenderer* focus_cell = GET_LENGTH(s_focus_cell) == 0 ? NULL : GTK_CELL_RENDERER(getPtrValue(s_focus_cell));
	gboolean start_editing = (gboolean)asLogical(s_start_editing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_cursor_on_cell(object, path, focus_column, focus_cell, start_editing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_cursor(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreePath* path = NULL;
	GtkTreeViewColumn* focus_column = NULL;

	gtk_tree_view_get_cursor(object, &path, &focus_column);


	_result = retByVal(_result, "path", toRPointerWithFinalizer(path, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free), "focus_column", toRPointer(focus_column, "GtkTreeViewColumn"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_bin_window(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	GdkWindow* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_bin_window(object);

	_result = toRPointerWithRef(ans, "GdkWindow");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_path_at_pos(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreePath* path = NULL;
	GtkTreeViewColumn* column = NULL;
	gint cell_x;
	gint cell_y;

	ans = gtk_tree_view_get_path_at_pos(object, x, y, &path, &column, &cell_x, &cell_y);

	_result = asRLogical(ans);

	_result = retByVal(_result, "path", toRPointerWithFinalizer(path, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free), "column", toRPointer(column, "GtkTreeViewColumn"), "cell_x", asRInteger(cell_x), "cell_y", asRInteger(cell_y), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_cell_area(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_column)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkTreeViewColumn* column = GTK_TREE_VIEW_COLUMN(getPtrValue(s_column));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkRectangle* rect = (GdkRectangle *)g_new0(GdkRectangle, 1);

	gtk_tree_view_get_cell_area(object, path, column, rect);


	_result = retByVal(_result, "rect", asRGdkRectangle(rect), NULL);
	CLEANUP(g_free, rect);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_background_area(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_column)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkTreeViewColumn* column = GTK_TREE_VIEW_COLUMN(getPtrValue(s_column));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkRectangle* rect = (GdkRectangle *)g_new0(GdkRectangle, 1);

	gtk_tree_view_get_background_area(object, path, column, rect);


	_result = retByVal(_result, "rect", asRGdkRectangle(rect), NULL);
	CLEANUP(g_free, rect);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_visible_rect(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkRectangle* visible_rect = (GdkRectangle *)g_new0(GdkRectangle, 1);

	gtk_tree_view_get_visible_rect(object, visible_rect);


	_result = retByVal(_result, "visible_rect", asRGdkRectangle(visible_rect), NULL);
	CLEANUP(g_free, visible_rect);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_widget_to_tree_coords(USER_OBJECT_ s_object, USER_OBJECT_ s_wx, USER_OBJECT_ s_wy)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gint wx = (gint)asInteger(s_wx);
	gint wy = (gint)asInteger(s_wy);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint tx;
	gint ty;

	gtk_tree_view_widget_to_tree_coords(object, wx, wy, &tx, &ty);


	_result = retByVal(_result, "tx", asRInteger(tx), "ty", asRInteger(ty), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_tree_to_widget_coords(USER_OBJECT_ s_object, USER_OBJECT_ s_tx, USER_OBJECT_ s_ty)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gint tx = (gint)asInteger(s_tx);
	gint ty = (gint)asInteger(s_ty);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint wx;
	gint wy;

	gtk_tree_view_tree_to_widget_coords(object, tx, ty, &wx, &wy);


	_result = retByVal(_result, "wx", asRInteger(wx), "wy", asRInteger(wy), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_enable_model_drag_source(USER_OBJECT_ s_object, USER_OBJECT_ s_start_button_mask, USER_OBJECT_ s_targets, USER_OBJECT_ s_actions)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GdkModifierType start_button_mask = (GdkModifierType)asFlag(s_start_button_mask, GDK_TYPE_MODIFIER_TYPE);
	const GtkTargetEntry* targets = (const GtkTargetEntry*)asArrayRef(s_targets, GtkTargetEntry, asGtkTargetEntry);
	gint n_targets = (gint)GET_LENGTH(s_targets);
	GdkDragAction actions = (GdkDragAction)asFlag(s_actions, GDK_TYPE_DRAG_ACTION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_enable_model_drag_source(object, start_button_mask, targets, n_targets, actions);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_enable_model_drag_dest(USER_OBJECT_ s_object, USER_OBJECT_ s_targets, USER_OBJECT_ s_actions)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	const GtkTargetEntry* targets = (const GtkTargetEntry*)asArrayRef(s_targets, GtkTargetEntry, asGtkTargetEntry);
	gint n_targets = (gint)GET_LENGTH(s_targets);
	GdkDragAction actions = (GdkDragAction)asFlag(s_actions, GDK_TYPE_DRAG_ACTION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_enable_model_drag_dest(object, targets, n_targets, actions);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_unset_rows_drag_source(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_unset_rows_drag_source(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_unset_rows_drag_dest(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_unset_rows_drag_dest(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_drag_dest_row(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_pos)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);
	GtkTreeViewDropPosition pos = (GtkTreeViewDropPosition)asEnum(s_pos, GTK_TYPE_TREE_VIEW_DROP_POSITION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_drag_dest_row(object, path, pos);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_drag_dest_row(USER_OBJECT_ s_object, USER_OBJECT_ s_path, USER_OBJECT_ s_pos)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath** path = (GtkTreePath**)getPtrValue(s_path);
	GtkTreeViewDropPosition* pos = (GtkTreeViewDropPosition*)asEnum(s_pos, GTK_TYPE_TREE_VIEW_DROP_POSITION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_get_drag_dest_row(object, path, pos);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_dest_row_at_pos(USER_OBJECT_ s_object, USER_OBJECT_ s_drag_x, USER_OBJECT_ s_drag_y)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gint drag_x = (gint)asInteger(s_drag_x);
	gint drag_y = (gint)asInteger(s_drag_y);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkTreePath* path = NULL;
	GtkTreeViewDropPosition pos;

	ans = gtk_tree_view_get_dest_row_at_pos(object, drag_x, drag_y, &path, &pos);

	_result = asRLogical(ans);

	_result = retByVal(_result, "path", toRPointerWithFinalizer(path, "GtkTreePath", (RPointerFinalizer) gtk_tree_path_free), "pos", asREnum(pos, GTK_TYPE_TREE_VIEW_DROP_POSITION), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_create_row_drag_icon(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkTreePath* path = (GtkTreePath*)getPtrValue(s_path);

	GdkPixmap* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_create_row_drag_icon(object, path);

	_result = toRPointerWithFinalizer(ans, "GdkPixmap", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_enable_search(USER_OBJECT_ s_object, USER_OBJECT_ s_enable_search)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gboolean enable_search = (gboolean)asLogical(s_enable_search);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_enable_search(object, enable_search);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_enable_search(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_enable_search(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_search_column(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_search_column(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_search_column(USER_OBJECT_ s_object, USER_OBJECT_ s_column)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_search_column(object, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_search_equal_func(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	GtkTreeViewSearchEqualFunc ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_search_equal_func(object);

	_result = toRPointer(ans, "GtkTreeViewSearchEqualFunc");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_search_equal_func(USER_OBJECT_ s_object, USER_OBJECT_ s_search_equal_func, USER_OBJECT_ s_search_user_data)
{
	GtkTreeViewSearchEqualFunc search_equal_func = (GtkTreeViewSearchEqualFunc)S_GtkTreeViewSearchEqualFunc;
	GClosure* search_user_data = R_createGClosure(s_search_equal_func, s_search_user_data);
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkDestroyNotify search_destroy = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_search_equal_func(object, search_equal_func, search_user_data, search_destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_destroy_count_func(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTreeDestroyCountFunc func = (GtkTreeDestroyCountFunc)S_GtkTreeDestroyCountFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_destroy_count_func(object, func, data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_fixed_height_mode(USER_OBJECT_ s_object, USER_OBJECT_ s_enable)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gboolean enable = (gboolean)asLogical(s_enable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_fixed_height_mode(object, enable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_fixed_height_mode(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_fixed_height_mode(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_hover_selection(USER_OBJECT_ s_object, USER_OBJECT_ s_hover)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gboolean hover = (gboolean)asLogical(s_hover);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_hover_selection(object, hover);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_hover_selection(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_hover_selection(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_hover_expand(USER_OBJECT_ s_object, USER_OBJECT_ s_expand)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	gboolean expand = (gboolean)asLogical(s_expand);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_hover_expand(object, expand);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_hover_expand(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_hover_expand(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_get_row_separator_func(USER_OBJECT_ s_object)
{
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));

	GtkTreeViewRowSeparatorFunc ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_get_row_separator_func(object);

	_result = toRPointer(ans, "GtkTreeViewRowSeparatorFunc");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_set_row_separator_func(USER_OBJECT_ s_object, USER_OBJECT_ s_func, USER_OBJECT_ s_data)
{
	GtkTreeViewRowSeparatorFunc func = (GtkTreeViewRowSeparatorFunc)S_GtkTreeViewRowSeparatorFunc;
	GClosure* data = R_createGClosure(s_func, s_data);
	GtkTreeView* object = GTK_TREE_VIEW(getPtrValue(s_object));
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_set_row_separator_func(object, func, data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_new()
{

	GtkTreeViewColumn* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_new();

	_result = toRPointer(ans, "GtkTreeViewColumn");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_pack_start(USER_OBJECT_ s_object, USER_OBJECT_ s_cell, USER_OBJECT_ s_expand)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	GtkCellRenderer* cell = GTK_CELL_RENDERER(getPtrValue(s_cell));
	gboolean expand = (gboolean)asLogical(s_expand);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_pack_start(object, cell, expand);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_pack_end(USER_OBJECT_ s_object, USER_OBJECT_ s_cell, USER_OBJECT_ s_expand)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	GtkCellRenderer* cell = GTK_CELL_RENDERER(getPtrValue(s_cell));
	gboolean expand = (gboolean)asLogical(s_expand);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_pack_end(object, cell, expand);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_clear(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_clear(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_cell_renderers(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_cell_renderers(object);

	_result = asRGList(ans, "GtkCellRenderer");
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_add_attribute(USER_OBJECT_ s_object, USER_OBJECT_ s_cell_renderer, USER_OBJECT_ s_attribute, USER_OBJECT_ s_column)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	GtkCellRenderer* cell_renderer = GTK_CELL_RENDERER(getPtrValue(s_cell_renderer));
	gchar* attribute = (gchar*)asString(s_attribute);
	gint column = (gint)asInteger(s_column);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_add_attribute(object, cell_renderer, attribute, column);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_cell_data_func(USER_OBJECT_ s_object, USER_OBJECT_ s_cell_renderer, USER_OBJECT_ s_func, USER_OBJECT_ s_func_data)
{
	GtkTreeCellDataFunc func = (GtkTreeCellDataFunc)S_GtkTreeCellDataFunc;
	GClosure* func_data = R_createGClosure(s_func, s_func_data);
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	GtkCellRenderer* cell_renderer = GTK_CELL_RENDERER(getPtrValue(s_cell_renderer));
	GtkDestroyNotify destroy = (GtkDestroyNotify)g_closure_sink;

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_cell_data_func(object, cell_renderer, func, func_data, destroy);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_clear_attributes(USER_OBJECT_ s_object, USER_OBJECT_ s_cell_renderer)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	GtkCellRenderer* cell_renderer = GTK_CELL_RENDERER(getPtrValue(s_cell_renderer));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_clear_attributes(object, cell_renderer);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_spacing(USER_OBJECT_ s_object, USER_OBJECT_ s_spacing)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gint spacing = (gint)asInteger(s_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_spacing(object, spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_spacing(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_spacing(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_visible(USER_OBJECT_ s_object, USER_OBJECT_ s_visible)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gboolean visible = (gboolean)asLogical(s_visible);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_visible(object, visible);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_visible(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_visible(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_resizable(USER_OBJECT_ s_object, USER_OBJECT_ s_resizable)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gboolean resizable = (gboolean)asLogical(s_resizable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_resizable(object, resizable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_resizable(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_resizable(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_sizing(USER_OBJECT_ s_object, USER_OBJECT_ s_type)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	GtkTreeViewColumnSizing type = (GtkTreeViewColumnSizing)asEnum(s_type, GTK_TYPE_TREE_VIEW_COLUMN_SIZING);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_sizing(object, type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_sizing(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	GtkTreeViewColumnSizing ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_sizing(object);

	_result = asREnum(ans, GTK_TYPE_TREE_VIEW_COLUMN_SIZING);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_width(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_width(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_fixed_width(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_fixed_width(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_fixed_width(USER_OBJECT_ s_object, USER_OBJECT_ s_fixed_width)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gint fixed_width = (gint)asInteger(s_fixed_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_fixed_width(object, fixed_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_min_width(USER_OBJECT_ s_object, USER_OBJECT_ s_min_width)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gint min_width = (gint)asInteger(s_min_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_min_width(object, min_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_min_width(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_min_width(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_max_width(USER_OBJECT_ s_object, USER_OBJECT_ s_max_width)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gint max_width = (gint)asInteger(s_max_width);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_max_width(object, max_width);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_max_width(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_max_width(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_clicked(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_clicked(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_title(USER_OBJECT_ s_object, USER_OBJECT_ s_title)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gchar* title = (gchar*)asString(s_title);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_title(object, title);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_title(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_title(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_expand(USER_OBJECT_ s_object, USER_OBJECT_ s_expand)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gboolean expand = (gboolean)asLogical(s_expand);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_expand(object, expand);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_expand(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_expand(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_clickable(USER_OBJECT_ s_object, USER_OBJECT_ s_active)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gboolean active = (gboolean)asLogical(s_active);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_clickable(object, active);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_clickable(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_clickable(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_widget)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	GtkWidget* widget = GET_LENGTH(s_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_widget(object, widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_widget(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_widget(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_alignment(USER_OBJECT_ s_object, USER_OBJECT_ s_xalign)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gfloat xalign = (gfloat)asNumeric(s_xalign);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_alignment(object, xalign);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_alignment(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gfloat ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_alignment(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_reorderable(USER_OBJECT_ s_object, USER_OBJECT_ s_reorderable)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gboolean reorderable = (gboolean)asLogical(s_reorderable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_reorderable(object, reorderable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_reorderable(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_reorderable(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_sort_column_id(USER_OBJECT_ s_object, USER_OBJECT_ s_sort_column_id)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gint sort_column_id = (gint)asInteger(s_sort_column_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_sort_column_id(object, sort_column_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_sort_column_id(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_sort_column_id(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_sort_indicator(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_sort_indicator(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_sort_indicator(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_sort_indicator(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_set_sort_order(USER_OBJECT_ s_object, USER_OBJECT_ s_order)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	GtkSortType order = (GtkSortType)asEnum(s_order, GTK_TYPE_SORT_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_set_sort_order(object, order);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_get_sort_order(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	GtkSortType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_get_sort_order(object);

	_result = asREnum(ans, GTK_TYPE_SORT_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_cell_set_cell_data(USER_OBJECT_ s_object, USER_OBJECT_ s_tree_model, USER_OBJECT_ s_iter, USER_OBJECT_ s_is_expander, USER_OBJECT_ s_is_expanded)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	GtkTreeModel* tree_model = GTK_TREE_MODEL(getPtrValue(s_tree_model));
	GtkTreeIter* iter = (GtkTreeIter*)getPtrValue(s_iter);
	gboolean is_expander = (gboolean)asLogical(s_is_expander);
	gboolean is_expanded = (gboolean)asLogical(s_is_expanded);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_cell_set_cell_data(object, tree_model, iter, is_expander, is_expanded);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_cell_get_size(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GdkRectangle* cell_area = (GdkRectangle *)g_new0(GdkRectangle, 1);
	gint x_offset;
	gint y_offset;
	gint width;
	gint height;

	gtk_tree_view_column_cell_get_size(object, cell_area, &x_offset, &y_offset, &width, &height);


	_result = retByVal(_result, "cell_area", asRGdkRectangle(cell_area), "x_offset", asRInteger(x_offset), "y_offset", asRInteger(y_offset), "width", asRInteger(width), "height", asRInteger(height), NULL);
	CLEANUP(g_free, cell_area);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_cell_is_visible(USER_OBJECT_ s_object)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_tree_view_column_cell_is_visible(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_focus_cell(USER_OBJECT_ s_object, USER_OBJECT_ s_cell)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	GtkCellRenderer* cell = GTK_CELL_RENDERER(getPtrValue(s_cell));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_tree_view_column_focus_cell(object, cell);


	return(_result);
}
 

USER_OBJECT_
S_gtk_tree_view_column_cell_get_position(USER_OBJECT_ s_object, USER_OBJECT_ s_cell_renderer)
{
	GtkTreeViewColumn* object = GTK_TREE_VIEW_COLUMN(getPtrValue(s_object));
	GtkCellRenderer* cell_renderer = GTK_CELL_RENDERER(getPtrValue(s_cell_renderer));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint start_pos;
	gint width;

	gtk_tree_view_column_cell_get_position(object, cell_renderer, &start_pos, &width);


	_result = retByVal(_result, "start_pos", asRInteger(start_pos), "width", asRInteger(width), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ui_manager_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_new()
{

	GtkUIManager* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ui_manager_new();

	_result = toRPointerWithFinalizer(ans, "GtkUIManager", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_set_add_tearoffs(USER_OBJECT_ s_object, USER_OBJECT_ s_add_tearoffs)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));
	gboolean add_tearoffs = (gboolean)asLogical(s_add_tearoffs);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ui_manager_set_add_tearoffs(object, add_tearoffs);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_get_add_tearoffs(USER_OBJECT_ s_object)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ui_manager_get_add_tearoffs(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_insert_action_group(USER_OBJECT_ s_object, USER_OBJECT_ s_action_group, USER_OBJECT_ s_pos)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));
	GtkActionGroup* action_group = GTK_ACTION_GROUP(getPtrValue(s_action_group));
	gint pos = (gint)asInteger(s_pos);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ui_manager_insert_action_group(object, action_group, pos);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_remove_action_group(USER_OBJECT_ s_object, USER_OBJECT_ s_action_group)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));
	GtkActionGroup* action_group = GTK_ACTION_GROUP(getPtrValue(s_action_group));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ui_manager_remove_action_group(object, action_group);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_get_accel_group(USER_OBJECT_ s_object)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));

	GtkAccelGroup* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ui_manager_get_accel_group(object);

	_result = toRPointerWithRef(ans, "GtkAccelGroup");

	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_get_widget(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));
	const gchar* path = (const gchar*)asString(s_path);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ui_manager_get_widget(object, path);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_get_toplevels(USER_OBJECT_ s_object, USER_OBJECT_ s_types)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));
	GtkUIManagerItemType types = (GtkUIManagerItemType)asFlag(s_types, GTK_TYPE_UI_MANAGER_ITEM_TYPE);

	GSList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ui_manager_get_toplevels(object, types);

	_result = asRGSList(ans, "GtkWidget");
	CLEANUP(g_slist_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_get_action(USER_OBJECT_ s_object, USER_OBJECT_ s_path)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));
	const gchar* path = (const gchar*)asString(s_path);

	GtkAction* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ui_manager_get_action(object, path);

	_result = toRPointerWithRef(ans, "GtkAction");

	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_add_ui_from_string(USER_OBJECT_ s_object, USER_OBJECT_ s_buffer, USER_OBJECT_ s_length)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));
	const gchar* buffer = (const gchar*)asString(s_buffer);
	gssize length = (gssize)asInteger(s_length);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GError* error = NULL;

	ans = gtk_ui_manager_add_ui_from_string(object, buffer, length, &error);

	_result = asRNumeric(ans);

	_result = retByVal(_result, "error", asRGError(error), NULL);
	CLEANUP(g_error_free, error);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_add_ui_from_file(USER_OBJECT_ s_object, USER_OBJECT_ s_filename)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));
	const gchar* filename = (const gchar*)asString(s_filename);

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GError* error = NULL;

	ans = gtk_ui_manager_add_ui_from_file(object, filename, &error);

	_result = asRNumeric(ans);

	_result = retByVal(_result, "error", asRGError(error), NULL);
	CLEANUP(g_error_free, error);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_add_ui(USER_OBJECT_ s_object, USER_OBJECT_ s_merge_id, USER_OBJECT_ s_path, USER_OBJECT_ s_name, USER_OBJECT_ s_action, USER_OBJECT_ s_type, USER_OBJECT_ s_top)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));
	guint merge_id = (guint)asNumeric(s_merge_id);
	const gchar* path = (const gchar*)asString(s_path);
	const gchar* name = (const gchar*)asString(s_name);
	const gchar* action = GET_LENGTH(s_action) == 0 ? NULL : (const gchar*)asString(s_action);
	GtkUIManagerItemType type = (GtkUIManagerItemType)asFlag(s_type, GTK_TYPE_UI_MANAGER_ITEM_TYPE);
	gboolean top = (gboolean)asLogical(s_top);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ui_manager_add_ui(object, merge_id, path, name, action, type, top);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_remove_ui(USER_OBJECT_ s_object, USER_OBJECT_ s_merge_id)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));
	guint merge_id = (guint)asNumeric(s_merge_id);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ui_manager_remove_ui(object, merge_id);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_get_ui(USER_OBJECT_ s_object)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ui_manager_get_ui(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_ensure_update(USER_OBJECT_ s_object)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_ui_manager_ensure_update(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_ui_manager_new_merge_id(USER_OBJECT_ s_object)
{
	GtkUIManager* object = GTK_UI_MANAGER(getPtrValue(s_object));

	guint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_ui_manager_new_merge_id(object);

	_result = asRNumeric(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_vbutton_box_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vbutton_box_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_vbutton_box_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vbutton_box_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_vbutton_box_get_spacing_default()
{

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vbutton_box_get_spacing_default();

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_vbutton_box_set_spacing_default(USER_OBJECT_ s_spacing)
{
	gint spacing = (gint)asInteger(s_spacing);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_vbutton_box_set_spacing_default(spacing);


	return(_result);
}
 

USER_OBJECT_
S_gtk_vbutton_box_get_layout_default()
{

	GtkButtonBoxStyle ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vbutton_box_get_layout_default();

	_result = asREnum(ans, GTK_TYPE_BUTTON_BOX_STYLE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_vbutton_box_set_layout_default(USER_OBJECT_ s_layout)
{
	GtkButtonBoxStyle layout = (GtkButtonBoxStyle)asEnum(s_layout, GTK_TYPE_BUTTON_BOX_STYLE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_vbutton_box_set_layout_default(layout);


	return(_result);
}
 

USER_OBJECT_
S_gtk_vbox_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vbox_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_vbox_new(USER_OBJECT_ s_homogeneous, USER_OBJECT_ s_spacing)
{
	char * prop_names[] = { "homogeneous", "spacing", NULL };
	USER_OBJECT_ args[] = { s_homogeneous, s_spacing };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_VBOX, prop_names, args, 2);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_viewport_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_viewport_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_viewport_new(USER_OBJECT_ s_hadjustment, USER_OBJECT_ s_vadjustment)
{
	char * prop_names[] = { "hadjustment", "vadjustment", NULL };
	USER_OBJECT_ args[] = { s_hadjustment, s_vadjustment };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_VIEWPORT, prop_names, args, 2);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_viewport_get_hadjustment(USER_OBJECT_ s_object)
{
	GtkViewport* object = GTK_VIEWPORT(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_viewport_get_hadjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_viewport_get_vadjustment(USER_OBJECT_ s_object)
{
	GtkViewport* object = GTK_VIEWPORT(getPtrValue(s_object));

	GtkAdjustment* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_viewport_get_vadjustment(object);

	_result = toRPointer(ans, "GtkAdjustment");

	return(_result);
}
 

USER_OBJECT_
S_gtk_viewport_set_hadjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkViewport* object = GTK_VIEWPORT(getPtrValue(s_object));
	GtkAdjustment* adjustment = GET_LENGTH(s_adjustment) == 0 ? NULL : GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_viewport_set_hadjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_viewport_set_vadjustment(USER_OBJECT_ s_object, USER_OBJECT_ s_adjustment)
{
	GtkViewport* object = GTK_VIEWPORT(getPtrValue(s_object));
	GtkAdjustment* adjustment = GET_LENGTH(s_adjustment) == 0 ? NULL : GTK_ADJUSTMENT(getPtrValue(s_adjustment));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_viewport_set_vadjustment(object, adjustment);


	return(_result);
}
 

USER_OBJECT_
S_gtk_viewport_set_shadow_type(USER_OBJECT_ s_object, USER_OBJECT_ s_type)
{
	GtkViewport* object = GTK_VIEWPORT(getPtrValue(s_object));
	GtkShadowType type = (GtkShadowType)asEnum(s_type, GTK_TYPE_SHADOW_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_viewport_set_shadow_type(object, type);


	return(_result);
}
 

USER_OBJECT_
S_gtk_viewport_get_shadow_type(USER_OBJECT_ s_object)
{
	GtkViewport* object = GTK_VIEWPORT(getPtrValue(s_object));

	GtkShadowType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_viewport_get_shadow_type(object);

	_result = asREnum(ans, GTK_TYPE_SHADOW_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_vpaned_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vpaned_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_vpaned_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vpaned_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_vruler_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vruler_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_vruler_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vruler_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_vscale_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vscale_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_vscale_new(USER_OBJECT_ s_adjustment)
{
	char * prop_names[] = { "adjustment", NULL };
	USER_OBJECT_ args[] = { s_adjustment };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_VSCALE, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_vscale_new_with_range(USER_OBJECT_ s_min, USER_OBJECT_ s_max, USER_OBJECT_ s_step)
{
	gdouble min = (gdouble)asNumeric(s_min);
	gdouble max = (gdouble)asNumeric(s_max);
	gdouble step = (gdouble)asNumeric(s_step);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vscale_new_with_range(min, max, step);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_vscrollbar_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vscrollbar_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_vscrollbar_new(USER_OBJECT_ s_adjustment)
{
	char * prop_names[] = { "adjustment", NULL };
	USER_OBJECT_ args[] = { s_adjustment };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_VSCROLLBAR, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_vseparator_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vseparator_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_vseparator_new()
{

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_vseparator_new();

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_ref(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_ref(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_unref(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_unref(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_destroy(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_destroy(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_unparent(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_unparent(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_show(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_show(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_show_now(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_show_now(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_hide(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_hide(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_show_all(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_show_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_hide_all(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_hide_all(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_no_show_all(USER_OBJECT_ s_object, USER_OBJECT_ s_no_show_all)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gboolean no_show_all = (gboolean)asLogical(s_no_show_all);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_no_show_all(object, no_show_all);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_no_show_all(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_no_show_all(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_map(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_map(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_unmap(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_unmap(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_realize(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_realize(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_unrealize(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_unrealize(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_queue_draw(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_queue_draw(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_queue_draw_area(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_queue_draw_area(object, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_queue_clear(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_queue_clear(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_queue_clear_area(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_queue_clear_area(object, x, y, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_queue_resize(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_queue_resize(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_queue_resize_no_redraw(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_queue_resize_no_redraw(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_draw(USER_OBJECT_ s_object, USER_OBJECT_ s_area)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkRectangle* area = asGdkRectangle(s_area);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_draw(object, area);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_size_request(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkRequisition* requisition = (GtkRequisition *)g_new0(GtkRequisition, 1);

	gtk_widget_size_request(object, requisition);


	_result = retByVal(_result, "requisition", toRPointer(requisition, "GtkRequisition"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_size_allocate(USER_OBJECT_ s_object, USER_OBJECT_ s_allocation)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkAllocation* allocation = asGtkAllocation(s_allocation);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_size_allocate(object, allocation);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_child_requisition(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GtkRequisition* requisition = (GtkRequisition *)g_new0(GtkRequisition, 1);

	gtk_widget_get_child_requisition(object, requisition);


	_result = retByVal(_result, "requisition", toRPointer(requisition, "GtkRequisition"), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_add_accelerator(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_signal, USER_OBJECT_ s_accel_group, USER_OBJECT_ s_accel_key, USER_OBJECT_ s_accel_mods, USER_OBJECT_ s_accel_flags)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	const gchar* accel_signal = (const gchar*)asString(s_accel_signal);
	GtkAccelGroup* accel_group = GTK_ACCEL_GROUP(getPtrValue(s_accel_group));
	guint accel_key = (guint)asNumeric(s_accel_key);
	GdkModifierType accel_mods = (GdkModifierType)asFlag(s_accel_mods, GDK_TYPE_MODIFIER_TYPE);
	GtkAccelFlags accel_flags = (GtkAccelFlags)asFlag(s_accel_flags, GTK_TYPE_ACCEL_FLAGS);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_add_accelerator(object, accel_signal, accel_group, accel_key, accel_mods, accel_flags);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_remove_accelerator(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_group, USER_OBJECT_ s_accel_key, USER_OBJECT_ s_accel_mods)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkAccelGroup* accel_group = GTK_ACCEL_GROUP(getPtrValue(s_accel_group));
	guint accel_key = (guint)asNumeric(s_accel_key);
	GdkModifierType accel_mods = (GdkModifierType)asFlag(s_accel_mods, GDK_TYPE_MODIFIER_TYPE);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_remove_accelerator(object, accel_group, accel_key, accel_mods);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_accel_path(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_path, USER_OBJECT_ s_accel_group)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	const gchar* accel_path = (const gchar*)asString(s_accel_path);
	GtkAccelGroup* accel_group = GTK_ACCEL_GROUP(getPtrValue(s_accel_group));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_accel_path(object, accel_path, accel_group);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_can_activate_accel(USER_OBJECT_ s_object, USER_OBJECT_ s_signal_id)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	guint signal_id = (guint)asNumeric(s_signal_id);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_can_activate_accel(object, signal_id);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_mnemonic_activate(USER_OBJECT_ s_object, USER_OBJECT_ s_group_cycling)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gboolean group_cycling = (gboolean)asLogical(s_group_cycling);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_mnemonic_activate(object, group_cycling);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_event(USER_OBJECT_ s_object, USER_OBJECT_ s_event)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkEvent* event = (GdkEvent*)getPtrValue(s_event);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_event(object, event);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_send_expose(USER_OBJECT_ s_object, USER_OBJECT_ s_event)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkEvent* event = (GdkEvent*)getPtrValue(s_event);

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_send_expose(object, event);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_activate(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_activate(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_scroll_adjustments(USER_OBJECT_ s_object, USER_OBJECT_ s_hadjustment, USER_OBJECT_ s_vadjustment)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkAdjustment* hadjustment = GET_LENGTH(s_hadjustment) == 0 ? NULL : GTK_ADJUSTMENT(getPtrValue(s_hadjustment));
	GtkAdjustment* vadjustment = GET_LENGTH(s_vadjustment) == 0 ? NULL : GTK_ADJUSTMENT(getPtrValue(s_vadjustment));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_set_scroll_adjustments(object, hadjustment, vadjustment);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_reparent(USER_OBJECT_ s_object, USER_OBJECT_ s_new_parent)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkWidget* new_parent = GTK_WIDGET(getPtrValue(s_new_parent));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_reparent(object, new_parent);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_intersect(USER_OBJECT_ s_object, USER_OBJECT_ s_area, USER_OBJECT_ s_intersection)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkRectangle* area = asGdkRectangle(s_area);
	GdkRectangle* intersection = asGdkRectangle(s_intersection);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_intersect(object, area, intersection);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_region_intersect(USER_OBJECT_ s_object, USER_OBJECT_ s_region)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkRegion* region = (GdkRegion*)getPtrValue(s_region);

	GdkRegion* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_region_intersect(object, region);

	_result = toRPointerWithFinalizer(ans, "GdkRegion", (RPointerFinalizer) gdk_region_destroy);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_freeze_child_notify(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_freeze_child_notify(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_child_notify(USER_OBJECT_ s_object, USER_OBJECT_ s_child_property)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	const gchar* child_property = (const gchar*)asString(s_child_property);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_child_notify(object, child_property);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_thaw_child_notify(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_thaw_child_notify(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_is_focus(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_is_focus(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_grab_focus(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_grab_focus(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_grab_default(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_grab_default(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_name(USER_OBJECT_ s_object, USER_OBJECT_ s_name)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_name(object, name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_name(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_name(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_state(USER_OBJECT_ s_object, USER_OBJECT_ s_state)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkStateType state = (GtkStateType)asEnum(s_state, GTK_TYPE_STATE_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_state(object, state);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_sensitive(USER_OBJECT_ s_object, USER_OBJECT_ s_sensitive)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gboolean sensitive = (gboolean)asLogical(s_sensitive);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_sensitive(object, sensitive);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_app_paintable(USER_OBJECT_ s_object, USER_OBJECT_ s_app_paintable)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gboolean app_paintable = (gboolean)asLogical(s_app_paintable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_app_paintable(object, app_paintable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_double_buffered(USER_OBJECT_ s_object, USER_OBJECT_ s_double_buffered)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gboolean double_buffered = (gboolean)asLogical(s_double_buffered);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_double_buffered(object, double_buffered);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_redraw_on_allocate(USER_OBJECT_ s_object, USER_OBJECT_ s_redraw_on_allocate)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gboolean redraw_on_allocate = (gboolean)asLogical(s_redraw_on_allocate);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_redraw_on_allocate(object, redraw_on_allocate);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_parent(USER_OBJECT_ s_object, USER_OBJECT_ s_parent)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkWidget* parent = GTK_WIDGET(getPtrValue(s_parent));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_parent(object, parent);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_parent_window(USER_OBJECT_ s_object, USER_OBJECT_ s_parent_window)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkWindow* parent_window = GDK_WINDOW(getPtrValue(s_parent_window));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_parent_window(object, parent_window);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_child_visible(USER_OBJECT_ s_object, USER_OBJECT_ s_is_visible)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gboolean is_visible = (gboolean)asLogical(s_is_visible);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_child_visible(object, is_visible);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_child_visible(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_child_visible(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_parent(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_parent(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_parent_window(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GdkWindow* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_parent_window(object);

	_result = toRPointerWithRef(ans, "GdkWindow");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_child_focus(USER_OBJECT_ s_object, USER_OBJECT_ s_direction)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkDirectionType direction = (GtkDirectionType)asEnum(s_direction, GTK_TYPE_DIRECTION_TYPE);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_child_focus(object, direction);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_size_request(USER_OBJECT_ s_object, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_size_request(object, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_size_request(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint width;
	gint height;

	gtk_widget_get_size_request(object, &width, &height);


	_result = retByVal(_result, "width", asRInteger(width), "height", asRInteger(height), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_uposition(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_uposition(object, x, y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_usize(USER_OBJECT_ s_object, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_usize(object, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_events(USER_OBJECT_ s_object, USER_OBJECT_ s_events)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gint events = (gint)asInteger(s_events);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_events(object, events);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_add_events(USER_OBJECT_ s_object, USER_OBJECT_ s_events)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	gint events = (gint)asInteger(s_events);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_add_events(object, events);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_extension_events(USER_OBJECT_ s_object, USER_OBJECT_ s_mode)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkExtensionMode mode = (GdkExtensionMode)asEnum(s_mode, GDK_TYPE_EXTENSION_MODE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_extension_events(object, mode);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_extension_events(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GdkExtensionMode ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_extension_events(object);

	_result = asREnum(ans, GDK_TYPE_EXTENSION_MODE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_toplevel(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_toplevel(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_ancestor(USER_OBJECT_ s_object, USER_OBJECT_ s_widget_type)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GType widget_type = (GType)asNumeric(s_widget_type);

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_ancestor(object, widget_type);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_colormap(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GdkColormap* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_colormap(object);

	_result = toRPointerWithRef(ans, "GdkColormap");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_visual(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GdkVisual* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_visual(object);

	_result = toRPointerWithRef(ans, "GdkVisual");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_screen(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GdkScreen* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_screen(object);

	_result = toRPointerWithRef(ans, "GdkScreen");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_has_screen(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_has_screen(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_display(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GdkDisplay* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_display(object);

	_result = toRPointerWithRef(ans, "GdkDisplay");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_root_window(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GdkWindow* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_root_window(object);

	_result = toRPointerWithRef(ans, "GdkWindow");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_settings(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GtkSettings* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_settings(object);

	_result = toRPointerWithRef(ans, "GtkSettings");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_clipboard(USER_OBJECT_ s_object, USER_OBJECT_ s_selection)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkAtom selection = asGdkAtom(s_selection);

	GtkClipboard* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_clipboard(object, selection);

	_result = toRPointerWithRef(ans, "GtkClipboard");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_accessible(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	AtkObject* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_accessible(object);

	_result = toRPointerWithRef(ans, "AtkObject");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_colormap(USER_OBJECT_ s_object, USER_OBJECT_ s_colormap)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkColormap* colormap = GDK_COLORMAP(getPtrValue(s_colormap));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_colormap(object, colormap);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_events(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	gint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_events(object);

	_result = asRInteger(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_pointer(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint x;
	gint y;

	gtk_widget_get_pointer(object, &x, &y);


	_result = retByVal(_result, "x", asRInteger(x), "y", asRInteger(y), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_is_ancestor(USER_OBJECT_ s_object, USER_OBJECT_ s_ancestor)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkWidget* ancestor = GTK_WIDGET(getPtrValue(s_ancestor));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_is_ancestor(object, ancestor);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_translate_coordinates(USER_OBJECT_ s_object, USER_OBJECT_ s_dest_widget, USER_OBJECT_ s_src_x, USER_OBJECT_ s_src_y)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkWidget* dest_widget = GTK_WIDGET(getPtrValue(s_dest_widget));
	gint src_x = (gint)asInteger(s_src_x);
	gint src_y = (gint)asInteger(s_src_y);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint dest_x;
	gint dest_y;

	ans = gtk_widget_translate_coordinates(object, dest_widget, src_x, src_y, &dest_x, &dest_y);

	_result = asRLogical(ans);

	_result = retByVal(_result, "dest_x", asRInteger(dest_x), "dest_y", asRInteger(dest_y), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_hide_on_delete(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_hide_on_delete(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_style(USER_OBJECT_ s_object, USER_OBJECT_ s_style)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkStyle* style = GET_LENGTH(s_style) == 0 ? NULL : GTK_STYLE(getPtrValue(s_style));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_style(object, style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_ensure_style(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_ensure_style(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_style(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GtkStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_style(object);

	_result = toRPointerWithRef(ans, "GtkStyle");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_modify_style(USER_OBJECT_ s_object, USER_OBJECT_ s_style)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkRcStyle* style = GTK_RC_STYLE(getPtrValue(s_style));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_modify_style(object, style);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_modifier_style(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GtkRcStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_modifier_style(object);

	_result = toRPointerWithRef(ans, "GtkRcStyle");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_modify_fg(USER_OBJECT_ s_object, USER_OBJECT_ s_state, USER_OBJECT_ s_color)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkStateType state = (GtkStateType)asEnum(s_state, GTK_TYPE_STATE_TYPE);
	GdkColor* color = GET_LENGTH(s_color) == 0 ? NULL : asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_modify_fg(object, state, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_modify_bg(USER_OBJECT_ s_object, USER_OBJECT_ s_state, USER_OBJECT_ s_color)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkStateType state = (GtkStateType)asEnum(s_state, GTK_TYPE_STATE_TYPE);
	GdkColor* color = GET_LENGTH(s_color) == 0 ? NULL : asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_modify_bg(object, state, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_modify_text(USER_OBJECT_ s_object, USER_OBJECT_ s_state, USER_OBJECT_ s_color)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkStateType state = (GtkStateType)asEnum(s_state, GTK_TYPE_STATE_TYPE);
	GdkColor* color = GET_LENGTH(s_color) == 0 ? NULL : asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_modify_text(object, state, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_modify_base(USER_OBJECT_ s_object, USER_OBJECT_ s_state, USER_OBJECT_ s_color)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkStateType state = (GtkStateType)asEnum(s_state, GTK_TYPE_STATE_TYPE);
	GdkColor* color = GET_LENGTH(s_color) == 0 ? NULL : asGdkColor(s_color);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_modify_base(object, state, color);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_modify_font(USER_OBJECT_ s_object, USER_OBJECT_ s_font_desc)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	PangoFontDescription* font_desc = GET_LENGTH(s_font_desc) == 0 ? NULL : (PangoFontDescription*)getPtrValue(s_font_desc);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_modify_font(object, font_desc);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_create_pango_context(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	PangoContext* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_create_pango_context(object);

	_result = toRPointerWithFinalizer(ans, "PangoContext", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_pango_context(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	PangoContext* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_pango_context(object);

	_result = toRPointerWithRef(ans, "PangoContext");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_create_pango_layout(USER_OBJECT_ s_object, USER_OBJECT_ s_text)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	const gchar* text = (const gchar*)asString(s_text);

	PangoLayout* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_create_pango_layout(object, text);

	_result = toRPointerWithFinalizer(ans, "PangoLayout", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_render_icon(USER_OBJECT_ s_object, USER_OBJECT_ s_stock_id, USER_OBJECT_ s_size, USER_OBJECT_ s_detail)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	const gchar* stock_id = (const gchar*)asString(s_stock_id);
	GtkIconSize size = (GtkIconSize)asEnum(s_size, GTK_TYPE_ICON_SIZE);
	const gchar* detail = GET_LENGTH(s_detail) == 0 ? NULL : (const gchar*)asString(s_detail);

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_render_icon(object, stock_id, size, detail);

	_result = toRPointerWithFinalizer(ans, "GdkPixbuf", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_composite_name(USER_OBJECT_ s_object, USER_OBJECT_ s_name)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	const gchar* name = (const gchar*)asString(s_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_composite_name(object, name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_composite_name(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_composite_name(object);

	_result = asRString(ans);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_reset_rc_styles(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_reset_rc_styles(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_push_colormap(USER_OBJECT_ s_cmap)
{
	GdkColormap* cmap = GDK_COLORMAP(getPtrValue(s_cmap));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_push_colormap(cmap);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_push_composite_child()
{

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_push_composite_child();


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_pop_composite_child()
{

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_pop_composite_child();


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_pop_colormap()
{

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_pop_colormap();


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_class_install_style_property(USER_OBJECT_ s_klass, USER_OBJECT_ s_pspec)
{
	GtkWidgetClass* klass = (GtkWidgetClass*)getPtrValue(s_klass);
	GParamSpec* pspec = asGParamSpec(s_pspec);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_class_install_style_property(klass, pspec);

	CLEANUP(g_param_spec_sink, (GParamSpec*)pspec);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_class_find_style_property(USER_OBJECT_ s_klass, USER_OBJECT_ s_property_name)
{
	GtkWidgetClass* klass = (GtkWidgetClass*)getPtrValue(s_klass);
	const gchar* property_name = (const gchar*)asString(s_property_name);

	GParamSpec* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_class_find_style_property(klass, property_name);

	_result = asRGParamSpec(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_class_list_style_properties(USER_OBJECT_ s_klass)
{
	GtkWidgetClass* klass = (GtkWidgetClass*)getPtrValue(s_klass);

	GParamSpec** ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;
	guint n_properties;

	ans = gtk_widget_class_list_style_properties(klass, &n_properties);

	_result = asRArrayWithSize(ans, asRGParamSpec, n_properties);

	_result = retByVal(_result, "n_properties", asRNumeric(n_properties), NULL);
	CLEANUP(g_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_style_get_property(USER_OBJECT_ s_object, USER_OBJECT_ s_property_name)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	const gchar* property_name = (const gchar*)asString(s_property_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GValue* value = (GValue *)g_new0(GValue, 1);

	gtk_widget_style_get_property(object, property_name, value);


	_result = retByVal(_result, "value", asRGValue(value), NULL);
	CLEANUP(g_value_unset, value);
	CLEANUP(g_free, value);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_default_style()
{

	GtkStyle* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_default_style();

	_result = toRPointerWithRef(ans, "GtkStyle");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_default_colormap(USER_OBJECT_ s_colormap)
{
	GdkColormap* colormap = GDK_COLORMAP(getPtrValue(s_colormap));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_default_colormap(colormap);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_default_colormap()
{

	GdkColormap* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_default_colormap();

	_result = toRPointerWithRef(ans, "GdkColormap");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_default_visual()
{

	GdkVisual* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_default_visual();

	_result = toRPointerWithRef(ans, "GdkVisual");

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_direction(USER_OBJECT_ s_object, USER_OBJECT_ s_dir)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkTextDirection dir = (GtkTextDirection)asEnum(s_dir, GTK_TYPE_TEXT_DIRECTION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_direction(object, dir);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_direction(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GtkTextDirection ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_direction(object);

	_result = asREnum(ans, GTK_TYPE_TEXT_DIRECTION);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_set_default_direction(USER_OBJECT_ s_dir)
{
	GtkTextDirection dir = (GtkTextDirection)asEnum(s_dir, GTK_TYPE_TEXT_DIRECTION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_set_default_direction(dir);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_get_default_direction()
{

	GtkTextDirection ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_get_default_direction();

	_result = asREnum(ans, GTK_TYPE_TEXT_DIRECTION);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_shape_combine_mask(USER_OBJECT_ s_object, USER_OBJECT_ s_shape_mask, USER_OBJECT_ s_offset_x, USER_OBJECT_ s_offset_y)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GdkBitmap* shape_mask = GDK_DRAWABLE(getPtrValue(s_shape_mask));
	gint offset_x = (gint)asInteger(s_offset_x);
	gint offset_y = (gint)asInteger(s_offset_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_shape_combine_mask(object, shape_mask, offset_x, offset_y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_reset_shapes(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_reset_shapes(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_path(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	guint path_length;
	gchar* path = NULL;
	gchar* path_reversed = NULL;

	gtk_widget_path(object, &path_length, &path, &path_reversed);


	_result = retByVal(_result, "path_length", asRNumeric(path_length), "path", asRString(path), "path_reversed", asRString(path_reversed), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_class_path(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	guint path_length;
	gchar* path = NULL;
	gchar* path_reversed = NULL;

	gtk_widget_class_path(object, &path_length, &path, &path_reversed);


	_result = retByVal(_result, "path_length", asRNumeric(path_length), "path", asRString(path), "path_reversed", asRString(path_reversed), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_list_mnemonic_labels(USER_OBJECT_ s_object)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_widget_list_mnemonic_labels(object);

	_result = asRGListConv(ans, (ElementConverter)asRString);
	CLEANUP(GListFreeStrings, ans);
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_add_mnemonic_label(USER_OBJECT_ s_object, USER_OBJECT_ s_label)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkWidget* label = GTK_WIDGET(getPtrValue(s_label));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_add_mnemonic_label(object, label);


	return(_result);
}
 

USER_OBJECT_
S_gtk_widget_remove_mnemonic_label(USER_OBJECT_ s_object, USER_OBJECT_ s_label)
{
	GtkWidget* object = GTK_WIDGET(getPtrValue(s_object));
	GtkWidget* label = GTK_WIDGET(getPtrValue(s_label));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_widget_remove_mnemonic_label(object, label);


	return(_result);
}
 

USER_OBJECT_
S_gtk_requisition_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_requisition_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_requisition_copy(USER_OBJECT_ s_object)
{
	GtkRequisition* object = (GtkRequisition*)getPtrValue(s_object);

	GtkRequisition* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_requisition_copy(object);

	_result = toRPointer(ans, "GtkRequisition");

	return(_result);
}
 

USER_OBJECT_
S_gtk_requisition_free(USER_OBJECT_ s_object)
{
	GtkRequisition* object = (GtkRequisition*)getPtrValue(s_object);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_requisition_free(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_new(USER_OBJECT_ s_type)
{
	char * prop_names[] = { "type", NULL };
	USER_OBJECT_ args[] = { s_type };

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = propertyConstructor(GTK_TYPE_WINDOW, prop_names, args, 1);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_title(USER_OBJECT_ s_object, USER_OBJECT_ s_title)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	const gchar* title = (const gchar*)asString(s_title);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_title(object, title);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_title(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_title(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_wmclass(USER_OBJECT_ s_object, USER_OBJECT_ s_wmclass_name, USER_OBJECT_ s_wmclass_class)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	const gchar* wmclass_name = (const gchar*)asString(s_wmclass_name);
	const gchar* wmclass_class = (const gchar*)asString(s_wmclass_class);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_wmclass(object, wmclass_name, wmclass_class);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_role(USER_OBJECT_ s_object, USER_OBJECT_ s_role)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	const gchar* role = (const gchar*)asString(s_role);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_role(object, role);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_role(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_role(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_add_accel_group(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_group)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GtkAccelGroup* accel_group = GTK_ACCEL_GROUP(getPtrValue(s_accel_group));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_add_accel_group(object, accel_group);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_remove_accel_group(USER_OBJECT_ s_object, USER_OBJECT_ s_accel_group)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GtkAccelGroup* accel_group = GTK_ACCEL_GROUP(getPtrValue(s_accel_group));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_remove_accel_group(object, accel_group);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_position(USER_OBJECT_ s_object, USER_OBJECT_ s_position)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GtkWindowPosition position = (GtkWindowPosition)asEnum(s_position, GTK_TYPE_WINDOW_POSITION);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_position(object, position);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_activate_focus(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_activate_focus(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_focus(USER_OBJECT_ s_object, USER_OBJECT_ s_focus)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GtkWidget* focus = GET_LENGTH(s_focus) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_focus));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_focus(object, focus);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_focus(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	GtkWidget* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_focus(object);

	_result = toRPointer(ans, "GtkWidget");

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_default(USER_OBJECT_ s_object, USER_OBJECT_ s_default_widget)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GtkWidget* default_widget = GET_LENGTH(s_default_widget) == 0 ? NULL : GTK_WIDGET(getPtrValue(s_default_widget));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_default(object, default_widget);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_activate_default(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_activate_default(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_transient_for(USER_OBJECT_ s_object, USER_OBJECT_ s_parent)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GtkWindow* parent = GET_LENGTH(s_parent) == 0 ? NULL : GTK_WINDOW(getPtrValue(s_parent));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_transient_for(object, parent);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_transient_for(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	GtkWindow* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_transient_for(object);

	_result = toRPointer(ans, "GtkWindow");

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_type_hint(USER_OBJECT_ s_object, USER_OBJECT_ s_hint)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GdkWindowTypeHint hint = (GdkWindowTypeHint)asEnum(s_hint, GDK_TYPE_WINDOW_TYPE_HINT);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_type_hint(object, hint);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_type_hint(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	GdkWindowTypeHint ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_type_hint(object);

	_result = asREnum(ans, GDK_TYPE_WINDOW_TYPE_HINT);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_skip_taskbar_hint(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_skip_taskbar_hint(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_skip_taskbar_hint(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_skip_taskbar_hint(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_skip_pager_hint(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_skip_pager_hint(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_skip_pager_hint(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_skip_pager_hint(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_urgency_hint(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_urgency_hint(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_urgency_hint(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_urgency_hint(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_accept_focus(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_accept_focus(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_accept_focus(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_accept_focus(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_destroy_with_parent(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_destroy_with_parent(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_destroy_with_parent(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_destroy_with_parent(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_resizable(USER_OBJECT_ s_object, USER_OBJECT_ s_resizable)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gboolean resizable = (gboolean)asLogical(s_resizable);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_resizable(object, resizable);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_resizable(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_resizable(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_gravity(USER_OBJECT_ s_object, USER_OBJECT_ s_gravity)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GdkGravity gravity = (GdkGravity)asEnum(s_gravity, GDK_TYPE_GRAVITY);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_gravity(object, gravity);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_gravity(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	GdkGravity ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_gravity(object);

	_result = asREnum(ans, GDK_TYPE_GRAVITY);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_screen(USER_OBJECT_ s_object, USER_OBJECT_ s_screen)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GdkScreen* screen = GDK_SCREEN(getPtrValue(s_screen));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_screen(object, screen);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_screen(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	GdkScreen* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_screen(object);

	_result = toRPointerWithRef(ans, "GdkScreen");

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_is_active(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_is_active(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_has_toplevel_focus(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_has_toplevel_focus(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_has_frame(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_has_frame(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_has_frame(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_has_frame(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_frame_dimensions(USER_OBJECT_ s_object, USER_OBJECT_ s_left, USER_OBJECT_ s_top, USER_OBJECT_ s_right, USER_OBJECT_ s_bottom)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gint left = (gint)asInteger(s_left);
	gint top = (gint)asInteger(s_top);
	gint right = (gint)asInteger(s_right);
	gint bottom = (gint)asInteger(s_bottom);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_frame_dimensions(object, left, top, right, bottom);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_frame_dimensions(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint left;
	gint top;
	gint right;
	gint bottom;

	gtk_window_get_frame_dimensions(object, &left, &top, &right, &bottom);


	_result = retByVal(_result, "left", asRInteger(left), "top", asRInteger(top), "right", asRInteger(right), "bottom", asRInteger(bottom), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_decorated(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_decorated(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_decorated(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_decorated(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_icon_list(USER_OBJECT_ s_object, USER_OBJECT_ s_list)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GList* list = asGList(s_list);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_icon_list(object, list);

	CLEANUP(g_list_free, (GList*)list);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_icon_list(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_icon_list(object);

	_result = asRGListWithRef(ans, "GdkPixbuf");
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_icon(USER_OBJECT_ s_object, USER_OBJECT_ s_icon)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GdkPixbuf* icon = GET_LENGTH(s_icon) == 0 ? NULL : GDK_PIXBUF(getPtrValue(s_icon));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_icon(object, icon);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_icon_from_file(USER_OBJECT_ s_object, USER_OBJECT_ s_filename)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	const gchar* filename = (const gchar*)asString(s_filename);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GError* error = NULL;

	gtk_window_set_icon_from_file(object, filename, &error);


	_result = retByVal(_result, "error", asRGError(error), NULL);
	CLEANUP(g_error_free, error);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_icon(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	GdkPixbuf* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_icon(object);

	_result = toRPointerWithRef(ans, "GdkPixbuf");

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_default_icon_list(USER_OBJECT_ s_list)
{
	GList* list = asGList(s_list);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_default_icon_list(list);

	CLEANUP(g_list_free, (GList*)list);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_default_icon_list()
{

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_default_icon_list();

	_result = asRGListWithRef(ans, "GdkPixbuf");
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_default_icon(USER_OBJECT_ s_icon)
{
	GdkPixbuf* icon = GDK_PIXBUF(getPtrValue(s_icon));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_default_icon(icon);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_default_icon_from_file(USER_OBJECT_ s_filename)
{
	const gchar* filename = (const gchar*)asString(s_filename);

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	GError* error = NULL;

	gtk_window_set_default_icon_from_file(filename, &error);


	_result = retByVal(_result, "error", asRGError(error), NULL);
	CLEANUP(g_error_free, error);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_auto_startup_notification(USER_OBJECT_ s_setting)
{
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_auto_startup_notification(setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_modal(USER_OBJECT_ s_object, USER_OBJECT_ s_modal)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gboolean modal = (gboolean)asLogical(s_modal);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_modal(object, modal);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_modal(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_modal(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_list_toplevels()
{

	GList* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_list_toplevels();

	_result = asRGList(ans, "GtkWindow");
	CLEANUP(g_list_free, ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_add_mnemonic(USER_OBJECT_ s_object, USER_OBJECT_ s_keyval, USER_OBJECT_ s_target)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	guint keyval = (guint)asNumeric(s_keyval);
	GtkWidget* target = GTK_WIDGET(getPtrValue(s_target));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_add_mnemonic(object, keyval, target);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_remove_mnemonic(USER_OBJECT_ s_object, USER_OBJECT_ s_keyval, USER_OBJECT_ s_target)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	guint keyval = (guint)asNumeric(s_keyval);
	GtkWidget* target = GTK_WIDGET(getPtrValue(s_target));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_remove_mnemonic(object, keyval, target);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_mnemonic_activate(USER_OBJECT_ s_object, USER_OBJECT_ s_keyval, USER_OBJECT_ s_modifier)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	guint keyval = (guint)asNumeric(s_keyval);
	GdkModifierType modifier = (GdkModifierType)asFlag(s_modifier, GDK_TYPE_MODIFIER_TYPE);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_mnemonic_activate(object, keyval, modifier);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_mnemonic_modifier(USER_OBJECT_ s_object, USER_OBJECT_ s_modifier)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GdkModifierType modifier = (GdkModifierType)asFlag(s_modifier, GDK_TYPE_MODIFIER_TYPE);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_mnemonic_modifier(object, modifier);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_mnemonic_modifier(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	GdkModifierType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_mnemonic_modifier(object);

	_result = asRFlag(ans, GDK_TYPE_MODIFIER_TYPE);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_activate_key(USER_OBJECT_ s_object, USER_OBJECT_ s_event)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GdkEventKey* event = (GdkEventKey*)getPtrValue(s_event);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_activate_key(object, event);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_propagate_key_event(USER_OBJECT_ s_object, USER_OBJECT_ s_event)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GdkEventKey* event = (GdkEventKey*)getPtrValue(s_event);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_propagate_key_event(object, event);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_present(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_present(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_present_with_time(USER_OBJECT_ s_object, USER_OBJECT_ s_timestamp)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	guint32 timestamp = (guint32)asNumeric(s_timestamp);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_present_with_time(object, timestamp);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_iconify(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_iconify(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_deiconify(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_deiconify(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_stick(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_stick(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_unstick(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_unstick(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_maximize(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_maximize(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_unmaximize(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_unmaximize(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_fullscreen(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_fullscreen(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_unfullscreen(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_unfullscreen(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_keep_above(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_keep_above(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_keep_below(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_keep_below(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_begin_resize_drag(USER_OBJECT_ s_object, USER_OBJECT_ s_edge, USER_OBJECT_ s_button, USER_OBJECT_ s_root_x, USER_OBJECT_ s_root_y, USER_OBJECT_ s_timestamp)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	GdkWindowEdge edge = (GdkWindowEdge)asEnum(s_edge, GDK_TYPE_WINDOW_EDGE);
	gint button = (gint)asInteger(s_button);
	gint root_x = (gint)asInteger(s_root_x);
	gint root_y = (gint)asInteger(s_root_y);
	guint32 timestamp = (guint32)asNumeric(s_timestamp);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_begin_resize_drag(object, edge, button, root_x, root_y, timestamp);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_begin_move_drag(USER_OBJECT_ s_object, USER_OBJECT_ s_button, USER_OBJECT_ s_root_x, USER_OBJECT_ s_root_y, USER_OBJECT_ s_timestamp)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gint button = (gint)asInteger(s_button);
	gint root_x = (gint)asInteger(s_root_x);
	gint root_y = (gint)asInteger(s_root_y);
	guint32 timestamp = (guint32)asNumeric(s_timestamp);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_begin_move_drag(object, button, root_x, root_y, timestamp);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_policy(USER_OBJECT_ s_object, USER_OBJECT_ s_allow_shrink, USER_OBJECT_ s_allow_grow, USER_OBJECT_ s_auto_shrink)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gint allow_shrink = (gint)asInteger(s_allow_shrink);
	gint allow_grow = (gint)asInteger(s_allow_grow);
	gint auto_shrink = (gint)asInteger(s_auto_shrink);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_policy(object, allow_shrink, allow_grow, auto_shrink);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_default_size(USER_OBJECT_ s_object, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_default_size(object, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_default_size(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint width;
	gint height;

	gtk_window_get_default_size(object, &width, &height);


	_result = retByVal(_result, "width", asRInteger(width), "height", asRInteger(height), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_resize(USER_OBJECT_ s_object, USER_OBJECT_ s_width, USER_OBJECT_ s_height)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gint width = (gint)asInteger(s_width);
	gint height = (gint)asInteger(s_height);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_resize(object, width, height);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_size(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint width;
	gint height;

	gtk_window_get_size(object, &width, &height);


	_result = retByVal(_result, "width", asRInteger(width), "height", asRInteger(height), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_move(USER_OBJECT_ s_object, USER_OBJECT_ s_x, USER_OBJECT_ s_y)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gint x = (gint)asInteger(s_x);
	gint y = (gint)asInteger(s_y);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_move(object, x, y);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_position(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;
	gint root_x;
	gint root_y;

	gtk_window_get_position(object, &root_x, &root_y);


	_result = retByVal(_result, "root_x", asRInteger(root_x), "root_y", asRInteger(root_y), NULL);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_parse_geometry(USER_OBJECT_ s_object, USER_OBJECT_ s_geometry)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	const gchar* geometry = (const gchar*)asString(s_geometry);

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_parse_geometry(object, geometry);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_reshow_with_initial_size(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_reshow_with_initial_size(object);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_group_get_type()
{

	GType ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_group_get_type();

	_result = asRGType(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_group_new()
{

	GtkWindowGroup* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_group_new();

	_result = toRPointerWithFinalizer(ans, "GtkWindowGroup", (RPointerFinalizer) g_object_unref);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_group_add_window(USER_OBJECT_ s_object, USER_OBJECT_ s_window)
{
	GtkWindowGroup* object = GTK_WINDOW_GROUP(getPtrValue(s_object));
	GtkWindow* window = GTK_WINDOW(getPtrValue(s_window));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_group_add_window(object, window);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_group_remove_window(USER_OBJECT_ s_object, USER_OBJECT_ s_window)
{
	GtkWindowGroup* object = GTK_WINDOW_GROUP(getPtrValue(s_object));
	GtkWindow* window = GTK_WINDOW(getPtrValue(s_window));

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_group_remove_window(object, window);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_remove_embedded_xid(USER_OBJECT_ s_object, USER_OBJECT_ s_xid)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	guint xid = (guint)asNumeric(s_xid);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_remove_embedded_xid(object, xid);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_add_embedded_xid(USER_OBJECT_ s_object, USER_OBJECT_ s_xid)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	guint xid = (guint)asNumeric(s_xid);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_add_embedded_xid(object, xid);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_focus_on_map(USER_OBJECT_ s_object, USER_OBJECT_ s_setting)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	gboolean setting = (gboolean)asLogical(s_setting);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_focus_on_map(object, setting);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_focus_on_map(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	gboolean ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_focus_on_map(object);

	_result = asRLogical(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_icon_name(USER_OBJECT_ s_object, USER_OBJECT_ s_name)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));
	const gchar* name = GET_LENGTH(s_name) == 0 ? NULL : (const gchar*)asString(s_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_icon_name(object, name);


	return(_result);
}
 

USER_OBJECT_
S_gtk_window_get_icon_name(USER_OBJECT_ s_object)
{
	GtkWindow* object = GTK_WINDOW(getPtrValue(s_object));

	const gchar* ans;
	USER_OBJECT_ _result = NULL_USER_OBJECT;

	ans = gtk_window_get_icon_name(object);

	_result = asRString(ans);

	return(_result);
}
 

USER_OBJECT_
S_gtk_window_set_default_icon_name(USER_OBJECT_ s_name)
{
	const gchar* name = (const gchar*)asString(s_name);

	USER_OBJECT_ _result = NULL_USER_OBJECT;

	gtk_window_set_default_icon_name(name);


	return(_result);
}
 


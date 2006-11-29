#ifndef UTILS_H
#define UTILS_H

#include "RGtk2.h"

/* debug */
void RGtkDebug();

/* not currently used */
/* void Rgtk_bitAnd(Sint *val, Sint *els, Sint *len, Sint *ans); */
USER_OBJECT_ padVector(USER_OBJECT_ vector, guint size);
void nameMembers(USER_OBJECT_ s_obj, char ** names);

/* function wrapping */
USER_OBJECT_ retByVal(USER_OBJECT_ retval, ...);

/* enum/flag wrapping/checking */
USER_OBJECT_ S_checkEnum(USER_OBJECT_ val, const char *const [], const char *const [],
                          const int cValues[], int len, const char *const enumName);
USER_OBJECT_ S_checkFlag(USER_OBJECT_ val, const char *const [], const char *const [],
                          const int cValues[], int len, const char *const enumName);

/* make sure something is not NULL before we try to free it */
#define CLEANUP(cleaner, ptr) if (ptr) cleaner(ptr)

/* generic callback stuff */

typedef struct {
    USER_OBJECT_ function;
    USER_OBJECT_ data;
    Rboolean     useData;
	Rboolean	 userDataFirst;
} R_CallbackData;

void R_freeCBData(R_CallbackData *cbdata);

/* getting the environment (with the overrides) out of a GObject extended by R */
#define S_GOBJECT_GET_ENV(s_object) \
__extension__ \
({ \
    GTypeQuery query; \
    g_type_query(G_OBJECT_TYPE(s_object), &query); \
    G_STRUCT_MEMBER(SEXP, G_OBJECT_GET_CLASS(s_object), query.class_size - sizeof(SEXP)); \
})
/* getting the property environment out of an object */
#define S_GOBJECT_GET_PROPS(s_object) \
__extension__ \
({ \
    GTypeQuery query; \
    g_type_query(G_OBJECT_TYPE(s_object), &query); \
    G_STRUCT_MEMBER(SEXP, s_object, query.instance_size - sizeof(SEXP)); \
})
#endif

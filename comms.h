#ifndef __SIGNALD_COMMS_H__
#define __SIGNALD_COMMS_H__

gchar *
json_object_to_string(JsonObject *obj);

gboolean
signald_send_json(SignaldAccount *sa, JsonObject *data);

#endif

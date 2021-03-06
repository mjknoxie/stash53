
#if USE_MQTT
# include <mosquitto.h>
#endif
#if USE_ZMQ
# include "zhelpers.h"
#endif
#if USE_REDIS
# include <hiredis/hiredis.h>
#endif

#define TAI64STAMP	25

char *emit_config_default(void);
int emit_init();
void emit(char *jsonstring);
void emit_close();
char *emit_nsid(void);
void tai64stamp(char *buf);

#ifndef __LIGHT_H__
#define __LIGHT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <xboot.h>

struct light_t
{
	char * name;

	int (*get)(struct light_t * light);
	void * priv;
};

struct light_t * search_light(const char * name);
struct light_t * search_first_light(void);
bool_t register_light(struct device_t ** device,struct light_t * light);
bool_t unregister_light(struct light_t * light);

int light_get_illuminance(struct light_t * light);

#ifdef __cplusplus
}
#endif

#endif /* __LIGHT_H__ */

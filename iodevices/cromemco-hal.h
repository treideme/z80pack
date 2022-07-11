/*
 * cromemco-hal.h
 *
 * Copyright (C) 2022 by David McNaughton
 *
 * Cromemco TU-ART hardware abstraction layer
 *
 * History:
 * 9-JUL-2022    1.0     Initial Release 
 *
 */

enum tuart_port {
	TUART0A,
	TUART1A,
	TUART1B,
    MAX_TUART_PORT
};

typedef enum tuart_port tuart_port_t;

enum hal_dev {
    WEBTTYDEV,
    WEBTTY2DEV,
    WEBTTY3DEV,
    WEBPTRDEV,
    STDIODEV,
    SCKTSRV1DEV,
    SCKTSRV2DEV,
    MODEMDEV,
    NULLDEV,
    MAX_HAL_DEV
};

struct hal_device {
    char *name;
    int fallthrough;
    int device_id;
	int	(*alive)(int dev);
	void (*status)(int dev, BYTE *stat);
	int (*in)(int dev);
	void (*out)(int dev, BYTE);
    // int (*cd)();
};

typedef struct hal_device hal_device_t;

extern void hal_reset();

extern void hal_status_in(tuart_port_t sio, BYTE *stat);
extern int hal_data_in(tuart_port_t sio);
extern void hal_data_out(tuart_port_t sio, BYTE data);
// extern int hal_carrier_detect(tuart_port_t sio);

extern const char *tuart_port_name[MAX_TUART_PORT];
extern hal_device_t tuart[MAX_TUART_PORT][MAX_HAL_DEV];
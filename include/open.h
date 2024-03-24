#pragma once

#include "engine.h"
#include "endings.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

data_t *init_data(void);
graph_t *init_graph(void);
void reset_data(data_t *data);
void events(data_t *data);
void check_keys(data_t *data);

void destroy(data_t *data);
void check_validation(data_t *data);
void add_at_front(link_t **link, room_t *room);

//menu
void display_menu(data_t *data);

// status
#define MENU    0
#define PLAY    1
#define END     2

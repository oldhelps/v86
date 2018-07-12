#pragma once

#include <stdint.h>

int32_t string_get_cycle_count(int32_t size, int32_t address);
int32_t string_get_cycle_count2(int32_t size, int32_t addr1, int32_t addr2);

void movsb_rep(void);
void movsb_no_rep(void);
void movsw_rep(void);
void movsw_no_rep(void);
void movsd_rep(void);
void movsd_no_rep(void);

void cmpsb_rep(int32_t);
void cmpsb_no_rep(void);
void cmpsw_rep(int32_t);
void cmpsw_no_rep(void);
void cmpsd_rep(int32_t);
void cmpsd_no_rep(void);

void stosb_rep(void);
void stosb_no_rep(void);
void stosw_rep(void);
void stosw_no_rep(void);
void stosd_rep(void);
void stosd_no_rep(void);

void lodsb_rep(void);
void lodsb_no_rep(void);
void lodsw_rep(void);
void lodsw_no_rep(void);
void lodsd_rep(void);
void lodsd_no_rep(void);

void scasb_rep(int32_t);
void scasb_no_rep(void);
void scasw_rep(int32_t);
void scasw_no_rep(void);
void scasd_rep(int32_t);
void scasd_no_rep(void);

void insb_rep(void);
void insb_no_rep(void);
void insw_rep(void);
void insw_no_rep(void);
void insd_rep(void);
void insd_no_rep(void);

void outsb_rep(void);
void outsb_no_rep(void);
void outsw_rep(void);
void outsw_no_rep(void);
void outsd_rep(void);
void outsd_no_rep(void);

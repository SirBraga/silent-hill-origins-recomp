#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BA138
// Address: 0x2ba138 - 0x2ba520
void sub_002BA138_0x2ba138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA138_0x2ba138");
#endif

    switch (ctx->pc) {
        case 0x2ba26cu: goto label_2ba26c;
        default: break;
    }

    ctx->pc = 0x2ba138u;

    // 0x2ba138: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2ba138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2ba13c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2ba13cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba140: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2ba140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2ba144: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ba144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ba148: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2ba148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2ba14c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ba14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba150: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2ba150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2ba154: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ba154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba158: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2ba158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2ba15c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2ba15cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba160: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2ba160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2ba164: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2ba164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2ba168: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ba168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ba16c: 0x95230004  lhu         $v1, 0x4($t1)
    ctx->pc = 0x2ba16cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2ba170: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA170u;
    {
        const bool branch_taken_0x2ba170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA170u;
        // 0x2ba174: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba170) {
            ctx->pc = 0x2BA198u;
            goto label_2ba198;
        }
    }
    ctx->pc = 0x2BA178u;
    // 0x2ba178: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ba178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba17c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ba17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ba180: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x2ba180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ba184: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2ba184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ba188: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2ba188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ba18c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba190: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA190u;
    {
        const bool branch_taken_0x2ba190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA190u;
        // 0x2ba194: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba190) {
            ctx->pc = 0x2BA19Cu;
            goto label_2ba19c;
        }
    }
    ctx->pc = 0x2BA198u;
label_2ba198:
    // 0x2ba198: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ba198u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba19c:
    // 0x2ba19c: 0x5280001d  beql        $s4, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BA19Cu;
    {
        const bool branch_taken_0x2ba19c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba19c) {
            ctx->pc = 0x2BA1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA19Cu;
            // 0x2ba1a0: 0x95230004  lhu         $v1, 0x4($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA214u;
            goto label_2ba214;
        }
    }
    ctx->pc = 0x2BA1A4u;
    // 0x2ba1a4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ba1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ba1a8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2ba1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ba1ac: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2ba1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ba1b0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2ba1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ba1b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ba1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ba1b8: 0x6a84000f  ldl         $a0, 0xF($s4)
    ctx->pc = 0x2ba1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ba1bc: 0x6e840008  ldr         $a0, 0x8($s4)
    ctx->pc = 0x2ba1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ba1c0: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x2ba1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2ba1c4: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x2ba1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ba1c8: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x2ba1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ba1cc: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2ba1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2ba1d0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2ba1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ba1d4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2ba1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ba1d8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2ba1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ba1dc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2ba1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ba1e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ba1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ba1e4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2ba1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ba1e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba1ec: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2ba1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ba1f0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2ba1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ba1f4: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2ba1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ba1f8: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2ba1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ba1fc: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x2ba1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ba200: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x2ba200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ba204: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x2ba204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ba208: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x2ba208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ba20c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2BA20Cu;
    {
        const bool branch_taken_0x2ba20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA20Cu;
        // 0x2ba210: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba20c) {
            ctx->pc = 0x2BA270u;
            goto label_2ba270;
        }
    }
    ctx->pc = 0x2BA214u;
label_2ba214:
    // 0x2ba214: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ba214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ba218: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BA218u;
    {
        const bool branch_taken_0x2ba218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA218u;
        // 0x2ba21c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba218) {
            ctx->pc = 0x2BA23Cu;
            goto label_2ba23c;
        }
    }
    ctx->pc = 0x2BA220u;
    // 0x2ba220: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ba220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ba224: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x2ba224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ba228: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2ba228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ba22c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2ba22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ba230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba234: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA234u;
    {
        const bool branch_taken_0x2ba234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA234u;
        // 0x2ba238: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba234) {
            ctx->pc = 0x2BA254u;
            goto label_2ba254;
        }
    }
    ctx->pc = 0x2BA23Cu;
label_2ba23c:
    // 0x2ba23c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x2ba23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ba240: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ba240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba244: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2ba244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2ba248: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2ba248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2ba24c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ba24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ba250: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x2ba250u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
label_2ba254:
    // 0x2ba254: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ba254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ba258: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ba258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba25c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2ba25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2ba260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ba260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba264: 0xc0a4cd2  jal         func_293348
    ctx->pc = 0x2BA264u;
    SET_GPR_U32(ctx, 31, 0x2BA26Cu);
    ctx->pc = 0x2BA268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA264u;
    // 0x2ba268: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293348u, 0x2BA264u, 0x2BA26Cu)) {
        return;
    }
    ctx->pc = 0x2BA26Cu;
label_2ba26c:
    // 0x2ba26c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2ba26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2ba270:
    // 0x2ba270: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2ba270u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2ba274: 0xc7a7002c  lwc1        $f7, 0x2C($sp)
    ctx->pc = 0x2ba274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ba278: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ba278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba27c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2ba27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba280: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2ba280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ba284: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x2ba284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ba288: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2ba288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2ba28c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2ba28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba290: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2ba290u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2ba294: 0xc7a60028  lwc1        $f6, 0x28($sp)
    ctx->pc = 0x2ba294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ba298: 0xc608000c  lwc1        $f8, 0xC($s0)
    ctx->pc = 0x2ba298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2ba29c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2ba29cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2ba2a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ba2a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ba2a4: 0x46083a02  mul.s       $f8, $f7, $f8
    ctx->pc = 0x2ba2a4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x2ba2a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ba2a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ba2ac: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x2ba2acu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x2ba2b0: 0xe648000c  swc1        $f8, 0xC($s2)
    ctx->pc = 0x2ba2b0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2ba2b4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2ba2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba2b8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2ba2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba2bc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2ba2bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2ba2c0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2ba2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2ba2c4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2ba2c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2ba2c8: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x2ba2c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2ba2cc: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2ba2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ba2d0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2ba2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba2d4: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x2ba2d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2ba2d8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2ba2d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2ba2dc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2ba2dcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ba2e0: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x2ba2e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2ba2e4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2ba2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba2e8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ba2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba2ec: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2ba2ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2ba2f0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2ba2f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2ba2f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ba2f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ba2f8: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x2ba2f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2ba2fc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ba2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba300: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2ba300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2ba304: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ba304u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ba308: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x2ba308u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2ba30c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2ba30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba310: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2ba310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2ba314: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2ba314u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2ba318: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x2ba318u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2ba31c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2ba31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba320: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2ba320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2ba324: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ba324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ba328: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x2ba328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2ba32c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2ba32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba330: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2ba330u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2ba334: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2ba334u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2ba338: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x2ba338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2ba33c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2ba33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba340: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2ba340u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2ba344: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2ba344u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2ba348: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x2ba348u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2ba34c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2ba34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba350: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2ba350u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2ba354: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2ba354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2ba358: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x2ba358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2ba35c: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x2ba35cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2ba360: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ba360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ba364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ba364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ba368: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ba368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ba36c: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x2ba36cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2ba370: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2ba370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
    // 0x2ba374: 0x460109c2  mul.s       $f7, $f1, $f1
    ctx->pc = 0x2ba374u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ba378: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2ba378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
    // 0x2ba37c: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2ba37cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
    // 0x2ba380: 0x460142c2  mul.s       $f11, $f8, $f1
    ctx->pc = 0x2ba380u;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2ba384: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2ba384u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x2ba388: 0x46011902  mul.s       $f4, $f3, $f1
    ctx->pc = 0x2ba388u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ba38c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2ba38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ba390: 0x46024282  mul.s       $f10, $f8, $f2
    ctx->pc = 0x2ba390u;
    ctx->f[10] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2ba394: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ba394u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ba398: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x2ba398u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ba39c: 0x46002980  add.s       $f6, $f5, $f0
    ctx->pc = 0x2ba39cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2ba3a0: 0xe7a70038  swc1        $f7, 0x38($sp)
    ctx->pc = 0x2ba3a0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ba3a4: 0x46034202  mul.s       $f8, $f8, $f3
    ctx->pc = 0x2ba3a4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2ba3a8: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x2ba3a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ba3ac: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2ba3acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ba3b0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2ba3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ba3b4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2ba3b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2ba3b8: 0xe7aa0050  swc1        $f10, 0x50($sp)
    ctx->pc = 0x2ba3b8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ba3bc: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x2ba3bcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x2ba3c0: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x2ba3c0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ba3c4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2ba3c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2ba3c8: 0x46080a40  add.s       $f9, $f1, $f8
    ctx->pc = 0x2ba3c8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x2ba3cc: 0x460b10c1  sub.s       $f3, $f2, $f11
    ctx->pc = 0x2ba3ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x2ba3d0: 0xe7ab0058  swc1        $f11, 0x58($sp)
    ctx->pc = 0x2ba3d0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ba3d4: 0x460a21c1  sub.s       $f7, $f4, $f10
    ctx->pc = 0x2ba3d4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
    // 0x2ba3d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ba3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2ba3dc: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x2ba3dcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x2ba3e0: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x2ba3e0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x2ba3e4: 0x460b1080  add.s       $f2, $f2, $f11
    ctx->pc = 0x2ba3e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
    // 0x2ba3e8: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x2ba3e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x2ba3ec: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x2ba3ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x2ba3f0: 0x46066181  sub.s       $f6, $f12, $f6
    ctx->pc = 0x2ba3f0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x2ba3f4: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x2ba3f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2ba3f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2ba3f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2ba3fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ba3fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2ba400: 0xe6660028  swc1        $f6, 0x28($s3)
    ctx->pc = 0x2ba400u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x2ba404: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2ba404u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2ba408: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2ba408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2ba40c: 0x46056301  sub.s       $f12, $f12, $f5
    ctx->pc = 0x2ba40cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x2ba410: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x2ba410u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2ba414: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2ba414u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2ba418: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x2ba418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2ba41c: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x2ba41cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x2ba420: 0xe6630010  swc1        $f3, 0x10($s3)
    ctx->pc = 0x2ba420u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x2ba424: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x2ba424u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x2ba428: 0xe66c0014  swc1        $f12, 0x14($s3)
    ctx->pc = 0x2ba428u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x2ba42c: 0xe6640018  swc1        $f4, 0x18($s3)
    ctx->pc = 0x2ba42cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x2ba430: 0xe6690020  swc1        $f9, 0x20($s3)
    ctx->pc = 0x2ba430u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x2ba434: 0xe6670024  swc1        $f7, 0x24($s3)
    ctx->pc = 0x2ba434u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x2ba438: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x2ba438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ba43c: 0xc6070018  lwc1        $f7, 0x18($s0)
    ctx->pc = 0x2ba43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ba440: 0xc6060014  lwc1        $f6, 0x14($s0)
    ctx->pc = 0x2ba440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ba444: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2ba444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba448: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2ba448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba44c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ba44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba450: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2ba450u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ba454: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x2ba454u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2ba458: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x2ba458u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x2ba45c: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2ba45cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ba460: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x2ba460u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ba464: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x2ba464u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ba468: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2ba468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ba46c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2ba46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba470: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2ba470u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2ba474: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2ba474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba478: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2ba478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2ba47c: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2ba47cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2ba480: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2ba480u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2ba484: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2ba484u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2ba488: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2ba488u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ba48c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2ba48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba490: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2ba490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba494: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2ba494u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2ba498: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2ba498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba49c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2ba49cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2ba4a0: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2ba4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2ba4a4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ba4a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ba4a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ba4a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ba4ac: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2ba4acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ba4b0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2ba4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba4b4: 0xc6250018  lwc1        $f5, 0x18($s1)
    ctx->pc = 0x2ba4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ba4b8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2ba4b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2ba4bc: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2ba4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba4c0: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x2ba4c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x2ba4c4: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x2ba4c4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2ba4c8: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x2ba4c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2ba4cc: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x2ba4ccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x2ba4d0: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x2ba4d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ba4d4: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2ba4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba4d8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2ba4d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2ba4dc: 0xe6630030  swc1        $f3, 0x30($s3)
    ctx->pc = 0x2ba4dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x2ba4e0: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2ba4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba4e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ba4e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ba4e8: 0xe6620034  swc1        $f2, 0x34($s3)
    ctx->pc = 0x2ba4e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x2ba4ec: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2ba4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba4f0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2ba4f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2ba4f4: 0xe6640038  swc1        $f4, 0x38($s3)
    ctx->pc = 0x2ba4f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x2ba4f8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2ba4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba4fc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2ba4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ba500: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2ba500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ba504: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2ba504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ba508: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2ba508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ba50c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2ba50cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ba510: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2ba510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ba514: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ba514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ba518: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA518u;
        // 0x2ba51c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA520u;
}

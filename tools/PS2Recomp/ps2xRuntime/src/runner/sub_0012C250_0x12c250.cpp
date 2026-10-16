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

// Function: sub_0012C250
// Address: 0x12c250 - 0x12c3b0
void sub_0012C250_0x12c250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C250_0x12c250");
#endif

    switch (ctx->pc) {
        case 0x12c2b0u: goto label_12c2b0;
        case 0x12c2d0u: goto label_12c2d0;
        case 0x12c2fcu: goto label_12c2fc;
        case 0x12c318u: goto label_12c318;
        case 0x12c32cu: goto label_12c32c;
        case 0x12c338u: goto label_12c338;
        case 0x12c378u: goto label_12c378;
        default: break;
    }

    ctx->pc = 0x12c250u;

    // 0x12c250: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12c250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12c254: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x12c254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x12c258: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x12c258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x12c25c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x12c25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x12c260: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x12c260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x12c264: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x12c264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x12c268: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12c268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12c26c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x12c26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x12c270: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x12c270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x12c274: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x12c274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x12c278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c27c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x12c27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x12c280: 0x8c940018  lw          $s4, 0x18($a0)
    ctx->pc = 0x12c280u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x12c284: 0x8c623860  lw          $v0, 0x3860($v1)
    ctx->pc = 0x12c284u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3860u));
    // 0x12c288: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x12c288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x12c28c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12c28cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c290: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x12C290u;
    {
        const bool branch_taken_0x12c290 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C290u;
        // 0x12c294: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c290) {
            ctx->pc = 0x12C37Cu;
            goto label_12c37c;
        }
    }
    ctx->pc = 0x12C298u;
    // 0x12c298: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12c298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c29c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x12C29Cu;
    {
        const bool branch_taken_0x12c29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C29Cu;
        // 0x12c2a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c29c) {
            ctx->pc = 0x12C380u;
            goto label_12c380;
        }
    }
    ctx->pc = 0x12C2A4u;
    // 0x12c2a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12c2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2a8: 0xc095988  jal         func_256620
    ctx->pc = 0x12C2A8u;
    SET_GPR_U32(ctx, 31, 0x12C2B0u);
    ctx->pc = 0x12C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2A8u;
    // 0x12c2ac: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256620u, 0x12C2A8u, 0x12C2B0u)) {
        return;
    }
    ctx->pc = 0x12C2B0u;
label_12c2b0:
    // 0x12c2b0: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x12C2B0u;
    {
        const bool branch_taken_0x12c2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c2b0) {
            ctx->pc = 0x12C2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C2B0u;
            // 0x12c2b4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C37Cu;
            goto label_12c37c;
        }
    }
    ctx->pc = 0x12C2B8u;
    // 0x12c2b8: 0x8e960018  lw          $s6, 0x18($s4)
    ctx->pc = 0x12c2b8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x12c2bc: 0x12c0002c  beqz        $s6, . + 4 + (0x2C << 2)
    ctx->pc = 0x12C2BCu;
    {
        const bool branch_taken_0x12c2bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2BCu;
        // 0x12c2c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2bc) {
            ctx->pc = 0x12C370u;
            goto label_12c370;
        }
    }
    ctx->pc = 0x12C2C4u;
    // 0x12c2c4: 0x3c1e0034  lui         $fp, 0x34
    ctx->pc = 0x12c2c4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
    // 0x12c2c8: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x12c2c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12c2cc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12c2ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c2d0:
    // 0x12c2d0: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x12c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x12c2d4: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x12c2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x12c2d8: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x12C2D8u;
    {
        const bool branch_taken_0x12c2d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2D8u;
        // 0x12c2dc: 0x8fc68374  lw          $a2, -0x7C8C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294935412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2d8) {
            ctx->pc = 0x12C360u;
            goto label_12c360;
        }
    }
    ctx->pc = 0x12C2E0u;
    // 0x12c2e0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x12c2e4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x12c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12c2e8: 0xd70018  mult        $zero, $a2, $s7
    ctx->pc = 0x12c2e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c2ec: 0x8c458378  lw          $a1, -0x7C88($v0)
    ctx->pc = 0x12c2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935416)));
    // 0x12c2f0: 0x3012  mflo        $a2
    ctx->pc = 0x12c2f0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12c2f4: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x12C2F4u;
    SET_GPR_U32(ctx, 31, 0x12C2FCu);
    ctx->pc = 0x12C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2F4u;
    // 0x12c2f8: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x12C2F4u, 0x12C2FCu)) {
        return;
    }
    ctx->pc = 0x12C2FCu;
label_12c2fc:
    // 0x12c2fc: 0x8fc68374  lw          $a2, -0x7C8C($fp)
    ctx->pc = 0x12c2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294935412)));
    // 0x12c300: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x12c300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x12c304: 0x8c65837c  lw          $a1, -0x7C84($v1)
    ctx->pc = 0x12c304u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33837Cu));
    // 0x12c308: 0xd70018  mult        $zero, $a2, $s7
    ctx->pc = 0x12c308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c30c: 0x3012  mflo        $a2
    ctx->pc = 0x12c30cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12c310: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x12C310u;
    SET_GPR_U32(ctx, 31, 0x12C318u);
    ctx->pc = 0x12C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C310u;
    // 0x12c314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x12C310u, 0x12C318u)) {
        return;
    }
    ctx->pc = 0x12C318u;
label_12c318:
    // 0x12c318: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x12c318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c31c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c320: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x12c320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12c324: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x12C324u;
    SET_GPR_U32(ctx, 31, 0x12C32Cu);
    ctx->pc = 0x12C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C324u;
    // 0x12c328: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x12C324u, 0x12C32Cu)) {
        return;
    }
    ctx->pc = 0x12C32Cu;
label_12c32c:
    // 0x12c32c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c330: 0xc095838  jal         func_2560E0
    ctx->pc = 0x12C330u;
    SET_GPR_U32(ctx, 31, 0x12C338u);
    ctx->pc = 0x12C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C330u;
    // 0x12c334: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2560E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2560E0u, 0x12C330u, 0x12C338u)) {
        return;
    }
    ctx->pc = 0x12C338u;
label_12c338:
    // 0x12c338: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12C338u;
    {
        const bool branch_taken_0x12c338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c338) {
            ctx->pc = 0x12C33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C338u;
            // 0x12c33c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C364u;
            goto label_12c364;
        }
    }
    ctx->pc = 0x12C340u;
    // 0x12c340: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x12c340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12c344: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x12c344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12c348: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x12c348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12c34c: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x12c34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12c350: 0xb222000b  sdl         $v0, 0xB($s1)
    ctx->pc = 0x12c350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12c354: 0xb6220004  sdr         $v0, 0x4($s1)
    ctx->pc = 0x12c354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12c358: 0xb2230013  sdl         $v1, 0x13($s1)
    ctx->pc = 0x12c358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12c35c: 0xb623000c  sdr         $v1, 0xC($s1)
    ctx->pc = 0x12c35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12c360:
    // 0x12c360: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12c360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12c364:
    // 0x12c364: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x12c364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x12c368: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x12C368u;
    {
        const bool branch_taken_0x12c368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C368u;
        // 0x12c36c: 0x26b5001c  addiu       $s5, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c368) {
            ctx->pc = 0x12C2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c2d0;
        }
    }
    ctx->pc = 0x12C370u;
label_12c370:
    // 0x12c370: 0xc09599c  jal         func_256670
    ctx->pc = 0x12C370u;
    SET_GPR_U32(ctx, 31, 0x12C378u);
    ctx->pc = 0x12C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C370u;
    // 0x12c374: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256670u, 0x12C370u, 0x12C378u)) {
        return;
    }
    ctx->pc = 0x12C378u;
label_12c378:
    // 0x12c378: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x12c378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_12c37c:
    // 0x12c37c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12c37cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c380:
    // 0x12c380: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x12c380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c384: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x12c384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12c388: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x12c388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12c38c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x12c38cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c390: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12c390u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12c394: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x12c394u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12c398: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x12c398u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c39c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x12c39cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c3a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3A4u;
        // 0x12c3a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C3ACu;
    // 0x12c3ac: 0x0  nop
    ctx->pc = 0x12c3acu;
    // NOP
    ctx->pc = 0x12c3b0u;
}

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

// Function: sub_00104320
// Address: 0x104320 - 0x104498
void sub_00104320_0x104320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104320_0x104320");
#endif

    switch (ctx->pc) {
        case 0x104368u: goto label_104368;
        case 0x104388u: goto label_104388;
        case 0x1043b0u: goto label_1043b0;
        case 0x1043c8u: goto label_1043c8;
        case 0x1043e0u: goto label_1043e0;
        case 0x1043f8u: goto label_1043f8;
        case 0x104430u: goto label_104430;
        case 0x104458u: goto label_104458;
        case 0x104468u: goto label_104468;
        default: break;
    }

    ctx->pc = 0x104320u;

    // 0x104320: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x104320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x104324: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x104324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x104328: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x104328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x10432c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10432cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104330: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x104330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x104334: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x104334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104338: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x104338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x10433c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x10433cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x104340: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x104340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x104344: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x104344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x104348: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x104348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x10434c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x10434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x104350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104354: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x104354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x104358: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x104358u;
    {
        const bool branch_taken_0x104358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x104358) {
            ctx->pc = 0x10435Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104358u;
            // 0x10435c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10436Cu;
            goto label_10436c;
        }
    }
    ctx->pc = 0x104360u;
    // 0x104360: 0xc041640  jal         func_105900
    ctx->pc = 0x104360u;
    SET_GPR_U32(ctx, 31, 0x104368u);
    ctx->pc = 0x105900u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105900u, 0x104360u, 0x104368u)) {
        return;
    }
    ctx->pc = 0x104368u;
label_104368:
    // 0x104368: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x104368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_10436c:
    // 0x10436c: 0x32170001  andi        $s7, $s0, 0x1
    ctx->pc = 0x10436cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x104370: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x104370u;
    {
        const bool branch_taken_0x104370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104370u;
        // 0x104374: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104370) {
            ctx->pc = 0x104444u;
            goto label_104444;
        }
    }
    ctx->pc = 0x104378u;
    // 0x104378: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x104378u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10437c: 0x241e000c  addiu       $fp, $zero, 0xC
    ctx->pc = 0x10437cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x104380: 0x2961818  mult        $v1, $s4, $s6
    ctx->pc = 0x104380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x104384: 0x0  nop
    ctx->pc = 0x104384u;
    // NOP
label_104388:
    // 0x104388: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x104388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10438c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10438cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104390: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x104390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x104394: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x104394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104398: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x104398u;
    {
        const bool branch_taken_0x104398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104398u;
        // 0x10439c: 0x26950001  addiu       $s5, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104398) {
            ctx->pc = 0x104410u;
            goto label_104410;
        }
    }
    ctx->pc = 0x1043A0u;
    // 0x1043a0: 0x29e8818  mult        $s1, $s4, $fp
    ctx->pc = 0x1043a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1043a4: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x1043a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1043a8: 0x1281c0  sll         $s0, $s2, 7
    ctx->pc = 0x1043a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x1043ac: 0x0  nop
    ctx->pc = 0x1043acu;
    // NOP
label_1043b0:
    // 0x1043b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1043b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1043b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1043b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1043b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1043b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1043bc: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x1043bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1043c0: 0xc0b5c00  jal         func_2D7000
    ctx->pc = 0x1043C0u;
    SET_GPR_U32(ctx, 31, 0x1043C8u);
    ctx->pc = 0x1043C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043C0u;
    // 0x1043c4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7000u, 0x1043C0u, 0x1043C8u)) {
        return;
    }
    ctx->pc = 0x1043C8u;
label_1043c8:
    // 0x1043c8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1043c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1043cc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1043ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1043d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1043d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1043d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1043d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1043d8: 0xc0b5b86  jal         func_2D6E18
    ctx->pc = 0x1043D8u;
    SET_GPR_U32(ctx, 31, 0x1043E0u);
    ctx->pc = 0x1043DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043D8u;
    // 0x1043dc: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6E18u, 0x1043D8u, 0x1043E0u)) {
        return;
    }
    ctx->pc = 0x1043E0u;
label_1043e0:
    // 0x1043e0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1043e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1043e4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1043e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1043e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1043e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1043ec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1043ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1043f0: 0xc0aa702  jal         func_2A9C08
    ctx->pc = 0x1043F0u;
    SET_GPR_U32(ctx, 31, 0x1043F8u);
    ctx->pc = 0x1043F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043F0u;
    // 0x1043f4: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9C08u, 0x1043F0u, 0x1043F8u)) {
        return;
    }
    ctx->pc = 0x1043F8u;
label_1043f8:
    // 0x1043f8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1043f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1043fc: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x1043fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x104400: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x104400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104404: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x104404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104408: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x104408u;
    {
        const bool branch_taken_0x104408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104408) {
            ctx->pc = 0x10440Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104408u;
            // 0x10440c: 0x1281c0  sll         $s0, $s2, 7 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1043B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1043b0;
        }
    }
    ctx->pc = 0x104410u;
label_104410:
    // 0x104410: 0x2961018  mult        $v0, $s4, $s6
    ctx->pc = 0x104410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x104414: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x104414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x104418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10441c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x10441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x104420: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x104420u;
    {
        const bool branch_taken_0x104420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x104420) {
            ctx->pc = 0x104424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104420u;
            // 0x104424: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104434u;
            goto label_104434;
        }
    }
    ctx->pc = 0x104428u;
    // 0x104428: 0xc0808d4  jal         func_202350
    ctx->pc = 0x104428u;
    SET_GPR_U32(ctx, 31, 0x104430u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x104428u, 0x104430u)) {
        return;
    }
    ctx->pc = 0x104430u;
label_104430:
    // 0x104430: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x104430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_104434:
    // 0x104434: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x104434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104438: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x104438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10443c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x10443Cu;
    {
        const bool branch_taken_0x10443c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10443Cu;
        // 0x104440: 0x2961818  mult        $v1, $s4, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10443c) {
            ctx->pc = 0x104388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104388;
        }
    }
    ctx->pc = 0x104444u;
label_104444:
    // 0x104444: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x104444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x104448: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104448u;
    {
        const bool branch_taken_0x104448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x104448) {
            ctx->pc = 0x104458u;
            goto label_104458;
        }
    }
    ctx->pc = 0x104450u;
    // 0x104450: 0xc0808d4  jal         func_202350
    ctx->pc = 0x104450u;
    SET_GPR_U32(ctx, 31, 0x104458u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x104450u, 0x104458u)) {
        return;
    }
    ctx->pc = 0x104458u;
label_104458:
    // 0x104458: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x104458u;
    {
        const bool branch_taken_0x104458 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x10445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104458u;
        // 0x10445c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104458) {
            ctx->pc = 0x10446Cu;
            goto label_10446c;
        }
    }
    ctx->pc = 0x104460u;
    // 0x104460: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x104460u;
    SET_GPR_U32(ctx, 31, 0x104468u);
    ctx->pc = 0x104464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104460u;
    // 0x104464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x104460u, 0x104468u)) {
        return;
    }
    ctx->pc = 0x104468u;
label_104468:
    // 0x104468: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x104468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_10446c:
    // 0x10446c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x10446cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x104470: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x104470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104474: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x104474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104478: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x104478u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10447c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x10447cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104480: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x104480u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104484: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x104484u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104488: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x104488u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10448c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10448cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104490: 0x3e00008  jr          $ra
    ctx->pc = 0x104490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104490u;
        // 0x104494: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104498u;
}

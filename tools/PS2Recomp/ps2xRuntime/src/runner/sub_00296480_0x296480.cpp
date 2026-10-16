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

// Function: sub_00296480
// Address: 0x296480 - 0x2965d8
void sub_00296480_0x296480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296480_0x296480");
#endif

    switch (ctx->pc) {
        case 0x2964a0u: goto label_2964a0;
        case 0x2964acu: goto label_2964ac;
        case 0x2964d8u: goto label_2964d8;
        case 0x2964f0u: goto label_2964f0;
        case 0x296504u: goto label_296504;
        case 0x296514u: goto label_296514;
        case 0x296528u: goto label_296528;
        case 0x296530u: goto label_296530;
        case 0x296550u: goto label_296550;
        case 0x296564u: goto label_296564;
        case 0x296588u: goto label_296588;
        case 0x296590u: goto label_296590;
        default: break;
    }

    ctx->pc = 0x296480u;

    // 0x296480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x296480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x296484: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29648c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29648cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296490: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x296490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x296494: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x296494u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x296498: 0xc0a5728  jal         func_295CA0
    ctx->pc = 0x296498u;
    SET_GPR_U32(ctx, 31, 0x2964A0u);
    ctx->pc = 0x29649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296498u;
    // 0x29649c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x295CA0u, 0x296498u, 0x2964A0u)) {
        return;
    }
    ctx->pc = 0x2964A0u;
label_2964a0:
    // 0x2964a0: 0x8e04e7ec  lw          $a0, -0x1814($s0)
    ctx->pc = 0x2964a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961132)));
    // 0x2964a4: 0xc0c84dc  jal         func_321370
    ctx->pc = 0x2964A4u;
    SET_GPR_U32(ctx, 31, 0x2964ACu);
    ctx->pc = 0x321370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321370u, 0x2964A4u, 0x2964ACu)) {
        return;
    }
    ctx->pc = 0x2964ACu;
label_2964ac:
    // 0x2964ac: 0x8e03e7ec  lw          $v1, -0x1814($s0)
    ctx->pc = 0x2964acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961132)));
    // 0x2964b0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2964B0u;
    {
        const bool branch_taken_0x2964b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2964B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964B0u;
        // 0x2964b4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964b0) {
            ctx->pc = 0x2964E0u;
            goto label_2964e0;
        }
    }
    ctx->pc = 0x2964B8u;
    // 0x2964b8: 0x8c43e7d0  lw          $v1, -0x1830($v0)
    ctx->pc = 0x2964b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961104)));
    // 0x2964bc: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2964BCu;
    {
        const bool branch_taken_0x2964bc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2964C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964BCu;
        // 0x2964c0: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964bc) {
            ctx->pc = 0x296504u;
            goto label_296504;
        }
    }
    ctx->pc = 0x2964C4u;
    // 0x2964c4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2964c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2964c8: 0x8c46e7d8  lw          $a2, -0x1828($v0)
    ctx->pc = 0x2964c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961112)));
    // 0x2964cc: 0x2484d548  addiu       $a0, $a0, -0x2AB8
    ctx->pc = 0x2964ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956360));
    // 0x2964d0: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2964D0u;
    SET_GPR_U32(ctx, 31, 0x2964D8u);
    ctx->pc = 0x2964D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2964D0u;
    // 0x2964d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2964D0u, 0x2964D8u)) {
        return;
    }
    ctx->pc = 0x2964D8u;
label_2964d8:
    // 0x2964d8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2964D8u;
    {
        const bool branch_taken_0x2964d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2964DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964D8u;
        // 0x2964dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964d8) {
            ctx->pc = 0x2965C0u;
            goto label_2965c0;
        }
    }
    ctx->pc = 0x2964E0u;
label_2964e0:
    // 0x2964e0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2964e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2964e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2964e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2964e8: 0xc0a5904  jal         func_296410
    ctx->pc = 0x2964E8u;
    SET_GPR_U32(ctx, 31, 0x2964F0u);
    ctx->pc = 0x2964ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2964E8u;
    // 0x2964ec: 0xac51e7d8  sw          $s1, -0x1828($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961112), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296410u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296410u, 0x2964E8u, 0x2964F0u)) {
        return;
    }
    ctx->pc = 0x2964F0u;
label_2964f0:
    // 0x2964f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2964F0u;
    {
        const bool branch_taken_0x2964f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2964F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964F0u;
        // 0x2964f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964f0) {
            ctx->pc = 0x29650Cu;
            goto label_29650c;
        }
    }
    ctx->pc = 0x2964F8u;
    // 0x2964f8: 0x8e04e7ec  lw          $a0, -0x1814($s0)
    ctx->pc = 0x2964f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961132)));
    // 0x2964fc: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2964FCu;
    SET_GPR_U32(ctx, 31, 0x296504u);
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2964FCu, 0x296504u)) {
        return;
    }
    ctx->pc = 0x296504u;
label_296504:
    // 0x296504: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x296504u;
    {
        const bool branch_taken_0x296504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296504u;
        // 0x296508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296504) {
            ctx->pc = 0x2965C0u;
            goto label_2965c0;
        }
    }
    ctx->pc = 0x29650Cu;
label_29650c:
    // 0x29650c: 0xc0c90e4  jal         func_324390
    ctx->pc = 0x29650Cu;
    SET_GPR_U32(ctx, 31, 0x296514u);
    ctx->pc = 0x296510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29650Cu;
    // 0x296510: 0x3c120068  lui         $s2, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)104 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324390u, 0x29650Cu, 0x296514u)) {
        return;
    }
    ctx->pc = 0x296514u;
label_296514:
    // 0x296514: 0x8e42e814  lw          $v0, -0x17EC($s2)
    ctx->pc = 0x296514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961172)));
    // 0x296518: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x296518u;
    {
        const bool branch_taken_0x296518 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x29651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296518u;
        // 0x29651c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296518) {
            ctx->pc = 0x2965C0u;
            goto label_2965c0;
        }
    }
    ctx->pc = 0x296520u;
    // 0x296520: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x296520u;
    {
        const bool branch_taken_0x296520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296520u;
        // 0x296524: 0x3c110068  lui         $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296520) {
            ctx->pc = 0x29654Cu;
            goto label_29654c;
        }
    }
    ctx->pc = 0x296528u;
label_296528:
    // 0x296528: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x296528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x29652c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_296530:
    // 0x296530: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x296530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x296534: 0x0  nop
    ctx->pc = 0x296534u;
    // NOP
    // 0x296538: 0x0  nop
    ctx->pc = 0x296538u;
    // NOP
    // 0x29653c: 0x0  nop
    ctx->pc = 0x29653cu;
    // NOP
    // 0x296540: 0x0  nop
    ctx->pc = 0x296540u;
    // NOP
    // 0x296544: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x296544u;
    {
        const bool branch_taken_0x296544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x296544) {
            ctx->pc = 0x296530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296530;
        }
    }
    ctx->pc = 0x29654Cu;
label_29654c:
    // 0x29654c: 0x26300340  addiu       $s0, $s1, 0x340
    ctx->pc = 0x29654cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_296550:
    // 0x296550: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x296550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x296554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296558: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x296558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x29655c: 0xc0c9276  jal         func_3249D8
    ctx->pc = 0x29655Cu;
    SET_GPR_U32(ctx, 31, 0x296564u);
    ctx->pc = 0x296560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29655Cu;
    // 0x296560: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3249D8u, 0x29655Cu, 0x296564u)) {
        return;
    }
    ctx->pc = 0x296564u;
label_296564:
    // 0x296564: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x296564u;
    {
        const bool branch_taken_0x296564 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x296564) {
            ctx->pc = 0x296568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296564u;
            // 0x296568: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2965B4u;
            goto label_2965b4;
        }
    }
    ctx->pc = 0x29656Cu;
    // 0x29656c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x296570: 0x8c43e7d0  lw          $v1, -0x1830($v0)
    ctx->pc = 0x296570u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x67E7D0u));
    // 0x296574: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x296574u;
    {
        const bool branch_taken_0x296574 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x296578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296574u;
        // 0x296578: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296574) {
            ctx->pc = 0x29658Cu;
            goto label_29658c;
        }
    }
    ctx->pc = 0x29657Cu;
    // 0x29657c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x29657cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x296580: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x296580u;
    SET_GPR_U32(ctx, 31, 0x296588u);
    ctx->pc = 0x296584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296580u;
    // 0x296584: 0x2484d570  addiu       $a0, $a0, -0x2A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x296580u, 0x296588u)) {
        return;
    }
    ctx->pc = 0x296588u;
label_296588:
    // 0x296588: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x296588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_29658c:
    // 0x29658c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_296590:
    // 0x296590: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x296590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x296594: 0x0  nop
    ctx->pc = 0x296594u;
    // NOP
    // 0x296598: 0x0  nop
    ctx->pc = 0x296598u;
    // NOP
    // 0x29659c: 0x0  nop
    ctx->pc = 0x29659cu;
    // NOP
    // 0x2965a0: 0x0  nop
    ctx->pc = 0x2965a0u;
    // NOP
    // 0x2965a4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2965A4u;
    {
        const bool branch_taken_0x2965a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2965a4) {
            ctx->pc = 0x296590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296590;
        }
    }
    ctx->pc = 0x2965ACu;
    // 0x2965ac: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2965ACu;
    {
        const bool branch_taken_0x2965ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2965B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2965ACu;
        // 0x2965b0: 0x26300340  addiu       $s0, $s1, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2965ac) {
            ctx->pc = 0x296550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296550;
        }
    }
    ctx->pc = 0x2965B4u;
label_2965b4:
    // 0x2965b4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2965B4u;
    {
        const bool branch_taken_0x2965b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2965B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2965B4u;
        // 0x2965b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2965b4) {
            ctx->pc = 0x296528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296528;
        }
    }
    ctx->pc = 0x2965BCu;
    // 0x2965bc: 0xae40e814  sw          $zero, -0x17EC($s2)
    ctx->pc = 0x2965bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294961172), GPR_U32(ctx, 0));
label_2965c0:
    // 0x2965c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2965c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2965c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2965c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2965c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2965c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2965cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2965ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2965d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2965D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2965D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2965D0u;
        // 0x2965d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2965D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2965D8u;
}

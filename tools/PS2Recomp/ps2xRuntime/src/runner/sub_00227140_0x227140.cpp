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

// Function: sub_00227140
// Address: 0x227140 - 0x2273a0
void sub_00227140_0x227140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227140_0x227140");
#endif

    switch (ctx->pc) {
        case 0x2271dcu: goto label_2271dc;
        case 0x2271f0u: goto label_2271f0;
        case 0x227200u: goto label_227200;
        case 0x227210u: goto label_227210;
        case 0x227228u: goto label_227228;
        case 0x227238u: goto label_227238;
        case 0x227244u: goto label_227244;
        case 0x22724cu: goto label_22724c;
        case 0x227254u: goto label_227254;
        case 0x227278u: goto label_227278;
        case 0x2272c8u: goto label_2272c8;
        case 0x227310u: goto label_227310;
        case 0x22736cu: goto label_22736c;
        case 0x227378u: goto label_227378;
        default: break;
    }

    ctx->pc = 0x227140u;

    // 0x227140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x227140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x227144: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x227144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x227148: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x227148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22714c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22714cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227150: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x227150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x227154: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x227154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22715c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227160: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x227160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x227164: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227164u;
    {
        const bool branch_taken_0x227164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227164u;
        // 0x227168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227164) {
            ctx->pc = 0x227180u;
            goto label_227180;
        }
    }
    ctx->pc = 0x22716Cu;
    // 0x22716c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x22716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227170: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x227170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x227174: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227174u;
    {
        const bool branch_taken_0x227174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227174u;
        // 0x227178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227174) {
            ctx->pc = 0x227190u;
            goto label_227190;
        }
    }
    ctx->pc = 0x22717Cu;
    // 0x22717c: 0x0  nop
    ctx->pc = 0x22717cu;
    // NOP
label_227180:
    // 0x227180: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x227180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x227184: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x227184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x227188: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x227188u;
    {
        const bool branch_taken_0x227188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227188u;
        // 0x22718c: 0x3484000a  ori         $a0, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227188) {
            ctx->pc = 0x227364u;
            goto label_227364;
        }
    }
    ctx->pc = 0x227190u;
label_227190:
    // 0x227190: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x227190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x227194: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x227194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227198: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x227198u;
    {
        const bool branch_taken_0x227198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227198u;
        // 0x22719c: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227198) {
            ctx->pc = 0x2271CCu;
            goto label_2271cc;
        }
    }
    ctx->pc = 0x2271A0u;
    // 0x2271a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2271A0u;
    {
        const bool branch_taken_0x2271a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2271A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271A0u;
        // 0x2271a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271a0) {
            ctx->pc = 0x2271B8u;
            goto label_2271b8;
        }
    }
    ctx->pc = 0x2271A8u;
    // 0x2271a8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2271A8u;
    {
        const bool branch_taken_0x2271a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2271ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271A8u;
        // 0x2271ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271a8) {
            ctx->pc = 0x2271CCu;
            goto label_2271cc;
        }
    }
    ctx->pc = 0x2271B0u;
    // 0x2271b0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2271B0u;
    {
        const bool branch_taken_0x2271b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2271b0) {
            ctx->pc = 0x227358u;
            goto label_227358;
        }
    }
    ctx->pc = 0x2271B8u;
label_2271b8:
    // 0x2271b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2271b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2271bc: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2271BCu;
    {
        const bool branch_taken_0x2271bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2271C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271BCu;
        // 0x2271c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271bc) {
            ctx->pc = 0x227254u;
            goto label_227254;
        }
    }
    ctx->pc = 0x2271C4u;
    // 0x2271c4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2271C4u;
    {
        const bool branch_taken_0x2271c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2271c4) {
            ctx->pc = 0x227358u;
            goto label_227358;
        }
    }
    ctx->pc = 0x2271CCu;
label_2271cc:
    // 0x2271cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2271ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2271d0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2271d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2271d4: 0xc089b6c  jal         func_226DB0
    ctx->pc = 0x2271D4u;
    SET_GPR_U32(ctx, 31, 0x2271DCu);
    ctx->pc = 0x2271D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271D4u;
    // 0x2271d8: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x2271D4u, 0x2271DCu)) {
        return;
    }
    ctx->pc = 0x2271DCu;
label_2271dc:
    // 0x2271dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2271dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271e0: 0x12200068  beqz        $s1, . + 4 + (0x68 << 2)
    ctx->pc = 0x2271E0u;
    {
        const bool branch_taken_0x2271e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2271E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271E0u;
        // 0x2271e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271e0) {
            ctx->pc = 0x227384u;
            goto label_227384;
        }
    }
    ctx->pc = 0x2271E8u;
    // 0x2271e8: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x2271E8u;
    SET_GPR_U32(ctx, 31, 0x2271F0u);
    ctx->pc = 0x2271ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271E8u;
    // 0x2271ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x2271E8u, 0x2271F0u)) {
        return;
    }
    ctx->pc = 0x2271F0u;
label_2271f0:
    // 0x2271f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2271F0u;
    {
        const bool branch_taken_0x2271f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2271F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271F0u;
        // 0x2271f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271f0) {
            ctx->pc = 0x227208u;
            goto label_227208;
        }
    }
    ctx->pc = 0x2271F8u;
    // 0x2271f8: 0xc089b96  jal         func_226E58
    ctx->pc = 0x2271F8u;
    SET_GPR_U32(ctx, 31, 0x227200u);
    ctx->pc = 0x2271FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271F8u;
    // 0x2271fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x2271F8u, 0x227200u)) {
        return;
    }
    ctx->pc = 0x227200u;
label_227200:
    // 0x227200: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x227200u;
    {
        const bool branch_taken_0x227200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227200u;
        // 0x227204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227200) {
            ctx->pc = 0x227384u;
            goto label_227384;
        }
    }
    ctx->pc = 0x227208u;
label_227208:
    // 0x227208: 0xc089f7e  jal         func_227DF8
    ctx->pc = 0x227208u;
    SET_GPR_U32(ctx, 31, 0x227210u);
    ctx->pc = 0x22720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227208u;
    // 0x22720c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227DF8u, 0x227208u, 0x227210u)) {
        return;
    }
    ctx->pc = 0x227210u;
label_227210:
    // 0x227210: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227214: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x227214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x227218: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x227218u;
    {
        const bool branch_taken_0x227218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227218u;
        // 0x22721c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227218) {
            ctx->pc = 0x22722Cu;
            goto label_22722c;
        }
    }
    ctx->pc = 0x227220u;
    // 0x227220: 0xc089bf6  jal         func_226FD8
    ctx->pc = 0x227220u;
    SET_GPR_U32(ctx, 31, 0x227228u);
    ctx->pc = 0x227224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227220u;
    // 0x227224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226FD8u, 0x227220u, 0x227228u)) {
        return;
    }
    ctx->pc = 0x227228u;
label_227228:
    // 0x227228: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x227228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_22722c:
    // 0x22722c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22722cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227230: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x227230u;
    SET_GPR_U32(ctx, 31, 0x227238u);
    ctx->pc = 0x227234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227230u;
    // 0x227234: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x227230u, 0x227238u)) {
        return;
    }
    ctx->pc = 0x227238u;
label_227238:
    // 0x227238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22723c: 0xc089f7e  jal         func_227DF8
    ctx->pc = 0x22723Cu;
    SET_GPR_U32(ctx, 31, 0x227244u);
    ctx->pc = 0x227240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22723Cu;
    // 0x227240: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227DF8u, 0x22723Cu, 0x227244u)) {
        return;
    }
    ctx->pc = 0x227244u;
label_227244:
    // 0x227244: 0xc089bf6  jal         func_226FD8
    ctx->pc = 0x227244u;
    SET_GPR_U32(ctx, 31, 0x22724Cu);
    ctx->pc = 0x227248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227244u;
    // 0x227248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226FD8u, 0x227244u, 0x22724Cu)) {
        return;
    }
    ctx->pc = 0x22724Cu;
label_22724c:
    // 0x22724c: 0xc089b96  jal         func_226E58
    ctx->pc = 0x22724Cu;
    SET_GPR_U32(ctx, 31, 0x227254u);
    ctx->pc = 0x227250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22724Cu;
    // 0x227250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22724Cu, 0x227254u)) {
        return;
    }
    ctx->pc = 0x227254u;
label_227254:
    // 0x227254: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x227254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22725c: 0x8e480014  lw          $t0, 0x14($s2)
    ctx->pc = 0x22725cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x227260: 0x8e4a0018  lw          $t2, 0x18($s2)
    ctx->pc = 0x227260u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x227264: 0x18400046  blez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x227264u;
    {
        const bool branch_taken_0x227264 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x227268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227264u;
        // 0x227268: 0x8e090014  lw          $t1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227264) {
            ctx->pc = 0x227380u;
            goto label_227380;
        }
    }
    ctx->pc = 0x22726Cu;
    // 0x22726c: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x22726cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227270: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x227270u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227274: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x227274u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_227278:
    // 0x227278: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x227278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22727c: 0x106d000c  beq         $v1, $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x22727Cu;
    {
        const bool branch_taken_0x22727c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        ctx->pc = 0x227280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22727Cu;
        // 0x227280: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22727c) {
            ctx->pc = 0x2272B0u;
            goto label_2272b0;
        }
    }
    ctx->pc = 0x227284u;
    // 0x227284: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x227284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x227288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227288u;
    {
        const bool branch_taken_0x227288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227288) {
            ctx->pc = 0x2272A0u;
            goto label_2272a0;
        }
    }
    ctx->pc = 0x227290u;
    // 0x227290: 0x106c0007  beq         $v1, $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x227290u;
    {
        const bool branch_taken_0x227290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x227294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227290u;
        // 0x227294: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227290) {
            ctx->pc = 0x2272B0u;
            goto label_2272b0;
        }
    }
    ctx->pc = 0x227298u;
    // 0x227298: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x227298u;
    {
        const bool branch_taken_0x227298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227298u;
        // 0x22729c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227298) {
            ctx->pc = 0x227334u;
            goto label_227334;
        }
    }
    ctx->pc = 0x2272A0u;
label_2272a0:
    // 0x2272a0: 0x106b0016  beq         $v1, $t3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2272A0u;
    {
        const bool branch_taken_0x2272a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x2272A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272A0u;
        // 0x2272a4: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272a0) {
            ctx->pc = 0x2272FCu;
            goto label_2272fc;
        }
    }
    ctx->pc = 0x2272A8u;
    // 0x2272a8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2272A8u;
    {
        const bool branch_taken_0x2272a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2272ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272A8u;
        // 0x2272ac: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272a8) {
            ctx->pc = 0x227334u;
            goto label_227334;
        }
    }
    ctx->pc = 0x2272B0u;
label_2272b0:
    // 0x2272b0: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x2272b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2272b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2272b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2272b8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2272b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272bc: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2272BCu;
    {
        const bool branch_taken_0x2272bc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2272C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272BCu;
        // 0x2272c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272bc) {
            ctx->pc = 0x227330u;
            goto label_227330;
        }
    }
    ctx->pc = 0x2272C4u;
    // 0x2272c4: 0x0  nop
    ctx->pc = 0x2272c4u;
    // NOP
label_2272c8:
    // 0x2272c8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2272c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2272cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2272ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2272d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2272d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2272d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2272d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2272d8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2272d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2272dc: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x2272dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2272e0: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x2272e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2272e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2272e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2272e8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2272e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2272ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2272ECu;
    {
        const bool branch_taken_0x2272ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2272F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272ECu;
        // 0x2272f0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272ec) {
            ctx->pc = 0x2272C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2272c8;
        }
    }
    ctx->pc = 0x2272F4u;
    // 0x2272f4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2272F4u;
    {
        const bool branch_taken_0x2272f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2272F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272F4u;
        // 0x2272f8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272f4) {
            ctx->pc = 0x227334u;
            goto label_227334;
        }
    }
    ctx->pc = 0x2272FCu;
label_2272fc:
    // 0x2272fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2272fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227300: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x227300u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227304: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x227304u;
    {
        const bool branch_taken_0x227304 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x227308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227304u;
        // 0x227308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227304) {
            ctx->pc = 0x227330u;
            goto label_227330;
        }
    }
    ctx->pc = 0x22730Cu;
    // 0x22730c: 0x0  nop
    ctx->pc = 0x22730cu;
    // NOP
label_227310:
    // 0x227310: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x227310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x227314: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x227314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x227318: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x227318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x22731c: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x22731cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x227320: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x227320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227324: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x227324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x227328: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x227328u;
    {
        const bool branch_taken_0x227328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227328u;
        // 0x22732c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227328) {
            ctx->pc = 0x227310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227310;
        }
    }
    ctx->pc = 0x227330u;
label_227330:
    // 0x227330: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x227330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_227334:
    // 0x227334: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x227334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227338: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x227338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x22733c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227340: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x227340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x227344: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x227344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x227348: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x227348u;
    {
        const bool branch_taken_0x227348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227348u;
        // 0x22734c: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227348) {
            ctx->pc = 0x227278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227278;
        }
    }
    ctx->pc = 0x227350u;
    // 0x227350: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x227350u;
    {
        const bool branch_taken_0x227350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227350u;
        // 0x227354: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227350) {
            ctx->pc = 0x227384u;
            goto label_227384;
        }
    }
    ctx->pc = 0x227358u;
label_227358:
    // 0x227358: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x227358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x22735c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22735cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x227360: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x227360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
label_227364:
    // 0x227364: 0xc092848  jal         func_24A120
    ctx->pc = 0x227364u;
    SET_GPR_U32(ctx, 31, 0x22736Cu);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x227364u, 0x22736Cu)) {
        return;
    }
    ctx->pc = 0x22736Cu;
label_22736c:
    // 0x22736c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227370: 0xc09281a  jal         func_24A068
    ctx->pc = 0x227370u;
    SET_GPR_U32(ctx, 31, 0x227378u);
    ctx->pc = 0x227374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227370u;
    // 0x227374: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x227370u, 0x227378u)) {
        return;
    }
    ctx->pc = 0x227378u;
label_227378:
    // 0x227378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x227378u;
    {
        const bool branch_taken_0x227378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227378u;
        // 0x22737c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227378) {
            ctx->pc = 0x227384u;
            goto label_227384;
        }
    }
    ctx->pc = 0x227380u;
label_227380:
    // 0x227380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227384:
    // 0x227384: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x227384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x227388: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x227388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22738c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22738cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227394: 0x3e00008  jr          $ra
    ctx->pc = 0x227394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227394u;
        // 0x227398: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22739Cu;
    // 0x22739c: 0x0  nop
    ctx->pc = 0x22739cu;
    // NOP
    ctx->pc = 0x2273a0u;
}

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

// Function: sub_00149690
// Address: 0x149690 - 0x149750
void sub_00149690_0x149690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149690_0x149690");
#endif

    switch (ctx->pc) {
        case 0x149690u: goto label_149690;
        case 0x149694u: goto label_149694;
        case 0x149698u: goto label_149698;
        case 0x14969cu: goto label_14969c;
        case 0x1496a0u: goto label_1496a0;
        case 0x1496a4u: goto label_1496a4;
        case 0x1496a8u: goto label_1496a8;
        case 0x1496acu: goto label_1496ac;
        case 0x1496b0u: goto label_1496b0;
        case 0x1496b4u: goto label_1496b4;
        case 0x1496b8u: goto label_1496b8;
        case 0x1496bcu: goto label_1496bc;
        case 0x1496c0u: goto label_1496c0;
        case 0x1496c4u: goto label_1496c4;
        case 0x1496c8u: goto label_1496c8;
        case 0x1496ccu: goto label_1496cc;
        case 0x1496d0u: goto label_1496d0;
        case 0x1496d4u: goto label_1496d4;
        case 0x1496d8u: goto label_1496d8;
        case 0x1496dcu: goto label_1496dc;
        case 0x1496e0u: goto label_1496e0;
        case 0x1496e4u: goto label_1496e4;
        case 0x1496e8u: goto label_1496e8;
        case 0x1496ecu: goto label_1496ec;
        case 0x1496f0u: goto label_1496f0;
        case 0x1496f4u: goto label_1496f4;
        case 0x1496f8u: goto label_1496f8;
        case 0x1496fcu: goto label_1496fc;
        case 0x149700u: goto label_149700;
        case 0x149704u: goto label_149704;
        case 0x149708u: goto label_149708;
        case 0x14970cu: goto label_14970c;
        case 0x149710u: goto label_149710;
        case 0x149714u: goto label_149714;
        case 0x149718u: goto label_149718;
        case 0x14971cu: goto label_14971c;
        case 0x149720u: goto label_149720;
        case 0x149724u: goto label_149724;
        case 0x149728u: goto label_149728;
        case 0x14972cu: goto label_14972c;
        case 0x149730u: goto label_149730;
        case 0x149734u: goto label_149734;
        case 0x149738u: goto label_149738;
        case 0x14973cu: goto label_14973c;
        case 0x149740u: goto label_149740;
        case 0x149744u: goto label_149744;
        case 0x149748u: goto label_149748;
        case 0x14974cu: goto label_14974c;
        default: break;
    }

    ctx->pc = 0x149690u;

label_149690:
    // 0x149690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x149690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_149694:
    // 0x149694: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149698:
    // 0x149698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14969c:
    // 0x14969c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14969cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1496a0:
    // 0x1496a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1496a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1496a4:
    // 0x1496a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1496a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1496a8:
    // 0x1496a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1496a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1496ac:
    // 0x1496ac: 0x8e500048  lw          $s0, 0x48($s2)
    ctx->pc = 0x1496acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_1496b0:
    // 0x1496b0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_1496b4:
    if (ctx->pc == 0x1496B4u) {
        ctx->pc = 0x1496B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496B0u;
        // 0x1496b4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1496B8u;
        goto label_1496b8;
    }
    ctx->pc = 0x1496B0u;
    {
        const bool branch_taken_0x1496b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496B0u;
        // 0x1496b4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496b0) {
            ctx->pc = 0x14971Cu;
            goto label_14971c;
        }
    }
    ctx->pc = 0x1496B8u;
label_1496b8:
    // 0x1496b8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1496b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1496bc:
    // 0x1496bc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1496c0:
    if (ctx->pc == 0x1496C0u) {
        ctx->pc = 0x1496C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496BCu;
        // 0x1496c0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1496C4u;
        goto label_1496c4;
    }
    ctx->pc = 0x1496BCu;
    {
        const bool branch_taken_0x1496bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496BCu;
        // 0x1496c0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496bc) {
            ctx->pc = 0x14971Cu;
            goto label_14971c;
        }
    }
    ctx->pc = 0x1496C4u;
label_1496c4:
    // 0x1496c4: 0xc07d234  jal         func_1F48D0
label_1496c8:
    if (ctx->pc == 0x1496C8u) {
        ctx->pc = 0x1496C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496C4u;
        // 0x1496c8: 0x8c5184cc  lw          $s1, -0x7B34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1496CCu;
        goto label_1496cc;
    }
    ctx->pc = 0x1496C4u;
    SET_GPR_U32(ctx, 31, 0x1496CCu);
    ctx->pc = 0x1496C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1496C4u;
    // 0x1496c8: 0x8c5184cc  lw          $s1, -0x7B34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935756)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1496C4u, 0x1496CCu)) {
        return;
    }
    ctx->pc = 0x1496CCu;
label_1496cc:
    // 0x1496cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1496d0:
    if (ctx->pc == 0x1496D0u) {
        ctx->pc = 0x1496D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496CCu;
        // 0x1496d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1496D4u;
        goto label_1496d4;
    }
    ctx->pc = 0x1496CCu;
    {
        const bool branch_taken_0x1496cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496CCu;
        // 0x1496d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496cc) {
            ctx->pc = 0x1496FCu;
            goto label_1496fc;
        }
    }
    ctx->pc = 0x1496D4u;
label_1496d4:
    // 0x1496d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1496d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1496d8:
    // 0x1496d8: 0xc07d3d6  jal         func_1F4F58
label_1496dc:
    if (ctx->pc == 0x1496DCu) {
        ctx->pc = 0x1496DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496D8u;
        // 0x1496dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1496E0u;
        goto label_1496e0;
    }
    ctx->pc = 0x1496D8u;
    SET_GPR_U32(ctx, 31, 0x1496E0u);
    ctx->pc = 0x1496DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1496D8u;
    // 0x1496dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1496D8u, 0x1496E0u)) {
        return;
    }
    ctx->pc = 0x1496E0u;
label_1496e0:
    // 0x1496e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1496e4:
    if (ctx->pc == 0x1496E4u) {
        ctx->pc = 0x1496E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496E0u;
        // 0x1496e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1496E8u;
        goto label_1496e8;
    }
    ctx->pc = 0x1496E0u;
    {
        const bool branch_taken_0x1496e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496E0u;
        // 0x1496e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496e0) {
            ctx->pc = 0x1496FCu;
            goto label_1496fc;
        }
    }
    ctx->pc = 0x1496E8u;
label_1496e8:
    // 0x1496e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1496e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1496ec:
    // 0x1496ec: 0xc07d348  jal         func_1F4D20
label_1496f0:
    if (ctx->pc == 0x1496F0u) {
        ctx->pc = 0x1496F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496ECu;
        // 0x1496f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1496F4u;
        goto label_1496f4;
    }
    ctx->pc = 0x1496ECu;
    SET_GPR_U32(ctx, 31, 0x1496F4u);
    ctx->pc = 0x1496F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1496ECu;
    // 0x1496f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1496ECu, 0x1496F4u)) {
        return;
    }
    ctx->pc = 0x1496F4u;
label_1496f4:
    // 0x1496f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1496f8:
    if (ctx->pc == 0x1496F8u) {
        ctx->pc = 0x1496F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496F4u;
        // 0x1496f8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1496FCu;
        goto label_1496fc;
    }
    ctx->pc = 0x1496F4u;
    {
        const bool branch_taken_0x1496f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496F4u;
        // 0x1496f8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496f4) {
            ctx->pc = 0x149700u;
            goto label_149700;
        }
    }
    ctx->pc = 0x1496FCu;
label_1496fc:
    // 0x1496fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1496fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149700:
    // 0x149700: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_149704:
    if (ctx->pc == 0x149704u) {
        ctx->pc = 0x149704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149700u;
        // 0x149704: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149708u;
        goto label_149708;
    }
    ctx->pc = 0x149700u;
    {
        const bool branch_taken_0x149700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149700u;
        // 0x149704: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149700) {
            ctx->pc = 0x149718u;
            goto label_149718;
        }
    }
    ctx->pc = 0x149708u;
label_149708:
    // 0x149708: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x149708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_14970c:
    // 0x14970c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x14970cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_149710:
    // 0x149710: 0x10000002  b           . + 4 + (0x2 << 2)
label_149714:
    if (ctx->pc == 0x149714u) {
        ctx->pc = 0x149714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149710u;
        // 0x149714: 0x2c430001  sltiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x149718u;
        goto label_149718;
    }
    ctx->pc = 0x149710u;
    {
        const bool branch_taken_0x149710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149710u;
        // 0x149714: 0x2c430001  sltiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149710) {
            ctx->pc = 0x14971Cu;
            goto label_14971c;
        }
    }
    ctx->pc = 0x149718u;
label_149718:
    // 0x149718: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x149718u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14971c:
    // 0x14971c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_149720:
    if (ctx->pc == 0x149720u) {
        ctx->pc = 0x149720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14971Cu;
        // 0x149720: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149724u;
        goto label_149724;
    }
    ctx->pc = 0x14971Cu;
    {
        const bool branch_taken_0x14971c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14971Cu;
        // 0x149720: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14971c) {
            ctx->pc = 0x14973Cu;
            goto label_14973c;
        }
    }
    ctx->pc = 0x149724u;
label_149724:
    // 0x149724: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x149724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_149728:
    // 0x149728: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x149728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_14972c:
    // 0x14972c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x14972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_149730:
    // 0x149730: 0x60f809  jalr        $v1
label_149734:
    if (ctx->pc == 0x149734u) {
        ctx->pc = 0x149734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149730u;
        // 0x149734: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149738u;
        goto label_149738;
    }
    ctx->pc = 0x149730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x149738u);
        ctx->pc = 0x149734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149730u;
        // 0x149734: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149730u, 0x149738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x149738u;
label_149738:
    // 0x149738: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x149738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14973c:
    // 0x14973c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14973cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_149740:
    // 0x149740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_149744:
    // 0x149744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_149748:
    // 0x149748: 0x3e00008  jr          $ra
label_14974c:
    if (ctx->pc == 0x14974Cu) {
        ctx->pc = 0x14974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149748u;
        // 0x14974c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149750u;
        goto label_fallthrough_0x149748;
    }
    ctx->pc = 0x149748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149748u;
        // 0x14974c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x149748:
    ctx->pc = 0x149750u;
}

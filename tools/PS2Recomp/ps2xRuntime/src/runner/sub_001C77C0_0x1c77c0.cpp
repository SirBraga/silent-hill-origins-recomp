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

// Function: sub_001C77C0
// Address: 0x1c77c0 - 0x1c78d0
void sub_001C77C0_0x1c77c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C77C0_0x1c77c0");
#endif

    switch (ctx->pc) {
        case 0x1c78c4u: goto label_1c78c4;
        default: break;
    }

    ctx->pc = 0x1c77c0u;

    // 0x1c77c0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1c77c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c77c8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1c77c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c77ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c77d0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1c77d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1c77d4: 0x25420278  addiu       $v0, $t2, 0x278
    ctx->pc = 0x1c77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 632));
    // 0x1c77d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1c77d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c77dc: 0x10c00025  beqz        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C77DCu;
    {
        const bool branch_taken_0x1c77dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77DCu;
        // 0x1c77e0: 0x8ca90000  lw          $t1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77dc) {
            ctx->pc = 0x1C7874u;
            goto label_1c7874;
        }
    }
    ctx->pc = 0x1C77E4u;
    // 0x1c77e4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c77e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c77e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c77ec: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x1c77ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c77f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c77f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77f4: 0x2442f430  addiu       $v0, $v0, -0xBD0
    ctx->pc = 0x1c77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964272));
    // 0x1c77f8: 0x25260001  addiu       $a2, $t1, 0x1
    ctx->pc = 0x1c77f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1c77fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c7800: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1c7800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c7804: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7804u;
    {
        const bool branch_taken_0x1c7804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7804u;
        // 0x1c7808: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7804) {
            ctx->pc = 0x1C7820u;
            goto label_1c7820;
        }
    }
    ctx->pc = 0x1C780Cu;
    // 0x1c780c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1c780cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c7810: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7810u;
    {
        const bool branch_taken_0x1c7810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7810u;
        // 0x1c7814: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7810) {
            ctx->pc = 0x1C7824u;
            goto label_1c7824;
        }
    }
    ctx->pc = 0x1C7818u;
    // 0x1c7818: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C7818u;
    {
        const bool branch_taken_0x1c7818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7818u;
        // 0x1c781c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7818) {
            ctx->pc = 0x1C78B4u;
            goto label_1c78b4;
        }
    }
    ctx->pc = 0x1C7820u;
label_1c7820:
    // 0x1c7820: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1c7820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c7824:
    // 0x1c7824: 0x24e4f430  addiu       $a0, $a3, -0xBD0
    ctx->pc = 0x1c7824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964272));
    // 0x1c7828: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x1c7828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c782c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7830: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1c7830u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1c7834: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c7834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c7838: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1c7838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c783c: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C783Cu;
    {
        const bool branch_taken_0x1c783c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C783Cu;
        // 0x1c7840: 0x25460278  addiu       $a2, $t2, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c783c) {
            ctx->pc = 0x1C7858u;
            goto label_1c7858;
        }
    }
    ctx->pc = 0x1C7844u;
    // 0x1c7844: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1c7844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c7848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c7848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c784c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1c784cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c7850: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C7850u;
    {
        const bool branch_taken_0x1c7850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7850) {
            ctx->pc = 0x1C7854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7850u;
            // 0x1c7854: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C78B4u;
            goto label_1c78b4;
        }
    }
    ctx->pc = 0x1C7858u;
label_1c7858:
    // 0x1c7858: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1c7858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c785c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7860: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c7860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c7864: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C7864u;
    {
        const bool branch_taken_0x1c7864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7864u;
        // 0x1c7868: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7864) {
            ctx->pc = 0x1C78B8u;
            goto label_1c78b8;
        }
    }
    ctx->pc = 0x1C786Cu;
    // 0x1c786c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C786Cu;
    {
        const bool branch_taken_0x1c786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C786Cu;
        // 0x1c7870: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c786c) {
            ctx->pc = 0x1C78B8u;
            goto label_1c78b8;
        }
    }
    ctx->pc = 0x1C7874u;
label_1c7874:
    // 0x1c7874: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x1c7874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1c7878: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C7878u;
    {
        const bool branch_taken_0x1c7878 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1C787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7878u;
        // 0x1c787c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7878) {
            ctx->pc = 0x1C78B4u;
            goto label_1c78b4;
        }
    }
    ctx->pc = 0x1C7880u;
    // 0x1c7880: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1c7880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c7884: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c7884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c7888: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x1c7888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c788c: 0x2442f430  addiu       $v0, $v0, -0xBD0
    ctx->pc = 0x1c788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964272));
    // 0x1c7890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7894: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1c7894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c7898: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7898u;
    {
        const bool branch_taken_0x1c7898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7898u;
        // 0x1c789c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7898) {
            ctx->pc = 0x1C78B0u;
            goto label_1c78b0;
        }
    }
    ctx->pc = 0x1C78A0u;
    // 0x1c78a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c78a4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C78A4u;
    {
        const bool branch_taken_0x1c78a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78A4u;
        // 0x1c78a8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78a4) {
            ctx->pc = 0x1C78B0u;
            goto label_1c78b0;
        }
    }
    ctx->pc = 0x1C78ACu;
    // 0x1c78ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c78acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c78b0:
    // 0x1c78b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1c78b4:
    // 0x1c78b4: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1c78b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1c78b8:
    // 0x1c78b8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1c78b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78bc: 0xc071f0c  jal         func_1C7C30
    ctx->pc = 0x1C78BCu;
    SET_GPR_U32(ctx, 31, 0x1C78C4u);
    ctx->pc = 0x1C78C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78BCu;
    // 0x1c78c0: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C7C30u, 0x1C78BCu, 0x1C78C4u)) {
        return;
    }
    ctx->pc = 0x1C78C4u;
label_1c78c4:
    // 0x1c78c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c78c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c78c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78C8u;
        // 0x1c78cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C78D0u;
}

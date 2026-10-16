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

// Function: sub_00150368
// Address: 0x150368 - 0x150448
void sub_00150368_0x150368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150368_0x150368");
#endif

    switch (ctx->pc) {
        case 0x150390u: goto label_150390;
        case 0x1503a0u: goto label_1503a0;
        case 0x1503a8u: goto label_1503a8;
        default: break;
    }

    ctx->pc = 0x150368u;

    // 0x150368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15036c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15036cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x150374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150378: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x150378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15037c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x15037cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x150380: 0x5200002d  beql        $s0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x150380u;
    {
        const bool branch_taken_0x150380 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x150380) {
            ctx->pc = 0x150384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150380u;
            // 0x150384: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150438u;
            goto label_150438;
        }
    }
    ctx->pc = 0x150388u;
    // 0x150388: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x150388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x15038c: 0x0  nop
    ctx->pc = 0x15038cu;
    // NOP
label_150390:
    // 0x150390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150390u;
    {
        const bool branch_taken_0x150390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150390u;
        // 0x150394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150390) {
            ctx->pc = 0x1503A0u;
            goto label_1503a0;
        }
    }
    ctx->pc = 0x150398u;
    // 0x150398: 0xc0538ae  jal         func_14E2B8
    ctx->pc = 0x150398u;
    SET_GPR_U32(ctx, 31, 0x1503A0u);
    ctx->pc = 0x15039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150398u;
    // 0x15039c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14E2B8u, 0x150398u, 0x1503A0u)) {
        return;
    }
    ctx->pc = 0x1503A0u;
label_1503a0:
    // 0x1503a0: 0xc053c74  jal         func_14F1D0
    ctx->pc = 0x1503A0u;
    SET_GPR_U32(ctx, 31, 0x1503A8u);
    ctx->pc = 0x1503A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1503A0u;
    // 0x1503a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F1D0u, 0x1503A0u, 0x1503A8u)) {
        return;
    }
    ctx->pc = 0x1503A8u;
label_1503a8:
    // 0x1503a8: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x1503a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1503ac: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1503acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1503b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1503B0u;
    {
        const bool branch_taken_0x1503b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1503B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503B0u;
        // 0x1503b4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503b0) {
            ctx->pc = 0x1503C0u;
            goto label_1503c0;
        }
    }
    ctx->pc = 0x1503B8u;
    // 0x1503b8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1503b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1503bc: 0xac620180  sw          $v0, 0x180($v1)
    ctx->pc = 0x1503bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 2));
label_1503c0:
    // 0x1503c0: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x1503c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1503c4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1503C4u;
    {
        const bool branch_taken_0x1503c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1503c4) {
            ctx->pc = 0x1503C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1503C4u;
            // 0x1503c8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1503D8u;
            goto label_1503d8;
        }
    }
    ctx->pc = 0x1503CCu;
    // 0x1503cc: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x1503ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1503d0: 0xac620184  sw          $v0, 0x184($v1)
    ctx->pc = 0x1503d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 2));
    // 0x1503d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1503d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1503d8:
    // 0x1503d8: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1503D8u;
    {
        const bool branch_taken_0x1503d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1503d8) {
            ctx->pc = 0x1503DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1503D8u;
            // 0x1503dc: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1503ECu;
            goto label_1503ec;
        }
    }
    ctx->pc = 0x1503E0u;
    // 0x1503e0: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1503e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1503e4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1503e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1503e8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1503e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1503ec:
    // 0x1503ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1503ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1503f0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1503f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1503f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1503f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1503f8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1503F8u;
    {
        const bool branch_taken_0x1503f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1503f8) {
            ctx->pc = 0x1503FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1503F8u;
            // 0x1503fc: 0xac500184  sw          $s0, 0x184($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150400u;
            goto label_150400;
        }
    }
    ctx->pc = 0x150400u;
label_150400:
    // 0x150400: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x150400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x150404: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x150404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x150408: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x150408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x15040c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x15040cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x150410: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x150410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150414: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x150414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x150418: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15041c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15041cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x150420: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x150420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x150424: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x150424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x150428: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x150428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15042c: 0x5600ffd8  bnel        $s0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x15042Cu;
    {
        const bool branch_taken_0x15042c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15042c) {
            ctx->pc = 0x150430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15042Cu;
            // 0x150430: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150390;
        }
    }
    ctx->pc = 0x150434u;
    // 0x150434: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x150434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_150438:
    // 0x150438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15043c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15043cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150440: 0x3e00008  jr          $ra
    ctx->pc = 0x150440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150440u;
        // 0x150444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150448u;
}

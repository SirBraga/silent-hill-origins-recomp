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

// Function: sub_00114718
// Address: 0x114718 - 0x1147c0
void sub_00114718_0x114718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114718_0x114718");
#endif

    switch (ctx->pc) {
        case 0x11476cu: goto label_11476c;
        case 0x1147a4u: goto label_1147a4;
        default: break;
    }

    ctx->pc = 0x114718u;

    // 0x114718: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11471c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114720: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x114720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x114724: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x114724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x114728: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11472c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11472cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114730: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x114730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x114734: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x114734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x114738: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x114738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11473c: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x11473cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x114740: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x114740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114744: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x114744u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x114748: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x114748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x11474c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11474cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x114750: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x114750u;
    {
        const bool branch_taken_0x114750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x114754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114750u;
        // 0x114754: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114750) {
            ctx->pc = 0x11476Cu;
            goto label_11476c;
        }
    }
    ctx->pc = 0x114758u;
    // 0x114758: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x114758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11475c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11475Cu;
    {
        const bool branch_taken_0x11475c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11475Cu;
        // 0x114760: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11475c) {
            ctx->pc = 0x114770u;
            goto label_114770;
        }
    }
    ctx->pc = 0x114764u;
    // 0x114764: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x114764u;
    SET_GPR_U32(ctx, 31, 0x11476Cu);
    ctx->pc = 0x114768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114764u;
    // 0x114768: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x114764u, 0x11476Cu)) {
        return;
    }
    ctx->pc = 0x11476Cu;
label_11476c:
    // 0x11476c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_114770:
    // 0x114770: 0x27a30014  addiu       $v1, $sp, 0x14
    ctx->pc = 0x114770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x114774: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x114774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x114778: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x114778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x11477c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x11477cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x114780: 0x8e221a70  lw          $v0, 0x1A70($s1)
    ctx->pc = 0x114780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x114784: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x114784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x114788: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114788u;
    {
        const bool branch_taken_0x114788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114788u;
        // 0x11478c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114788) {
            ctx->pc = 0x1147A4u;
            goto label_1147a4;
        }
    }
    ctx->pc = 0x114790u;
    // 0x114790: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x114790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x114794: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114794u;
    {
        const bool branch_taken_0x114794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114794u;
        // 0x114798: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114794) {
            ctx->pc = 0x1147A8u;
            goto label_1147a8;
        }
    }
    ctx->pc = 0x11479Cu;
    // 0x11479c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x11479Cu;
    SET_GPR_U32(ctx, 31, 0x1147A4u);
    ctx->pc = 0x1147A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11479Cu;
    // 0x1147a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11479Cu, 0x1147A4u)) {
        return;
    }
    ctx->pc = 0x1147A4u;
label_1147a4:
    // 0x1147a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1147a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1147a8:
    // 0x1147a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1147a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1147ac: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1147acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1147b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1147b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1147b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1147b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1147b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1147B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1147BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147B8u;
        // 0x1147bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1147B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1147C0u;
}

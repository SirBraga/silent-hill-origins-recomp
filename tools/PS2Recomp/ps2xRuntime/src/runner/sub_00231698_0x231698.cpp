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

// Function: sub_00231698
// Address: 0x231698 - 0x231710
void sub_00231698_0x231698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231698_0x231698");
#endif

    switch (ctx->pc) {
        case 0x2316d4u: goto label_2316d4;
        default: break;
    }

    ctx->pc = 0x231698u;

    // 0x231698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23169c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23169cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2316a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2316a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2316a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2316a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2316a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2316a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2316acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2316b0: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2316B0u;
    {
        const bool branch_taken_0x2316b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2316B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316B0u;
        // 0x2316b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316b0) {
            ctx->pc = 0x2316F8u;
            goto label_2316f8;
        }
    }
    ctx->pc = 0x2316B8u;
    // 0x2316b8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2316B8u;
    {
        const bool branch_taken_0x2316b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2316BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316B8u;
        // 0x2316bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316b8) {
            ctx->pc = 0x2316FCu;
            goto label_2316fc;
        }
    }
    ctx->pc = 0x2316C0u;
    // 0x2316c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2316c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2316c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2316C4u;
    {
        const bool branch_taken_0x2316c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2316C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316C4u;
        // 0x2316c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316c4) {
            ctx->pc = 0x2316F8u;
            goto label_2316f8;
        }
    }
    ctx->pc = 0x2316CCu;
    // 0x2316cc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x2316CCu;
    SET_GPR_U32(ctx, 31, 0x2316D4u);
    ctx->pc = 0x2316D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316CCu;
    // 0x2316d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2316CCu, 0x2316D4u)) {
        return;
    }
    ctx->pc = 0x2316D4u;
label_2316d4:
    // 0x2316d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2316D4u;
    {
        const bool branch_taken_0x2316d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2316D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316D4u;
        // 0x2316d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316d4) {
            ctx->pc = 0x2316F8u;
            goto label_2316f8;
        }
    }
    ctx->pc = 0x2316DCu;
    // 0x2316dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2316dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2316e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2316e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2316e4: 0x8c84416c  lw          $a0, 0x416C($a0)
    ctx->pc = 0x2316e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x2316e8: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x2316e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2316ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2316ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2316f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2316F0u;
    {
        const bool branch_taken_0x2316f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2316F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316F0u;
        // 0x2316f4: 0xa4650014  sh          $a1, 0x14($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316f0) {
            ctx->pc = 0x2316FCu;
            goto label_2316fc;
        }
    }
    ctx->pc = 0x2316F8u;
label_2316f8:
    // 0x2316f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2316f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2316fc:
    // 0x2316fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2316fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231700: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x231700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231704: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x231704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231708: 0x3e00008  jr          $ra
    ctx->pc = 0x231708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231708u;
        // 0x23170c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231710u;
}

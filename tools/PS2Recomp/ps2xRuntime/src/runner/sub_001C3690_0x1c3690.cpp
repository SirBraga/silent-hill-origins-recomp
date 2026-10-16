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

// Function: sub_001C3690
// Address: 0x1c3690 - 0x1c3740
void sub_001C3690_0x1c3690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3690_0x1c3690");
#endif

    switch (ctx->pc) {
        case 0x1c36ccu: goto label_1c36cc;
        case 0x1c36e4u: goto label_1c36e4;
        case 0x1c36f0u: goto label_1c36f0;
        case 0x1c3700u: goto label_1c3700;
        case 0x1c3720u: goto label_1c3720;
        default: break;
    }

    ctx->pc = 0x1c3690u;

    // 0x1c3690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c3690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c3694: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c3694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c3698: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c3698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c369c: 0x2442e0f8  addiu       $v0, $v0, -0x1F08
    ctx->pc = 0x1c369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959352));
    // 0x1c36a0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c36a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1c36a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c36a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c36a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c36ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c36acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c36b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c36b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c36b4: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x1c36b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
    // 0x1c36b8: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1c36b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c36bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C36BCu;
    {
        const bool branch_taken_0x1c36bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36BCu;
        // 0x1c36c0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36bc) {
            ctx->pc = 0x1C36D0u;
            goto label_1c36d0;
        }
    }
    ctx->pc = 0x1C36C4u;
    // 0x1c36c4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C36C4u;
    SET_GPR_U32(ctx, 31, 0x1C36CCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C36C4u, 0x1C36CCu)) {
        return;
    }
    ctx->pc = 0x1C36CCu;
label_1c36cc:
    // 0x1c36cc: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1c36ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
label_1c36d0:
    // 0x1c36d0: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x1c36d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x1c36d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C36D4u;
    {
        const bool branch_taken_0x1c36d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36D4u;
        // 0x1c36d8: 0x26300850  addiu       $s0, $s1, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36d4) {
            ctx->pc = 0x1C36E8u;
            goto label_1c36e8;
        }
    }
    ctx->pc = 0x1C36DCu;
    // 0x1c36dc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C36DCu;
    SET_GPR_U32(ctx, 31, 0x1C36E4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C36DCu, 0x1C36E4u)) {
        return;
    }
    ctx->pc = 0x1C36E4u;
label_1c36e4:
    // 0x1c36e4: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x1c36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
label_1c36e8:
    // 0x1c36e8: 0x26320874  addiu       $s2, $s1, 0x874
    ctx->pc = 0x1c36e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 2164));
    // 0x1c36ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c36ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c36f0:
    // 0x1c36f0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C36F0u;
    {
        const bool branch_taken_0x1c36f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c36f0) {
            ctx->pc = 0x1C36F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C36F0u;
            // 0x1c36f4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3708u;
            goto label_1c3708;
        }
    }
    ctx->pc = 0x1C36F8u;
    // 0x1c36f8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C36F8u;
    SET_GPR_U32(ctx, 31, 0x1C3700u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C36F8u, 0x1C3700u)) {
        return;
    }
    ctx->pc = 0x1C3700u;
label_1c3700:
    // 0x1c3700: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c3700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c3704: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1c3704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1c3708:
    // 0x1c3708: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1c3708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c370c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C370Cu;
    {
        const bool branch_taken_0x1c370c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c370c) {
            ctx->pc = 0x1C3710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C370Cu;
            // 0x1c3710: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C36F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c36f0;
        }
    }
    ctx->pc = 0x1C3714u;
    // 0x1c3714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3718: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1C3718u;
    SET_GPR_U32(ctx, 31, 0x1C3720u);
    ctx->pc = 0x1C371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3718u;
    // 0x1c371c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1C3718u, 0x1C3720u)) {
        return;
    }
    ctx->pc = 0x1C3720u;
label_1c3720:
    // 0x1c3720: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c3720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3724: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c3724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c3728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c372c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c372cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3734: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3734u;
        // 0x1c3738: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C373Cu;
    // 0x1c373c: 0x0  nop
    ctx->pc = 0x1c373cu;
    // NOP
    ctx->pc = 0x1c3740u;
}

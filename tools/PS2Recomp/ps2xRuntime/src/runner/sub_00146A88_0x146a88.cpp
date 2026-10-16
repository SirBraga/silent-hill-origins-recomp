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

// Function: sub_00146A88
// Address: 0x146a88 - 0x146b38
void sub_00146A88_0x146a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146A88_0x146a88");
#endif

    switch (ctx->pc) {
        case 0x146aa4u: goto label_146aa4;
        case 0x146ae0u: goto label_146ae0;
        case 0x146b0cu: goto label_146b0c;
        default: break;
    }

    ctx->pc = 0x146a88u;

    // 0x146a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x146a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x146a8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x146a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x146a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x146a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146a9c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x146A9Cu;
    SET_GPR_U32(ctx, 31, 0x146AA4u);
    ctx->pc = 0x146AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146A9Cu;
    // 0x146aa0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x146A9Cu, 0x146AA4u)) {
        return;
    }
    ctx->pc = 0x146AA4u;
label_146aa4:
    // 0x146aa4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x146aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x146aa8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x146aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x146aac: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x146aacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x146ab0: 0x24630ec8  addiu       $v1, $v1, 0xEC8
    ctx->pc = 0x146ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3784));
    // 0x146ab4: 0x24420f30  addiu       $v0, $v0, 0xF30
    ctx->pc = 0x146ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3888));
    // 0x146ab8: 0x24c60ee8  addiu       $a2, $a2, 0xEE8
    ctx->pc = 0x146ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3816));
    // 0x146abc: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x146abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x146ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ac4: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x146ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x146ac8: 0x26250038  addiu       $a1, $s1, 0x38
    ctx->pc = 0x146ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x146acc: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x146accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x146ad0: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x146ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x146ad4: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x146ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x146ad8: 0xc0803dc  jal         func_200F70
    ctx->pc = 0x146AD8u;
    SET_GPR_U32(ctx, 31, 0x146AE0u);
    ctx->pc = 0x146ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146AD8u;
    // 0x146adc: 0xae260034  sw          $a2, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200F70u, 0x146AD8u, 0x146AE0u)) {
        return;
    }
    ctx->pc = 0x146AE0u;
label_146ae0:
    // 0x146ae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ae4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x146AE4u;
    {
        const bool branch_taken_0x146ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x146AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146AE4u;
        // 0x146ae8: 0xae24004c  sw          $a0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ae4) {
            ctx->pc = 0x146B0Cu;
            goto label_146b0c;
        }
    }
    ctx->pc = 0x146AECu;
    // 0x146aec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x146aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146af0: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x146af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x146af4: 0x24a56c98  addiu       $a1, $a1, 0x6C98
    ctx->pc = 0x146af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27800));
    // 0x146af8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x146af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146afc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x146afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146b00: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x146b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x146b04: 0xc09545a  jal         func_255168
    ctx->pc = 0x146B04u;
    SET_GPR_U32(ctx, 31, 0x146B0Cu);
    ctx->pc = 0x146B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146B04u;
    // 0x146b08: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x146B04u, 0x146B0Cu)) {
        return;
    }
    ctx->pc = 0x146B0Cu;
label_146b0c:
    // 0x146b0c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x146b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x146b10: 0x8c6284c8  lw          $v0, -0x7B38($v1)
    ctx->pc = 0x146b10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3384C8u));
    // 0x146b14: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x146B14u;
    {
        const bool branch_taken_0x146b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146b14) {
            ctx->pc = 0x146B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146B14u;
            // 0x146b18: 0xac7184c8  sw          $s1, -0x7B38($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294935752), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146B1Cu;
            goto label_146b1c;
        }
    }
    ctx->pc = 0x146B1Cu;
label_146b1c:
    // 0x146b1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x146b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x146b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146b24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x146B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B2Cu;
        // 0x146b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146B34u;
    // 0x146b34: 0x0  nop
    ctx->pc = 0x146b34u;
    // NOP
    ctx->pc = 0x146b38u;
}

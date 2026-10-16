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

// Function: sub_00146B38
// Address: 0x146b38 - 0x146bc0
void sub_00146B38_0x146b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146B38_0x146b38");
#endif

    switch (ctx->pc) {
        case 0x146b8cu: goto label_146b8c;
        case 0x146ba8u: goto label_146ba8;
        default: break;
    }

    ctx->pc = 0x146b38u;

    // 0x146b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x146b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x146b3c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x146b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x146b40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x146b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x146b44: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x146b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x146b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x146b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146b54: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x146b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x146b58: 0x24420ec8  addiu       $v0, $v0, 0xEC8
    ctx->pc = 0x146b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3784));
    // 0x146b5c: 0x24630f30  addiu       $v1, $v1, 0xF30
    ctx->pc = 0x146b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3888));
    // 0x146b60: 0x24840ee8  addiu       $a0, $a0, 0xEE8
    ctx->pc = 0x146b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3816));
    // 0x146b64: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x146b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x146b68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x146b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b6c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x146b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x146b70: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x146b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x146b74: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x146B74u;
    {
        const bool branch_taken_0x146b74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B74u;
        // 0x146b78: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b74) {
            ctx->pc = 0x146B8Cu;
            goto label_146b8c;
        }
    }
    ctx->pc = 0x146B7Cu;
    // 0x146b7c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x146b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x146b80: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x146b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b84: 0xc05ee9a  jal         func_17BA68
    ctx->pc = 0x146B84u;
    SET_GPR_U32(ctx, 31, 0x146B8Cu);
    ctx->pc = 0x146B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146B84u;
    // 0x146b88: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x146B84u, 0x146B8Cu)) {
        return;
    }
    ctx->pc = 0x146B8Cu;
label_146b8c:
    // 0x146b8c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x146b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x146b90: 0x8c6284c8  lw          $v0, -0x7B38($v1)
    ctx->pc = 0x146b90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3384C8u));
    // 0x146b94: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x146B94u;
    {
        const bool branch_taken_0x146b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x146b94) {
            ctx->pc = 0x146B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146B94u;
            // 0x146b98: 0xac6084c8  sw          $zero, -0x7B38($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294935752), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146B9Cu;
            goto label_146b9c;
        }
    }
    ctx->pc = 0x146B9Cu;
label_146b9c:
    // 0x146b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ba0: 0xc04f084  jal         func_13C210
    ctx->pc = 0x146BA0u;
    SET_GPR_U32(ctx, 31, 0x146BA8u);
    ctx->pc = 0x146BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146BA0u;
    // 0x146ba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x146BA0u, 0x146BA8u)) {
        return;
    }
    ctx->pc = 0x146BA8u;
label_146ba8:
    // 0x146ba8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x146ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146bac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x146BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BB4u;
        // 0x146bb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146BBCu;
    // 0x146bbc: 0x0  nop
    ctx->pc = 0x146bbcu;
    // NOP
    ctx->pc = 0x146bc0u;
}

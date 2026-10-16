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

// Function: sub_0030DA20
// Address: 0x30da20 - 0x30daa8
void sub_0030DA20_0x30da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DA20_0x30da20");
#endif

    switch (ctx->pc) {
        case 0x30da48u: goto label_30da48;
        case 0x30da78u: goto label_30da78;
        default: break;
    }

    ctx->pc = 0x30da20u;

    // 0x30da20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30da24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30da24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30da28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30da28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30da2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30da2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30da30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30da34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30da34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30da38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30da3c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30da3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30da40: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30DA40u;
    SET_GPR_U32(ctx, 31, 0x30DA48u);
    ctx->pc = 0x30DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA40u;
    // 0x30da44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30DA40u, 0x30DA48u)) {
        return;
    }
    ctx->pc = 0x30DA48u;
label_30da48:
    // 0x30da48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DA48u;
    {
        const bool branch_taken_0x30da48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA48u;
        // 0x30da4c: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da48) {
            ctx->pc = 0x30DA60u;
            goto label_30da60;
        }
    }
    ctx->pc = 0x30DA50u;
    // 0x30da50: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x30da50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30da54: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30da58: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DA58u;
    {
        const bool branch_taken_0x30da58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x30DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA58u;
        // 0x30da5c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da58) {
            ctx->pc = 0x30DA68u;
            goto label_30da68;
        }
    }
    ctx->pc = 0x30DA60u;
label_30da60:
    // 0x30da60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30DA60u;
    {
        const bool branch_taken_0x30da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA60u;
        // 0x30da64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da60) {
            ctx->pc = 0x30DA90u;
            goto label_30da90;
        }
    }
    ctx->pc = 0x30DA68u;
label_30da68:
    // 0x30da68: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30DA68u;
    {
        const bool branch_taken_0x30da68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA68u;
        // 0x30da6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da68) {
            ctx->pc = 0x30DA90u;
            goto label_30da90;
        }
    }
    ctx->pc = 0x30DA70u;
    // 0x30da70: 0xc0c44a6  jal         func_311298
    ctx->pc = 0x30DA70u;
    SET_GPR_U32(ctx, 31, 0x30DA78u);
    ctx->pc = 0x30DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA70u;
    // 0x30da74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x311298u, 0x30DA70u, 0x30DA78u)) {
        return;
    }
    ctx->pc = 0x30DA78u;
label_30da78:
    // 0x30da78: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DA78u;
    {
        const bool branch_taken_0x30da78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA78u;
        // 0x30da7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da78) {
            ctx->pc = 0x30DA90u;
            goto label_30da90;
        }
    }
    ctx->pc = 0x30DA80u;
    // 0x30da80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30da84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30da88: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30da88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30da8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30da90:
    // 0x30da90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30da90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30da94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30da94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30da98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30da98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30da9c: 0x3e00008  jr          $ra
    ctx->pc = 0x30DA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA9Cu;
        // 0x30daa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DAA4u;
    // 0x30daa4: 0x0  nop
    ctx->pc = 0x30daa4u;
    // NOP
    ctx->pc = 0x30daa8u;
}

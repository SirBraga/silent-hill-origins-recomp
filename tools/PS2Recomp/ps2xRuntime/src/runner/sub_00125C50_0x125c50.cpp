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

// Function: sub_00125C50
// Address: 0x125c50 - 0x125ce0
void sub_00125C50_0x125c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125C50_0x125c50");
#endif

    switch (ctx->pc) {
        case 0x125c78u: goto label_125c78;
        case 0x125c90u: goto label_125c90;
        case 0x125cbcu: goto label_125cbc;
        default: break;
    }

    ctx->pc = 0x125c50u;

    // 0x125c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x125c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x125c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x125c5c: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x125c5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x125c60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x125c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x125c68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x125c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x125c70: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x125C70u;
    SET_GPR_U32(ctx, 31, 0x125C78u);
    ctx->pc = 0x125C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C70u;
    // 0x125c74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x125C70u, 0x125C78u)) {
        return;
    }
    ctx->pc = 0x125C78u;
label_125c78:
    // 0x125c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c7c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x125C7Cu;
    {
        const bool branch_taken_0x125c7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C7Cu;
        // 0x125c80: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c7c) {
            ctx->pc = 0x125CC4u;
            goto label_125cc4;
        }
    }
    ctx->pc = 0x125C84u;
    // 0x125c84: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x125c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125c88: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x125C88u;
    SET_GPR_U32(ctx, 31, 0x125C90u);
    ctx->pc = 0x125C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C88u;
    // 0x125c8c: 0x2484be38  addiu       $a0, $a0, -0x41C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x125C88u, 0x125C90u)) {
        return;
    }
    ctx->pc = 0x125C90u;
label_125c90:
    // 0x125c90: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x125C90u;
    {
        const bool branch_taken_0x125c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C90u;
        // 0x125c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c90) {
            ctx->pc = 0x125CC8u;
            goto label_125cc8;
        }
    }
    ctx->pc = 0x125C98u;
    // 0x125c98: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x125c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x125c9c: 0x3c024d49  lui         $v0, 0x4D49
    ctx->pc = 0x125c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19785 << 16));
    // 0x125ca0: 0x34424e41  ori         $v0, $v0, 0x4E41
    ctx->pc = 0x125ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20033);
    // 0x125ca4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x125ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125ca8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x125CA8u;
    {
        const bool branch_taken_0x125ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x125CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CA8u;
        // 0x125cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ca8) {
            ctx->pc = 0x125CC8u;
            goto label_125cc8;
        }
    }
    ctx->pc = 0x125CB0u;
    // 0x125cb0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x125cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x125cb4: 0xc067cda  jal         func_19F368
    ctx->pc = 0x125CB4u;
    SET_GPR_U32(ctx, 31, 0x125CBCu);
    ctx->pc = 0x125CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CB4u;
    // 0x125cb8: 0x26240320  addiu       $a0, $s1, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F368u, 0x125CB4u, 0x125CBCu)) {
        return;
    }
    ctx->pc = 0x125CBCu;
label_125cbc:
    // 0x125cbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x125CBCu;
    {
        const bool branch_taken_0x125cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CBCu;
        // 0x125cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cbc) {
            ctx->pc = 0x125CC8u;
            goto label_125cc8;
        }
    }
    ctx->pc = 0x125CC4u;
label_125cc4:
    // 0x125cc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125cc8:
    // 0x125cc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x125cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125ccc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x125cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125cd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x125cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x125CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CD4u;
        // 0x125cd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125CDCu;
    // 0x125cdc: 0x0  nop
    ctx->pc = 0x125cdcu;
    // NOP
    ctx->pc = 0x125ce0u;
}

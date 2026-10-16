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

// Function: sub_0030DC38
// Address: 0x30dc38 - 0x30dcd0
void sub_0030DC38_0x30dc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DC38_0x30dc38");
#endif

    switch (ctx->pc) {
        case 0x30dc60u: goto label_30dc60;
        case 0x30dc88u: goto label_30dc88;
        case 0x30dca0u: goto label_30dca0;
        default: break;
    }

    ctx->pc = 0x30dc38u;

    // 0x30dc38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30dc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30dc3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30dc40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30dc44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30dc44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dc48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30dc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30dc4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30dc4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dc50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30dc54: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30dc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30dc58: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30DC58u;
    SET_GPR_U32(ctx, 31, 0x30DC60u);
    ctx->pc = 0x30DC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DC58u;
    // 0x30dc5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30DC58u, 0x30DC60u)) {
        return;
    }
    ctx->pc = 0x30DC60u;
label_30dc60:
    // 0x30dc60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30DC60u;
    {
        const bool branch_taken_0x30dc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC60u;
        // 0x30dc64: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc60) {
            ctx->pc = 0x30DC90u;
            goto label_30dc90;
        }
    }
    ctx->pc = 0x30DC68u;
    // 0x30dc68: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x30dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x30dc6c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30dc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30dc70: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DC70u;
    {
        const bool branch_taken_0x30dc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC70u;
        // 0x30dc74: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc70) {
            ctx->pc = 0x30DC90u;
            goto label_30dc90;
        }
    }
    ctx->pc = 0x30DC78u;
    // 0x30dc78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DC78u;
    {
        const bool branch_taken_0x30dc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC78u;
        // 0x30dc7c: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc78) {
            ctx->pc = 0x30DC90u;
            goto label_30dc90;
        }
    }
    ctx->pc = 0x30DC80u;
    // 0x30dc80: 0xc0c2af6  jal         func_30ABD8
    ctx->pc = 0x30DC80u;
    SET_GPR_U32(ctx, 31, 0x30DC88u);
    ctx->pc = 0x30DC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DC80u;
    // 0x30dc84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30ABD8u, 0x30DC80u, 0x30DC88u)) {
        return;
    }
    ctx->pc = 0x30DC88u;
label_30dc88:
    // 0x30dc88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DC88u;
    {
        const bool branch_taken_0x30dc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC88u;
        // 0x30dc8c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc88) {
            ctx->pc = 0x30DC98u;
            goto label_30dc98;
        }
    }
    ctx->pc = 0x30DC90u;
label_30dc90:
    // 0x30dc90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30DC90u;
    {
        const bool branch_taken_0x30dc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC90u;
        // 0x30dc94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc90) {
            ctx->pc = 0x30DCB8u;
            goto label_30dcb8;
        }
    }
    ctx->pc = 0x30DC98u;
label_30dc98:
    // 0x30dc98: 0xc0c3dfa  jal         func_30F7E8
    ctx->pc = 0x30DC98u;
    SET_GPR_U32(ctx, 31, 0x30DCA0u);
    ctx->pc = 0x30DC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DC98u;
    // 0x30dc9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F7E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30F7E8u, 0x30DC98u, 0x30DCA0u)) {
        return;
    }
    ctx->pc = 0x30DCA0u;
label_30dca0:
    // 0x30dca0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DCA0u;
    {
        const bool branch_taken_0x30dca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DCA0u;
        // 0x30dca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dca0) {
            ctx->pc = 0x30DCB8u;
            goto label_30dcb8;
        }
    }
    ctx->pc = 0x30DCA8u;
    // 0x30dca8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30dcac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30dcb0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30dcb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30dcb8:
    // 0x30dcb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30dcb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30dcbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30dcbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30dcc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30dcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30dcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x30DCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DCC4u;
        // 0x30dcc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DCCCu;
    // 0x30dccc: 0x0  nop
    ctx->pc = 0x30dcccu;
    // NOP
    ctx->pc = 0x30dcd0u;
}

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

// Function: sub_0017DC58
// Address: 0x17dc58 - 0x17dcd0
void sub_0017DC58_0x17dc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DC58_0x17dc58");
#endif

    switch (ctx->pc) {
        case 0x17dc80u: goto label_17dc80;
        case 0x17dca4u: goto label_17dca4;
        case 0x17dcbcu: goto label_17dcbc;
        default: break;
    }

    ctx->pc = 0x17dc58u;

    // 0x17dc58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17dc5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17dc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17dc60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17dc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17dc64: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17DC64u;
    {
        const bool branch_taken_0x17dc64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC64u;
        // 0x17dc68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc64) {
            ctx->pc = 0x17DCBCu;
            goto label_17dcbc;
        }
    }
    ctx->pc = 0x17DC6Cu;
    // 0x17dc6c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x17DC6Cu;
    {
        const bool branch_taken_0x17dc6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC6Cu;
        // 0x17dc70: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc6c) {
            ctx->pc = 0x17DCACu;
            goto label_17dcac;
        }
    }
    ctx->pc = 0x17DC74u;
    // 0x17dc74: 0x26107668  addiu       $s0, $s0, 0x7668
    ctx->pc = 0x17dc74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30312));
    // 0x17dc78: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x17DC78u;
    SET_GPR_U32(ctx, 31, 0x17DC80u);
    ctx->pc = 0x17DC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC78u;
    // 0x17dc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x17DC78u, 0x17DC80u)) {
        return;
    }
    ctx->pc = 0x17DC80u;
label_17dc80:
    // 0x17dc80: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x17dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x17dc84: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17dc88: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17dc88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17dc8c: 0xac62f978  sw          $v0, -0x688($v1)
    ctx->pc = 0x17dc8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF978u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF978u, _value); } while (0);
    // 0x17dc90: 0x2484f980  addiu       $a0, $a0, -0x680
    ctx->pc = 0x17dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965632));
    // 0x17dc94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17dc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc98: 0x24c6dcd0  addiu       $a2, $a2, -0x2330
    ctx->pc = 0x17dc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958288));
    // 0x17dc9c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x17DC9Cu;
    SET_GPR_U32(ctx, 31, 0x17DCA4u);
    ctx->pc = 0x17DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC9Cu;
    // 0x17dca0: 0x2407004c  addiu       $a3, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x17DC9Cu, 0x17DCA4u)) {
        return;
    }
    ctx->pc = 0x17DCA4u;
label_17dca4:
    // 0x17dca4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17DCA4u;
    {
        const bool branch_taken_0x17dca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCA4u;
        // 0x17dca8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dca4) {
            ctx->pc = 0x17DCC0u;
            goto label_17dcc0;
        }
    }
    ctx->pc = 0x17DCACu;
label_17dcac:
    // 0x17dcac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17dcacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17dcb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17dcb4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x17DCB4u;
    SET_GPR_U32(ctx, 31, 0x17DCBCu);
    ctx->pc = 0x17DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DCB4u;
    // 0x17dcb8: 0x2484f980  addiu       $a0, $a0, -0x680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x17DCB4u, 0x17DCBCu)) {
        return;
    }
    ctx->pc = 0x17DCBCu;
label_17dcbc:
    // 0x17dcbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17dcbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17dcc0:
    // 0x17dcc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17dcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x17DCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCC4u;
        // 0x17dcc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DCCCu;
    // 0x17dccc: 0x0  nop
    ctx->pc = 0x17dcccu;
    // NOP
    ctx->pc = 0x17dcd0u;
}

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

// Function: sub_0016CE40
// Address: 0x16ce40 - 0x16cec0
void sub_0016CE40_0x16ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CE40_0x16ce40");
#endif

    switch (ctx->pc) {
        case 0x16ce68u: goto label_16ce68;
        case 0x16ce8cu: goto label_16ce8c;
        case 0x16cea4u: goto label_16cea4;
        default: break;
    }

    ctx->pc = 0x16ce40u;

    // 0x16ce40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ce44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16ce44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16ce48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16ce4c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16CE4Cu;
    {
        const bool branch_taken_0x16ce4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE4Cu;
        // 0x16ce50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce4c) {
            ctx->pc = 0x16CEA4u;
            goto label_16cea4;
        }
    }
    ctx->pc = 0x16CE54u;
    // 0x16ce54: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16CE54u;
    {
        const bool branch_taken_0x16ce54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE54u;
        // 0x16ce58: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce54) {
            ctx->pc = 0x16CE94u;
            goto label_16ce94;
        }
    }
    ctx->pc = 0x16CE5Cu;
    // 0x16ce5c: 0x26104c40  addiu       $s0, $s0, 0x4C40
    ctx->pc = 0x16ce5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19520));
    // 0x16ce60: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16CE60u;
    SET_GPR_U32(ctx, 31, 0x16CE68u);
    ctx->pc = 0x16CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE60u;
    // 0x16ce64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16CE60u, 0x16CE68u)) {
        return;
    }
    ctx->pc = 0x16CE68u;
label_16ce68:
    // 0x16ce68: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16ce6c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16ce70: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16ce70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16ce74: 0xac62f6a0  sw          $v0, -0x960($v1)
    ctx->pc = 0x16ce74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF6A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF6A0u, _value); } while (0);
    // 0x16ce78: 0x2484f6a8  addiu       $a0, $a0, -0x958
    ctx->pc = 0x16ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964904));
    // 0x16ce7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ce7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce80: 0x24c6cec0  addiu       $a2, $a2, -0x3140
    ctx->pc = 0x16ce80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954688));
    // 0x16ce84: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16CE84u;
    SET_GPR_U32(ctx, 31, 0x16CE8Cu);
    ctx->pc = 0x16CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE84u;
    // 0x16ce88: 0x240700dc  addiu       $a3, $zero, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16CE84u, 0x16CE8Cu)) {
        return;
    }
    ctx->pc = 0x16CE8Cu;
label_16ce8c:
    // 0x16ce8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16CE8Cu;
    {
        const bool branch_taken_0x16ce8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE8Cu;
        // 0x16ce90: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce8c) {
            ctx->pc = 0x16CEA8u;
            goto label_16cea8;
        }
    }
    ctx->pc = 0x16CE94u;
label_16ce94:
    // 0x16ce94: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16ce98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16ce98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ce9c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16CE9Cu;
    SET_GPR_U32(ctx, 31, 0x16CEA4u);
    ctx->pc = 0x16CEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE9Cu;
    // 0x16cea0: 0x2484f6a8  addiu       $a0, $a0, -0x958 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16CE9Cu, 0x16CEA4u)) {
        return;
    }
    ctx->pc = 0x16CEA4u;
label_16cea4:
    // 0x16cea4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16cea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16cea8:
    // 0x16cea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16cea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ceac: 0x3e00008  jr          $ra
    ctx->pc = 0x16CEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEACu;
        // 0x16ceb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CEB4u;
    // 0x16ceb4: 0x0  nop
    ctx->pc = 0x16ceb4u;
    // NOP
    // 0x16ceb8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x16ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16cebc: 0x0  nop
    ctx->pc = 0x16cebcu;
    // NOP
    ctx->pc = 0x16cec0u;
}

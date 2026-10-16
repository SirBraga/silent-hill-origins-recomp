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

// Function: sub_00149B48
// Address: 0x149b48 - 0x149bc0
void sub_00149B48_0x149b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149B48_0x149b48");
#endif

    switch (ctx->pc) {
        case 0x149b70u: goto label_149b70;
        case 0x149b94u: goto label_149b94;
        case 0x149bacu: goto label_149bac;
        default: break;
    }

    ctx->pc = 0x149b48u;

    // 0x149b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149b4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x149b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x149b50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149b54: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x149B54u;
    {
        const bool branch_taken_0x149b54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x149B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B54u;
        // 0x149b58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b54) {
            ctx->pc = 0x149BACu;
            goto label_149bac;
        }
    }
    ctx->pc = 0x149B5Cu;
    // 0x149b5c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x149B5Cu;
    {
        const bool branch_taken_0x149b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x149B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B5Cu;
        // 0x149b60: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b5c) {
            ctx->pc = 0x149B9Cu;
            goto label_149b9c;
        }
    }
    ctx->pc = 0x149B64u;
    // 0x149b64: 0x261019d0  addiu       $s0, $s0, 0x19D0
    ctx->pc = 0x149b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6608));
    // 0x149b68: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x149B68u;
    SET_GPR_U32(ctx, 31, 0x149B70u);
    ctx->pc = 0x149B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B68u;
    // 0x149b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x149B68u, 0x149B70u)) {
        return;
    }
    ctx->pc = 0x149B70u;
label_149b70:
    // 0x149b70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149b74: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x149b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x149b78: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x149b78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x149b7c: 0xac62ee90  sw          $v0, -0x1170($v1)
    ctx->pc = 0x149b7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEE90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEE90u, _value); } while (0);
    // 0x149b80: 0x2484ee98  addiu       $a0, $a0, -0x1168
    ctx->pc = 0x149b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962840));
    // 0x149b84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b88: 0x24c69bc0  addiu       $a2, $a2, -0x6440
    ctx->pc = 0x149b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941632));
    // 0x149b8c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x149B8Cu;
    SET_GPR_U32(ctx, 31, 0x149B94u);
    ctx->pc = 0x149B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B8Cu;
    // 0x149b90: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x149B8Cu, 0x149B94u)) {
        return;
    }
    ctx->pc = 0x149B94u;
label_149b94:
    // 0x149b94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x149B94u;
    {
        const bool branch_taken_0x149b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B94u;
        // 0x149b98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b94) {
            ctx->pc = 0x149BB0u;
            goto label_149bb0;
        }
    }
    ctx->pc = 0x149B9Cu;
label_149b9c:
    // 0x149b9c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x149b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x149ba0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x149ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149ba4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x149BA4u;
    SET_GPR_U32(ctx, 31, 0x149BACu);
    ctx->pc = 0x149BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149BA4u;
    // 0x149ba8: 0x2484ee98  addiu       $a0, $a0, -0x1168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x149BA4u, 0x149BACu)) {
        return;
    }
    ctx->pc = 0x149BACu;
label_149bac:
    // 0x149bac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_149bb0:
    // 0x149bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x149BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BB4u;
        // 0x149bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149BBCu;
    // 0x149bbc: 0x0  nop
    ctx->pc = 0x149bbcu;
    // NOP
    ctx->pc = 0x149bc0u;
}

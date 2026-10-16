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

// Function: sub_00175F60
// Address: 0x175f60 - 0x175fd8
void sub_00175F60_0x175f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175F60_0x175f60");
#endif

    switch (ctx->pc) {
        case 0x175f88u: goto label_175f88;
        case 0x175facu: goto label_175fac;
        case 0x175fc4u: goto label_175fc4;
        default: break;
    }

    ctx->pc = 0x175f60u;

    // 0x175f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175f64: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x175f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x175f68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175f6c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x175F6Cu;
    {
        const bool branch_taken_0x175f6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x175F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F6Cu;
        // 0x175f70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f6c) {
            ctx->pc = 0x175FC4u;
            goto label_175fc4;
        }
    }
    ctx->pc = 0x175F74u;
    // 0x175f74: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x175F74u;
    {
        const bool branch_taken_0x175f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F74u;
        // 0x175f78: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f74) {
            ctx->pc = 0x175FB4u;
            goto label_175fb4;
        }
    }
    ctx->pc = 0x175F7Cu;
    // 0x175f7c: 0x26106338  addiu       $s0, $s0, 0x6338
    ctx->pc = 0x175f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25400));
    // 0x175f80: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x175F80u;
    SET_GPR_U32(ctx, 31, 0x175F88u);
    ctx->pc = 0x175F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175F80u;
    // 0x175f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x175F80u, 0x175F88u)) {
        return;
    }
    ctx->pc = 0x175F88u;
label_175f88:
    // 0x175f88: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x175f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x175f8c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x175f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x175f90: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x175f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x175f94: 0xac62f830  sw          $v0, -0x7D0($v1)
    ctx->pc = 0x175f94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF830u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF830u, _value); } while (0);
    // 0x175f98: 0x2484f838  addiu       $a0, $a0, -0x7C8
    ctx->pc = 0x175f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965304));
    // 0x175f9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fa0: 0x24c65fe8  addiu       $a2, $a2, 0x5FE8
    ctx->pc = 0x175fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24552));
    // 0x175fa4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x175FA4u;
    SET_GPR_U32(ctx, 31, 0x175FACu);
    ctx->pc = 0x175FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175FA4u;
    // 0x175fa8: 0x2407005c  addiu       $a3, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x175FA4u, 0x175FACu)) {
        return;
    }
    ctx->pc = 0x175FACu;
label_175fac:
    // 0x175fac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x175FACu;
    {
        const bool branch_taken_0x175fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FACu;
        // 0x175fb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fac) {
            ctx->pc = 0x175FC8u;
            goto label_175fc8;
        }
    }
    ctx->pc = 0x175FB4u;
label_175fb4:
    // 0x175fb4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x175fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x175fb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x175fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175fbc: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x175FBCu;
    SET_GPR_U32(ctx, 31, 0x175FC4u);
    ctx->pc = 0x175FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175FBCu;
    // 0x175fc0: 0x2484f838  addiu       $a0, $a0, -0x7C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x175FBCu, 0x175FC4u)) {
        return;
    }
    ctx->pc = 0x175FC4u;
label_175fc4:
    // 0x175fc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175fc8:
    // 0x175fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x175FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FCCu;
        // 0x175fd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175FD4u;
    // 0x175fd4: 0x0  nop
    ctx->pc = 0x175fd4u;
    // NOP
    ctx->pc = 0x175fd8u;
}

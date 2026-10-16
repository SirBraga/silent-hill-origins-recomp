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

// Function: sub_00148E48
// Address: 0x148e48 - 0x148ec8
void sub_00148E48_0x148e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148E48_0x148e48");
#endif

    switch (ctx->pc) {
        case 0x148e70u: goto label_148e70;
        case 0x148e94u: goto label_148e94;
        case 0x148eacu: goto label_148eac;
        default: break;
    }

    ctx->pc = 0x148e48u;

    // 0x148e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148e4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x148e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x148e50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x148e54: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x148E54u;
    {
        const bool branch_taken_0x148e54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x148E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E54u;
        // 0x148e58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e54) {
            ctx->pc = 0x148EACu;
            goto label_148eac;
        }
    }
    ctx->pc = 0x148E5Cu;
    // 0x148e5c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x148E5Cu;
    {
        const bool branch_taken_0x148e5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E5Cu;
        // 0x148e60: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e5c) {
            ctx->pc = 0x148E9Cu;
            goto label_148e9c;
        }
    }
    ctx->pc = 0x148E64u;
    // 0x148e64: 0x26101830  addiu       $s0, $s0, 0x1830
    ctx->pc = 0x148e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6192));
    // 0x148e68: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x148E68u;
    SET_GPR_U32(ctx, 31, 0x148E70u);
    ctx->pc = 0x148E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E68u;
    // 0x148e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x148E68u, 0x148E70u)) {
        return;
    }
    ctx->pc = 0x148E70u;
label_148e70:
    // 0x148e70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x148e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x148e74: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x148e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x148e78: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x148e78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x148e7c: 0xac62ee78  sw          $v0, -0x1188($v1)
    ctx->pc = 0x148e7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEE78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEE78u, _value); } while (0);
    // 0x148e80: 0x2484ee80  addiu       $a0, $a0, -0x1180
    ctx->pc = 0x148e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962816));
    // 0x148e84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e88: 0x24c68ec8  addiu       $a2, $a2, -0x7138
    ctx->pc = 0x148e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938312));
    // 0x148e8c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x148E8Cu;
    SET_GPR_U32(ctx, 31, 0x148E94u);
    ctx->pc = 0x148E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E8Cu;
    // 0x148e90: 0x24070190  addiu       $a3, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x148E8Cu, 0x148E94u)) {
        return;
    }
    ctx->pc = 0x148E94u;
label_148e94:
    // 0x148e94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x148E94u;
    {
        const bool branch_taken_0x148e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E94u;
        // 0x148e98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e94) {
            ctx->pc = 0x148EB0u;
            goto label_148eb0;
        }
    }
    ctx->pc = 0x148E9Cu;
label_148e9c:
    // 0x148e9c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x148e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x148ea0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x148ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x148ea4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x148EA4u;
    SET_GPR_U32(ctx, 31, 0x148EACu);
    ctx->pc = 0x148EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148EA4u;
    // 0x148ea8: 0x2484ee80  addiu       $a0, $a0, -0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x148EA4u, 0x148EACu)) {
        return;
    }
    ctx->pc = 0x148EACu;
label_148eac:
    // 0x148eac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x148eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_148eb0:
    // 0x148eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x148EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EB4u;
        // 0x148eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148EBCu;
    // 0x148ebc: 0x0  nop
    ctx->pc = 0x148ebcu;
    // NOP
    // 0x148ec0: 0x0  nop
    ctx->pc = 0x148ec0u;
    // NOP
    // 0x148ec4: 0x0  nop
    ctx->pc = 0x148ec4u;
    // NOP
    ctx->pc = 0x148ec8u;
}

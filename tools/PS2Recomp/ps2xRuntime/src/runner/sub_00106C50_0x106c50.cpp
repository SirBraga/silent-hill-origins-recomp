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

// Function: sub_00106C50
// Address: 0x106c50 - 0x106cc8
void sub_00106C50_0x106c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106C50_0x106c50");
#endif

    switch (ctx->pc) {
        case 0x106c78u: goto label_106c78;
        case 0x106c9cu: goto label_106c9c;
        case 0x106cb4u: goto label_106cb4;
        default: break;
    }

    ctx->pc = 0x106c50u;

    // 0x106c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106c54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x106c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x106c58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x106c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x106c5c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x106C5Cu;
    {
        const bool branch_taken_0x106c5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x106C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C5Cu;
        // 0x106c60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c5c) {
            ctx->pc = 0x106CB4u;
            goto label_106cb4;
        }
    }
    ctx->pc = 0x106C64u;
    // 0x106c64: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x106C64u;
    {
        const bool branch_taken_0x106c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C64u;
        // 0x106c68: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c64) {
            ctx->pc = 0x106CA4u;
            goto label_106ca4;
        }
    }
    ctx->pc = 0x106C6Cu;
    // 0x106c6c: 0x261099a0  addiu       $s0, $s0, -0x6660
    ctx->pc = 0x106c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941088));
    // 0x106c70: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x106C70u;
    SET_GPR_U32(ctx, 31, 0x106C78u);
    ctx->pc = 0x106C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C70u;
    // 0x106c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x106C70u, 0x106C78u)) {
        return;
    }
    ctx->pc = 0x106C78u;
label_106c78:
    // 0x106c78: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x106c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x106c7c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x106c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x106c80: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x106c80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x106c84: 0xac624220  sw          $v0, 0x4220($v1)
    ctx->pc = 0x106c84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4220u, _value); } while (0);
    // 0x106c88: 0x24844228  addiu       $a0, $a0, 0x4228
    ctx->pc = 0x106c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16936));
    // 0x106c8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c90: 0x24c66cc8  addiu       $a2, $a2, 0x6CC8
    ctx->pc = 0x106c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27848));
    // 0x106c94: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x106C94u;
    SET_GPR_U32(ctx, 31, 0x106C9Cu);
    ctx->pc = 0x106C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C94u;
    // 0x106c98: 0x24070058  addiu       $a3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x106C94u, 0x106C9Cu)) {
        return;
    }
    ctx->pc = 0x106C9Cu;
label_106c9c:
    // 0x106c9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106C9Cu;
    {
        const bool branch_taken_0x106c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C9Cu;
        // 0x106ca0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c9c) {
            ctx->pc = 0x106CB8u;
            goto label_106cb8;
        }
    }
    ctx->pc = 0x106CA4u;
label_106ca4:
    // 0x106ca4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x106ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x106ca8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x106ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106cac: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x106CACu;
    SET_GPR_U32(ctx, 31, 0x106CB4u);
    ctx->pc = 0x106CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106CACu;
    // 0x106cb0: 0x24844228  addiu       $a0, $a0, 0x4228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x106CACu, 0x106CB4u)) {
        return;
    }
    ctx->pc = 0x106CB4u;
label_106cb4:
    // 0x106cb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x106cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_106cb8:
    // 0x106cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x106CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CBCu;
        // 0x106cc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106CC4u;
    // 0x106cc4: 0x0  nop
    ctx->pc = 0x106cc4u;
    // NOP
    ctx->pc = 0x106cc8u;
}

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

// Function: sub_0010B8F0
// Address: 0x10b8f0 - 0x10b968
void sub_0010B8F0_0x10b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B8F0_0x10b8f0");
#endif

    switch (ctx->pc) {
        case 0x10b918u: goto label_10b918;
        case 0x10b93cu: goto label_10b93c;
        case 0x10b954u: goto label_10b954;
        default: break;
    }

    ctx->pc = 0x10b8f0u;

    // 0x10b8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b8f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10b8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10b8f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10b8fc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10B8FCu;
    {
        const bool branch_taken_0x10b8fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8FCu;
        // 0x10b900: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8fc) {
            ctx->pc = 0x10B954u;
            goto label_10b954;
        }
    }
    ctx->pc = 0x10B904u;
    // 0x10b904: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x10B904u;
    {
        const bool branch_taken_0x10b904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B904u;
        // 0x10b908: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b904) {
            ctx->pc = 0x10B944u;
            goto label_10b944;
        }
    }
    ctx->pc = 0x10B90Cu;
    // 0x10b90c: 0x26109e30  addiu       $s0, $s0, -0x61D0
    ctx->pc = 0x10b90cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942256));
    // 0x10b910: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x10B910u;
    SET_GPR_U32(ctx, 31, 0x10B918u);
    ctx->pc = 0x10B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B910u;
    // 0x10b914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x10B910u, 0x10B918u)) {
        return;
    }
    ctx->pc = 0x10B918u;
label_10b918:
    // 0x10b918: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x10b918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x10b91c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10b920: 0x3c060011  lui         $a2, 0x11
    ctx->pc = 0x10b920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17 << 16));
    // 0x10b924: 0xac624300  sw          $v0, 0x4300($v1)
    ctx->pc = 0x10b924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4300u, _value); } while (0);
    // 0x10b928: 0x24844308  addiu       $a0, $a0, 0x4308
    ctx->pc = 0x10b928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17160));
    // 0x10b92c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b930: 0x24c6b968  addiu       $a2, $a2, -0x4698
    ctx->pc = 0x10b930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949224));
    // 0x10b934: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x10B934u;
    SET_GPR_U32(ctx, 31, 0x10B93Cu);
    ctx->pc = 0x10B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B934u;
    // 0x10b938: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x10B934u, 0x10B93Cu)) {
        return;
    }
    ctx->pc = 0x10B93Cu;
label_10b93c:
    // 0x10b93c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10B93Cu;
    {
        const bool branch_taken_0x10b93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B93Cu;
        // 0x10b940: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b93c) {
            ctx->pc = 0x10B958u;
            goto label_10b958;
        }
    }
    ctx->pc = 0x10B944u;
label_10b944:
    // 0x10b944: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10b944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10b948: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10b948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b94c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x10B94Cu;
    SET_GPR_U32(ctx, 31, 0x10B954u);
    ctx->pc = 0x10B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B94Cu;
    // 0x10b950: 0x24844308  addiu       $a0, $a0, 0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x10B94Cu, 0x10B954u)) {
        return;
    }
    ctx->pc = 0x10B954u;
label_10b954:
    // 0x10b954: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10b954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10b958:
    // 0x10b958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b95c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B95Cu;
        // 0x10b960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B964u;
    // 0x10b964: 0x0  nop
    ctx->pc = 0x10b964u;
    // NOP
    ctx->pc = 0x10b968u;
}

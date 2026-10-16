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

// Function: sub_0016B900
// Address: 0x16b900 - 0x16b978
void sub_0016B900_0x16b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B900_0x16b900");
#endif

    switch (ctx->pc) {
        case 0x16b928u: goto label_16b928;
        case 0x16b94cu: goto label_16b94c;
        case 0x16b964u: goto label_16b964;
        default: break;
    }

    ctx->pc = 0x16b900u;

    // 0x16b900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b904: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16b904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16b908: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b90c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16B90Cu;
    {
        const bool branch_taken_0x16b90c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B90Cu;
        // 0x16b910: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b90c) {
            ctx->pc = 0x16B964u;
            goto label_16b964;
        }
    }
    ctx->pc = 0x16B914u;
    // 0x16b914: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16B914u;
    {
        const bool branch_taken_0x16b914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B914u;
        // 0x16b918: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b914) {
            ctx->pc = 0x16B954u;
            goto label_16b954;
        }
    }
    ctx->pc = 0x16B91Cu;
    // 0x16b91c: 0x26104868  addiu       $s0, $s0, 0x4868
    ctx->pc = 0x16b91cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18536));
    // 0x16b920: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16B920u;
    SET_GPR_U32(ctx, 31, 0x16B928u);
    ctx->pc = 0x16B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B920u;
    // 0x16b924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16B920u, 0x16B928u)) {
        return;
    }
    ctx->pc = 0x16B928u;
label_16b928:
    // 0x16b928: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16b928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16b92c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16b92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16b930: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16b930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16b934: 0xac62f678  sw          $v0, -0x988($v1)
    ctx->pc = 0x16b934u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF678u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF678u, _value); } while (0);
    // 0x16b938: 0x2484f680  addiu       $a0, $a0, -0x980
    ctx->pc = 0x16b938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964864));
    // 0x16b93c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b940: 0x24c6b978  addiu       $a2, $a2, -0x4688
    ctx->pc = 0x16b940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949240));
    // 0x16b944: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16B944u;
    SET_GPR_U32(ctx, 31, 0x16B94Cu);
    ctx->pc = 0x16B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B944u;
    // 0x16b948: 0x24070090  addiu       $a3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16B944u, 0x16B94Cu)) {
        return;
    }
    ctx->pc = 0x16B94Cu;
label_16b94c:
    // 0x16b94c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16B94Cu;
    {
        const bool branch_taken_0x16b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B94Cu;
        // 0x16b950: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b94c) {
            ctx->pc = 0x16B968u;
            goto label_16b968;
        }
    }
    ctx->pc = 0x16B954u;
label_16b954:
    // 0x16b954: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16b954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16b958: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16b958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b95c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16B95Cu;
    SET_GPR_U32(ctx, 31, 0x16B964u);
    ctx->pc = 0x16B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B95Cu;
    // 0x16b960: 0x2484f680  addiu       $a0, $a0, -0x980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16B95Cu, 0x16B964u)) {
        return;
    }
    ctx->pc = 0x16B964u;
label_16b964:
    // 0x16b964: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16b964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16b968:
    // 0x16b968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b96c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B96Cu;
        // 0x16b970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B974u;
    // 0x16b974: 0x0  nop
    ctx->pc = 0x16b974u;
    // NOP
    ctx->pc = 0x16b978u;
}

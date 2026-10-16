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

// Function: sub_00168170
// Address: 0x168170 - 0x1681e8
void sub_00168170_0x168170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168170_0x168170");
#endif

    switch (ctx->pc) {
        case 0x168198u: goto label_168198;
        case 0x1681bcu: goto label_1681bc;
        case 0x1681d4u: goto label_1681d4;
        default: break;
    }

    ctx->pc = 0x168170u;

    // 0x168170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168174: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x168174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x168178: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x168178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16817c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16817Cu;
    {
        const bool branch_taken_0x16817c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x168180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16817Cu;
        // 0x168180: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16817c) {
            ctx->pc = 0x1681D4u;
            goto label_1681d4;
        }
    }
    ctx->pc = 0x168184u;
    // 0x168184: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x168184u;
    {
        const bool branch_taken_0x168184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168184u;
        // 0x168188: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168184) {
            ctx->pc = 0x1681C4u;
            goto label_1681c4;
        }
    }
    ctx->pc = 0x16818Cu;
    // 0x16818c: 0x26104050  addiu       $s0, $s0, 0x4050
    ctx->pc = 0x16818cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16464));
    // 0x168190: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x168190u;
    SET_GPR_U32(ctx, 31, 0x168198u);
    ctx->pc = 0x168194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168190u;
    // 0x168194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x168190u, 0x168198u)) {
        return;
    }
    ctx->pc = 0x168198u;
label_168198:
    // 0x168198: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x168198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16819c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16819cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1681a0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1681a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1681a4: 0xac62f5f8  sw          $v0, -0xA08($v1)
    ctx->pc = 0x1681a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF5F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF5F8u, _value); } while (0);
    // 0x1681a8: 0x2484f600  addiu       $a0, $a0, -0xA00
    ctx->pc = 0x1681a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964736));
    // 0x1681ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1681acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681b0: 0x24c681e8  addiu       $a2, $a2, -0x7E18
    ctx->pc = 0x1681b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935016));
    // 0x1681b4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1681B4u;
    SET_GPR_U32(ctx, 31, 0x1681BCu);
    ctx->pc = 0x1681B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1681B4u;
    // 0x1681b8: 0x24070158  addiu       $a3, $zero, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1681B4u, 0x1681BCu)) {
        return;
    }
    ctx->pc = 0x1681BCu;
label_1681bc:
    // 0x1681bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1681BCu;
    {
        const bool branch_taken_0x1681bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1681C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681BCu;
        // 0x1681c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681bc) {
            ctx->pc = 0x1681D8u;
            goto label_1681d8;
        }
    }
    ctx->pc = 0x1681C4u;
label_1681c4:
    // 0x1681c4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1681c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1681c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1681c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1681cc: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1681CCu;
    SET_GPR_U32(ctx, 31, 0x1681D4u);
    ctx->pc = 0x1681D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1681CCu;
    // 0x1681d0: 0x2484f600  addiu       $a0, $a0, -0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1681CCu, 0x1681D4u)) {
        return;
    }
    ctx->pc = 0x1681D4u;
label_1681d4:
    // 0x1681d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1681d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1681d8:
    // 0x1681d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1681d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1681dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1681DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1681E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681DCu;
        // 0x1681e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1681DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1681E4u;
    // 0x1681e4: 0x0  nop
    ctx->pc = 0x1681e4u;
    // NOP
    ctx->pc = 0x1681e8u;
}

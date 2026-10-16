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

// Function: sub_0017C5C0
// Address: 0x17c5c0 - 0x17c638
void sub_0017C5C0_0x17c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C5C0_0x17c5c0");
#endif

    switch (ctx->pc) {
        case 0x17c5e8u: goto label_17c5e8;
        case 0x17c60cu: goto label_17c60c;
        case 0x17c624u: goto label_17c624;
        default: break;
    }

    ctx->pc = 0x17c5c0u;

    // 0x17c5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c5c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17c5c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c5cc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17C5CCu;
    {
        const bool branch_taken_0x17c5cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5CCu;
        // 0x17c5d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5cc) {
            ctx->pc = 0x17C624u;
            goto label_17c624;
        }
    }
    ctx->pc = 0x17C5D4u;
    // 0x17c5d4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x17C5D4u;
    {
        const bool branch_taken_0x17c5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5D4u;
        // 0x17c5d8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5d4) {
            ctx->pc = 0x17C614u;
            goto label_17c614;
        }
    }
    ctx->pc = 0x17C5DCu;
    // 0x17c5dc: 0x26107048  addiu       $s0, $s0, 0x7048
    ctx->pc = 0x17c5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28744));
    // 0x17c5e0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x17C5E0u;
    SET_GPR_U32(ctx, 31, 0x17C5E8u);
    ctx->pc = 0x17C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C5E0u;
    // 0x17c5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x17C5E0u, 0x17C5E8u)) {
        return;
    }
    ctx->pc = 0x17C5E8u;
label_17c5e8:
    // 0x17c5e8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x17c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x17c5ec: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17c5f0: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17c5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17c5f4: 0xac62f8d8  sw          $v0, -0x728($v1)
    ctx->pc = 0x17c5f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF8D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF8D8u, _value); } while (0);
    // 0x17c5f8: 0x2484f8e0  addiu       $a0, $a0, -0x720
    ctx->pc = 0x17c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965472));
    // 0x17c5fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c600: 0x24c6c638  addiu       $a2, $a2, -0x39C8
    ctx->pc = 0x17c600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952504));
    // 0x17c604: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x17C604u;
    SET_GPR_U32(ctx, 31, 0x17C60Cu);
    ctx->pc = 0x17C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C604u;
    // 0x17c608: 0x24070170  addiu       $a3, $zero, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x17C604u, 0x17C60Cu)) {
        return;
    }
    ctx->pc = 0x17C60Cu;
label_17c60c:
    // 0x17c60c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17C60Cu;
    {
        const bool branch_taken_0x17c60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C60Cu;
        // 0x17c610: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c60c) {
            ctx->pc = 0x17C628u;
            goto label_17c628;
        }
    }
    ctx->pc = 0x17C614u;
label_17c614:
    // 0x17c614: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17c614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17c618: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17c618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c61c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x17C61Cu;
    SET_GPR_U32(ctx, 31, 0x17C624u);
    ctx->pc = 0x17C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C61Cu;
    // 0x17c620: 0x2484f8e0  addiu       $a0, $a0, -0x720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x17C61Cu, 0x17C624u)) {
        return;
    }
    ctx->pc = 0x17C624u;
label_17c624:
    // 0x17c624: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17c628:
    // 0x17c628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c62c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C62Cu;
        // 0x17c630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C634u;
    // 0x17c634: 0x0  nop
    ctx->pc = 0x17c634u;
    // NOP
    ctx->pc = 0x17c638u;
}

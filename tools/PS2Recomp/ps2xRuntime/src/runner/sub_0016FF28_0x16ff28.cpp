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

// Function: sub_0016FF28
// Address: 0x16ff28 - 0x16ffa0
void sub_0016FF28_0x16ff28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FF28_0x16ff28");
#endif

    switch (ctx->pc) {
        case 0x16ff50u: goto label_16ff50;
        case 0x16ff74u: goto label_16ff74;
        case 0x16ff8cu: goto label_16ff8c;
        default: break;
    }

    ctx->pc = 0x16ff28u;

    // 0x16ff28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ff28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ff2c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16ff2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16ff30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ff30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16ff34: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16FF34u;
    {
        const bool branch_taken_0x16ff34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF34u;
        // 0x16ff38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff34) {
            ctx->pc = 0x16FF8Cu;
            goto label_16ff8c;
        }
    }
    ctx->pc = 0x16FF3Cu;
    // 0x16ff3c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16FF3Cu;
    {
        const bool branch_taken_0x16ff3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF3Cu;
        // 0x16ff40: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff3c) {
            ctx->pc = 0x16FF7Cu;
            goto label_16ff7c;
        }
    }
    ctx->pc = 0x16FF44u;
    // 0x16ff44: 0x26105220  addiu       $s0, $s0, 0x5220
    ctx->pc = 0x16ff44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21024));
    // 0x16ff48: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16FF48u;
    SET_GPR_U32(ctx, 31, 0x16FF50u);
    ctx->pc = 0x16FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF48u;
    // 0x16ff4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16FF48u, 0x16FF50u)) {
        return;
    }
    ctx->pc = 0x16FF50u;
label_16ff50:
    // 0x16ff50: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16ff54: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16ff58: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16ff58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16ff5c: 0xac62f728  sw          $v0, -0x8D8($v1)
    ctx->pc = 0x16ff5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF728u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF728u, _value); } while (0);
    // 0x16ff60: 0x2484f730  addiu       $a0, $a0, -0x8D0
    ctx->pc = 0x16ff60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965040));
    // 0x16ff64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ff64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff68: 0x24c6ffa0  addiu       $a2, $a2, -0x60
    ctx->pc = 0x16ff68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967200));
    // 0x16ff6c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16FF6Cu;
    SET_GPR_U32(ctx, 31, 0x16FF74u);
    ctx->pc = 0x16FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF6Cu;
    // 0x16ff70: 0x24070130  addiu       $a3, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16FF6Cu, 0x16FF74u)) {
        return;
    }
    ctx->pc = 0x16FF74u;
label_16ff74:
    // 0x16ff74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16FF74u;
    {
        const bool branch_taken_0x16ff74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF74u;
        // 0x16ff78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff74) {
            ctx->pc = 0x16FF90u;
            goto label_16ff90;
        }
    }
    ctx->pc = 0x16FF7Cu;
label_16ff7c:
    // 0x16ff7c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16ff80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ff84: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16FF84u;
    SET_GPR_U32(ctx, 31, 0x16FF8Cu);
    ctx->pc = 0x16FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF84u;
    // 0x16ff88: 0x2484f730  addiu       $a0, $a0, -0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16FF84u, 0x16FF8Cu)) {
        return;
    }
    ctx->pc = 0x16FF8Cu;
label_16ff8c:
    // 0x16ff8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ff8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16ff90:
    // 0x16ff90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ff90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ff94: 0x3e00008  jr          $ra
    ctx->pc = 0x16FF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF94u;
        // 0x16ff98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FF9Cu;
    // 0x16ff9c: 0x0  nop
    ctx->pc = 0x16ff9cu;
    // NOP
    ctx->pc = 0x16ffa0u;
}

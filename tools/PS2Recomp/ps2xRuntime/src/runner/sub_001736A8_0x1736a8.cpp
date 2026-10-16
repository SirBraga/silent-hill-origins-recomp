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

// Function: sub_001736A8
// Address: 0x1736a8 - 0x173720
void sub_001736A8_0x1736a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001736A8_0x1736a8");
#endif

    switch (ctx->pc) {
        case 0x1736d0u: goto label_1736d0;
        case 0x1736f4u: goto label_1736f4;
        case 0x17370cu: goto label_17370c;
        default: break;
    }

    ctx->pc = 0x1736a8u;

    // 0x1736a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1736a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1736ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1736acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1736b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1736b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1736b4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1736B4u;
    {
        const bool branch_taken_0x1736b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1736B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736B4u;
        // 0x1736b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1736b4) {
            ctx->pc = 0x17370Cu;
            goto label_17370c;
        }
    }
    ctx->pc = 0x1736BCu;
    // 0x1736bc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1736BCu;
    {
        const bool branch_taken_0x1736bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1736C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736BCu;
        // 0x1736c0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1736bc) {
            ctx->pc = 0x1736FCu;
            goto label_1736fc;
        }
    }
    ctx->pc = 0x1736C4u;
    // 0x1736c4: 0x26105c50  addiu       $s0, $s0, 0x5C50
    ctx->pc = 0x1736c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23632));
    // 0x1736c8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1736C8u;
    SET_GPR_U32(ctx, 31, 0x1736D0u);
    ctx->pc = 0x1736CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736C8u;
    // 0x1736cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1736C8u, 0x1736D0u)) {
        return;
    }
    ctx->pc = 0x1736D0u;
label_1736d0:
    // 0x1736d0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1736d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1736d4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1736d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1736d8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1736d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1736dc: 0xac62f7b0  sw          $v0, -0x850($v1)
    ctx->pc = 0x1736dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF7B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF7B0u, _value); } while (0);
    // 0x1736e0: 0x2484f7b8  addiu       $a0, $a0, -0x848
    ctx->pc = 0x1736e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965176));
    // 0x1736e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1736e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736e8: 0x24c63720  addiu       $a2, $a2, 0x3720
    ctx->pc = 0x1736e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14112));
    // 0x1736ec: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1736ECu;
    SET_GPR_U32(ctx, 31, 0x1736F4u);
    ctx->pc = 0x1736F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736ECu;
    // 0x1736f0: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1736ECu, 0x1736F4u)) {
        return;
    }
    ctx->pc = 0x1736F4u;
label_1736f4:
    // 0x1736f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1736F4u;
    {
        const bool branch_taken_0x1736f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1736F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736F4u;
        // 0x1736f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1736f4) {
            ctx->pc = 0x173710u;
            goto label_173710;
        }
    }
    ctx->pc = 0x1736FCu;
label_1736fc:
    // 0x1736fc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1736fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x173700: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x173700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173704: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x173704u;
    SET_GPR_U32(ctx, 31, 0x17370Cu);
    ctx->pc = 0x173708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173704u;
    // 0x173708: 0x2484f7b8  addiu       $a0, $a0, -0x848 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x173704u, 0x17370Cu)) {
        return;
    }
    ctx->pc = 0x17370Cu;
label_17370c:
    // 0x17370c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17370cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173710:
    // 0x173710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173714: 0x3e00008  jr          $ra
    ctx->pc = 0x173714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173714u;
        // 0x173718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17371Cu;
    // 0x17371c: 0x0  nop
    ctx->pc = 0x17371cu;
    // NOP
    ctx->pc = 0x173720u;
}

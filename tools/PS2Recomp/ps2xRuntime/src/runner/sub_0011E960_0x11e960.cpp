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

// Function: sub_0011E960
// Address: 0x11e960 - 0x11e9d8
void sub_0011E960_0x11e960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E960_0x11e960");
#endif

    switch (ctx->pc) {
        case 0x11e988u: goto label_11e988;
        case 0x11e9acu: goto label_11e9ac;
        case 0x11e9c4u: goto label_11e9c4;
        default: break;
    }

    ctx->pc = 0x11e960u;

    // 0x11e960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e964: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11e964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11e968: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11e968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11e96c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E96Cu;
    {
        const bool branch_taken_0x11e96c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E96Cu;
        // 0x11e970: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e96c) {
            ctx->pc = 0x11E9C4u;
            goto label_11e9c4;
        }
    }
    ctx->pc = 0x11E974u;
    // 0x11e974: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x11E974u;
    {
        const bool branch_taken_0x11e974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E974u;
        // 0x11e978: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e974) {
            ctx->pc = 0x11E9B4u;
            goto label_11e9b4;
        }
    }
    ctx->pc = 0x11E97Cu;
    // 0x11e97c: 0x2610b600  addiu       $s0, $s0, -0x4A00
    ctx->pc = 0x11e97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948352));
    // 0x11e980: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x11E980u;
    SET_GPR_U32(ctx, 31, 0x11E988u);
    ctx->pc = 0x11E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E980u;
    // 0x11e984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x11E980u, 0x11E988u)) {
        return;
    }
    ctx->pc = 0x11E988u;
label_11e988:
    // 0x11e988: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x11e988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x11e98c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11e990: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11e990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11e994: 0xac6245c0  sw          $v0, 0x45C0($v1)
    ctx->pc = 0x11e994u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B45C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B45C0u, _value); } while (0);
    // 0x11e998: 0x248445c8  addiu       $a0, $a0, 0x45C8
    ctx->pc = 0x11e998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17864));
    // 0x11e99c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11e99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e9a0: 0x24c6e9f8  addiu       $a2, $a2, -0x1608
    ctx->pc = 0x11e9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961656));
    // 0x11e9a4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x11E9A4u;
    SET_GPR_U32(ctx, 31, 0x11E9ACu);
    ctx->pc = 0x11E9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E9A4u;
    // 0x11e9a8: 0x24070130  addiu       $a3, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x11E9A4u, 0x11E9ACu)) {
        return;
    }
    ctx->pc = 0x11E9ACu;
label_11e9ac:
    // 0x11e9ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11E9ACu;
    {
        const bool branch_taken_0x11e9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9ACu;
        // 0x11e9b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9ac) {
            ctx->pc = 0x11E9C8u;
            goto label_11e9c8;
        }
    }
    ctx->pc = 0x11E9B4u;
label_11e9b4:
    // 0x11e9b4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11e9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11e9b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11e9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11e9bc: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x11E9BCu;
    SET_GPR_U32(ctx, 31, 0x11E9C4u);
    ctx->pc = 0x11E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E9BCu;
    // 0x11e9c0: 0x248445c8  addiu       $a0, $a0, 0x45C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x11E9BCu, 0x11E9C4u)) {
        return;
    }
    ctx->pc = 0x11E9C4u;
label_11e9c4:
    // 0x11e9c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11e9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11e9c8:
    // 0x11e9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11E9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9CCu;
        // 0x11e9d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E9D4u;
    // 0x11e9d4: 0x0  nop
    ctx->pc = 0x11e9d4u;
    // NOP
    ctx->pc = 0x11e9d8u;
}

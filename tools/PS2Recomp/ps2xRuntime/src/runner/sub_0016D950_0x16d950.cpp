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

// Function: sub_0016D950
// Address: 0x16d950 - 0x16d9c8
void sub_0016D950_0x16d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D950_0x16d950");
#endif

    switch (ctx->pc) {
        case 0x16d978u: goto label_16d978;
        case 0x16d99cu: goto label_16d99c;
        case 0x16d9b4u: goto label_16d9b4;
        default: break;
    }

    ctx->pc = 0x16d950u;

    // 0x16d950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d954: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16d954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16d958: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16d95c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D95Cu;
    {
        const bool branch_taken_0x16d95c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D95Cu;
        // 0x16d960: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d95c) {
            ctx->pc = 0x16D9B4u;
            goto label_16d9b4;
        }
    }
    ctx->pc = 0x16D964u;
    // 0x16d964: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16D964u;
    {
        const bool branch_taken_0x16d964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D964u;
        // 0x16d968: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d964) {
            ctx->pc = 0x16D9A4u;
            goto label_16d9a4;
        }
    }
    ctx->pc = 0x16D96Cu;
    // 0x16d96c: 0x26104d90  addiu       $s0, $s0, 0x4D90
    ctx->pc = 0x16d96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19856));
    // 0x16d970: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16D970u;
    SET_GPR_U32(ctx, 31, 0x16D978u);
    ctx->pc = 0x16D974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D970u;
    // 0x16d974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16D970u, 0x16D978u)) {
        return;
    }
    ctx->pc = 0x16D978u;
label_16d978:
    // 0x16d978: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16d978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16d97c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16d980: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16d980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16d984: 0xac62f6c0  sw          $v0, -0x940($v1)
    ctx->pc = 0x16d984u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF6C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF6C0u, _value); } while (0);
    // 0x16d988: 0x2484f6c8  addiu       $a0, $a0, -0x938
    ctx->pc = 0x16d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964936));
    // 0x16d98c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d990: 0x24c6d9c8  addiu       $a2, $a2, -0x2638
    ctx->pc = 0x16d990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957512));
    // 0x16d994: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16D994u;
    SET_GPR_U32(ctx, 31, 0x16D99Cu);
    ctx->pc = 0x16D998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D994u;
    // 0x16d998: 0x24070070  addiu       $a3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16D994u, 0x16D99Cu)) {
        return;
    }
    ctx->pc = 0x16D99Cu;
label_16d99c:
    // 0x16d99c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16D99Cu;
    {
        const bool branch_taken_0x16d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D99Cu;
        // 0x16d9a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d99c) {
            ctx->pc = 0x16D9B8u;
            goto label_16d9b8;
        }
    }
    ctx->pc = 0x16D9A4u;
label_16d9a4:
    // 0x16d9a4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16d9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16d9a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16d9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d9ac: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16D9ACu;
    SET_GPR_U32(ctx, 31, 0x16D9B4u);
    ctx->pc = 0x16D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9ACu;
    // 0x16d9b0: 0x2484f6c8  addiu       $a0, $a0, -0x938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16D9ACu, 0x16D9B4u)) {
        return;
    }
    ctx->pc = 0x16D9B4u;
label_16d9b4:
    // 0x16d9b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16d9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d9b8:
    // 0x16d9b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x16D9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9BCu;
        // 0x16d9c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D9C4u;
    // 0x16d9c4: 0x0  nop
    ctx->pc = 0x16d9c4u;
    // NOP
    ctx->pc = 0x16d9c8u;
}

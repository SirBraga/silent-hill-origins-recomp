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

// Function: sub_0010F968
// Address: 0x10f968 - 0x10f9f8
void sub_0010F968_0x10f968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F968_0x10f968");
#endif

    switch (ctx->pc) {
        case 0x10f990u: goto label_10f990;
        case 0x10f9a0u: goto label_10f9a0;
        case 0x10f9c4u: goto label_10f9c4;
        case 0x10f9d8u: goto label_10f9d8;
        case 0x10f9e8u: goto label_10f9e8;
        default: break;
    }

    ctx->pc = 0x10f968u;

    // 0x10f968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f96c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10f96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10f970: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10f970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10f974: 0x14a2001c  bne         $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x10F974u;
    {
        const bool branch_taken_0x10f974 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F974u;
        // 0x10f978: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f974) {
            ctx->pc = 0x10F9E8u;
            goto label_10f9e8;
        }
    }
    ctx->pc = 0x10F97Cu;
    // 0x10f97c: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x10F97Cu;
    {
        const bool branch_taken_0x10f97c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f97c) {
            ctx->pc = 0x10F980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F97Cu;
            // 0x10f980: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F9CCu;
            goto label_10f9cc;
        }
    }
    ctx->pc = 0x10F984u;
    // 0x10f984: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10f984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10f988: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10F988u;
    SET_GPR_U32(ctx, 31, 0x10F990u);
    ctx->pc = 0x10F98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F988u;
    // 0x10f98c: 0x24844370  addiu       $a0, $a0, 0x4370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10F988u, 0x10F990u)) {
        return;
    }
    ctx->pc = 0x10F990u;
label_10f990:
    // 0x10f990: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x10f990u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x10f994: 0x2610a380  addiu       $s0, $s0, -0x5C80
    ctx->pc = 0x10f994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943616));
    // 0x10f998: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x10F998u;
    SET_GPR_U32(ctx, 31, 0x10F9A0u);
    ctx->pc = 0x10F99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F998u;
    // 0x10f99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x10F998u, 0x10F9A0u)) {
        return;
    }
    ctx->pc = 0x10F9A0u;
label_10f9a0:
    // 0x10f9a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x10f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x10f9a4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10f9a8: 0x3c060011  lui         $a2, 0x11
    ctx->pc = 0x10f9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17 << 16));
    // 0x10f9ac: 0xac624378  sw          $v0, 0x4378($v1)
    ctx->pc = 0x10f9acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4378u, _value); } while (0);
    // 0x10f9b0: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x10f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x10f9b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10f9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f9b8: 0x24c6f9f8  addiu       $a2, $a2, -0x608
    ctx->pc = 0x10f9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965752));
    // 0x10f9bc: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x10F9BCu;
    SET_GPR_U32(ctx, 31, 0x10F9C4u);
    ctx->pc = 0x10F9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F9BCu;
    // 0x10f9c0: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x10F9BCu, 0x10F9C4u)) {
        return;
    }
    ctx->pc = 0x10F9C4u;
label_10f9c4:
    // 0x10f9c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10F9C4u;
    {
        const bool branch_taken_0x10f9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9C4u;
        // 0x10f9c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9c4) {
            ctx->pc = 0x10F9ECu;
            goto label_10f9ec;
        }
    }
    ctx->pc = 0x10F9CCu;
label_10f9cc:
    // 0x10f9cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10f9d0: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x10F9D0u;
    SET_GPR_U32(ctx, 31, 0x10F9D8u);
    ctx->pc = 0x10F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F9D0u;
    // 0x10f9d4: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x10F9D0u, 0x10F9D8u)) {
        return;
    }
    ctx->pc = 0x10F9D8u;
label_10f9d8:
    // 0x10f9d8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10f9dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10f9e0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10F9E0u;
    SET_GPR_U32(ctx, 31, 0x10F9E8u);
    ctx->pc = 0x10F9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F9E0u;
    // 0x10f9e4: 0x24844370  addiu       $a0, $a0, 0x4370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10F9E0u, 0x10F9E8u)) {
        return;
    }
    ctx->pc = 0x10F9E8u;
label_10f9e8:
    // 0x10f9e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10f9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10f9ec:
    // 0x10f9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10F9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9F0u;
        // 0x10f9f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F9F8u;
}

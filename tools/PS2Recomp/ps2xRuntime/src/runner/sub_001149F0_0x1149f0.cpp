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

// Function: sub_001149F0
// Address: 0x1149f0 - 0x114a68
void sub_001149F0_0x1149f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001149F0_0x1149f0");
#endif

    switch (ctx->pc) {
        case 0x114a18u: goto label_114a18;
        case 0x114a3cu: goto label_114a3c;
        case 0x114a54u: goto label_114a54;
        default: break;
    }

    ctx->pc = 0x1149f0u;

    // 0x1149f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1149f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1149f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1149f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1149f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1149f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1149fc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1149FCu;
    {
        const bool branch_taken_0x1149fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x114A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149FCu;
        // 0x114a00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149fc) {
            ctx->pc = 0x114A54u;
            goto label_114a54;
        }
    }
    ctx->pc = 0x114A04u;
    // 0x114a04: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x114A04u;
    {
        const bool branch_taken_0x114a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A04u;
        // 0x114a08: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a04) {
            ctx->pc = 0x114A44u;
            goto label_114a44;
        }
    }
    ctx->pc = 0x114A0Cu;
    // 0x114a0c: 0x2610ac40  addiu       $s0, $s0, -0x53C0
    ctx->pc = 0x114a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945856));
    // 0x114a10: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x114A10u;
    SET_GPR_U32(ctx, 31, 0x114A18u);
    ctx->pc = 0x114A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A10u;
    // 0x114a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x114A10u, 0x114A18u)) {
        return;
    }
    ctx->pc = 0x114A18u;
label_114a18:
    // 0x114a18: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x114a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x114a1c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x114a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x114a20: 0x3c060011  lui         $a2, 0x11
    ctx->pc = 0x114a20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17 << 16));
    // 0x114a24: 0xac624518  sw          $v0, 0x4518($v1)
    ctx->pc = 0x114a24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4518u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4518u, _value); } while (0);
    // 0x114a28: 0x24844520  addiu       $a0, $a0, 0x4520
    ctx->pc = 0x114a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17696));
    // 0x114a2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a30: 0x24c64a68  addiu       $a2, $a2, 0x4A68
    ctx->pc = 0x114a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19048));
    // 0x114a34: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x114A34u;
    SET_GPR_U32(ctx, 31, 0x114A3Cu);
    ctx->pc = 0x114A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A34u;
    // 0x114a38: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x114A34u, 0x114A3Cu)) {
        return;
    }
    ctx->pc = 0x114A3Cu;
label_114a3c:
    // 0x114a3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114A3Cu;
    {
        const bool branch_taken_0x114a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A3Cu;
        // 0x114a40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a3c) {
            ctx->pc = 0x114A58u;
            goto label_114a58;
        }
    }
    ctx->pc = 0x114A44u;
label_114a44:
    // 0x114a44: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x114a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x114a48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x114a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x114a4c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x114A4Cu;
    SET_GPR_U32(ctx, 31, 0x114A54u);
    ctx->pc = 0x114A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A4Cu;
    // 0x114a50: 0x24844520  addiu       $a0, $a0, 0x4520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x114A4Cu, 0x114A54u)) {
        return;
    }
    ctx->pc = 0x114A54u;
label_114a54:
    // 0x114a54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x114a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_114a58:
    // 0x114a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x114A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A5Cu;
        // 0x114a60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114A64u;
    // 0x114a64: 0x0  nop
    ctx->pc = 0x114a64u;
    // NOP
    ctx->pc = 0x114a68u;
}

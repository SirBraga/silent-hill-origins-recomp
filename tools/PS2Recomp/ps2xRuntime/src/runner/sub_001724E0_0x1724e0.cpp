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

// Function: sub_001724E0
// Address: 0x1724e0 - 0x172578
void sub_001724E0_0x1724e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001724E0_0x1724e0");
#endif

    switch (ctx->pc) {
        case 0x1724f4u: goto label_1724f4;
        default: break;
    }

    ctx->pc = 0x1724e0u;

    // 0x1724e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1724e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1724e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1724e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1724e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1724e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1724ec: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x1724ECu;
    SET_GPR_U32(ctx, 31, 0x1724F4u);
    ctx->pc = 0x1724F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1724ECu;
    // 0x1724f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x1724ECu, 0x1724F4u)) {
        return;
    }
    ctx->pc = 0x1724F4u;
label_1724f4:
    // 0x1724f4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1724f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1724f8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1724f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1724fc: 0x24635860  addiu       $v1, $v1, 0x5860
    ctx->pc = 0x1724fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22624));
    // 0x172500: 0x24845880  addiu       $a0, $a0, 0x5880
    ctx->pc = 0x172500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22656));
    // 0x172504: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x172504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x172508: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x172508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x17250c: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x17250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x172510: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x172510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x172514: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x172514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172518: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x172518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x17251c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17251cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172520: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x172520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x172524: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x172524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x172528: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x172528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x17252c: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x17252cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x172530: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x172530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x172534: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x172534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x172538: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x172538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x17253c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x17253cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x172540: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x172540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x172544: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x172544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x172548: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x172548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x17254c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x17254cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x172550: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x172550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x172554: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x172554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x172558: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x172558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17255c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x17255cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x172560: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172564: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x172564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17256c: 0x3e00008  jr          $ra
    ctx->pc = 0x17256Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17256Cu;
        // 0x172570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17256Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172574u;
    // 0x172574: 0x0  nop
    ctx->pc = 0x172574u;
    // NOP
    ctx->pc = 0x172578u;
}

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

// Function: sub_0016B9C0
// Address: 0x16b9c0 - 0x16ba58
void sub_0016B9C0_0x16b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B9C0_0x16b9c0");
#endif

    switch (ctx->pc) {
        case 0x16b9d4u: goto label_16b9d4;
        case 0x16b9f4u: goto label_16b9f4;
        case 0x16b9fcu: goto label_16b9fc;
        default: break;
    }

    ctx->pc = 0x16b9c0u;

    // 0x16b9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b9c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b9cc: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16B9CCu;
    SET_GPR_U32(ctx, 31, 0x16B9D4u);
    ctx->pc = 0x16B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9CCu;
    // 0x16b9d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16B9CCu, 0x16B9D4u)) {
        return;
    }
    ctx->pc = 0x16B9D4u;
label_16b9d4:
    // 0x16b9d4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16b9d8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16b9dc: 0x24634800  addiu       $v1, $v1, 0x4800
    ctx->pc = 0x16b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18432));
    // 0x16b9e0: 0x24424820  addiu       $v0, $v0, 0x4820
    ctx->pc = 0x16b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18464));
    // 0x16b9e4: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16b9e8: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x16b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16b9ec: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16B9ECu;
    SET_GPR_U32(ctx, 31, 0x16B9F4u);
    ctx->pc = 0x16B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9ECu;
    // 0x16b9f0: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16B9ECu, 0x16B9F4u)) {
        return;
    }
    ctx->pc = 0x16B9F4u;
label_16b9f4:
    // 0x16b9f4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16B9F4u;
    SET_GPR_U32(ctx, 31, 0x16B9FCu);
    ctx->pc = 0x16B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9F4u;
    // 0x16b9f8: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16B9F4u, 0x16B9FCu)) {
        return;
    }
    ctx->pc = 0x16B9FCu;
label_16b9fc:
    // 0x16b9fc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x16b9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x16ba00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16ba00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ba04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ba08: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x16ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x16ba0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16ba0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba10: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x16ba10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x16ba14: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x16ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x16ba18: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x16ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x16ba1c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x16ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x16ba20: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x16ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x16ba24: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x16ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x16ba28: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x16ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x16ba2c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x16ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x16ba30: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x16ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x16ba34: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x16ba34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x16ba38: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x16ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x16ba3c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x16ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x16ba40: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x16ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x16ba44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ba44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ba48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ba48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ba4c: 0x3e00008  jr          $ra
    ctx->pc = 0x16BA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA4Cu;
        // 0x16ba50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BA54u;
    // 0x16ba54: 0x0  nop
    ctx->pc = 0x16ba54u;
    // NOP
    ctx->pc = 0x16ba58u;
}

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

// Function: sub_0015EE50
// Address: 0x15ee50 - 0x15ef50
void sub_0015EE50_0x15ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EE50_0x15ee50");
#endif

    switch (ctx->pc) {
        case 0x15ee70u: goto label_15ee70;
        case 0x15ee7cu: goto label_15ee7c;
        case 0x15ee9cu: goto label_15ee9c;
        case 0x15eea4u: goto label_15eea4;
        case 0x15ef04u: goto label_15ef04;
        case 0x15ef10u: goto label_15ef10;
        case 0x15ef18u: goto label_15ef18;
        case 0x15ef30u: goto label_15ef30;
        default: break;
    }

    ctx->pc = 0x15ee50u;

    // 0x15ee50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15ee54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15ee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15ee58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15ee58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15ee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15ee60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15ee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15ee64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15ee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ee68: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x15EE68u;
    SET_GPR_U32(ctx, 31, 0x15EE70u);
    ctx->pc = 0x15EE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE68u;
    // 0x15ee6c: 0x26110090  addiu       $s1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x15EE68u, 0x15EE70u)) {
        return;
    }
    ctx->pc = 0x15EE70u;
label_15ee70:
    // 0x15ee70: 0x26120098  addiu       $s2, $s0, 0x98
    ctx->pc = 0x15ee70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x15ee74: 0xc07924a  jal         func_1E4928
    ctx->pc = 0x15EE74u;
    SET_GPR_U32(ctx, 31, 0x15EE7Cu);
    ctx->pc = 0x15EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE74u;
    // 0x15ee78: 0x26040044  addiu       $a0, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4928u, 0x15EE74u, 0x15EE7Cu)) {
        return;
    }
    ctx->pc = 0x15EE7Cu;
label_15ee7c:
    // 0x15ee7c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x15ee80: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x15ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x15ee84: 0x24633400  addiu       $v1, $v1, 0x3400
    ctx->pc = 0x15ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13312));
    // 0x15ee88: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x15ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
    // 0x15ee8c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x15ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x15ee90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ee90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee94: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x15EE94u;
    SET_GPR_U32(ctx, 31, 0x15EE9Cu);
    ctx->pc = 0x15EE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE94u;
    // 0x15ee98: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x15EE94u, 0x15EE9Cu)) {
        return;
    }
    ctx->pc = 0x15EE9Cu;
label_15ee9c:
    // 0x15ee9c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x15EE9Cu;
    SET_GPR_U32(ctx, 31, 0x15EEA4u);
    ctx->pc = 0x15EEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE9Cu;
    // 0x15eea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x15EE9Cu, 0x15EEA4u)) {
        return;
    }
    ctx->pc = 0x15EEA4u;
label_15eea4:
    // 0x15eea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15eea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15eea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15eea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eeac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eeb0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x15eeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x15eeb4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x15eeb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x15eeb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15eeb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15eebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15eebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eec0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x15eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x15eec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15eec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eec8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x15eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x15eecc: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x15eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x15eed0: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x15eed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x15eed4: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x15eed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x15eed8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x15eed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x15eedc: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x15eedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x15eee0: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x15eee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x15eee4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x15eee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x15eee8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x15eee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x15eeec: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x15eeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x15eef0: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x15eef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x15eef4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x15eef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x15eef8: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x15eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x15eefc: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x15EEFCu;
    SET_GPR_U32(ctx, 31, 0x15EF04u);
    ctx->pc = 0x15EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EEFCu;
    // 0x15ef00: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x15EEFCu, 0x15EF04u)) {
        return;
    }
    ctx->pc = 0x15EF04u;
label_15ef04:
    // 0x15ef04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ef04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef08: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x15EF08u;
    SET_GPR_U32(ctx, 31, 0x15EF10u);
    ctx->pc = 0x15EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF08u;
    // 0x15ef0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x15EF08u, 0x15EF10u)) {
        return;
    }
    ctx->pc = 0x15EF10u;
label_15ef10:
    // 0x15ef10: 0xc079246  jal         func_1E4918
    ctx->pc = 0x15EF10u;
    SET_GPR_U32(ctx, 31, 0x15EF18u);
    ctx->pc = 0x15EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF10u;
    // 0x15ef14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4918u, 0x15EF10u, 0x15EF18u)) {
        return;
    }
    ctx->pc = 0x15EF18u;
label_15ef18:
    // 0x15ef18: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x15ef18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x15ef1c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x15ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x15ef20: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x15ef20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x15ef24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ef24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef28: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x15EF28u;
    SET_GPR_U32(ctx, 31, 0x15EF30u);
    ctx->pc = 0x15EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF28u;
    // 0x15ef2c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x15EF28u, 0x15EF30u)) {
        return;
    }
    ctx->pc = 0x15EF30u;
label_15ef30:
    // 0x15ef30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15ef30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15ef34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ef38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15ef38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ef3c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15ef3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ef40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ef40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ef44: 0x3e00008  jr          $ra
    ctx->pc = 0x15EF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF44u;
        // 0x15ef48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EF4Cu;
    // 0x15ef4c: 0x0  nop
    ctx->pc = 0x15ef4cu;
    // NOP
    ctx->pc = 0x15ef50u;
}

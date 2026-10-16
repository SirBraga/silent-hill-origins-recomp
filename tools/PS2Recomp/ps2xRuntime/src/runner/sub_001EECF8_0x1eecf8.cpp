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

// Function: sub_001EECF8
// Address: 0x1eecf8 - 0x1eedf0
void sub_001EECF8_0x1eecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EECF8_0x1eecf8");
#endif

    switch (ctx->pc) {
        case 0x1eed14u: goto label_1eed14;
        case 0x1eed1cu: goto label_1eed1c;
        case 0x1eed24u: goto label_1eed24;
        case 0x1eed34u: goto label_1eed34;
        case 0x1eedb4u: goto label_1eedb4;
        case 0x1eedc0u: goto label_1eedc0;
        default: break;
    }

    ctx->pc = 0x1eecf8u;

    // 0x1eecf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eecf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eecfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1eecfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1eed00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eed00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eed08: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1eed08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1eed0c: 0xc07ba7c  jal         func_1EE9F0
    ctx->pc = 0x1EED0Cu;
    SET_GPR_U32(ctx, 31, 0x1EED14u);
    ctx->pc = 0x1EED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED0Cu;
    // 0x1eed10: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EE9F0u, 0x1EED0Cu, 0x1EED14u)) {
        return;
    }
    ctx->pc = 0x1EED14u;
label_1eed14:
    // 0x1eed14: 0xc0954b8  jal         func_2552E0
    ctx->pc = 0x1EED14u;
    SET_GPR_U32(ctx, 31, 0x1EED1Cu);
    ctx->pc = 0x2552E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2552E0u, 0x1EED14u, 0x1EED1Cu)) {
        return;
    }
    ctx->pc = 0x1EED1Cu;
label_1eed1c:
    // 0x1eed1c: 0xc089892  jal         func_226248
    ctx->pc = 0x1EED1Cu;
    SET_GPR_U32(ctx, 31, 0x1EED24u);
    ctx->pc = 0x1EED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED1Cu;
    // 0x1eed20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x1EED1Cu, 0x1EED24u)) {
        return;
    }
    ctx->pc = 0x1EED24u;
label_1eed24:
    // 0x1eed24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1eed24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eed28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eed28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed2c: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x1EED2Cu;
    SET_GPR_U32(ctx, 31, 0x1EED34u);
    ctx->pc = 0x1EED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED2Cu;
    // 0x1eed30: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x1EED2Cu, 0x1EED34u)) {
        return;
    }
    ctx->pc = 0x1EED34u;
label_1eed34:
    // 0x1eed34: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1eed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eed38: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1eed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1eed3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1eed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1eed40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eed40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eed44: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1eed44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1eed48: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1eed48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1eed4c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1eed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1eed50: 0xe4550014  swc1        $f21, 0x14($v0)
    ctx->pc = 0x1eed50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1eed54: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x1eed54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x1eed58: 0xe4550028  swc1        $f21, 0x28($v0)
    ctx->pc = 0x1eed58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1eed5c: 0xe4750010  swc1        $f21, 0x10($v1)
    ctx->pc = 0x1eed5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1eed60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1eed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eed64: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1eed64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1eed68: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x1eed68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1eed6c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1eed6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1eed70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1eed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eed74: 0xe4740018  swc1        $f20, 0x18($v1)
    ctx->pc = 0x1eed74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1eed78: 0xe4740024  swc1        $f20, 0x24($v1)
    ctx->pc = 0x1eed78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1eed7c: 0xe4740020  swc1        $f20, 0x20($v1)
    ctx->pc = 0x1eed7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1eed80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1eed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eed84: 0xe4540030  swc1        $f20, 0x30($v0)
    ctx->pc = 0x1eed84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1eed88: 0xe4540038  swc1        $f20, 0x38($v0)
    ctx->pc = 0x1eed88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1eed8c: 0xe4540034  swc1        $f20, 0x34($v0)
    ctx->pc = 0x1eed8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1eed90: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1eed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eed94: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1eed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1eed98: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1eed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1eed9c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1eed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1eeda0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1eeda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1eeda4: 0x8ca4870c  lw          $a0, -0x78F4($a1)
    ctx->pc = 0x1eeda4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x1eeda8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1eeda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eedac: 0xc05ee76  jal         func_17B9D8
    ctx->pc = 0x1EEDACu;
    SET_GPR_U32(ctx, 31, 0x1EEDB4u);
    ctx->pc = 0x1EEDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDACu;
    // 0x1eedb0: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B9D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B9D8u, 0x1EEDACu, 0x1EEDB4u)) {
        return;
    }
    ctx->pc = 0x1EEDB4u;
label_1eedb4:
    // 0x1eedb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1eedb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eedb8: 0xc07739c  jal         func_1DCE70
    ctx->pc = 0x1EEDB8u;
    SET_GPR_U32(ctx, 31, 0x1EEDC0u);
    ctx->pc = 0x1EEDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDB8u;
    // 0x1eedbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCE70u, 0x1EEDB8u, 0x1EEDC0u)) {
        return;
    }
    ctx->pc = 0x1EEDC0u;
label_1eedc0:
    // 0x1eedc0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1eedc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1eedc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eedc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eedc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eedc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eedcc: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1eedccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1eedd0: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x1eedd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1eedd4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1eedd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1eedd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1eedd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eeddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eeddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eede0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1eede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1eede4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1eede4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1eede8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDE8u;
        // 0x1eedec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEDF0u;
}

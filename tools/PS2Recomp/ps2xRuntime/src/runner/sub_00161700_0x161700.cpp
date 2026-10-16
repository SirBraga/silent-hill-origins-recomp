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

// Function: sub_00161700
// Address: 0x161700 - 0x1617b8
void sub_00161700_0x161700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161700_0x161700");
#endif

    switch (ctx->pc) {
        case 0x161720u: goto label_161720;
        case 0x161744u: goto label_161744;
        case 0x16174cu: goto label_16174c;
        case 0x161764u: goto label_161764;
        case 0x161770u: goto label_161770;
        default: break;
    }

    ctx->pc = 0x161700u;

    // 0x161700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x161700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x161704: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x161704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x161708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16170c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x161710: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x161710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x161714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161718: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x161718u;
    SET_GPR_U32(ctx, 31, 0x161720u);
    ctx->pc = 0x16171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161718u;
    // 0x16171c: 0x26110048  addiu       $s1, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x161718u, 0x161720u)) {
        return;
    }
    ctx->pc = 0x161720u;
label_161720:
    // 0x161720: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x161720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x161724: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x161724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x161728: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x161728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16172c: 0x24633680  addiu       $v1, $v1, 0x3680
    ctx->pc = 0x16172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13952));
    // 0x161730: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x161730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x161734: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x161734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x161738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16173c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16173Cu;
    SET_GPR_U32(ctx, 31, 0x161744u);
    ctx->pc = 0x161740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16173Cu;
    // 0x161740: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16173Cu, 0x161744u)) {
        return;
    }
    ctx->pc = 0x161744u;
label_161744:
    // 0x161744: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x161744u;
    SET_GPR_U32(ctx, 31, 0x16174Cu);
    ctx->pc = 0x161748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161744u;
    // 0x161748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x161744u, 0x16174Cu)) {
        return;
    }
    ctx->pc = 0x16174Cu;
label_16174c:
    // 0x16174c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16174cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x161750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x161750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161758: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16175c: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x16175Cu;
    SET_GPR_U32(ctx, 31, 0x161764u);
    ctx->pc = 0x161760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16175Cu;
    // 0x161760: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x16175Cu, 0x161764u)) {
        return;
    }
    ctx->pc = 0x161764u;
label_161764:
    // 0x161764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x161764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161768: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x161768u;
    SET_GPR_U32(ctx, 31, 0x161770u);
    ctx->pc = 0x16176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161768u;
    // 0x16176c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x161768u, 0x161770u)) {
        return;
    }
    ctx->pc = 0x161770u;
label_161770:
    // 0x161770: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x161770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x161774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x161774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161778: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16177c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16177cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x161780: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x161780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x161784: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x161784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x161788: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16178c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x16178cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x161790: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x161790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x161794: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x161794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161798: 0x8c838650  lw          $v1, -0x79B0($a0)
    ctx->pc = 0x161798u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338650u));
    // 0x16179c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16179cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1617a0: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x1617a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x1617a4: 0xac908650  sw          $s0, -0x79B0($a0)
    ctx->pc = 0x1617a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x338650u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338650u, _value); } while (0);
    // 0x1617a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1617a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1617ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1617acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1617b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1617B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1617B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617B0u;
        // 0x1617b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1617B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1617B8u;
}

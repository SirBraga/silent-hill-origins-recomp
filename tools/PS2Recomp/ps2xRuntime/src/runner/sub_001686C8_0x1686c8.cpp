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

// Function: sub_001686C8
// Address: 0x1686c8 - 0x1687c8
void sub_001686C8_0x1686c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001686C8_0x1686c8");
#endif

    switch (ctx->pc) {
        case 0x1686f0u: goto label_1686f0;
        case 0x1686fcu: goto label_1686fc;
        case 0x16871cu: goto label_16871c;
        case 0x168724u: goto label_168724;
        case 0x168750u: goto label_168750;
        case 0x16875cu: goto label_16875c;
        case 0x168790u: goto label_168790;
        case 0x1687a8u: goto label_1687a8;
        default: break;
    }

    ctx->pc = 0x1686c8u;

    // 0x1686c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1686c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1686cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1686ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1686d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1686d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1686d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1686d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1686d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1686dc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1686dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1686e0: 0x26110074  addiu       $s1, $s0, 0x74
    ctx->pc = 0x1686e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x1686e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1686e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1686e8: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x1686E8u;
    SET_GPR_U32(ctx, 31, 0x1686F0u);
    ctx->pc = 0x1686ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1686E8u;
    // 0x1686ec: 0x2612007c  addiu       $s2, $s0, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x1686E8u, 0x1686F0u)) {
        return;
    }
    ctx->pc = 0x1686F0u;
label_1686f0:
    // 0x1686f0: 0x26130038  addiu       $s3, $s0, 0x38
    ctx->pc = 0x1686f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1686f4: 0xc07924a  jal         func_1E4928
    ctx->pc = 0x1686F4u;
    SET_GPR_U32(ctx, 31, 0x1686FCu);
    ctx->pc = 0x1686F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1686F4u;
    // 0x1686f8: 0x26040044  addiu       $a0, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4928u, 0x1686F4u, 0x1686FCu)) {
        return;
    }
    ctx->pc = 0x1686FCu;
label_1686fc:
    // 0x1686fc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1686fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x168700: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x168700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x168704: 0x24634080  addiu       $v1, $v1, 0x4080
    ctx->pc = 0x168704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16512));
    // 0x168708: 0x244240a0  addiu       $v0, $v0, 0x40A0
    ctx->pc = 0x168708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16544));
    // 0x16870c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16870cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x168710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168714: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x168714u;
    SET_GPR_U32(ctx, 31, 0x16871Cu);
    ctx->pc = 0x168718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168714u;
    // 0x168718: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x168714u, 0x16871Cu)) {
        return;
    }
    ctx->pc = 0x16871Cu;
label_16871c:
    // 0x16871c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16871Cu;
    SET_GPR_U32(ctx, 31, 0x168724u);
    ctx->pc = 0x168720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16871Cu;
    // 0x168720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16871Cu, 0x168724u)) {
        return;
    }
    ctx->pc = 0x168724u;
label_168724:
    // 0x168724: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x168724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x168728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16872c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16872cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168730: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x168730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x168734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168738: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x168738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x16873c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x16873cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x168740: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x168740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x168744: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x168744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x168748: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x168748u;
    SET_GPR_U32(ctx, 31, 0x168750u);
    ctx->pc = 0x16874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168748u;
    // 0x16874c: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x168748u, 0x168750u)) {
        return;
    }
    ctx->pc = 0x168750u;
label_168750:
    // 0x168750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168754: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x168754u;
    SET_GPR_U32(ctx, 31, 0x16875Cu);
    ctx->pc = 0x168758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168754u;
    // 0x168758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x168754u, 0x16875Cu)) {
        return;
    }
    ctx->pc = 0x16875Cu;
label_16875c:
    // 0x16875c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x16875cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x168760: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x168760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x168764: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x168764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x168768: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x168768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16876c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x16876cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x168770: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x168770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x168774: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x168774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16877c: 0x8c6286ac  lw          $v0, -0x7954($v1)
    ctx->pc = 0x16877cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3386ACu));
    // 0x168780: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x168780u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x168784: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x168784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x168788: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x168788u;
    SET_GPR_U32(ctx, 31, 0x168790u);
    ctx->pc = 0x16878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168788u;
    // 0x16878c: 0xac7086ac  sw          $s0, -0x7954($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936236), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x168788u, 0x168790u)) {
        return;
    }
    ctx->pc = 0x168790u;
label_168790:
    // 0x168790: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x168790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x168794: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x168794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168798: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x168798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x16879c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16879cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687a0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1687A0u;
    SET_GPR_U32(ctx, 31, 0x1687A8u);
    ctx->pc = 0x1687A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1687A0u;
    // 0x1687a4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1687A0u, 0x1687A8u)) {
        return;
    }
    ctx->pc = 0x1687A8u;
label_1687a8:
    // 0x1687a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1687a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1687acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1687b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1687b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1687b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1687b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1687b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1687b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1687bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1687bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1687c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1687C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1687C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687C0u;
        // 0x1687c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1687C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1687C8u;
}

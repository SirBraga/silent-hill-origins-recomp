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

// Function: sub_00199780
// Address: 0x199780 - 0x1998d0
void sub_00199780_0x199780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199780_0x199780");
#endif

    switch (ctx->pc) {
        case 0x19983cu: goto label_19983c;
        case 0x199858u: goto label_199858;
        case 0x199860u: goto label_199860;
        case 0x19986cu: goto label_19986c;
        case 0x199884u: goto label_199884;
        case 0x19989cu: goto label_19989c;
        case 0x1998b4u: goto label_1998b4;
        default: break;
    }

    ctx->pc = 0x199780u;

    // 0x199780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199784: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x199784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x199788: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x199788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19978c: 0x244232d0  addiu       $v0, $v0, 0x32D0
    ctx->pc = 0x19978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13008));
    // 0x199790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19979c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x19979cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1997a0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1997a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1997a4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1997a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1997a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1997a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1997ac: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1997acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1997b0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1997b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1997b4: 0x2484f7a8  addiu       $a0, $a0, -0x858
    ctx->pc = 0x1997b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
    // 0x1997b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1997b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1997bc: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x1997bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1997c0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1997c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1997c4: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1997c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x1997c8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1997c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1997cc: 0x24e735d0  addiu       $a3, $a3, 0x35D0
    ctx->pc = 0x1997ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13776));
    // 0x1997d0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1997d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1997d4: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x1997d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1997d8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1997d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1997dc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1997dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1997e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1997e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1997e4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1997e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1997e8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1997e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1997ec: 0x24639de0  addiu       $v1, $v1, -0x6220
    ctx->pc = 0x1997ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942176));
    // 0x1997f0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1997f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1997f4: 0x24a59dc0  addiu       $a1, $a1, -0x6240
    ctx->pc = 0x1997f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942144));
    // 0x1997f8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1997f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1997fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1997fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199800: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x199800u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x199804: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x199804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x199808: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x199808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x19980c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19980cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x199810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x199810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x199814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199818: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x199818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x19981c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x19981cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x199820: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x199820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x199824: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x199824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
    // 0x199828: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x199828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x19982c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x19982cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x199830: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x199830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x199834: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x199834u;
    SET_GPR_U32(ctx, 31, 0x19983Cu);
    ctx->pc = 0x199838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199834u;
    // 0x199838: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x199834u, 0x19983Cu)) {
        return;
    }
    ctx->pc = 0x19983Cu;
label_19983c:
    // 0x19983c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x19983cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x199840: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x199840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x199844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199848: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x199848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x19984c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x19984cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x199850: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x199850u;
    SET_GPR_U32(ctx, 31, 0x199858u);
    ctx->pc = 0x199854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199850u;
    // 0x199854: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x199850u, 0x199858u)) {
        return;
    }
    ctx->pc = 0x199858u;
label_199858:
    // 0x199858: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x199858u;
    SET_GPR_U32(ctx, 31, 0x199860u);
    ctx->pc = 0x19985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199858u;
    // 0x19985c: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x199858u, 0x199860u)) {
        return;
    }
    ctx->pc = 0x199860u;
label_199860:
    // 0x199860: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x199860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x199864: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x199864u;
    SET_GPR_U32(ctx, 31, 0x19986Cu);
    ctx->pc = 0x199868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199864u;
    // 0x199868: 0x26040074  addiu       $a0, $s0, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x199864u, 0x19986Cu)) {
        return;
    }
    ctx->pc = 0x19986Cu;
label_19986c:
    // 0x19986c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x19986cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x199870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199874: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x199874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x199878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19987c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x19987Cu;
    SET_GPR_U32(ctx, 31, 0x199884u);
    ctx->pc = 0x199880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19987Cu;
    // 0x199880: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x19987Cu, 0x199884u)) {
        return;
    }
    ctx->pc = 0x199884u;
label_199884:
    // 0x199884: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x199884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x199888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19988c: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x19988cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x199890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199894: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x199894u;
    SET_GPR_U32(ctx, 31, 0x19989Cu);
    ctx->pc = 0x199898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199894u;
    // 0x199898: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x199894u, 0x19989Cu)) {
        return;
    }
    ctx->pc = 0x19989Cu;
label_19989c:
    // 0x19989c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x19989cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1998a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1998a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998a4: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x1998a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    // 0x1998a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1998a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998ac: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1998ACu;
    SET_GPR_U32(ctx, 31, 0x1998B4u);
    ctx->pc = 0x1998B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1998ACu;
    // 0x1998b0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1998ACu, 0x1998B4u)) {
        return;
    }
    ctx->pc = 0x1998B4u;
label_1998b4:
    // 0x1998b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1998b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1998b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1998bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1998bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1998c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1998c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1998c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1998C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1998C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998C4u;
        // 0x1998c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1998C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1998CCu;
    // 0x1998cc: 0x0  nop
    ctx->pc = 0x1998ccu;
    // NOP
    ctx->pc = 0x1998d0u;
}

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

// Function: sub_0019A5F8
// Address: 0x19a5f8 - 0x19a778
void sub_0019A5F8_0x19a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A5F8_0x19a5f8");
#endif

    switch (ctx->pc) {
        case 0x19a6a0u: goto label_19a6a0;
        case 0x19a6a8u: goto label_19a6a8;
        case 0x19a6bcu: goto label_19a6bc;
        case 0x19a6c4u: goto label_19a6c4;
        case 0x19a6d0u: goto label_19a6d0;
        case 0x19a760u: goto label_19a760;
        default: break;
    }

    ctx->pc = 0x19a5f8u;

    // 0x19a5f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a5fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19a600: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19a600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19a604: 0x244232d0  addiu       $v0, $v0, 0x32D0
    ctx->pc = 0x19a604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13008));
    // 0x19a608: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a60c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19a610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a614: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x19a614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19a618: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x19a618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x19a61c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x19a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x19a620: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19a620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x19a624: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x19a624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x19a628: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x19a628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x19a62c: 0x2484f7a8  addiu       $a0, $a0, -0x858
    ctx->pc = 0x19a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
    // 0x19a630: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19a630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x19a634: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x19a634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x19a638: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x19a638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x19a63c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x19a63cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x19a640: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x19a640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x19a644: 0x24e735d0  addiu       $a3, $a3, 0x35D0
    ctx->pc = 0x19a644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13776));
    // 0x19a648: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x19a648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x19a64c: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x19a64cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x19a650: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19a650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19a654: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19a654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19a658: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19a658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19a65c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19a660: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x19a660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x19a664: 0x24a59fd8  addiu       $a1, $a1, -0x6028
    ctx->pc = 0x19a664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942680));
    // 0x19a668: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x19a668u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x19a66c: 0x24639ff8  addiu       $v1, $v1, -0x6008
    ctx->pc = 0x19a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942712));
    // 0x19a670: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x19a670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x19a674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a678: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x19a678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x19a67c: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x19a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x19a680: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x19a680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x19a684: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x19a684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x19a688: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x19a688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x19a68c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x19a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x19a690: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x19a690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
    // 0x19a694: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x19a694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x19a698: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19A698u;
    SET_GPR_U32(ctx, 31, 0x19A6A0u);
    ctx->pc = 0x19A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A698u;
    // 0x19a69c: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19A698u, 0x19A6A0u)) {
        return;
    }
    ctx->pc = 0x19A6A0u;
label_19a6a0:
    // 0x19a6a0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19A6A0u;
    SET_GPR_U32(ctx, 31, 0x19A6A8u);
    ctx->pc = 0x19A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6A0u;
    // 0x19a6a4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19A6A0u, 0x19A6A8u)) {
        return;
    }
    ctx->pc = 0x19A6A8u;
label_19a6a8:
    // 0x19a6a8: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x19a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x19a6ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x19a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19a6b0: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x19a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x19a6b4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19A6B4u;
    SET_GPR_U32(ctx, 31, 0x19A6BCu);
    ctx->pc = 0x19A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6B4u;
    // 0x19a6b8: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19A6B4u, 0x19A6BCu)) {
        return;
    }
    ctx->pc = 0x19A6BCu;
label_19a6bc:
    // 0x19a6bc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19A6BCu;
    SET_GPR_U32(ctx, 31, 0x19A6C4u);
    ctx->pc = 0x19A6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6BCu;
    // 0x19a6c0: 0x2604009c  addiu       $a0, $s0, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19A6BCu, 0x19A6C4u)) {
        return;
    }
    ctx->pc = 0x19A6C4u;
label_19a6c4:
    // 0x19a6c4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x19a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x19a6c8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19A6C8u;
    SET_GPR_U32(ctx, 31, 0x19A6D0u);
    ctx->pc = 0x19A6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6C8u;
    // 0x19a6cc: 0x260400a8  addiu       $a0, $s0, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19A6C8u, 0x19A6D0u)) {
        return;
    }
    ctx->pc = 0x19A6D0u;
label_19a6d0:
    // 0x19a6d0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x19a6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x19a6d4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x19a6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x19a6d8: 0x2402d8f0  addiu       $v0, $zero, -0x2710
    ctx->pc = 0x19a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
    // 0x19a6dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19a6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19a6e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x19a6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19a6e4: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x19a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x19a6e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19a6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19a6ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19a6ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a6f0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x19a6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x19a6f4: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x19a6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
    // 0x19a6f8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x19a6f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x19a6fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19a6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19a700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a704: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x19a704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x19a708: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19a708u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x19a70c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19a70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19a710: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x19a710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x19a714: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x19a714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x19a718: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19a718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x19a71c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a724: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x19a724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x19a728: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x19a728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19a72c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x19a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x19a730: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x19a730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x19a734: 0xe6040054  swc1        $f4, 0x54($s0)
    ctx->pc = 0x19a734u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x19a738: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x19a738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x19a73c: 0xe6050068  swc1        $f5, 0x68($s0)
    ctx->pc = 0x19a73cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x19a740: 0xe6020070  swc1        $f2, 0x70($s0)
    ctx->pc = 0x19a740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x19a744: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x19a744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x19a748: 0xe603005c  swc1        $f3, 0x5C($s0)
    ctx->pc = 0x19a748u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x19a74c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x19a74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x19a750: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x19a750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x19a754: 0xe605006c  swc1        $f5, 0x6C($s0)
    ctx->pc = 0x19a754u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x19a758: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x19A758u;
    SET_GPR_U32(ctx, 31, 0x19A760u);
    ctx->pc = 0x19A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A758u;
    // 0x19a75c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x19A758u, 0x19A760u)) {
        return;
    }
    ctx->pc = 0x19A760u;
label_19a760:
    // 0x19a760: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19a760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a768: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19a768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a76c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a770: 0x3e00008  jr          $ra
    ctx->pc = 0x19A770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A770u;
        // 0x19a774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A778u;
}

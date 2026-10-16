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

// Function: sub_0013C610
// Address: 0x13c610 - 0x13c758
void sub_0013C610_0x13c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C610_0x13c610");
#endif

    switch (ctx->pc) {
        case 0x13c62cu: goto label_13c62c;
        case 0x13c664u: goto label_13c664;
        case 0x13c66cu: goto label_13c66c;
        case 0x13c6a4u: goto label_13c6a4;
        case 0x13c6b8u: goto label_13c6b8;
        case 0x13c6d8u: goto label_13c6d8;
        case 0x13c740u: goto label_13c740;
        default: break;
    }

    ctx->pc = 0x13c610u;

    // 0x13c610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c614: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13c614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13c618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c61c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13c61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c624: 0xc04edaa  jal         func_13B6A8
    ctx->pc = 0x13C624u;
    SET_GPR_U32(ctx, 31, 0x13C62Cu);
    ctx->pc = 0x13C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C624u;
    // 0x13c628: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B6A8u, 0x13C624u, 0x13C62Cu)) {
        return;
    }
    ctx->pc = 0x13C62Cu;
label_13c62c:
    // 0x13c62c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13c630: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13c630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13c634: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13c634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13c638: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13c638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13c63c: 0x24c6f930  addiu       $a2, $a2, -0x6D0
    ctx->pc = 0x13c63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965552));
    // 0x13c640: 0x2463f9f8  addiu       $v1, $v1, -0x608
    ctx->pc = 0x13c640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965752));
    // 0x13c644: 0x24a5f9b8  addiu       $a1, $a1, -0x648
    ctx->pc = 0x13c644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965688));
    // 0x13c648: 0x2442f810  addiu       $v0, $v0, -0x7F0
    ctx->pc = 0x13c648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965264));
    // 0x13c64c: 0xae260034  sw          $a2, 0x34($s1)
    ctx->pc = 0x13c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 6));
    // 0x13c650: 0x262400d8  addiu       $a0, $s1, 0xD8
    ctx->pc = 0x13c650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    // 0x13c654: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x13c654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x13c658: 0xae250084  sw          $a1, 0x84($s1)
    ctx->pc = 0x13c658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 5));
    // 0x13c65c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13C65Cu;
    SET_GPR_U32(ctx, 31, 0x13C664u);
    ctx->pc = 0x13C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C65Cu;
    // 0x13c660: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13C65Cu, 0x13C664u)) {
        return;
    }
    ctx->pc = 0x13C664u;
label_13c664:
    // 0x13c664: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13C664u;
    SET_GPR_U32(ctx, 31, 0x13C66Cu);
    ctx->pc = 0x13C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C664u;
    // 0x13c668: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13C664u, 0x13C66Cu)) {
        return;
    }
    ctx->pc = 0x13C66Cu;
label_13c66c:
    // 0x13c66c: 0xae200184  sw          $zero, 0x184($s1)
    ctx->pc = 0x13c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
    // 0x13c670: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x13c670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x13c674: 0xae200188  sw          $zero, 0x188($s1)
    ctx->pc = 0x13c674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 0));
    // 0x13c678: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13c678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13c67c: 0xae200148  sw          $zero, 0x148($s1)
    ctx->pc = 0x13c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 0));
    // 0x13c680: 0x24a5f7d0  addiu       $a1, $a1, -0x830
    ctx->pc = 0x13c680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965200));
    // 0x13c684: 0xae20014c  sw          $zero, 0x14C($s1)
    ctx->pc = 0x13c684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 0));
    // 0x13c688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c68c: 0xae200150  sw          $zero, 0x150($s1)
    ctx->pc = 0x13c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 0));
    // 0x13c690: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x13c690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
    // 0x13c694: 0x8c628420  lw          $v0, -0x7BE0($v1)
    ctx->pc = 0x13c694u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338420u));
    // 0x13c698: 0xae22018c  sw          $v0, 0x18C($s1)
    ctx->pc = 0x13c698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 2));
    // 0x13c69c: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x13C69Cu;
    SET_GPR_U32(ctx, 31, 0x13C6A4u);
    ctx->pc = 0x13C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C69Cu;
    // 0x13c6a0: 0xac718420  sw          $s1, -0x7BE0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935584), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x13C69Cu, 0x13C6A4u)) {
        return;
    }
    ctx->pc = 0x13C6A4u;
label_13c6a4:
    // 0x13c6a4: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x13c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x13c6a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13c6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6ac: 0x24a5d4d8  addiu       $a1, $a1, -0x2B28
    ctx->pc = 0x13c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956248));
    // 0x13c6b0: 0xc09545a  jal         func_255168
    ctx->pc = 0x13C6B0u;
    SET_GPR_U32(ctx, 31, 0x13C6B8u);
    ctx->pc = 0x13C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C6B0u;
    // 0x13c6b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x13C6B0u, 0x13C6B8u)) {
        return;
    }
    ctx->pc = 0x13C6B8u;
label_13c6b8:
    // 0x13c6b8: 0x8e240188  lw          $a0, 0x188($s1)
    ctx->pc = 0x13c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x13c6bc: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x13c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x13c6c0: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x13c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x13c6c4: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x13c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
    // 0x13c6c8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13C6C8u;
    {
        const bool branch_taken_0x13c6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6C8u;
        // 0x13c6cc: 0xae20017c  sw          $zero, 0x17C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6c8) {
            ctx->pc = 0x13C718u;
            goto label_13c718;
        }
    }
    ctx->pc = 0x13C6D0u;
    // 0x13c6d0: 0xc086cea  jal         func_21B3A8
    ctx->pc = 0x13C6D0u;
    SET_GPR_U32(ctx, 31, 0x13C6D8u);
    ctx->pc = 0x21B3A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B3A8u, 0x13C6D0u, 0x13C6D8u)) {
        return;
    }
    ctx->pc = 0x13C6D8u;
label_13c6d8:
    // 0x13c6d8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x13C6D8u;
    {
        const bool branch_taken_0x13c6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6d8) {
            ctx->pc = 0x13C6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C6D8u;
            // 0x13c6dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C71Cu;
            goto label_13c71c;
        }
    }
    ctx->pc = 0x13C6E0u;
    // 0x13c6e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x13c6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c6e4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x13c6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c6e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13c6e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13c6ec: 0xe6200148  swc1        $f0, 0x148($s1)
    ctx->pc = 0x13c6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x13c6f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13c6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c6f4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x13c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c6f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13c6f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13c6fc: 0xe621014c  swc1        $f1, 0x14C($s1)
    ctx->pc = 0x13c6fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 332), bits); }
    // 0x13c700: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x13c700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c704: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x13c704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c708: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13c708u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13c70c: 0xe6200150  swc1        $f0, 0x150($s1)
    ctx->pc = 0x13c70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x13c710: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x13c710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c714: 0xe6210144  swc1        $f1, 0x144($s1)
    ctx->pc = 0x13c714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
label_13c718:
    // 0x13c718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c71c:
    // 0x13c71c: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x13c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x13c720: 0xae200190  sw          $zero, 0x190($s1)
    ctx->pc = 0x13c720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 0));
    // 0x13c724: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13c724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13c728: 0xae2200ec  sw          $v0, 0xEC($s1)
    ctx->pc = 0x13c728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
    // 0x13c72c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13c72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13c730: 0x24a5f888  addiu       $a1, $a1, -0x778
    ctx->pc = 0x13c730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    // 0x13c734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13c734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c738: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x13C738u;
    SET_GPR_U32(ctx, 31, 0x13C740u);
    ctx->pc = 0x13C73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C738u;
    // 0x13c73c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x13C738u, 0x13C740u)) {
        return;
    }
    ctx->pc = 0x13C740u;
label_13c740:
    // 0x13c740: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13c740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c744: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13c744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c74c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c750: 0x3e00008  jr          $ra
    ctx->pc = 0x13C750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C750u;
        // 0x13c754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C758u;
}

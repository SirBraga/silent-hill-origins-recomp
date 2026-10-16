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

// Function: sub_00128428
// Address: 0x128428 - 0x1285a8
void sub_00128428_0x128428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128428_0x128428");
#endif

    switch (ctx->pc) {
        case 0x128448u: goto label_128448;
        case 0x128464u: goto label_128464;
        case 0x128480u: goto label_128480;
        case 0x1284bcu: goto label_1284bc;
        case 0x1284c4u: goto label_1284c4;
        case 0x1284d4u: goto label_1284d4;
        case 0x1284dcu: goto label_1284dc;
        case 0x1284ecu: goto label_1284ec;
        case 0x1284f4u: goto label_1284f4;
        case 0x128504u: goto label_128504;
        case 0x12850cu: goto label_12850c;
        case 0x12851cu: goto label_12851c;
        case 0x128524u: goto label_128524;
        case 0x128534u: goto label_128534;
        case 0x12853cu: goto label_12853c;
        case 0x12854cu: goto label_12854c;
        case 0x12855cu: goto label_12855c;
        case 0x12856cu: goto label_12856c;
        case 0x12857cu: goto label_12857c;
        case 0x12858cu: goto label_12858c;
        default: break;
    }

    ctx->pc = 0x128428u;

    // 0x128428: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x128428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12842c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x128430: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x128430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x128434: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x128434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x128438: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x128438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x12843c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12843cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128440: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x128440u;
    SET_GPR_U32(ctx, 31, 0x128448u);
    ctx->pc = 0x128444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128440u;
    // 0x128444: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x128440u, 0x128448u)) {
        return;
    }
    ctx->pc = 0x128448u;
label_128448:
    // 0x128448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12844c: 0x1080004f  beqz        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x12844Cu;
    {
        const bool branch_taken_0x12844c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x128450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12844Cu;
        // 0x128450: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12844c) {
            ctx->pc = 0x12858Cu;
            goto label_12858c;
        }
    }
    ctx->pc = 0x128454u;
    // 0x128454: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x128454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128458: 0x8c45cf68  lw          $a1, -0x3098($v0)
    ctx->pc = 0x128458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954856)));
    // 0x12845c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x12845Cu;
    SET_GPR_U32(ctx, 31, 0x128464u);
    ctx->pc = 0x128460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12845Cu;
    // 0x128460: 0x2453cf68  addiu       $s3, $v0, -0x3098 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x12845Cu, 0x128464u)) {
        return;
    }
    ctx->pc = 0x128464u;
label_128464:
    // 0x128464: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x128464u;
    {
        const bool branch_taken_0x128464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128464u;
        // 0x128468: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128464) {
            ctx->pc = 0x128590u;
            goto label_128590;
        }
    }
    ctx->pc = 0x12846Cu;
    // 0x12846c: 0x8e452c30  lw          $a1, 0x2C30($s2)
    ctx->pc = 0x12846cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11312)));
    // 0x128470: 0x10a00047  beqz        $a1, . + 4 + (0x47 << 2)
    ctx->pc = 0x128470u;
    {
        const bool branch_taken_0x128470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x128474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128470u;
        // 0x128474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128470) {
            ctx->pc = 0x128590u;
            goto label_128590;
        }
    }
    ctx->pc = 0x128478u;
    // 0x128478: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x128478u;
    SET_GPR_U32(ctx, 31, 0x128480u);
    ctx->pc = 0x12847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128478u;
    // 0x12847c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x128478u, 0x128480u)) {
        return;
    }
    ctx->pc = 0x128480u;
label_128480:
    // 0x128480: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x128480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128484: 0x12200042  beqz        $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x128484u;
    {
        const bool branch_taken_0x128484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x128488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128484u;
        // 0x128488: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128484) {
            ctx->pc = 0x128590u;
            goto label_128590;
        }
    }
    ctx->pc = 0x12848Cu;
    // 0x12848c: 0xc6410c1c  lwc1        $f1, 0xC1C($s2)
    ctx->pc = 0x12848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128490: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x128490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128494: 0x0  nop
    ctx->pc = 0x128494u;
    // NOP
    // 0x128498: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12849c: 0x0  nop
    ctx->pc = 0x12849cu;
    // NOP
    // 0x1284a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1284A0u;
    {
        const bool branch_taken_0x1284a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1284A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284A0u;
        // 0x1284a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284a0) {
            ctx->pc = 0x1284ACu;
            goto label_1284ac;
        }
    }
    ctx->pc = 0x1284A8u;
    // 0x1284a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1284a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1284ac:
    // 0x1284ac: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1284acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1284b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1284b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284b4: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1284B4u;
    SET_GPR_U32(ctx, 31, 0x1284BCu);
    ctx->pc = 0x1284B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284B4u;
    // 0x1284b8: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x1284B4u, 0x1284BCu)) {
        return;
    }
    ctx->pc = 0x1284BCu;
label_1284bc:
    // 0x1284bc: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1284BCu;
    SET_GPR_U32(ctx, 31, 0x1284C4u);
    ctx->pc = 0x1284C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284BCu;
    // 0x1284c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1284BCu, 0x1284C4u)) {
        return;
    }
    ctx->pc = 0x1284C4u;
label_1284c4:
    // 0x1284c4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1284c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1284c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1284c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284cc: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x1284CCu;
    SET_GPR_U32(ctx, 31, 0x1284D4u);
    ctx->pc = 0x1284D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284CCu;
    // 0x1284d0: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x1284CCu, 0x1284D4u)) {
        return;
    }
    ctx->pc = 0x1284D4u;
label_1284d4:
    // 0x1284d4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1284D4u;
    SET_GPR_U32(ctx, 31, 0x1284DCu);
    ctx->pc = 0x1284D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284D4u;
    // 0x1284d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1284D4u, 0x1284DCu)) {
        return;
    }
    ctx->pc = 0x1284DCu;
label_1284dc:
    // 0x1284dc: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x1284dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1284e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1284e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284e4: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x1284E4u;
    SET_GPR_U32(ctx, 31, 0x1284ECu);
    ctx->pc = 0x1284E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284E4u;
    // 0x1284e8: 0x8e65000c  lw          $a1, 0xC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x1284E4u, 0x1284ECu)) {
        return;
    }
    ctx->pc = 0x1284ECu;
label_1284ec:
    // 0x1284ec: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1284ECu;
    SET_GPR_U32(ctx, 31, 0x1284F4u);
    ctx->pc = 0x1284F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284ECu;
    // 0x1284f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1284ECu, 0x1284F4u)) {
        return;
    }
    ctx->pc = 0x1284F4u;
label_1284f4:
    // 0x1284f4: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x1284f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1284f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1284f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284fc: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x1284FCu;
    SET_GPR_U32(ctx, 31, 0x128504u);
    ctx->pc = 0x128500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284FCu;
    // 0x128500: 0x8e650010  lw          $a1, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x1284FCu, 0x128504u)) {
        return;
    }
    ctx->pc = 0x128504u;
label_128504:
    // 0x128504: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x128504u;
    SET_GPR_U32(ctx, 31, 0x12850Cu);
    ctx->pc = 0x128508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128504u;
    // 0x128508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x128504u, 0x12850Cu)) {
        return;
    }
    ctx->pc = 0x12850Cu;
label_12850c:
    // 0x12850c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x12850cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128514: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x128514u;
    SET_GPR_U32(ctx, 31, 0x12851Cu);
    ctx->pc = 0x128518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128514u;
    // 0x128518: 0x8e650014  lw          $a1, 0x14($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x128514u, 0x12851Cu)) {
        return;
    }
    ctx->pc = 0x12851Cu;
label_12851c:
    // 0x12851c: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x12851Cu;
    SET_GPR_U32(ctx, 31, 0x128524u);
    ctx->pc = 0x128520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12851Cu;
    // 0x128520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x12851Cu, 0x128524u)) {
        return;
    }
    ctx->pc = 0x128524u;
label_128524:
    // 0x128524: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x128524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12852c: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x12852Cu;
    SET_GPR_U32(ctx, 31, 0x128534u);
    ctx->pc = 0x128530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12852Cu;
    // 0x128530: 0x8e650018  lw          $a1, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x12852Cu, 0x128534u)) {
        return;
    }
    ctx->pc = 0x128534u;
label_128534:
    // 0x128534: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x128534u;
    SET_GPR_U32(ctx, 31, 0x12853Cu);
    ctx->pc = 0x128538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128534u;
    // 0x128538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x128534u, 0x12853Cu)) {
        return;
    }
    ctx->pc = 0x12853Cu;
label_12853c:
    // 0x12853c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x12853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128544: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x128544u;
    SET_GPR_U32(ctx, 31, 0x12854Cu);
    ctx->pc = 0x128548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128544u;
    // 0x128548: 0x8e65001c  lw          $a1, 0x1C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x128544u, 0x12854Cu)) {
        return;
    }
    ctx->pc = 0x12854Cu;
label_12854c:
    // 0x12854c: 0xc64c0d54  lwc1        $f12, 0xD54($s2)
    ctx->pc = 0x12854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128554: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x128554u;
    SET_GPR_U32(ctx, 31, 0x12855Cu);
    ctx->pc = 0x128558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128554u;
    // 0x128558: 0x8e650020  lw          $a1, 0x20($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x128554u, 0x12855Cu)) {
        return;
    }
    ctx->pc = 0x12855Cu;
label_12855c:
    // 0x12855c: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x12855cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x128560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128564: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x128564u;
    SET_GPR_U32(ctx, 31, 0x12856Cu);
    ctx->pc = 0x128568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128564u;
    // 0x128568: 0x8e4627dc  lw          $a2, 0x27DC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x128564u, 0x12856Cu)) {
        return;
    }
    ctx->pc = 0x12856Cu;
label_12856c:
    // 0x12856c: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x12856cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x128570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128574: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x128574u;
    SET_GPR_U32(ctx, 31, 0x12857Cu);
    ctx->pc = 0x128578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128574u;
    // 0x128578: 0x8e4627f8  lw          $a2, 0x27F8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x128574u, 0x12857Cu)) {
        return;
    }
    ctx->pc = 0x12857Cu;
label_12857c:
    // 0x12857c: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x12857cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x128580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128584: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x128584u;
    SET_GPR_U32(ctx, 31, 0x12858Cu);
    ctx->pc = 0x128588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128584u;
    // 0x128588: 0x8e462814  lw          $a2, 0x2814($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x128584u, 0x12858Cu)) {
        return;
    }
    ctx->pc = 0x12858Cu;
label_12858c:
    // 0x12858c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12858cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_128590:
    // 0x128590: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x128590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128598: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x128598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12859c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12859cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1285a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1285A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1285A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285A0u;
        // 0x1285a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1285A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1285A8u;
}

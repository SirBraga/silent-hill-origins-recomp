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

// Function: sub_00293450
// Address: 0x293450 - 0x2936a8
void sub_00293450_0x293450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293450_0x293450");
#endif

    switch (ctx->pc) {
        case 0x2934d8u: goto label_2934d8;
        case 0x293578u: goto label_293578;
        case 0x293584u: goto label_293584;
        case 0x2935a8u: goto label_2935a8;
        case 0x293628u: goto label_293628;
        default: break;
    }

    ctx->pc = 0x293450u;

    // 0x293450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x293450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x293454: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x293454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x293458: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x293458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29345c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29345cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293460: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x293460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x293464: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x293464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x293468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29346c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29346cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293470: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x293470u;
    {
        const bool branch_taken_0x293470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x293474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293470u;
        // 0x293474: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293470) {
            ctx->pc = 0x293560u;
            goto label_293560;
        }
    }
    ctx->pc = 0x293478u;
    // 0x293478: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
    ctx->pc = 0x293478u;
    {
        const bool branch_taken_0x293478 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293478u;
        // 0x29347c: 0x24020195  addiu       $v0, $zero, 0x195 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293478) {
            ctx->pc = 0x293568u;
            goto label_293568;
        }
    }
    ctx->pc = 0x293480u;
    // 0x293480: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x293480u;
    {
        const bool branch_taken_0x293480 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x293480) {
            ctx->pc = 0x293568u;
            goto label_293568;
        }
    }
    ctx->pc = 0x293488u;
    // 0x293488: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x293488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29348c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x29348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293490: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x293490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x293494: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x293494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293498: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x293498u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x29349c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x29349cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2934a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2934a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2934a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2934a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2934a8: 0x46000304  c1          0x304
    ctx->pc = 0x2934a8u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2934ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2934acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2934b0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2934b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2934b4: 0x0  nop
    ctx->pc = 0x2934b4u;
    // NOP
    // 0x2934b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2934B8u;
    {
        const bool branch_taken_0x2934b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2934BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934B8u;
        // 0x2934bc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2934b8) {
            ctx->pc = 0x2934D0u;
            goto label_2934d0;
        }
    }
    ctx->pc = 0x2934C0u;
    // 0x2934c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2934c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2934c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2934c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2934c8: 0x460c0503  div.s       $f20, $f0, $f12
    ctx->pc = 0x2934c8u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x2934cc: 0x0  nop
    ctx->pc = 0x2934ccu;
    // NOP
label_2934d0:
    // 0x2934d0: 0xc09b3a0  jal         func_26CE80
    ctx->pc = 0x2934D0u;
    SET_GPR_U32(ctx, 31, 0x2934D8u);
    ctx->pc = 0x2934D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934D0u;
    // 0x2934d4: 0xc60d000c  lwc1        $f13, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CE80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CE80u, 0x2934D0u, 0x2934D8u)) {
        return;
    }
    ctx->pc = 0x2934D8u;
label_2934d8:
    // 0x2934d8: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2934d8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2934dc: 0xc7808080  lwc1        $f0, -0x7F80($gp)
    ctx->pc = 0x2934dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2934e0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2934e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2934e4: 0x0  nop
    ctx->pc = 0x2934e4u;
    // NOP
    // 0x2934e8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2934E8u;
    {
        const bool branch_taken_0x2934e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2934ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934E8u;
        // 0x2934ec: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2934e8) {
            ctx->pc = 0x293530u;
            goto label_293530;
        }
    }
    ctx->pc = 0x2934F0u;
    // 0x2934f0: 0x4600a087  neg.s       $f2, $f20
    ctx->pc = 0x2934f0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
    // 0x2934f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2934f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2934f8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2934f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2934fc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2934fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293500: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x293500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x293504: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x293504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x293508: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x293508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29350c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29350cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x293510: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x293510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x293514: 0xc7818084  lwc1        $f1, -0x7F7C($gp)
    ctx->pc = 0x293514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293518: 0xc7808088  lwc1        $f0, -0x7F78($gp)
    ctx->pc = 0x293518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29351c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x29351cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x293520: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x293524: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x293524u;
    {
        const bool branch_taken_0x293524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293524u;
        // 0x293528: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293524) {
            ctx->pc = 0x293588u;
            goto label_293588;
        }
    }
    ctx->pc = 0x29352Cu;
    // 0x29352c: 0x0  nop
    ctx->pc = 0x29352cu;
    // NOP
label_293530:
    // 0x293530: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x293530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x293534: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x293534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x293538: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x293538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29353c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x29353cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x293540: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x293540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x293544: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x293544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293548: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x293548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29354c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x29354cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x293550: 0xc781808c  lwc1        $f1, -0x7F74($gp)
    ctx->pc = 0x293550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293554: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x293554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x293558: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x293558u;
    {
        const bool branch_taken_0x293558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293558u;
        // 0x29355c: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293558) {
            ctx->pc = 0x293588u;
            goto label_293588;
        }
    }
    ctx->pc = 0x293560u;
label_293560:
    // 0x293560: 0x24020195  addiu       $v0, $zero, 0x195
    ctx->pc = 0x293560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
    // 0x293564: 0x0  nop
    ctx->pc = 0x293564u;
    // NOP
label_293568:
    // 0x293568: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x293568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x29356c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29356cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x293570: 0xc092848  jal         func_24A120
    ctx->pc = 0x293570u;
    SET_GPR_U32(ctx, 31, 0x293578u);
    ctx->pc = 0x293574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293570u;
    // 0x293574: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x293570u, 0x293578u)) {
        return;
    }
    ctx->pc = 0x293578u;
label_293578:
    // 0x293578: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x293578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29357c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x29357Cu;
    SET_GPR_U32(ctx, 31, 0x293584u);
    ctx->pc = 0x293580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29357Cu;
    // 0x293580: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x29357Cu, 0x293584u)) {
        return;
    }
    ctx->pc = 0x293584u;
label_293584:
    // 0x293584: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x293584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293588:
    // 0x293588: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x293588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29358c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29358cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293590: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x293590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x293594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x293598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29359c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x29359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2935a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2935A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2935A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935A0u;
        // 0x2935a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2935A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2935A8u;
label_2935a8:
    // 0x2935a8: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2935a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2935ac: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x2935acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2935b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2935b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2935b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2935b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2935b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2935b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2935bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2935bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2935c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2935c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2935c4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2935c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2935c8: 0x46000004  c1          0x4
    ctx->pc = 0x2935c8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2935cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2935ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2935d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2935d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2935d4: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x2935d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2935d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2935d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935dc: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x2935dcu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[0]);
    // 0x2935e0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2935e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2935e4: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2935e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2935e8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2935e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2935ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2935ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2935f0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2935f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2935f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2935f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2935f8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2935f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2935fc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2935fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293600: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x293600u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293604: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x293604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x293608: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x293608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x29360c: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x29360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293610: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x293610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293614: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x293614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x293618: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x293618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29361c: 0x3e00008  jr          $ra
    ctx->pc = 0x29361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29361Cu;
        // 0x293620: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293624u;
    // 0x293624: 0x0  nop
    ctx->pc = 0x293624u;
    // NOP
label_293628:
    // 0x293628: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x293628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29362c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x29362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293630: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x293630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293634: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x293634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x293638: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29363c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29363cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x293640: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x293640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x293644: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x293644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x293648: 0x46000004  c1          0x4
    ctx->pc = 0x293648u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x29364c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29364cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x293650: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x293650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x293654: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x293654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x293658: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x293658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29365c: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x29365cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[0]);
    // 0x293660: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x293660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x293664: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x293664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293668: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x293668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29366c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29366cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x293670: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x293670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x293674: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x293674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x293678: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x293678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29367c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x29367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293680: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x293680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293684: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x293684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x293688: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x293688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x29368c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x29368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293690: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x293690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293694: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x293694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x293698: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x293698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29369c: 0x3e00008  jr          $ra
    ctx->pc = 0x29369Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2936A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29369Cu;
        // 0x2936a0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29369Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2936A4u;
    // 0x2936a4: 0x0  nop
    ctx->pc = 0x2936a4u;
    // NOP
    ctx->pc = 0x2936a8u;
}

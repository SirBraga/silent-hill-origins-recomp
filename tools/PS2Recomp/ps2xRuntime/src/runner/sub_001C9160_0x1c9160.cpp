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

// Function: sub_001C9160
// Address: 0x1c9160 - 0x1c9310
void sub_001C9160_0x1c9160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9160_0x1c9160");
#endif

    switch (ctx->pc) {
        case 0x1c9160u: goto label_1c9160;
        case 0x1c9164u: goto label_1c9164;
        case 0x1c9168u: goto label_1c9168;
        case 0x1c916cu: goto label_1c916c;
        case 0x1c9170u: goto label_1c9170;
        case 0x1c9174u: goto label_1c9174;
        case 0x1c9178u: goto label_1c9178;
        case 0x1c917cu: goto label_1c917c;
        case 0x1c9180u: goto label_1c9180;
        case 0x1c9184u: goto label_1c9184;
        case 0x1c9188u: goto label_1c9188;
        case 0x1c918cu: goto label_1c918c;
        case 0x1c9190u: goto label_1c9190;
        case 0x1c9194u: goto label_1c9194;
        case 0x1c9198u: goto label_1c9198;
        case 0x1c919cu: goto label_1c919c;
        case 0x1c91a0u: goto label_1c91a0;
        case 0x1c91a4u: goto label_1c91a4;
        case 0x1c91a8u: goto label_1c91a8;
        case 0x1c91acu: goto label_1c91ac;
        case 0x1c91b0u: goto label_1c91b0;
        case 0x1c91b4u: goto label_1c91b4;
        case 0x1c91b8u: goto label_1c91b8;
        case 0x1c91bcu: goto label_1c91bc;
        case 0x1c91c0u: goto label_1c91c0;
        case 0x1c91c4u: goto label_1c91c4;
        case 0x1c91c8u: goto label_1c91c8;
        case 0x1c91ccu: goto label_1c91cc;
        case 0x1c91d0u: goto label_1c91d0;
        case 0x1c91d4u: goto label_1c91d4;
        case 0x1c91d8u: goto label_1c91d8;
        case 0x1c91dcu: goto label_1c91dc;
        case 0x1c91e0u: goto label_1c91e0;
        case 0x1c91e4u: goto label_1c91e4;
        case 0x1c91e8u: goto label_1c91e8;
        case 0x1c91ecu: goto label_1c91ec;
        case 0x1c91f0u: goto label_1c91f0;
        case 0x1c91f4u: goto label_1c91f4;
        case 0x1c91f8u: goto label_1c91f8;
        case 0x1c91fcu: goto label_1c91fc;
        case 0x1c9200u: goto label_1c9200;
        case 0x1c9204u: goto label_1c9204;
        case 0x1c9208u: goto label_1c9208;
        case 0x1c920cu: goto label_1c920c;
        case 0x1c9210u: goto label_1c9210;
        case 0x1c9214u: goto label_1c9214;
        case 0x1c9218u: goto label_1c9218;
        case 0x1c921cu: goto label_1c921c;
        case 0x1c9220u: goto label_1c9220;
        case 0x1c9224u: goto label_1c9224;
        case 0x1c9228u: goto label_1c9228;
        case 0x1c922cu: goto label_1c922c;
        case 0x1c9230u: goto label_1c9230;
        case 0x1c9234u: goto label_1c9234;
        case 0x1c9238u: goto label_1c9238;
        case 0x1c923cu: goto label_1c923c;
        case 0x1c9240u: goto label_1c9240;
        case 0x1c9244u: goto label_1c9244;
        case 0x1c9248u: goto label_1c9248;
        case 0x1c924cu: goto label_1c924c;
        case 0x1c9250u: goto label_1c9250;
        case 0x1c9254u: goto label_1c9254;
        case 0x1c9258u: goto label_1c9258;
        case 0x1c925cu: goto label_1c925c;
        case 0x1c9260u: goto label_1c9260;
        case 0x1c9264u: goto label_1c9264;
        case 0x1c9268u: goto label_1c9268;
        case 0x1c926cu: goto label_1c926c;
        case 0x1c9270u: goto label_1c9270;
        case 0x1c9274u: goto label_1c9274;
        case 0x1c9278u: goto label_1c9278;
        case 0x1c927cu: goto label_1c927c;
        case 0x1c9280u: goto label_1c9280;
        case 0x1c9284u: goto label_1c9284;
        case 0x1c9288u: goto label_1c9288;
        case 0x1c928cu: goto label_1c928c;
        case 0x1c9290u: goto label_1c9290;
        case 0x1c9294u: goto label_1c9294;
        case 0x1c9298u: goto label_1c9298;
        case 0x1c929cu: goto label_1c929c;
        case 0x1c92a0u: goto label_1c92a0;
        case 0x1c92a4u: goto label_1c92a4;
        case 0x1c92a8u: goto label_1c92a8;
        case 0x1c92acu: goto label_1c92ac;
        case 0x1c92b0u: goto label_1c92b0;
        case 0x1c92b4u: goto label_1c92b4;
        case 0x1c92b8u: goto label_1c92b8;
        case 0x1c92bcu: goto label_1c92bc;
        case 0x1c92c0u: goto label_1c92c0;
        case 0x1c92c4u: goto label_1c92c4;
        case 0x1c92c8u: goto label_1c92c8;
        case 0x1c92ccu: goto label_1c92cc;
        case 0x1c92d0u: goto label_1c92d0;
        case 0x1c92d4u: goto label_1c92d4;
        case 0x1c92d8u: goto label_1c92d8;
        case 0x1c92dcu: goto label_1c92dc;
        case 0x1c92e0u: goto label_1c92e0;
        case 0x1c92e4u: goto label_1c92e4;
        case 0x1c92e8u: goto label_1c92e8;
        case 0x1c92ecu: goto label_1c92ec;
        case 0x1c92f0u: goto label_1c92f0;
        case 0x1c92f4u: goto label_1c92f4;
        case 0x1c92f8u: goto label_1c92f8;
        case 0x1c92fcu: goto label_1c92fc;
        case 0x1c9300u: goto label_1c9300;
        case 0x1c9304u: goto label_1c9304;
        case 0x1c9308u: goto label_1c9308;
        case 0x1c930cu: goto label_1c930c;
        default: break;
    }

    ctx->pc = 0x1c9160u;

label_1c9160:
    // 0x1c9160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c9164:
    // 0x1c9164: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c9164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c9168:
    // 0x1c9168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c916c:
    // 0x1c916c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c916cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9170:
    // 0x1c9170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c9174:
    // 0x1c9174: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x1c9174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_1c9178:
    // 0x1c9178: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_1c917c:
    if (ctx->pc == 0x1C917Cu) {
        ctx->pc = 0x1C917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9178u;
        // 0x1c917c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9180u;
        goto label_1c9180;
    }
    ctx->pc = 0x1C9178u;
    {
        const bool branch_taken_0x1c9178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9178u;
        // 0x1c917c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9178) {
            ctx->pc = 0x1C9210u;
            goto label_1c9210;
        }
    }
    ctx->pc = 0x1C9180u;
label_1c9180:
    // 0x1c9180: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1c9180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1c9184:
    // 0x1c9184: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_1c9188:
    if (ctx->pc == 0x1C9188u) {
        ctx->pc = 0x1C9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9184u;
        // 0x1c9188: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C918Cu;
        goto label_1c918c;
    }
    ctx->pc = 0x1C9184u;
    {
        const bool branch_taken_0x1c9184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9184) {
            ctx->pc = 0x1C9188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9184u;
            // 0x1c9188: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C91F0u;
            goto label_1c91f0;
        }
    }
    ctx->pc = 0x1C918Cu;
label_1c918c:
    // 0x1c918c: 0xc600027c  lwc1        $f0, 0x27C($s0)
    ctx->pc = 0x1c918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9190:
    // 0x1c9190: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1c9190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9194:
    // 0x1c9194: 0x8e050260  lw          $a1, 0x260($s0)
    ctx->pc = 0x1c9194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c9198:
    // 0x1c9198: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c9198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c919c:
    // 0x1c919c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1c91a0:
    if (ctx->pc == 0x1C91A0u) {
        ctx->pc = 0x1C91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C919Cu;
        // 0x1c91a0: 0xe600027c  swc1        $f0, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C91A4u;
        goto label_1c91a4;
    }
    ctx->pc = 0x1C919Cu;
    {
        const bool branch_taken_0x1c919c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C919Cu;
        // 0x1c91a0: 0xe600027c  swc1        $f0, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c919c) {
            ctx->pc = 0x1C91B8u;
            goto label_1c91b8;
        }
    }
    ctx->pc = 0x1C91A4u;
label_1c91a4:
    // 0x1c91a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1c91a8:
    // 0x1c91a8: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1c91a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c91ac:
    // 0x1c91ac: 0x8c448668  lw          $a0, -0x7998($v0)
    ctx->pc = 0x1c91acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
label_1c91b0:
    // 0x1c91b0: 0xc05971c  jal         func_165C70
label_1c91b4:
    if (ctx->pc == 0x1C91B4u) {
        ctx->pc = 0x1C91B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91B0u;
        // 0x1c91b4: 0x8e0602b0  lw          $a2, 0x2B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C91B8u;
        goto label_1c91b8;
    }
    ctx->pc = 0x1C91B0u;
    SET_GPR_U32(ctx, 31, 0x1C91B8u);
    ctx->pc = 0x1C91B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C91B0u;
    // 0x1c91b4: 0x8e0602b0  lw          $a2, 0x2B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165C70u, 0x1C91B0u, 0x1C91B8u)) {
        return;
    }
    ctx->pc = 0x1C91B8u;
label_1c91b8:
    // 0x1c91b8: 0xc601027c  lwc1        $f1, 0x27C($s0)
    ctx->pc = 0x1c91b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c91bc:
    // 0x1c91bc: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x1c91bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
label_1c91c0:
    // 0x1c91c0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c91c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1c91c4:
    // 0x1c91c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c91c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c91c8:
    // 0x1c91c8: 0x0  nop
    ctx->pc = 0x1c91c8u;
    // NOP
label_1c91cc:
    // 0x1c91cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c91ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c91d0:
    // 0x1c91d0: 0x0  nop
    ctx->pc = 0x1c91d0u;
    // NOP
label_1c91d4:
    // 0x1c91d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1c91d8:
    if (ctx->pc == 0x1C91D8u) {
        ctx->pc = 0x1C91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91D4u;
        // 0x1c91d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C91DCu;
        goto label_1c91dc;
    }
    ctx->pc = 0x1C91D4u;
    {
        const bool branch_taken_0x1c91d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91D4u;
        // 0x1c91d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91d4) {
            ctx->pc = 0x1C91ECu;
            goto label_1c91ec;
        }
    }
    ctx->pc = 0x1C91DCu;
label_1c91dc:
    // 0x1c91dc: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1c91dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
label_1c91e0:
    // 0x1c91e0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c91e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c91e4:
    // 0x1c91e4: 0xc06bede  jal         func_1AFB78
label_1c91e8:
    if (ctx->pc == 0x1C91E8u) {
        ctx->pc = 0x1C91E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91E4u;
        // 0x1c91e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C91ECu;
        goto label_1c91ec;
    }
    ctx->pc = 0x1C91E4u;
    SET_GPR_U32(ctx, 31, 0x1C91ECu);
    ctx->pc = 0x1C91E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C91E4u;
    // 0x1c91e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1C91E4u, 0x1C91ECu)) {
        return;
    }
    ctx->pc = 0x1C91ECu;
label_1c91ec:
    // 0x1c91ec: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1c91ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c91f0:
    // 0x1c91f0: 0xc0724c4  jal         func_1C9310
label_1c91f4:
    if (ctx->pc == 0x1C91F4u) {
        ctx->pc = 0x1C91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91F0u;
        // 0x1c91f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C91F8u;
        goto label_1c91f8;
    }
    ctx->pc = 0x1C91F0u;
    SET_GPR_U32(ctx, 31, 0x1C91F8u);
    ctx->pc = 0x1C91F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C91F0u;
    // 0x1c91f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C9310u, 0x1C91F0u, 0x1C91F8u)) {
        return;
    }
    ctx->pc = 0x1C91F8u;
label_1c91f8:
    // 0x1c91f8: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1c91f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c91fc:
    // 0x1c91fc: 0xc0729b4  jal         func_1CA6D0
label_1c9200:
    if (ctx->pc == 0x1C9200u) {
        ctx->pc = 0x1C9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91FCu;
        // 0x1c9200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9204u;
        goto label_1c9204;
    }
    ctx->pc = 0x1C91FCu;
    SET_GPR_U32(ctx, 31, 0x1C9204u);
    ctx->pc = 0x1C9200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C91FCu;
    // 0x1c9200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CA6D0u, 0x1C91FCu, 0x1C9204u)) {
        return;
    }
    ctx->pc = 0x1C9204u;
label_1c9204:
    // 0x1c9204: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1c9204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9208:
    // 0x1c9208: 0xc0728f2  jal         func_1CA3C8
label_1c920c:
    if (ctx->pc == 0x1C920Cu) {
        ctx->pc = 0x1C920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9208u;
        // 0x1c920c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9210u;
        goto label_1c9210;
    }
    ctx->pc = 0x1C9208u;
    SET_GPR_U32(ctx, 31, 0x1C9210u);
    ctx->pc = 0x1C920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9208u;
    // 0x1c920c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CA3C8u, 0x1C9208u, 0x1C9210u)) {
        return;
    }
    ctx->pc = 0x1C9210u;
label_1c9210:
    // 0x1c9210: 0x8e0203c4  lw          $v0, 0x3C4($s0)
    ctx->pc = 0x1c9210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
label_1c9214:
    // 0x1c9214: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c9214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1c9218:
    // 0x1c9218: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_1c921c:
    if (ctx->pc == 0x1C921Cu) {
        ctx->pc = 0x1C921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9218u;
        // 0x1c921c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9220u;
        goto label_1c9220;
    }
    ctx->pc = 0x1C9218u;
    {
        const bool branch_taken_0x1c9218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9218) {
            ctx->pc = 0x1C921Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9218u;
            // 0x1c921c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9300u;
            goto label_1c9300;
        }
    }
    ctx->pc = 0x1C9220u;
label_1c9220:
    // 0x1c9220: 0x8e0203a8  lw          $v0, 0x3A8($s0)
    ctx->pc = 0x1c9220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
label_1c9224:
    // 0x1c9224: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c9224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c9228:
    // 0x1c9228: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c9228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c922c:
    // 0x1c922c: 0x8c4303cc  lw          $v1, 0x3CC($v0)
    ctx->pc = 0x1c922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
label_1c9230:
    // 0x1c9230: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x1c9230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_1c9234:
    // 0x1c9234: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1c9238:
    if (ctx->pc == 0x1C9238u) {
        ctx->pc = 0x1C9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9234u;
        // 0x1c9238: 0x8e060298  lw          $a2, 0x298($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C923Cu;
        goto label_1c923c;
    }
    ctx->pc = 0x1C9234u;
    {
        const bool branch_taken_0x1c9234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9234u;
        // 0x1c9238: 0x8e060298  lw          $a2, 0x298($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9234) {
            ctx->pc = 0x1C92BCu;
            goto label_1c92bc;
        }
    }
    ctx->pc = 0x1C923Cu;
label_1c923c:
    // 0x1c923c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c923cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9240:
    // 0x1c9240: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c9240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9244:
    // 0x1c9244: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c9244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c9248:
    // 0x1c9248: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c9248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c924c:
    // 0x1c924c: 0x60f809  jalr        $v1
label_1c9250:
    if (ctx->pc == 0x1C9250u) {
        ctx->pc = 0x1C9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C924Cu;
        // 0x1c9250: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9254u;
        goto label_1c9254;
    }
    ctx->pc = 0x1C924Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9254u);
        ctx->pc = 0x1C9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C924Cu;
        // 0x1c9250: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C924Cu, 0x1C9254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9254u;
label_1c9254:
    // 0x1c9254: 0x8e06029c  lw          $a2, 0x29C($s0)
    ctx->pc = 0x1c9254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_1c9258:
    // 0x1c9258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c925c:
    // 0x1c925c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9260:
    // 0x1c9260: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c9260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c9264:
    // 0x1c9264: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c9264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c9268:
    // 0x1c9268: 0x60f809  jalr        $v1
label_1c926c:
    if (ctx->pc == 0x1C926Cu) {
        ctx->pc = 0x1C926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9268u;
        // 0x1c926c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9270u;
        goto label_1c9270;
    }
    ctx->pc = 0x1C9268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9270u);
        ctx->pc = 0x1C926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9268u;
        // 0x1c926c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9268u, 0x1C9270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9270u;
label_1c9270:
    // 0x1c9270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9274:
    // 0x1c9274: 0xc072ab0  jal         func_1CAAC0
label_1c9278:
    if (ctx->pc == 0x1C9278u) {
        ctx->pc = 0x1C9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9274u;
        // 0x1c9278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C927Cu;
        goto label_1c927c;
    }
    ctx->pc = 0x1C9274u;
    SET_GPR_U32(ctx, 31, 0x1C927Cu);
    ctx->pc = 0x1C9278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9274u;
    // 0x1c9278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CAAC0u, 0x1C9274u, 0x1C927Cu)) {
        return;
    }
    ctx->pc = 0x1C927Cu;
label_1c927c:
    // 0x1c927c: 0x8e060298  lw          $a2, 0x298($s0)
    ctx->pc = 0x1c927cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_1c9280:
    // 0x1c9280: 0x2605042c  addiu       $a1, $s0, 0x42C
    ctx->pc = 0x1c9280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1068));
label_1c9284:
    // 0x1c9284: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c9284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c9288:
    // 0x1c9288: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1c9288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1c928c:
    // 0x1c928c: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1c928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1c9290:
    // 0x1c9290: 0x60f809  jalr        $v1
label_1c9294:
    if (ctx->pc == 0x1C9294u) {
        ctx->pc = 0x1C9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9290u;
        // 0x1c9294: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9298u;
        goto label_1c9298;
    }
    ctx->pc = 0x1C9290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9298u);
        ctx->pc = 0x1C9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9290u;
        // 0x1c9294: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9290u, 0x1C9298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9298u;
label_1c9298:
    // 0x1c9298: 0x8e06029c  lw          $a2, 0x29C($s0)
    ctx->pc = 0x1c9298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_1c929c:
    // 0x1c929c: 0x26050428  addiu       $a1, $s0, 0x428
    ctx->pc = 0x1c929cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1064));
label_1c92a0:
    // 0x1c92a0: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c92a4:
    // 0x1c92a4: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1c92a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1c92a8:
    // 0x1c92a8: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1c92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1c92ac:
    // 0x1c92ac: 0x60f809  jalr        $v1
label_1c92b0:
    if (ctx->pc == 0x1C92B0u) {
        ctx->pc = 0x1C92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92ACu;
        // 0x1c92b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92B4u;
        goto label_1c92b4;
    }
    ctx->pc = 0x1C92ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C92B4u);
        ctx->pc = 0x1C92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92ACu;
        // 0x1c92b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C92ACu, 0x1C92B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C92B4u;
label_1c92b4:
    // 0x1c92b4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1c92b8:
    if (ctx->pc == 0x1C92B8u) {
        ctx->pc = 0x1C92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92B4u;
        // 0x1c92b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92BCu;
        goto label_1c92bc;
    }
    ctx->pc = 0x1C92B4u;
    {
        const bool branch_taken_0x1c92b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92B4u;
        // 0x1c92b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92b4) {
            ctx->pc = 0x1C9300u;
            goto label_1c9300;
        }
    }
    ctx->pc = 0x1C92BCu;
label_1c92bc:
    // 0x1c92bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c92bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c92c0:
    // 0x1c92c0: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c92c4:
    // 0x1c92c4: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c92c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c92c8:
    // 0x1c92c8: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c92c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c92cc:
    // 0x1c92cc: 0x60f809  jalr        $v1
label_1c92d0:
    if (ctx->pc == 0x1C92D0u) {
        ctx->pc = 0x1C92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92CCu;
        // 0x1c92d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92D4u;
        goto label_1c92d4;
    }
    ctx->pc = 0x1C92CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C92D4u);
        ctx->pc = 0x1C92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92CCu;
        // 0x1c92d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C92CCu, 0x1C92D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C92D4u;
label_1c92d4:
    // 0x1c92d4: 0x8e06029c  lw          $a2, 0x29C($s0)
    ctx->pc = 0x1c92d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_1c92d8:
    // 0x1c92d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c92d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c92dc:
    // 0x1c92dc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c92e0:
    // 0x1c92e0: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c92e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c92e4:
    // 0x1c92e4: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c92e8:
    // 0x1c92e8: 0x60f809  jalr        $v1
label_1c92ec:
    if (ctx->pc == 0x1C92ECu) {
        ctx->pc = 0x1C92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92E8u;
        // 0x1c92ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92F0u;
        goto label_1c92f0;
    }
    ctx->pc = 0x1C92E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C92F0u);
        ctx->pc = 0x1C92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92E8u;
        // 0x1c92ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C92E8u, 0x1C92F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C92F0u;
label_1c92f0:
    // 0x1c92f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c92f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c92f4:
    // 0x1c92f4: 0xc072ab0  jal         func_1CAAC0
label_1c92f8:
    if (ctx->pc == 0x1C92F8u) {
        ctx->pc = 0x1C92F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92F4u;
        // 0x1c92f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92FCu;
        goto label_1c92fc;
    }
    ctx->pc = 0x1C92F4u;
    SET_GPR_U32(ctx, 31, 0x1C92FCu);
    ctx->pc = 0x1C92F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C92F4u;
    // 0x1c92f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CAAC0u, 0x1C92F4u, 0x1C92FCu)) {
        return;
    }
    ctx->pc = 0x1C92FCu;
label_1c92fc:
    // 0x1c92fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c92fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c9300:
    // 0x1c9300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9304:
    // 0x1c9304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9308:
    // 0x1c9308: 0x3e00008  jr          $ra
label_1c930c:
    if (ctx->pc == 0x1C930Cu) {
        ctx->pc = 0x1C930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9308u;
        // 0x1c930c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9310u;
        goto label_fallthrough_0x1c9308;
    }
    ctx->pc = 0x1C9308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9308u;
        // 0x1c930c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c9308:
    ctx->pc = 0x1C9310u;
}

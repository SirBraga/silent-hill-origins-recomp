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

// Function: sub_002E74C0
// Address: 0x2e74c0 - 0x2e7820
void sub_002E74C0_0x2e74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E74C0_0x2e74c0");
#endif

    switch (ctx->pc) {
        case 0x2e7520u: goto label_2e7520;
        case 0x2e7588u: goto label_2e7588;
        case 0x2e75a8u: goto label_2e75a8;
        case 0x2e76b8u: goto label_2e76b8;
        case 0x2e770cu: goto label_2e770c;
        case 0x2e7740u: goto label_2e7740;
        default: break;
    }

    ctx->pc = 0x2e74c0u;

    // 0x2e74c0: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x2e74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x2e74c4: 0xc78582c0  lwc1        $f5, -0x7D40($gp)
    ctx->pc = 0x2e74c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e74c8: 0x7fb602d0  sq          $s6, 0x2D0($sp)
    ctx->pc = 0x2e74c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 22));
    // 0x2e74cc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2e74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e74d0: 0x7fb702c0  sq          $s7, 0x2C0($sp)
    ctx->pc = 0x2e74d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 23));
    // 0x2e74d4: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x2e74d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x2e74d8: 0x7fb10320  sq          $s1, 0x320($sp)
    ctx->pc = 0x2e74d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 17));
    // 0x2e74dc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2e74dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74e0: 0x7fb20310  sq          $s2, 0x310($sp)
    ctx->pc = 0x2e74e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 18));
    // 0x2e74e4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2e74e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74e8: 0x7fb502e0  sq          $s5, 0x2E0($sp)
    ctx->pc = 0x2e74e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 21));
    // 0x2e74ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e74ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74f0: 0x7fb00330  sq          $s0, 0x330($sp)
    ctx->pc = 0x2e74f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 16));
    // 0x2e74f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e74f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74f8: 0x7fb30300  sq          $s3, 0x300($sp)
    ctx->pc = 0x2e74f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 19));
    // 0x2e74fc: 0x240b77ff  addiu       $t3, $zero, 0x77FF
    ctx->pc = 0x2e74fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 30719));
    // 0x2e7500: 0x7fb402f0  sq          $s4, 0x2F0($sp)
    ctx->pc = 0x2e7500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 20));
    // 0x2e7504: 0x24098800  addiu       $t1, $zero, -0x7800
    ctx->pc = 0x2e7504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294936576));
    // 0x2e7508: 0x7fbe02b0  sq          $fp, 0x2B0($sp)
    ctx->pc = 0x2e7508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 30));
    // 0x2e750c: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x2e750cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7510: 0xffbf02a0  sd          $ra, 0x2A0($sp)
    ctx->pc = 0x2e7510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 31));
    // 0x2e7514: 0x2411001b  addiu       $s1, $zero, 0x1B
    ctx->pc = 0x2e7514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2e7518: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x2e7518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x2e751c: 0x0  nop
    ctx->pc = 0x2e751cu;
    // NOP
label_2e7520:
    // 0x2e7520: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x2e7520u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e7524: 0x28627800  slti        $v0, $v1, 0x7800
    ctx->pc = 0x2e7524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30720) ? 1 : 0);
    // 0x2e7528: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7528u;
    {
        const bool branch_taken_0x2e7528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7528u;
        // 0x2e752c: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7528) {
            ctx->pc = 0x2E7538u;
            goto label_2e7538;
        }
    }
    ctx->pc = 0x2E7530u;
    // 0x2e7530: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7530u;
    {
        const bool branch_taken_0x2e7530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7530u;
        // 0x2e7534: 0xa50b0000  sh          $t3, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7530) {
            ctx->pc = 0x2E7548u;
            goto label_2e7548;
        }
    }
    ctx->pc = 0x2E7538u;
label_2e7538:
    // 0x2e7538: 0x28628800  slti        $v0, $v1, -0x7800
    ctx->pc = 0x2e7538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294936576) ? 1 : 0);
    // 0x2e753c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E753Cu;
    {
        const bool branch_taken_0x2e753c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e753c) {
            ctx->pc = 0x2E7540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E753Cu;
            // 0x2e7540: 0xa5050000  sh          $a1, 0x0($t0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7548u;
            goto label_2e7548;
        }
    }
    ctx->pc = 0x2E7544u;
    // 0x2e7544: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x2e7544u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
label_2e7548:
    // 0x2e7548: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2e7548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2e754c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e754cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e7550: 0x621fff3  bgez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E7550u;
    {
        const bool branch_taken_0x2e7550 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2E7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7550u;
        // 0x2e7554: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7550) {
            ctx->pc = 0x2E7520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7520;
        }
    }
    ctx->pc = 0x2E7558u;
    // 0x2e7558: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e7558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2e755c: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x2e755cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7560: 0x244253b0  addiu       $v0, $v0, 0x53B0
    ctx->pc = 0x2e7560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21424));
    // 0x2e7564: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x2e7564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x2e7568: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2e7568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2e756c: 0x8fae0290  lw          $t6, 0x290($sp)
    ctx->pc = 0x2e756cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2e7570: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2e7570u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7574: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e7574u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7578: 0x26580002  addiu       $t8, $s2, 0x2
    ctx->pc = 0x2e7578u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2e757c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e757cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7580: 0x244c0004  addiu       $t4, $v0, 0x4
    ctx->pc = 0x2e7580u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e7584: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2e7584u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7588:
    // 0x2e7588: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x2e7588u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e758c: 0x16e2021  addu        $a0, $t3, $t6
    ctx->pc = 0x2e758cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x2e7590: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x2e7590u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e7594: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x2e7594u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7598: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e7598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e759c: 0x2411001b  addiu       $s1, $zero, 0x1B
    ctx->pc = 0x2e759cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2e75a0: 0xc5a40000  lwc1        $f4, 0x0($t5)
    ctx->pc = 0x2e75a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e75a4: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x2e75a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e75a8:
    // 0x2e75a8: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x2e75a8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e75ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e75acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e75b0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2e75b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e75b4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2e75b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e75b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e75b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e75bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e75bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e75c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e75c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e75c4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2e75c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2e75c8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2e75c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2e75cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e75ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e75d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2e75d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e75d4: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2e75d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2e75d8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2e75d8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2e75dc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2e75dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e75e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e75e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e75e4: 0x0  nop
    ctx->pc = 0x2e75e4u;
    // NOP
    // 0x2e75e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E75E8u;
    {
        const bool branch_taken_0x2e75e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e75e8) {
            ctx->pc = 0x2E75ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E75E8u;
            // 0x2e75ec: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E75F0u;
            goto label_2e75f0;
        }
    }
    ctx->pc = 0x2E75F0u;
label_2e75f0:
    // 0x2e75f0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2e75f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e75f4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2e75f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2e75f8: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x2e75f8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e75fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e75fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e7600: 0x621ffe9  bgez        $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E7600u;
    {
        const bool branch_taken_0x2e7600 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2E7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7600u;
        // 0x2e7604: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7600) {
            ctx->pc = 0x2E75A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e75a8;
        }
    }
    ctx->pc = 0x2E7608u;
    // 0x2e7608: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2e7608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e760c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2e760cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7610: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7610u;
    {
        const bool branch_taken_0x2e7610 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7610) {
            ctx->pc = 0x2E7620u;
            goto label_2e7620;
        }
    }
    ctx->pc = 0x2E7618u;
    // 0x2e7618: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x2e7618u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x2e761c: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2e761cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2e7620:
    // 0x2e7620: 0x15400006  bnez        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7620u;
    {
        const bool branch_taken_0x2e7620 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7620u;
        // 0x2e7624: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7620) {
            ctx->pc = 0x2E763Cu;
            goto label_2e763c;
        }
    }
    ctx->pc = 0x2E7628u;
    // 0x2e7628: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2e7628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e762c: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x2e762cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7630: 0x0  nop
    ctx->pc = 0x2e7630u;
    // NOP
    // 0x2e7634: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7634u;
    {
        const bool branch_taken_0x2e7634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7634) {
            ctx->pc = 0x2E7638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7634u;
            // 0x2e7638: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7654u;
            goto label_2e7654;
        }
    }
    ctx->pc = 0x2E763Cu;
label_2e763c:
    // 0x2e763c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2e7640: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x2e7640u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x2e7644: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x2e7644u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x2e7648: 0x29420005  slti        $v0, $t2, 0x5
    ctx->pc = 0x2e7648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e764c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2E764Cu;
    {
        const bool branch_taken_0x2e764c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E764Cu;
        // 0x2e7650: 0x256b0070  addiu       $t3, $t3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e764c) {
            ctx->pc = 0x2E7588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7588;
        }
    }
    ctx->pc = 0x2E7654u;
label_2e7654:
    // 0x2e7654: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x2e7654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2e7658: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x2e7658u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x2e765c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2e765cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2e7660: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x2e7660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2e7664: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2e7664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7668: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7668u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e766c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e766cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e7670: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2e7670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e7674: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7674u;
    {
        const bool branch_taken_0x2e7674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7674u;
        // 0x2e7678: 0xace90000  sw          $t1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7674) {
            ctx->pc = 0x2E7684u;
            goto label_2e7684;
        }
    }
    ctx->pc = 0x2E767Cu;
    // 0x2e767c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E767Cu;
    {
        const bool branch_taken_0x2e767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E767Cu;
        // 0x2e7680: 0x24047fff  addiu       $a0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e767c) {
            ctx->pc = 0x2E7698u;
            goto label_2e7698;
        }
    }
    ctx->pc = 0x2E7684u;
label_2e7684:
    // 0x2e7684: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e7684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e7688: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x2e7688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x2e768c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x2e768cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x2e7690: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2e7690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e7694: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2e7694u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_2e7698:
    // 0x2e7698: 0x24820800  addiu       $v0, $a0, 0x800
    ctx->pc = 0x2e7698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x2e769c: 0x24114000  addiu       $s1, $zero, 0x4000
    ctx->pc = 0x2e769cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2e76a0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2e76a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2e76a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e76a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e76a8: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x2e76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e76ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E76ACu;
    {
        const bool branch_taken_0x2e76ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E76B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76ACu;
        // 0x2e76b0: 0x15a0c0  sll         $s4, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76ac) {
            ctx->pc = 0x2E76D8u;
            goto label_2e76d8;
        }
    }
    ctx->pc = 0x2E76B4u;
    // 0x2e76b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e76b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2e76b8:
    // 0x2e76b8: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x2e76b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e76bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E76BCu;
    {
        const bool branch_taken_0x2e76bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76BCu;
        // 0x2e76c0: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76bc) {
            ctx->pc = 0x2E76D8u;
            goto label_2e76d8;
        }
    }
    ctx->pc = 0x2E76C4u;
    // 0x2e76c4: 0x1110c3  sra         $v0, $s1, 3
    ctx->pc = 0x2e76c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 3));
    // 0x2e76c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e76cc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2e76ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2e76d0: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E76D0u;
    {
        const bool branch_taken_0x2e76d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e76d0) {
            ctx->pc = 0x2E76D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E76D0u;
            // 0x2e76d4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E76B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e76b8;
        }
    }
    ctx->pc = 0x2E76D8u;
label_2e76d8:
    // 0x2e76d8: 0x3262000f  andi        $v0, $s3, 0xF
    ctx->pc = 0x2e76d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x2e76dc: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x2e76dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x2e76e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e76e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e76e4: 0x261053b0  addiu       $s0, $s0, 0x53B0
    ctx->pc = 0x2e76e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21424));
    // 0x2e76e8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2e76e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e76ec: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2e76ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e76f0: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x2e76f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e76f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e76f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e76f8: 0x283f021  addu        $fp, $s4, $v1
    ctx->pc = 0x2e76f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2e76fc: 0x300902d  daddu       $s2, $t8, $zero
    ctx->pc = 0x2e76fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7700: 0x2642014  dsllv       $a0, $a0, $s3
    ctx->pc = 0x2e7700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 19) & 0x3F));
    // 0x2e7704: 0xc07dad0  jal         func_1F6B40
    ctx->pc = 0x2E7704u;
    SET_GPR_U32(ctx, 31, 0x2E770Cu);
    ctx->pc = 0x2E7708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7704u;
    // 0x2e7708: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6B40u, 0x2E7704u, 0x2E770Cu)) {
        return;
    }
    ctx->pc = 0x2E770Cu;
label_2e770c:
    // 0x2e770c: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x2e770cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2e7710: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x2e7710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2e7714: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2e7714u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2e7718: 0x2903821  addu        $a3, $s4, $s0
    ctx->pc = 0x2e7718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2e771c: 0x600013  mtlo        $v1
    ctx->pc = 0x2e771cu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x2e7720: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x2e7720u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x2e7724: 0x72a22800  madd        $a1, $s5, $v0
    ctx->pc = 0x2e7724u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2e7728: 0x240b8000  addiu       $t3, $zero, -0x8000
    ctx->pc = 0x2e7728u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x2e772c: 0x240af000  addiu       $t2, $zero, -0x1000
    ctx->pc = 0x2e772cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x2e7730: 0x24097fff  addiu       $t1, $zero, 0x7FFF
    ctx->pc = 0x2e7730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2e7734: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x2e7734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2e7738: 0x34c67fff  ori         $a2, $a2, 0x7FFF
    ctx->pc = 0x2e7738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32767);
    // 0x2e773c: 0x0  nop
    ctx->pc = 0x2e773cu;
    // NOP
label_2e7740:
    // 0x2e7740: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x2e7740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7744: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2e7744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7748: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2e7748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e774c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e774cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e7750: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x2e7750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7754: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2e7754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7758: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2e7758u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2e775c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e775cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e7760: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2e7760u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2e7764: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x2e7764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2e7768: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7768u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e776c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e776cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e7770: 0x24820800  addiu       $v0, $a0, 0x800
    ctx->pc = 0x2e7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x2e7774: 0x4a2024  and         $a0, $v0, $t2
    ctx->pc = 0x2e7774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2e7778: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x2e7778u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e777c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E777Cu;
    {
        const bool branch_taken_0x2e777c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E777Cu;
        // 0x2e7780: 0xc4102a  slt         $v0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e777c) {
            ctx->pc = 0x2E778Cu;
            goto label_2e778c;
        }
    }
    ctx->pc = 0x2E7784u;
    // 0x2e7784: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7784u;
    {
        const bool branch_taken_0x2e7784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7784u;
        // 0x2e7788: 0x24047fff  addiu       $a0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7784) {
            ctx->pc = 0x2E7790u;
            goto label_2e7790;
        }
    }
    ctx->pc = 0x2E778Cu;
label_2e778c:
    // 0x2e778c: 0x162200a  movz        $a0, $t3, $v0
    ctx->pc = 0x2e778cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11));
label_2e7790:
    // 0x2e7790: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2e7790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2e7794: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7794u;
    {
        const bool branch_taken_0x2e7794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7794u;
        // 0x2e7798: 0x41203  sra         $v0, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7794) {
            ctx->pc = 0x2E77B4u;
            goto label_2e77b4;
        }
    }
    ctx->pc = 0x2E779Cu;
    // 0x2e779c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2e779cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e77a0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2e77a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2e77a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e77a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e77a8: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2e77a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e77ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E77ACu;
    {
        const bool branch_taken_0x2e77ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77ACu;
        // 0x2e77b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e77ac) {
            ctx->pc = 0x2E77C0u;
            goto label_2e77c0;
        }
    }
    ctx->pc = 0x2E77B4u;
label_2e77b4:
    // 0x2e77b4: 0x41303  sra         $v0, $a0, 12
    ctx->pc = 0x2e77b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 12));
    // 0x2e77b8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e77b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e77bc: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2e77bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_2e77c0:
    // 0x2e77c0: 0x2641007  srav        $v0, $a0, $s3
    ctx->pc = 0x2e77c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 19) & 0x1F));
    // 0x2e77c4: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2e77c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e77c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e77c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e77cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e77ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e77d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e77d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e77d4: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x2e77d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2e77d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e77d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2e77dc: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x2e77dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x2e77e0: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x2e77e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2e77e4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2E77E4u;
    {
        const bool branch_taken_0x2e77e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77E4u;
        // 0x2e77e8: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e77e4) {
            ctx->pc = 0x2E7740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7740;
        }
    }
    ctx->pc = 0x2E77ECu;
    // 0x2e77ec: 0x7bb00330  lq          $s0, 0x330($sp)
    ctx->pc = 0x2e77ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2e77f0: 0x7bb10320  lq          $s1, 0x320($sp)
    ctx->pc = 0x2e77f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2e77f4: 0x7bb20310  lq          $s2, 0x310($sp)
    ctx->pc = 0x2e77f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2e77f8: 0x7bb30300  lq          $s3, 0x300($sp)
    ctx->pc = 0x2e77f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2e77fc: 0x7bb402f0  lq          $s4, 0x2F0($sp)
    ctx->pc = 0x2e77fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2e7800: 0x7bb502e0  lq          $s5, 0x2E0($sp)
    ctx->pc = 0x2e7800u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2e7804: 0x7bb602d0  lq          $s6, 0x2D0($sp)
    ctx->pc = 0x2e7804u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2e7808: 0x7bb702c0  lq          $s7, 0x2C0($sp)
    ctx->pc = 0x2e7808u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2e780c: 0x7bbe02b0  lq          $fp, 0x2B0($sp)
    ctx->pc = 0x2e780cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2e7810: 0xdfbf02a0  ld          $ra, 0x2A0($sp)
    ctx->pc = 0x2e7810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2e7814: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7814u;
        // 0x2e7818: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E781Cu;
    // 0x2e781c: 0x0  nop
    ctx->pc = 0x2e781cu;
    // NOP
    ctx->pc = 0x2e7820u;
}

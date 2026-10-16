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

// Function: sub_002D3460
// Address: 0x2d3460 - 0x2d38f0
void sub_002D3460_0x2d3460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3460_0x2d3460");
#endif

    switch (ctx->pc) {
        case 0x2d3748u: goto label_2d3748;
        case 0x2d3838u: goto label_2d3838;
        default: break;
    }

    ctx->pc = 0x2d3460u;

    // 0x2d3460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d3460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d3464: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2d3464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3468: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d3468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d346c: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x2d346cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2d3470: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d3470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d3474: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x2d3474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2d3478: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d3478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d347c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d347cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3480: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2d3480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3484: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x2d3484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d3488: 0xc62a0004  lwc1        $f10, 0x4($s1)
    ctx->pc = 0x2d3488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2d348c: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x2d348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3490: 0xc5060004  lwc1        $f6, 0x4($t0)
    ctx->pc = 0x2d3490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d3494: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x2d3494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3498: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x2d3498u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2d349c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2d349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d34a0: 0x46065182  mul.s       $f6, $f10, $f6
    ctx->pc = 0x2d34a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x2d34a4: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x2d34a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d34a8: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d34a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d34ac: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x2d34acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d34b0: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x2d34b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x2d34b4: 0xc6280008  lwc1        $f8, 0x8($s1)
    ctx->pc = 0x2d34b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d34b8: 0x46055142  mul.s       $f5, $f10, $f5
    ctx->pc = 0x2d34b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x2d34bc: 0xc4690008  lwc1        $f9, 0x8($v1)
    ctx->pc = 0x2d34bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2d34c0: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2d34c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2d34c4: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x2d34c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d34c8: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2d34c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2d34cc: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x2d34ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d34d0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2d34d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d34d4: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x2d34d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x2d34d8: 0xc5030034  lwc1        $f3, 0x34($t0)
    ctx->pc = 0x2d34d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d34dc: 0x46094242  mul.s       $f9, $f8, $f9
    ctx->pc = 0x2d34dcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x2d34e0: 0xc50b0030  lwc1        $f11, 0x30($t0)
    ctx->pc = 0x2d34e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2d34e4: 0x46064182  mul.s       $f6, $f8, $f6
    ctx->pc = 0x2d34e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x2d34e8: 0xc50c0038  lwc1        $f12, 0x38($t0)
    ctx->pc = 0x2d34e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d34ec: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2d34ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2d34f0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2d34f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2d34f4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2d34f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2d34f8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x2d34f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x2d34fc: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x2d34fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x2d3500: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2d3500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2d3504: 0x46035282  mul.s       $f10, $f10, $f3
    ctx->pc = 0x2d3504u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x2d3508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d3508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d350c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2d350cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2d3510: 0x460b39c2  mul.s       $f7, $f7, $f11
    ctx->pc = 0x2d3510u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x2d3514: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d3514u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d3518: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d3518u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d351c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d351cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d3520: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x2d3520u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x2d3524: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2d3524u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d3528: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x2d3528u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x2d352c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2d352cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d3530: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2d3530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3534: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d3534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d3538: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3538u;
    {
        const bool branch_taken_0x2d3538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3538u;
        // 0x2d353c: 0x460838c0  add.s       $f3, $f7, $f8 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3538) {
            ctx->pc = 0x2D3544u;
            goto label_2d3544;
        }
    }
    ctx->pc = 0x2D3540u;
    // 0x2d3540: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d3540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d3544:
    // 0x2d3544: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d3544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3548: 0x0  nop
    ctx->pc = 0x2d3548u;
    // NOP
    // 0x2d354c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D354Cu;
    {
        const bool branch_taken_0x2d354c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d354c) {
            ctx->pc = 0x2D3550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D354Cu;
            // 0x2d3550: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3554u;
            goto label_2d3554;
        }
    }
    ctx->pc = 0x2D3554u;
label_2d3554:
    // 0x2d3554: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d3554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3558: 0x0  nop
    ctx->pc = 0x2d3558u;
    // NOP
    // 0x2d355c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D355Cu;
    {
        const bool branch_taken_0x2d355c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D355Cu;
        // 0x2d3560: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d355c) {
            ctx->pc = 0x2D3568u;
            goto label_2d3568;
        }
    }
    ctx->pc = 0x2D3564u;
    // 0x2d3564: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x2d3564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_2d3568:
    // 0x2d3568: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2d3568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x2d356c: 0x3c031230  lui         $v1, 0x1230
    ctx->pc = 0x2d356cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4656 << 16));
    // 0x2d3570: 0x3c042131  lui         $a0, 0x2131
    ctx->pc = 0x2d3570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8497 << 16));
    // 0x2d3574: 0xc780828c  lwc1        $f0, -0x7D74($gp)
    ctx->pc = 0x2d3574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3578: 0x34421312  ori         $v0, $v0, 0x1312
    ctx->pc = 0x2d3578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4882);
    // 0x2d357c: 0x34630321  ori         $v1, $v1, 0x321
    ctx->pc = 0x2d357cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)801);
    // 0x2d3580: 0x34842300  ori         $a0, $a0, 0x2300
    ctx->pc = 0x2d3580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8960);
    // 0x2d3584: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x2d3584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x2d3588: 0xc42007  srav        $a0, $a0, $a2
    ctx->pc = 0x2d3588u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x2d358c: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x2d358cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x2d3590: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2d3590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3594: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d3594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d3598: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x2d3598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2d359c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2d359cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d35a0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2d35a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2d35a4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2d35a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2d35a8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2D35A8u;
    {
        const bool branch_taken_0x2d35a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D35ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D35A8u;
        // 0x2d35ac: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d35a8) {
            ctx->pc = 0x2D35C4u;
            goto label_2d35c4;
        }
    }
    ctx->pc = 0x2D35B0u;
    // 0x2d35b0: 0xc7808290  lwc1        $f0, -0x7D70($gp)
    ctx->pc = 0x2d35b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d35b4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2d35b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d35b8: 0x0  nop
    ctx->pc = 0x2d35b8u;
    // NOP
    // 0x2d35bc: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x2D35BCu;
    {
        const bool branch_taken_0x2d35bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D35BCu;
        // 0x2d35c0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d35bc) {
            ctx->pc = 0x2D36F8u;
            goto label_2d36f8;
        }
    }
    ctx->pc = 0x2D35C4u;
label_2d35c4:
    // 0x2d35c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d35c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d35c8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2d35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2d35cc: 0x69030037  ldl         $v1, 0x37($t0)
    ctx->pc = 0x2d35ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d35d0: 0x6d030030  ldr         $v1, 0x30($t0)
    ctx->pc = 0x2d35d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d35d4: 0x8d040038  lw          $a0, 0x38($t0)
    ctx->pc = 0x2d35d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x2d35d8: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x2d35d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d35dc: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x2d35dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d35e0: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2d35e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2d35e4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2d35e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d35e8: 0x0  nop
    ctx->pc = 0x2d35e8u;
    // NOP
    // 0x2d35ec: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2D35ECu;
    {
        const bool branch_taken_0x2d35ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D35ECu;
        // 0x2d35f0: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d35ec) {
            ctx->pc = 0x2D3620u;
            goto label_2d3620;
        }
    }
    ctx->pc = 0x2D35F4u;
    // 0x2d35f4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2d35f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d35f8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d35f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d35fc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2d35fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3600: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d3600u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d3604: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d3604u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d3608: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d3608u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d360c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2d360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d3610: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2d3610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d3614: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2d3614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d3618: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x2d3618u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d361c: 0x0  nop
    ctx->pc = 0x2d361cu;
    // NOP
label_2d3620:
    // 0x2d3620: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D3620u;
    {
        const bool branch_taken_0x2d3620 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3620u;
        // 0x2d3624: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3620) {
            ctx->pc = 0x2D368Cu;
            goto label_2d368c;
        }
    }
    ctx->pc = 0x2D3628u;
    // 0x2d3628: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2d3628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2d362c: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x2d362cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2d3630: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x2d3630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2d3634: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d3634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d3638: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x2d3638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d363c: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x2d363cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3640: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2d3640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2d3644: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d3644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d3648: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2d3648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2d364c: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x2d364cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d3650: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x2d3650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d3654: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x2d3654u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d3658: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2d3658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d365c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2d365cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3660: 0xac880018  sw          $t0, 0x18($a0)
    ctx->pc = 0x2d3660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x2d3664: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2d3664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2d3668: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d3668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d366c: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x2d366cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d3670: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x2d3670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d3674: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x2d3674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d3678: 0xb0660027  sdl         $a2, 0x27($v1)
    ctx->pc = 0x2d3678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d367c: 0xb4660020  sdr         $a2, 0x20($v1)
    ctx->pc = 0x2d367cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3680: 0xac670028  sw          $a3, 0x28($v1)
    ctx->pc = 0x2d3680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 7));
    // 0x2d3684: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D3684u;
    {
        const bool branch_taken_0x2d3684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3684u;
        // 0x2d3688: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3684) {
            ctx->pc = 0x2D36ECu;
            goto label_2d36ec;
        }
    }
    ctx->pc = 0x2D368Cu;
label_2d368c:
    // 0x2d368c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2d368cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2d3690: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x2d3690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d3694: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x2d3694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d3698: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2d3698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d369c: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x2d369cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d36a0: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x2d36a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d36a4: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x2d36a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x2d36a8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d36ac: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2d36acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2d36b0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2d36b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d36b4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2d36b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d36b8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2d36b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d36bc: 0xb0830017  sdl         $v1, 0x17($a0)
    ctx->pc = 0x2d36bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d36c0: 0xb4830010  sdr         $v1, 0x10($a0)
    ctx->pc = 0x2d36c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d36c4: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x2d36c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x2d36c8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2d36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2d36cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d36d0: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x2d36d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2d36d4: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x2d36d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2d36d8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d36d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d36dc: 0xb0680027  sdl         $t0, 0x27($v1)
    ctx->pc = 0x2d36dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d36e0: 0xb4680020  sdr         $t0, 0x20($v1)
    ctx->pc = 0x2d36e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d36e4: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x2d36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x2d36e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d36ec:
    // 0x2d36ec: 0xa6000056  sh          $zero, 0x56($s0)
    ctx->pc = 0x2d36ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d36f0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2D36F0u;
    {
        const bool branch_taken_0x2d36f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36F0u;
        // 0x2d36f4: 0xa6020054  sh          $v0, 0x54($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36f0) {
            ctx->pc = 0x2D38C0u;
            goto label_2d38c0;
        }
    }
    ctx->pc = 0x2D36F8u;
label_2d36f8:
    // 0x2d36f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d36f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d36fc: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x2d36fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2d3700: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x2d3700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2d3704: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d3704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3708: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d3708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d370c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3710: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2d3710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3714: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d3714u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d3718: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d3718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d371c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2d371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3720: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d3720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3724: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d3724u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3728: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2d3728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d372c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3730: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2d3730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3734: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d3734u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d3738: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2d3738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d373c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d373cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d3740: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2D3740u;
    SET_GPR_U32(ctx, 31, 0x2D3748u);
    ctx->pc = 0x2D3744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3740u;
    // 0x2d3744: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2D3740u, 0x2D3748u)) {
        return;
    }
    ctx->pc = 0x2D3748u;
label_2d3748:
    // 0x2d3748: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2d3748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d374c: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x2d374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3750: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2d3750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3754: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2d3754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3758: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2d3758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2d375c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2d375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3760: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2d3760u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2d3764: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x2d3764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3768: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d3768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d376c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d376cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d3770: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d3770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d3774: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d3774u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d3778: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x2d3778u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d377c: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x2d377cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3780: 0x0  nop
    ctx->pc = 0x2d3780u;
    // NOP
    // 0x2d3784: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x2D3784u;
    {
        const bool branch_taken_0x2d3784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3784u;
        // 0x2d3788: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3784) {
            ctx->pc = 0x2D3858u;
            goto label_2d3858;
        }
    }
    ctx->pc = 0x2D378Cu;
    // 0x2d378c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2d378cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2d3790: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2d3790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d3794: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2d3794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3798: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d3798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d379c: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x2d379cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x2d37a0: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x2d37a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2d37a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d37a8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2d37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2d37ac: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2d37acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d37b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d37b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d37b4: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2d37b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d37b8: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2d37b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d37bc: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x2d37bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d37c0: 0xb2070017  sdl         $a3, 0x17($s0)
    ctx->pc = 0x2d37c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d37c4: 0xb6070010  sdr         $a3, 0x10($s0)
    ctx->pc = 0x2d37c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d37c8: 0xae080018  sw          $t0, 0x18($s0)
    ctx->pc = 0x2d37c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 8));
    // 0x2d37cc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2d37ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2d37d0: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x2d37d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d37d4: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x2d37d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d37d8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x2d37d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d37dc: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x2d37dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d37e0: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x2d37e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d37e4: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x2d37e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x2d37e8: 0xa6060054  sh          $a2, 0x54($s0)
    ctx->pc = 0x2d37e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 6));
    // 0x2d37ec: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2d37ecu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x2d37f0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d37f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d37f4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2d37f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d37f8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d37f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d37fc: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2d37fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3800: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x2d3800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3804: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2d3804u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2d3808: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d3808u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d380c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2d380cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2d3810: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2d3810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d3814: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2d3814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3818: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d3818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d381c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2d381cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d3820: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2d3820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3824: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2d3824u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2d3828: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2d3828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d382c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d382cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3830: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2D3830u;
    SET_GPR_U32(ctx, 31, 0x2D3838u);
    ctx->pc = 0x2D3834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3830u;
    // 0x2d3834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2D3830u, 0x2D3838u)) {
        return;
    }
    ctx->pc = 0x2D3838u;
label_2d3838:
    // 0x2d3838: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d383c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2d383cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2d3840: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x2d3840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x2d3844: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d3844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d3848: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d3848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d384c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D384Cu;
    {
        const bool branch_taken_0x2d384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D384Cu;
        // 0x2d3850: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d384c) {
            ctx->pc = 0x2D38BCu;
            goto label_2d38bc;
        }
    }
    ctx->pc = 0x2D3854u;
    // 0x2d3854: 0x0  nop
    ctx->pc = 0x2d3854u;
    // NOP
label_2d3858:
    // 0x2d3858: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2d3858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2d385c: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x2d385cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x2d3860: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2d3860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2d3864: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2d3864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3868: 0x2484ec80  addiu       $a0, $a0, -0x1380
    ctx->pc = 0x2d3868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962304));
    // 0x2d386c: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x2d386cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x2d3870: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2d3870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2d3874: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d3874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3878: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d3878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d387c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d387cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d3880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3884: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x2d3884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d3888: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x2d3888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d388c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x2d388cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d3890: 0xb2040017  sdl         $a0, 0x17($s0)
    ctx->pc = 0x2d3890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3894: 0xb6040010  sdr         $a0, 0x10($s0)
    ctx->pc = 0x2d3894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3898: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x2d3898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x2d389c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2d389cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d38a0: 0xa6030054  sh          $v1, 0x54($s0)
    ctx->pc = 0x2d38a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d38a4: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2d38a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d38a8: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2d38a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d38ac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d38acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d38b0: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x2d38b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d38b4: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x2d38b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d38b8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2d38b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2d38bc:
    // 0x2d38bc: 0xa6040056  sh          $a0, 0x56($s0)
    ctx->pc = 0x2d38bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 4));
label_2d38c0:
    // 0x2d38c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d38c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d38c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d38c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d38c8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d38c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d38cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d38ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d38d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d38d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d38d4: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2d38d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2d38d8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2d38d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d38dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d38dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d38e0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2d38e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d38e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d38e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d38e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D38E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38E8u;
        // 0x2d38ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D38E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D38F0u;
}

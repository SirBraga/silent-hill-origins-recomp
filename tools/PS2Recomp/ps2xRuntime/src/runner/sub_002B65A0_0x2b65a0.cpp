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

// Function: sub_002B65A0
// Address: 0x2b65a0 - 0x2b6850
void sub_002B65A0_0x2b65a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B65A0_0x2b65a0");
#endif

    switch (ctx->pc) {
        case 0x2b65c4u: goto label_2b65c4;
        default: break;
    }

    ctx->pc = 0x2b65a0u;

    // 0x2b65a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b65a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b65a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b65a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b65a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b65a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b65ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b65acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b65b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b65b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b65b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b65b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b65b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b65b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b65bc: 0xc0c580c  jal         func_316030
    ctx->pc = 0x2B65BCu;
    SET_GPR_U32(ctx, 31, 0x2B65C4u);
    ctx->pc = 0x2B65C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B65BCu;
    // 0x2b65c0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x2B65BCu, 0x2B65C4u)) {
        return;
    }
    ctx->pc = 0x2B65C4u;
label_2b65c4:
    // 0x2b65c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b65c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b65c8: 0xc6090010  lwc1        $f9, 0x10($s0)
    ctx->pc = 0x2b65c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2b65cc: 0xc7858144  lwc1        $f5, -0x7EBC($gp)
    ctx->pc = 0x2b65ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b65d0: 0xc60a0014  lwc1        $f10, 0x14($s0)
    ctx->pc = 0x2b65d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2b65d4: 0xc6080018  lwc1        $f8, 0x18($s0)
    ctx->pc = 0x2b65d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b65d8: 0x46054ac2  mul.s       $f11, $f9, $f5
    ctx->pc = 0x2b65d8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x2b65dc: 0x46055302  mul.s       $f12, $f10, $f5
    ctx->pc = 0x2b65dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x2b65e0: 0x46054342  mul.s       $f13, $f8, $f5
    ctx->pc = 0x2b65e0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x2b65e4: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x2b65e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b65e8: 0xc7838148  lwc1        $f3, -0x7EB8($gp)
    ctx->pc = 0x2b65e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b65ec: 0xc6070004  lwc1        $f7, 0x4($s0)
    ctx->pc = 0x2b65ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b65f0: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2b65f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b65f4: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2b65f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2b65f8: 0x46033842  mul.s       $f1, $f7, $f3
    ctx->pc = 0x2b65f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x2b65fc: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x2b65fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2b6600: 0x46005ac0  add.s       $f11, $f11, $f0
    ctx->pc = 0x2b6600u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x2b6604: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x2b6604u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2b6608: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x2b6608u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x2b660c: 0xe7ab0010  swc1        $f11, 0x10($sp)
    ctx->pc = 0x2b660cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b6610: 0xe7ac0014  swc1        $f12, 0x14($sp)
    ctx->pc = 0x2b6610u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b6614: 0xe7ad0018  swc1        $f13, 0x18($sp)
    ctx->pc = 0x2b6614u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b6618: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x2b6618u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x2b661c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2b661cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2b6620: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x2b6620u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x2b6624: 0x46034a42  mul.s       $f9, $f9, $f3
    ctx->pc = 0x2b6624u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x2b6628: 0x46034202  mul.s       $f8, $f8, $f3
    ctx->pc = 0x2b6628u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2b662c: 0x46035282  mul.s       $f10, $f10, $f3
    ctx->pc = 0x2b662cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x2b6630: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x2b6630u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x2b6634: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x2b6634u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x2b6638: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x2b6638u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x2b663c: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x2b663cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b6640: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x2b6640u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b6644: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x2b6644u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b6648: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2b6648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b664c: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x2b664cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6650: 0x0  nop
    ctx->pc = 0x2b6650u;
    // NOP
    // 0x2b6654: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6654u;
    {
        const bool branch_taken_0x2b6654 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6654u;
        // 0x2b6658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6654) {
            ctx->pc = 0x2B6660u;
            goto label_2b6660;
        }
    }
    ctx->pc = 0x2B665Cu;
    // 0x2b665c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b665cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6660:
    // 0x2b6660: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2b6660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6664: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2b6664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6668: 0x0  nop
    ctx->pc = 0x2b6668u;
    // NOP
    // 0x2b666c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B666Cu;
    {
        const bool branch_taken_0x2b666c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b666c) {
            ctx->pc = 0x2B6670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B666Cu;
            // 0x2b6670: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6674u;
            goto label_2b6674;
        }
    }
    ctx->pc = 0x2B6674u;
label_2b6674:
    // 0x2b6674: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2b6674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6678: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2b6678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b667c: 0x0  nop
    ctx->pc = 0x2b667cu;
    // NOP
    // 0x2b6680: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6680u;
    {
        const bool branch_taken_0x2b6680 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6680) {
            ctx->pc = 0x2B6684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6680u;
            // 0x2b6684: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6688u;
            goto label_2b6688;
        }
    }
    ctx->pc = 0x2B6688u;
label_2b6688:
    // 0x2b6688: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2b6688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b668c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2b668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6690: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2b6690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6694: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b6694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6698: 0x0  nop
    ctx->pc = 0x2b6698u;
    // NOP
    // 0x2b669c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B669Cu;
    {
        const bool branch_taken_0x2b669c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B66A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B669Cu;
        // 0x2b66a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b669c) {
            ctx->pc = 0x2B66A8u;
            goto label_2b66a8;
        }
    }
    ctx->pc = 0x2B66A4u;
    // 0x2b66a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b66a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b66a8:
    // 0x2b66a8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2b66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b66ac: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2b66acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b66b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b66b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b66b4: 0x0  nop
    ctx->pc = 0x2b66b4u;
    // NOP
    // 0x2b66b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B66B8u;
    {
        const bool branch_taken_0x2b66b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b66b8) {
            ctx->pc = 0x2B66BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B66B8u;
            // 0x2b66bc: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B66C0u;
            goto label_2b66c0;
        }
    }
    ctx->pc = 0x2B66C0u;
label_2b66c0:
    // 0x2b66c0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2b66c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b66c4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2b66c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b66c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b66c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b66cc: 0x0  nop
    ctx->pc = 0x2b66ccu;
    // NOP
    // 0x2b66d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B66D0u;
    {
        const bool branch_taken_0x2b66d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b66d0) {
            ctx->pc = 0x2B66D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B66D0u;
            // 0x2b66d4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B66D8u;
            goto label_2b66d8;
        }
    }
    ctx->pc = 0x2B66D8u;
label_2b66d8:
    // 0x2b66d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2b66d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b66dc: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x2b66dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2b66e0: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x2b66e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2b66e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b66e8: 0x15020053  bne         $t0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2B66E8u;
    {
        const bool branch_taken_0x2b66e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66E8u;
        // 0x2b66ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66e8) {
            ctx->pc = 0x2B6838u;
            goto label_2b6838;
        }
    }
    ctx->pc = 0x2B66F0u;
    // 0x2b66f0: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x2b66f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2b66f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b66f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b66f8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2b66f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2b66fc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2b66fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2b6700: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b6700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b6704: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2b6704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6708: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2b6708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b670c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2b670cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6710: 0xe32023  subu        $a0, $a3, $v1
    ctx->pc = 0x2b6710u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2b6714: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b6714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6718: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b6718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b671c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2b671cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6720: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b6720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b6724: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x2b6724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b6728: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x2b6728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b672c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2b672cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b6730: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b6730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b6734: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x2b6734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b6738: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2b6738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2b673c: 0xe32023  subu        $a0, $a3, $v1
    ctx->pc = 0x2b673cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2b6740: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2b6740u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6744: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b6744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b6748: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x2b6748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2b674c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b674cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6750: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b6750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b6754: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x2b6754u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2b6758: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b6758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b675c: 0x1022023  subu        $a0, $t0, $v0
    ctx->pc = 0x2b675cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2b6760: 0xe53023  subu        $a2, $a3, $a1
    ctx->pc = 0x2b6760u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2b6764: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2b6764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b6768: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2b6768u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2b676c: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x2b676cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2b6770: 0x44864800  mtc1        $a2, $f9
    ctx->pc = 0x2b6770u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2b6774: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x2b6774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x2b6778: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b677c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b677cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b6780: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x2b6780u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2b6784: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2b6784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6788: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x2b6788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2b678c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2b678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b6790: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2b6790u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2b6794: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b6794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b6798: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x2b6798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2b679c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2b679cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2b67a0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2b67a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b67a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b67a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b67a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b67a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b67ac: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x2b67acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2b67b0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2b67b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2b67b4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2b67b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b67b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b67b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b67bc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2b67bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b67c0: 0xe32823  subu        $a1, $a3, $v1
    ctx->pc = 0x2b67c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2b67c4: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x2b67c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2b67c8: 0x44864000  mtc1        $a2, $f8
    ctx->pc = 0x2b67c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2b67cc: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x2b67ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x2b67d0: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x2b67d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2b67d4: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x2b67d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2b67d8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2b67d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b67dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b67dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b67e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b67e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b67e4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2b67e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b67e8: 0x44853800  mtc1        $a1, $f7
    ctx->pc = 0x2b67e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2b67ec: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x2b67ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x2b67f0: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x2b67f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2b67f4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b67f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b67f8: 0x44872800  mtc1        $a3, $f5
    ctx->pc = 0x2b67f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2b67fc: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2b67fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2b6800: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2b6800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2b6804: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x2b6804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2b6808: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2b6808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b680c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2b680cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2b6810: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2b6810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2b6814: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2b6814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2b6818: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2b6818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b681c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2b681cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2b6820: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b6820u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b6824: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2b6824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2b6828: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2b6828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b682c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2b682cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2b6830: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b6830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b6834: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2b6834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2b6838:
    // 0x2b6838: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b6838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b683c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b683cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6840: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b6840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b6844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6848: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6848u;
        // 0x2b684c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6850u;
}

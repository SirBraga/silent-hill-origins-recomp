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

// Function: sub_002D6500
// Address: 0x2d6500 - 0x2d6758
void sub_002D6500_0x2d6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6500_0x2d6500");
#endif

    switch (ctx->pc) {
        case 0x2d6560u: goto label_2d6560;
        case 0x2d6574u: goto label_2d6574;
        case 0x2d6594u: goto label_2d6594;
        case 0x2d6678u: goto label_2d6678;
        case 0x2d6688u: goto label_2d6688;
        case 0x2d66a8u: goto label_2d66a8;
        default: break;
    }

    ctx->pc = 0x2d6500u;

    // 0x2d6500: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2d6500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2d6504: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d6504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d6508: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2d6508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2d650c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2d650cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2d6510: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2d6510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2d6514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d6514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6518: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2d6518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x2d651c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d651cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6520: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2d6520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2d6524: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d6524u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6528: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2d6528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2d652c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2d652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x2d6530: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2d6530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x2d6534: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d6534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d6538: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2d6538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2d653c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2d653cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d6540: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x2d6540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x2d6544: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d6544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d6548: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d6548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d654c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D654Cu;
    {
        const bool branch_taken_0x2d654c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D654Cu;
        // 0x2d6550: 0xae230070  sw          $v1, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d654c) {
            ctx->pc = 0x2D65C0u;
            goto label_2d65c0;
        }
    }
    ctx->pc = 0x2D6554u;
    // 0x2d6554: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2d6554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6558: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d6558u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d655c: 0x0  nop
    ctx->pc = 0x2d655cu;
    // NOP
label_2d6560:
    // 0x2d6560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d6564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6568: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d6568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d656c: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2D656Cu;
    SET_GPR_U32(ctx, 31, 0x2D6574u);
    ctx->pc = 0x2D6570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D656Cu;
    // 0x2d6570: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2D656Cu, 0x2D6574u)) {
        return;
    }
    ctx->pc = 0x2D6574u;
label_2d6574:
    // 0x2d6574: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D6574u;
    {
        const bool branch_taken_0x2d6574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6574) {
            ctx->pc = 0x2D6578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6574u;
            // 0x2d6578: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D65B0u;
            goto label_2d65b0;
        }
    }
    ctx->pc = 0x2D657Cu;
    // 0x2d657c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d657cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d6580: 0x12740006  beq         $s3, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D6580u;
    {
        const bool branch_taken_0x2d6580 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x2D6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6580u;
        // 0x2d6584: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6580) {
            ctx->pc = 0x2D659Cu;
            goto label_2d659c;
        }
    }
    ctx->pc = 0x2D6588u;
    // 0x2d6588: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d6588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d658c: 0xc0ad05a  jal         func_2B4168
    ctx->pc = 0x2D658Cu;
    SET_GPR_U32(ctx, 31, 0x2D6594u);
    ctx->pc = 0x2D6590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D658Cu;
    // 0x2d6590: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4168u, 0x2D658Cu, 0x2D6594u)) {
        return;
    }
    ctx->pc = 0x2D6594u;
label_2d6594:
    // 0x2d6594: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D6594u;
    {
        const bool branch_taken_0x2d6594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6594u;
        // 0x2d6598: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6594) {
            ctx->pc = 0x2D65B0u;
            goto label_2d65b0;
        }
    }
    ctx->pc = 0x2D659Cu;
label_2d659c:
    // 0x2d659c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2d659cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d65a0: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2d65a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d65a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2d65a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2d65a8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2d65a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2d65ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d65acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d65b0:
    // 0x2d65b0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d65b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d65b4: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x2d65b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d65b8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2D65B8u;
    {
        const bool branch_taken_0x2d65b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D65B8u;
        // 0x2d65bc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d65b8) {
            ctx->pc = 0x2D6560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6560;
        }
    }
    ctx->pc = 0x2D65C0u;
label_2d65c0:
    // 0x2d65c0: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D65C0u;
    {
        const bool branch_taken_0x2d65c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D65C0u;
        // 0x2d65c4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d65c0) {
            ctx->pc = 0x2D6648u;
            goto label_2d6648;
        }
    }
    ctx->pc = 0x2D65C8u;
    // 0x2d65c8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2d65c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d65cc: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x2d65ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x2d65d0: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x2d65d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x2d65d4: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2d65d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d65d8: 0xc7a90010  lwc1        $f9, 0x10($sp)
    ctx->pc = 0x2d65d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2d65dc: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x2d65dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d65e0: 0xc7a80014  lwc1        $f8, 0x14($sp)
    ctx->pc = 0x2d65e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d65e4: 0x460918c1  sub.s       $f3, $f3, $f9
    ctx->pc = 0x2d65e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x2d65e8: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x2d65e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d65ec: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x2d65ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d65f0: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x2d65f0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x2d65f4: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2d65f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d65f8: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x2d65f8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x2d65fc: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x2d65fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2d6600: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x2d6600u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d6604: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d6604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d6608: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d6608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d660c: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x2d660cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2d6610: 0x46042842  mul.s       $f1, $f5, $f4
    ctx->pc = 0x2d6610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2d6614: 0x46043082  mul.s       $f2, $f6, $f4
    ctx->pc = 0x2d6614u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x2d6618: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x2d6618u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2d661c: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x2d661cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x2d6620: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x2d6620u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x2d6624: 0xe7a90040  swc1        $f9, 0x40($sp)
    ctx->pc = 0x2d6624u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d6628: 0xe7a80044  swc1        $f8, 0x44($sp)
    ctx->pc = 0x2d6628u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d662c: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x2d662cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d6630: 0x46062968  max.s       $f5, $f5, $f6
    ctx->pc = 0x2d6630u;
    ctx->f[5] = std::max(ctx->f[5], ctx->f[6]);
    // 0x2d6634: 0x460518e8  max.s       $f3, $f3, $f5
    ctx->pc = 0x2d6634u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[5]);
    // 0x2d6638: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2d6638u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2d663c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D663Cu;
    {
        const bool branch_taken_0x2d663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D663Cu;
        // 0x2d6640: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d663c) {
            ctx->pc = 0x2D665Cu;
            goto label_2d665c;
        }
    }
    ctx->pc = 0x2D6644u;
    // 0x2d6644: 0x0  nop
    ctx->pc = 0x2d6644u;
    // NOP
label_2d6648:
    // 0x2d6648: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2d6648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2d664c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d664cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d6650: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2d6650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2d6654: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d6654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d6658: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x2d6658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_2d665c:
    // 0x2d665c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d6660: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d6660u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6664: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D6664u;
    {
        const bool branch_taken_0x2d6664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6664u;
        // 0x2d6668: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6664) {
            ctx->pc = 0x2D66E4u;
            goto label_2d66e4;
        }
    }
    ctx->pc = 0x2D666Cu;
    // 0x2d666c: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2d666cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d6670: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2d6670u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6674: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2d6674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d6678:
    // 0x2d6678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d667c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d667cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6680: 0xc0aa486  jal         func_2A9218
    ctx->pc = 0x2D6680u;
    SET_GPR_U32(ctx, 31, 0x2D6688u);
    ctx->pc = 0x2D6684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6680u;
    // 0x2d6684: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9218u, 0x2D6680u, 0x2D6688u)) {
        return;
    }
    ctx->pc = 0x2D6688u;
label_2d6688:
    // 0x2d6688: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D6688u;
    {
        const bool branch_taken_0x2d6688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6688) {
            ctx->pc = 0x2D668Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6688u;
            // 0x2d668c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D66D4u;
            goto label_2d66d4;
        }
    }
    ctx->pc = 0x2D6690u;
    // 0x2d6690: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d6690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d6694: 0x12760006  beq         $s3, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D6694u;
    {
        const bool branch_taken_0x2d6694 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        ctx->pc = 0x2D6698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6694u;
        // 0x2d6698: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6694) {
            ctx->pc = 0x2D66B0u;
            goto label_2d66b0;
        }
    }
    ctx->pc = 0x2D669Cu;
    // 0x2d669c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d669cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d66a0: 0xc0ad10a  jal         func_2B4428
    ctx->pc = 0x2D66A0u;
    SET_GPR_U32(ctx, 31, 0x2D66A8u);
    ctx->pc = 0x2D66A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D66A0u;
    // 0x2d66a4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4428u, 0x2D66A0u, 0x2D66A8u)) {
        return;
    }
    ctx->pc = 0x2D66A8u;
label_2d66a8:
    // 0x2d66a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D66A8u;
    {
        const bool branch_taken_0x2d66a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66A8u;
        // 0x2d66ac: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d66a8) {
            ctx->pc = 0x2D66D4u;
            goto label_2d66d4;
        }
    }
    ctx->pc = 0x2D66B0u;
label_2d66b0:
    // 0x2d66b0: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x2d66b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d66b4: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x2d66b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d66b8: 0x6ba3005f  ldl         $v1, 0x5F($sp)
    ctx->pc = 0x2d66b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d66bc: 0x6fa30058  ldr         $v1, 0x58($sp)
    ctx->pc = 0x2d66bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d66c0: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x2d66c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d66c4: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x2d66c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d66c8: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x2d66c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d66cc: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x2d66ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d66d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d66d4:
    // 0x2d66d4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d66d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d66d8: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x2d66d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d66dc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2D66DCu;
    {
        const bool branch_taken_0x2d66dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66DCu;
        // 0x2d66e0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d66dc) {
            ctx->pc = 0x2D6678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6678;
        }
    }
    ctx->pc = 0x2D66E4u;
label_2d66e4:
    // 0x2d66e4: 0x5260000b  beql        $s3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2D66E4u;
    {
        const bool branch_taken_0x2d66e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d66e4) {
            ctx->pc = 0x2D66E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D66E4u;
            // 0x2d66e8: 0x8e230070  lw          $v1, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6714u;
            goto label_2d6714;
        }
    }
    ctx->pc = 0x2D66ECu;
    // 0x2d66ec: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x2d66ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d66f0: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x2d66f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d66f4: 0x6ba3004f  ldl         $v1, 0x4F($sp)
    ctx->pc = 0x2d66f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d66f8: 0x6fa30048  ldr         $v1, 0x48($sp)
    ctx->pc = 0x2d66f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d66fc: 0xb2220037  sdl         $v0, 0x37($s1)
    ctx->pc = 0x2d66fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6700: 0xb6220030  sdr         $v0, 0x30($s1)
    ctx->pc = 0x2d6700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6704: 0xb223003f  sdl         $v1, 0x3F($s1)
    ctx->pc = 0x2d6704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6708: 0xb6230038  sdr         $v1, 0x38($s1)
    ctx->pc = 0x2d6708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d670c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D670Cu;
    {
        const bool branch_taken_0x2d670c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d670c) {
            ctx->pc = 0x2D6724u;
            goto label_2d6724;
        }
    }
    ctx->pc = 0x2D6714u;
label_2d6714:
    // 0x2d6714: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d6714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d6718: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x2d6718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x2d671c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d671cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d6720: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x2d6720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_2d6724:
    // 0x2d6724: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d6724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d6728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d6728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d672c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2d672cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d6730: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x2d6730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x2d6734: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2d6734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d6738: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2d6738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d673c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2d673cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d6740: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2d6740u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d6744: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2d6744u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d6748: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2d6748u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d674c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d674cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d6750: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6750u;
        // 0x2d6754: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6758u;
}

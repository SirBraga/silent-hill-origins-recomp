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

// Function: sub_001AD5A0
// Address: 0x1ad5a0 - 0x1ad780
void sub_001AD5A0_0x1ad5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD5A0_0x1ad5a0");
#endif

    switch (ctx->pc) {
        case 0x1ad600u: goto label_1ad600;
        case 0x1ad620u: goto label_1ad620;
        case 0x1ad634u: goto label_1ad634;
        case 0x1ad6e0u: goto label_1ad6e0;
        default: break;
    }

    ctx->pc = 0x1ad5a0u;

    // 0x1ad5a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ad5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ad5a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ad5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ad5a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ad5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ad5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ad5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ad5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ad5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad5b8: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1ad5b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ad5bc: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1ad5bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ad5c0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1ad5c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ad5c4: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ad5c8: 0x10a00063  beqz        $a1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1AD5C8u;
    {
        const bool branch_taken_0x1ad5c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD5C8u;
        // 0x1ad5cc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad5c8) {
            ctx->pc = 0x1AD758u;
            goto label_1ad758;
        }
    }
    ctx->pc = 0x1AD5D0u;
    // 0x1ad5d0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ad5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1ad5d4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ad5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad5d8: 0xc46090d0  lwc1        $f0, -0x6F30($v1)
    ctx->pc = 0x1ad5d8u;
    { uint32_t bits = FAST_READ32(0x3390D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad5dc: 0xc44d90d4  lwc1        $f13, -0x6F2C($v0)
    ctx->pc = 0x1ad5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294938836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ad5e0: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x1ad5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1ad5e4: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x1ad5e4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ad5e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1ad5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ad5ec: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x1ad5ecu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x1ad5f0: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x1ad5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1ad5f4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ad5f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ad5f8: 0xc085d7e  jal         func_2175F8
    ctx->pc = 0x1AD5F8u;
    SET_GPR_U32(ctx, 31, 0x1AD600u);
    ctx->pc = 0x1AD5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD5F8u;
    // 0x1ad5fc: 0x4616b540  add.s       $f21, $f22, $f22 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2175F8u, 0x1AD5F8u, 0x1AD600u)) {
        return;
    }
    ctx->pc = 0x1AD600u;
label_1ad600:
    // 0x1ad600: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ad600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ad604: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AD604u;
    {
        const bool branch_taken_0x1ad604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD604u;
        // 0x1ad608: 0xc614002c  lwc1        $f20, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad604) {
            ctx->pc = 0x1AD66Cu;
            goto label_1ad66c;
        }
    }
    ctx->pc = 0x1AD60Cu;
    // 0x1ad60c: 0x4615a000  add.s       $f0, $f20, $f21
    ctx->pc = 0x1ad60cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1ad610: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ad610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad614: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AD614u;
    {
        const bool branch_taken_0x1ad614 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1AD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD614u;
        // 0x1ad618: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad614) {
            ctx->pc = 0x1AD66Cu;
            goto label_1ad66c;
        }
    }
    ctx->pc = 0x1AD61Cu;
    // 0x1ad61c: 0x2611004c  addiu       $s1, $s0, 0x4C
    ctx->pc = 0x1ad61cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_1ad620:
    // 0x1ad620: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1ad620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ad624: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ad624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ad628: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ad628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ad62c: 0xc085d2a  jal         func_2174A8
    ctx->pc = 0x1AD62Cu;
    SET_GPR_U32(ctx, 31, 0x1AD634u);
    ctx->pc = 0x1AD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD62Cu;
    // 0x1ad630: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2174A8u, 0x1AD62Cu, 0x1AD634u)) {
        return;
    }
    ctx->pc = 0x1AD634u;
label_1ad634:
    // 0x1ad634: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1ad634u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1ad638: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1ad638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad63c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ad63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad640: 0x0  nop
    ctx->pc = 0x1ad640u;
    // NOP
    // 0x1ad644: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD644u;
    {
        const bool branch_taken_0x1ad644 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ad644) {
            ctx->pc = 0x1AD648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD644u;
            // 0x1ad648: 0xe6010028  swc1        $f1, 0x28($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD64Cu;
            goto label_1ad64c;
        }
    }
    ctx->pc = 0x1AD64Cu;
label_1ad64c:
    // 0x1ad64c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1ad64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad650: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ad650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ad654: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ad654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ad658: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x1ad658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1ad65c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1ad65cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1ad660: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1ad660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ad664: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1AD664u;
    {
        const bool branch_taken_0x1ad664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD664u;
        // 0x1ad668: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad664) {
            ctx->pc = 0x1AD620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad620;
        }
    }
    ctx->pc = 0x1AD66Cu;
label_1ad66c:
    // 0x1ad66c: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x1ad66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ad670: 0xc604002c  lwc1        $f4, 0x2C($s0)
    ctx->pc = 0x1ad670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ad674: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1ad674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1ad678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad67c: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1ad67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x1ad680: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ad680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad684: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1ad684u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1ad688: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ad688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ad68c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ad68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad690: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1ad690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1ad694: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ad694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ad698: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ad698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ad69c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1ad69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1ad6a0: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x1ad6a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1ad6a4: 0x6a020027  ldl         $v0, 0x27($s0)
    ctx->pc = 0x1ad6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ad6a8: 0x6e020020  ldr         $v0, 0x20($s0)
    ctx->pc = 0x1ad6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ad6ac: 0x6a03002f  ldl         $v1, 0x2F($s0)
    ctx->pc = 0x1ad6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ad6b0: 0x6e030028  ldr         $v1, 0x28($s0)
    ctx->pc = 0x1ad6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ad6b4: 0xb2020043  sdl         $v0, 0x43($s0)
    ctx->pc = 0x1ad6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad6b8: 0xb602003c  sdr         $v0, 0x3C($s0)
    ctx->pc = 0x1ad6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad6bc: 0xb203004b  sdl         $v1, 0x4B($s0)
    ctx->pc = 0x1ad6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad6c0: 0xb6030044  sdr         $v1, 0x44($s0)
    ctx->pc = 0x1ad6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad6c4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ad6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ad6c8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AD6C8u;
    {
        const bool branch_taken_0x1ad6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6C8u;
        // 0x1ad6cc: 0x4615a940  add.s       $f5, $f21, $f21 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6c8) {
            ctx->pc = 0x1AD71Cu;
            goto label_1ad71c;
        }
    }
    ctx->pc = 0x1AD6D0u;
    // 0x1ad6d0: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x1ad6d0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1ad6d4: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AD6D4u;
    {
        const bool branch_taken_0x1ad6d4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1AD6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6D4u;
        // 0x1ad6d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6d4) {
            ctx->pc = 0x1AD71Cu;
            goto label_1ad71c;
        }
    }
    ctx->pc = 0x1AD6DCu;
    // 0x1ad6dc: 0x26030064  addiu       $v1, $s0, 0x64
    ctx->pc = 0x1ad6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_1ad6e0:
    // 0x1ad6e0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1ad6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad6e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ad6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ad6e8: 0xe461fff4  swc1        $f1, -0xC($v1)
    ctx->pc = 0x1ad6e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), bits); }
    // 0x1ad6ec: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1ad6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad6f0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1ad6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1ad6f4: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x1ad6f4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1ad6f8: 0xe460fff8  swc1        $f0, -0x8($v1)
    ctx->pc = 0x1ad6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
    // 0x1ad6fc: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ad6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad700: 0xe461fffc  swc1        $f1, -0x4($v1)
    ctx->pc = 0x1ad700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x1ad704: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1ad704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad708: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ad708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ad70c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ad70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ad710: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ad710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ad714: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1AD714u;
    {
        const bool branch_taken_0x1ad714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD714u;
        // 0x1ad718: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad714) {
            ctx->pc = 0x1AD6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad6e0;
        }
    }
    ctx->pc = 0x1AD71Cu;
label_1ad71c:
    // 0x1ad71c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ad71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ad720: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ad720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad724: 0xc6040020  lwc1        $f4, 0x20($s0)
    ctx->pc = 0x1ad724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ad728: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1ad728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1ad72c: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x1ad72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ad730: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x1ad730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ad734: 0x46152101  sub.s       $f4, $f4, $f21
    ctx->pc = 0x1ad734u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[21]);
    // 0x1ad738: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1ad738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad73c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1ad73cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1ad740: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1ad740u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1ad744: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1ad744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1ad748: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x1ad748u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1ad74c: 0xe6020028  swc1        $f2, 0x28($s0)
    ctx->pc = 0x1ad74cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1ad750: 0xe6030024  swc1        $f3, 0x24($s0)
    ctx->pc = 0x1ad750u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1ad754: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1ad754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1ad758:
    // 0x1ad758: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ad758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad75c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ad75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad760: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ad760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad768: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1ad768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ad76c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1ad76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ad770: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1ad770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ad774: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD774u;
        // 0x1ad778: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD77Cu;
    // 0x1ad77c: 0x0  nop
    ctx->pc = 0x1ad77cu;
    // NOP
    ctx->pc = 0x1ad780u;
}

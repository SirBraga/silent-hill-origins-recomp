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

// Function: sub_002B4588
// Address: 0x2b4588 - 0x2b46a8
void sub_002B4588_0x2b4588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4588_0x2b4588");
#endif

    switch (ctx->pc) {
        case 0x2b45d8u: goto label_2b45d8;
        default: break;
    }

    ctx->pc = 0x2b4588u;

    // 0x2b4588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b4588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b458c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b4590: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b4590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b4594: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b4594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b459c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b459cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b45a0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2b45a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b45a4: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x2b45a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b45a8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2b45a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b45ac: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2b45acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b45b0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2b45b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b45b4: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2b45b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b45b8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2b45b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2b45bc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2b45bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2b45c0: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x2b45c0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2b45c4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2b45c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b45c8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2b45c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b45cc: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2b45ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b45d0: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x2B45D0u;
    SET_GPR_U32(ctx, 31, 0x2B45D8u);
    ctx->pc = 0x2B45D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45D0u;
    // 0x2b45d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x2B45D0u, 0x2B45D8u)) {
        return;
    }
    ctx->pc = 0x2B45D8u;
label_2b45d8:
    // 0x2b45d8: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x2b45d8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x2b45dc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2b45dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b45e0: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2b45e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b45e4: 0x0  nop
    ctx->pc = 0x2b45e4u;
    // NOP
    // 0x2b45e8: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x2B45E8u;
    {
        const bool branch_taken_0x2b45e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B45ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45E8u;
        // 0x2b45ec: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45e8) {
            ctx->pc = 0x2B4668u;
            goto label_2b4668;
        }
    }
    ctx->pc = 0x2B45F0u;
    // 0x2b45f0: 0x46063140  add.s       $f5, $f6, $f6
    ctx->pc = 0x2b45f0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x2b45f4: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2b45f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2b45f8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2b45f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b45fc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2b45fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4600: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2b4600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b4604: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x2b4604u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[5]);
    // 0x2b4608: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b4608u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b460c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b460cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b4610: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2b4610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2b4614: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2b4614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4618: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2b4618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b461c: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2b461cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2b4620: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x2b4620u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[5]);
    // 0x2b4624: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b4624u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b4628: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b4628u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b462c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2b462cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2b4630: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2b4630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4634: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2b4634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4638: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2b4638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2b463c: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x2b463cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[5]);
    // 0x2b4640: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b4640u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b4644: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2b4644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2b4648: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2b4648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2b464c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2b464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4650: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b4650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b4654: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b4654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4658: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x2b4658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2b465c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b465cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b4660: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B4660u;
    {
        const bool branch_taken_0x2b4660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4660u;
        // 0x2b4664: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4660) {
            ctx->pc = 0x2B4690u;
            goto label_2b4690;
        }
    }
    ctx->pc = 0x2B4668u;
label_2b4668:
    // 0x2b4668: 0x5230000a  beql        $s1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B4668u;
    {
        const bool branch_taken_0x2b4668 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x2b4668) {
            ctx->pc = 0x2B466Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4668u;
            // 0x2b466c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4694u;
            goto label_2b4694;
        }
    }
    ctx->pc = 0x2B4670u;
    // 0x2b4670: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x2b4670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b4674: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x2b4674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b4678: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x2b4678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b467c: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x2b467cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b4680: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x2b4680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b4684: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x2b4684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b4688: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x2b4688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b468c: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x2b468cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b4690:
    // 0x2b4690: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b4690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b4694:
    // 0x2b4694: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b4694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b469c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B469Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B469Cu;
        // 0x2b46a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B469Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B46A4u;
    // 0x2b46a4: 0x0  nop
    ctx->pc = 0x2b46a4u;
    // NOP
    ctx->pc = 0x2b46a8u;
}

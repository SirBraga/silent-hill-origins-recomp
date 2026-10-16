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

// Function: sub_002B4428
// Address: 0x2b4428 - 0x2b4588
void sub_002B4428_0x2b4428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4428_0x2b4428");
#endif

    switch (ctx->pc) {
        case 0x2b4480u: goto label_2b4480;
        default: break;
    }

    ctx->pc = 0x2b4428u;

    // 0x2b4428: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b4428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b442c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b442cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b4430: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b4430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b4434: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b4434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b4438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b443c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b443cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4444: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b4444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4448: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2b4448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b444c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2b444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4450: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2b4450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4454: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2b4454u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2b4458: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2b4458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b445c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2b445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4460: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2b4460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4464: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2b4464u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2b4468: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2b4468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b446c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2b446cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2b4470: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2b4470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b4474: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2b4474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b4478: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x2B4478u;
    SET_GPR_U32(ctx, 31, 0x2B4480u);
    ctx->pc = 0x2B447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4478u;
    // 0x2b447c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x2B4478u, 0x2B4480u)) {
        return;
    }
    ctx->pc = 0x2B4480u;
label_2b4480:
    // 0x2b4480: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2b4480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4484: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x2b4484u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4488: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x2b4488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b448c: 0x46050800  add.s       $f0, $f1, $f5
    ctx->pc = 0x2b448cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2b4490: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2b4490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4494: 0x0  nop
    ctx->pc = 0x2b4494u;
    // NOP
    // 0x2b4498: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x2B4498u;
    {
        const bool branch_taken_0x2b4498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4498) {
            ctx->pc = 0x2B449Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4498u;
            // 0x2b449c: 0x46051800  add.s       $f0, $f3, $f5 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B44C8u;
            goto label_2b44c8;
        }
    }
    ctx->pc = 0x2B44A0u;
    // 0x2b44a0: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x2b44a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b44a4: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x2b44a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b44a8: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x2b44a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b44ac: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x2b44acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b44b0: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x2b44b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b44b4: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x2b44b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b44b8: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x2b44b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b44bc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2B44BCu;
    {
        const bool branch_taken_0x2b44bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B44C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44BCu;
        // 0x2b44c0: 0xb6430008  sdr         $v1, 0x8($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44bc) {
            ctx->pc = 0x2B4568u;
            goto label_2b4568;
        }
    }
    ctx->pc = 0x2B44C4u;
    // 0x2b44c4: 0x0  nop
    ctx->pc = 0x2b44c4u;
    // NOP
label_2b44c8:
    // 0x2b44c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b44c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b44cc: 0x0  nop
    ctx->pc = 0x2b44ccu;
    // NOP
    // 0x2b44d0: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x2B44D0u;
    {
        const bool branch_taken_0x2b44d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b44d0) {
            ctx->pc = 0x2B44D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B44D0u;
            // 0x2b44d4: 0x460308c1  sub.s       $f3, $f1, $f3 (Delay Slot)
            ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B44FCu;
            goto label_2b44fc;
        }
    }
    ctx->pc = 0x2B44D8u;
    // 0x2b44d8: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2b44d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b44dc: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2b44dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b44e0: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x2b44e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b44e4: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x2b44e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b44e8: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x2b44e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b44ec: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x2b44ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b44f0: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x2b44f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b44f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B44F4u;
    {
        const bool branch_taken_0x2b44f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44F4u;
        // 0x2b44f8: 0xb6430008  sdr         $v1, 0x8($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44f4) {
            ctx->pc = 0x2B4568u;
            goto label_2b4568;
        }
    }
    ctx->pc = 0x2B44FCu;
label_2b44fc:
    // 0x2b44fc: 0x46052840  add.s       $f1, $f5, $f5
    ctx->pc = 0x2b44fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x2b4500: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2b4500u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2b4504: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x2b4504u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[1]);
    // 0x2b4508: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2b4508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b450c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b450cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b4510: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2b4510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4514: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2b4514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4518: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2b4518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b451c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b451cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b4520: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b4520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b4524: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2b4524u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2b4528: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x2b4528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2b452c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4530: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b4530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b4534: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2b4534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2b4538: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2b4538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b453c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2b453cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2b4540: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x2b4540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2b4544: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2b4544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4548: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b4548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b454c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b454cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b4550: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2b4550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4554: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b4554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b4558: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2b4558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2b455c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b455cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b4560: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x2b4560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2b4564: 0x0  nop
    ctx->pc = 0x2b4564u;
    // NOP
label_2b4568:
    // 0x2b4568: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b4568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b456c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b456cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b4570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4578: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4578u;
        // 0x2b457c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4580u;
    // 0x2b4580: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2b4580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2b4584: 0x0  nop
    ctx->pc = 0x2b4584u;
    // NOP
    ctx->pc = 0x2b4588u;
}

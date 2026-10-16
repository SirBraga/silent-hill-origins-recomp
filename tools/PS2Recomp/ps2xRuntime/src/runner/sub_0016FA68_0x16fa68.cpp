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

// Function: sub_0016FA68
// Address: 0x16fa68 - 0x16fe60
void sub_0016FA68_0x16fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FA68_0x16fa68");
#endif

    ctx->pc = 0x16fa68u;

    // 0x16fa68: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x16fa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x16fa6c: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x16fa6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x16fa70: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x16fa70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x16fa74: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x16fa74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x16fa78: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x16fa78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x16fa7c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x16fa7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa80: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x16fa80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa84: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x16fa84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa88: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x16fa88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa8c: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x16fa8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x16fa90: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x16fa90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x16fa94: 0x68a9000f  ldl         $t1, 0xF($a1)
    ctx->pc = 0x16fa94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x16fa98: 0x6ca90008  ldr         $t1, 0x8($a1)
    ctx->pc = 0x16fa98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x16fa9c: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x16fa9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16faa0: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x16faa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16faa4: 0xb3a9001f  sdl         $t1, 0x1F($sp)
    ctx->pc = 0x16faa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16faa8: 0xb7a90018  sdr         $t1, 0x18($sp)
    ctx->pc = 0x16faa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16faac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16faacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fab0: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x16fab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x16fab4: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x16fab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x16fab8: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x16fab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fabc: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x16fabcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fac0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16fac4: 0x6ba2000f  ldl         $v0, 0xF($sp)
    ctx->pc = 0x16fac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x16fac8: 0x6fa20008  ldr         $v0, 0x8($sp)
    ctx->pc = 0x16fac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x16facc: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x16faccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fad0: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x16fad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fad4: 0x6ba90017  ldl         $t1, 0x17($sp)
    ctx->pc = 0x16fad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x16fad8: 0x6fa90010  ldr         $t1, 0x10($sp)
    ctx->pc = 0x16fad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x16fadc: 0xb3a90047  sdl         $t1, 0x47($sp)
    ctx->pc = 0x16fadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fae0: 0xb7a90040  sdr         $t1, 0x40($sp)
    ctx->pc = 0x16fae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fae4: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x16fae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16fae8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16faec: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x16faecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16faf0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x16faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16faf4: 0x46030141  sub.s       $f5, $f0, $f3
    ctx->pc = 0x16faf4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16faf8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x16faf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fafc: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x16fafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16fb00: 0x46040981  sub.s       $f6, $f1, $f4
    ctx->pc = 0x16fb00u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x16fb04: 0x46040101  sub.s       $f4, $f0, $f4
    ctx->pc = 0x16fb04u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x16fb08: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x16fb08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x16fb0c: 0x46042802  mul.s       $f0, $f5, $f4
    ctx->pc = 0x16fb0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x16fb10: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x16fb10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x16fb14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fb14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fb18: 0x0  nop
    ctx->pc = 0x16fb18u;
    // NOP
    // 0x16fb1c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16FB1Cu;
    {
        const bool branch_taken_0x16fb1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB1Cu;
        // 0x16fb20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb1c) {
            ctx->pc = 0x16FB2Cu;
            goto label_16fb2c;
        }
    }
    ctx->pc = 0x16FB24u;
    // 0x16fb24: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x16FB24u;
    {
        const bool branch_taken_0x16fb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB24u;
        // 0x16fb28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb24) {
            ctx->pc = 0x16FB9Cu;
            goto label_16fb9c;
        }
    }
    ctx->pc = 0x16FB2Cu;
label_16fb2c:
    // 0x16fb2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16fb2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fb30: 0x0  nop
    ctx->pc = 0x16fb30u;
    // NOP
    // 0x16fb34: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x16FB34u;
    {
        const bool branch_taken_0x16fb34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB34u;
        // 0x16fb38: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb34) {
            ctx->pc = 0x16FB9Cu;
            goto label_16fb9c;
        }
    }
    ctx->pc = 0x16FB3Cu;
    // 0x16fb3c: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x16fb3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x16fb40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16fb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16fb44: 0x0  nop
    ctx->pc = 0x16fb44u;
    // NOP
    // 0x16fb48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fb48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fb4c: 0x0  nop
    ctx->pc = 0x16fb4cu;
    // NOP
    // 0x16fb50: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x16FB50u;
    {
        const bool branch_taken_0x16fb50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fb50) {
            ctx->pc = 0x16FB9Cu;
            goto label_16fb9c;
        }
    }
    ctx->pc = 0x16FB58u;
    // 0x16fb58: 0x46043002  mul.s       $f0, $f6, $f4
    ctx->pc = 0x16fb58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x16fb5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fb5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fb60: 0x0  nop
    ctx->pc = 0x16fb60u;
    // NOP
    // 0x16fb64: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x16FB64u;
    {
        const bool branch_taken_0x16fb64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fb64) {
            ctx->pc = 0x16FB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FB64u;
            // 0x16fb68: 0x46021002  mul.s       $f0, $f2, $f2 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FB74u;
            goto label_16fb74;
        }
    }
    ctx->pc = 0x16FB6Cu;
    // 0x16fb6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16FB6Cu;
    {
        const bool branch_taken_0x16fb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb6c) {
            ctx->pc = 0x16FB9Cu;
            goto label_16fb9c;
        }
    }
    ctx->pc = 0x16FB74u;
label_16fb74:
    // 0x16fb74: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x16fb74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x16fb78: 0x460630c2  mul.s       $f3, $f6, $f6
    ctx->pc = 0x16fb78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x16fb7c: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x16fb7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x16fb80: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x16fb80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x16fb84: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16fb84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x16fb88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16fb88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fb8c: 0x0  nop
    ctx->pc = 0x16fb8cu;
    // NOP
    // 0x16fb90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16FB90u;
    {
        const bool branch_taken_0x16fb90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB90u;
        // 0x16fb94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb90) {
            ctx->pc = 0x16FB9Cu;
            goto label_16fb9c;
        }
    }
    ctx->pc = 0x16FB98u;
    // 0x16fb98: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16fb98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fb9c:
    // 0x16fb9c: 0x68c80007  ldl         $t0, 0x7($a2)
    ctx->pc = 0x16fb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x16fba0: 0x6cc80000  ldr         $t0, 0x0($a2)
    ctx->pc = 0x16fba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x16fba4: 0xb3a80057  sdl         $t0, 0x57($sp)
    ctx->pc = 0x16fba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fba8: 0xb7a80050  sdr         $t0, 0x50($sp)
    ctx->pc = 0x16fba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fbac: 0x68c8000f  ldl         $t0, 0xF($a2)
    ctx->pc = 0x16fbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x16fbb0: 0x6cc80008  ldr         $t0, 0x8($a2)
    ctx->pc = 0x16fbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x16fbb4: 0xb3a80067  sdl         $t0, 0x67($sp)
    ctx->pc = 0x16fbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fbb8: 0xb7a80060  sdr         $t0, 0x60($sp)
    ctx->pc = 0x16fbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fbbc: 0x6888000f  ldl         $t0, 0xF($a0)
    ctx->pc = 0x16fbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x16fbc0: 0x6c880008  ldr         $t0, 0x8($a0)
    ctx->pc = 0x16fbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x16fbc4: 0xb3a80077  sdl         $t0, 0x77($sp)
    ctx->pc = 0x16fbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fbc8: 0xb7a80070  sdr         $t0, 0x70($sp)
    ctx->pc = 0x16fbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fbcc: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x16fbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16fbd0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x16fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fbd4: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x16fbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16fbd8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x16fbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fbdc: 0x46030141  sub.s       $f5, $f0, $f3
    ctx->pc = 0x16fbdcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16fbe0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x16fbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fbe4: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x16fbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16fbe8: 0x46040981  sub.s       $f6, $f1, $f4
    ctx->pc = 0x16fbe8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x16fbec: 0x46040101  sub.s       $f4, $f0, $f4
    ctx->pc = 0x16fbecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x16fbf0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x16fbf0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x16fbf4: 0x46042802  mul.s       $f0, $f5, $f4
    ctx->pc = 0x16fbf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x16fbf8: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x16fbf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x16fbfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fbfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fc00: 0x0  nop
    ctx->pc = 0x16fc00u;
    // NOP
    // 0x16fc04: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x16FC04u;
    {
        const bool branch_taken_0x16fc04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC04u;
        // 0x16fc08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc04) {
            ctx->pc = 0x16FC7Cu;
            goto label_16fc7c;
        }
    }
    ctx->pc = 0x16FC0Cu;
    // 0x16fc0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16fc0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fc10: 0x0  nop
    ctx->pc = 0x16fc10u;
    // NOP
    // 0x16fc14: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x16FC14u;
    {
        const bool branch_taken_0x16fc14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC14u;
        // 0x16fc18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc14) {
            ctx->pc = 0x16FC7Cu;
            goto label_16fc7c;
        }
    }
    ctx->pc = 0x16FC1Cu;
    // 0x16fc1c: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x16fc1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x16fc20: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16fc20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16fc24: 0x0  nop
    ctx->pc = 0x16fc24u;
    // NOP
    // 0x16fc28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fc28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fc2c: 0x0  nop
    ctx->pc = 0x16fc2cu;
    // NOP
    // 0x16fc30: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x16FC30u;
    {
        const bool branch_taken_0x16fc30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fc30) {
            ctx->pc = 0x16FC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FC30u;
            // 0x16fc34: 0x621018  mult        $v0, $v1, $v0 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FC80u;
            goto label_16fc80;
        }
    }
    ctx->pc = 0x16FC38u;
    // 0x16fc38: 0x46043002  mul.s       $f0, $f6, $f4
    ctx->pc = 0x16fc38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x16fc3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fc3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fc40: 0x0  nop
    ctx->pc = 0x16fc40u;
    // NOP
    // 0x16fc44: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x16FC44u;
    {
        const bool branch_taken_0x16fc44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fc44) {
            ctx->pc = 0x16FC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FC44u;
            // 0x16fc48: 0x46021002  mul.s       $f0, $f2, $f2 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FC54u;
            goto label_16fc54;
        }
    }
    ctx->pc = 0x16FC4Cu;
    // 0x16fc4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16FC4Cu;
    {
        const bool branch_taken_0x16fc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC4Cu;
        // 0x16fc50: 0x621018  mult        $v0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc4c) {
            ctx->pc = 0x16FC80u;
            goto label_16fc80;
        }
    }
    ctx->pc = 0x16FC54u;
label_16fc54:
    // 0x16fc54: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x16fc54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x16fc58: 0x460630c2  mul.s       $f3, $f6, $f6
    ctx->pc = 0x16fc58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x16fc5c: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x16fc5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x16fc60: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x16fc60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x16fc64: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16fc64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x16fc68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16fc68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fc6c: 0x0  nop
    ctx->pc = 0x16fc6cu;
    // NOP
    // 0x16fc70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16FC70u;
    {
        const bool branch_taken_0x16fc70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC70u;
        // 0x16fc74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc70) {
            ctx->pc = 0x16FC7Cu;
            goto label_16fc7c;
        }
    }
    ctx->pc = 0x16FC78u;
    // 0x16fc78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16fc78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fc7c:
    // 0x16fc7c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x16fc7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_16fc80:
    // 0x16fc80: 0x1c400074  bgtz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x16FC80u;
    {
        const bool branch_taken_0x16fc80 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x16FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC80u;
        // 0x16fc84: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc80) {
            ctx->pc = 0x16FE54u;
            goto label_16fe54;
        }
    }
    ctx->pc = 0x16FC88u;
    // 0x16fc88: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x16fc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x16fc8c: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x16fc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x16fc90: 0xb3a80087  sdl         $t0, 0x87($sp)
    ctx->pc = 0x16fc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fc94: 0xb7a80080  sdr         $t0, 0x80($sp)
    ctx->pc = 0x16fc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fc98: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x16fc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x16fc9c: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x16fc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x16fca0: 0xb3a50097  sdl         $a1, 0x97($sp)
    ctx->pc = 0x16fca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fca4: 0xb7a50090  sdr         $a1, 0x90($sp)
    ctx->pc = 0x16fca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fca8: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x16fca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x16fcac: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x16fcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x16fcb0: 0xb3a200a7  sdl         $v0, 0xA7($sp)
    ctx->pc = 0x16fcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fcb4: 0xb7a200a0  sdr         $v0, 0xA0($sp)
    ctx->pc = 0x16fcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fcb8: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x16fcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16fcbc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x16fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fcc0: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x16fcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16fcc4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x16fcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fcc8: 0x46030141  sub.s       $f5, $f0, $f3
    ctx->pc = 0x16fcc8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16fccc: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x16fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fcd0: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x16fcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16fcd4: 0x46040981  sub.s       $f6, $f1, $f4
    ctx->pc = 0x16fcd4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x16fcd8: 0x46040101  sub.s       $f4, $f0, $f4
    ctx->pc = 0x16fcd8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x16fcdc: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x16fcdcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x16fce0: 0x46042802  mul.s       $f0, $f5, $f4
    ctx->pc = 0x16fce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x16fce4: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x16fce4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x16fce8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fcec: 0x0  nop
    ctx->pc = 0x16fcecu;
    // NOP
    // 0x16fcf0: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x16FCF0u;
    {
        const bool branch_taken_0x16fcf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FCF0u;
        // 0x16fcf4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fcf0) {
            ctx->pc = 0x16FD68u;
            goto label_16fd68;
        }
    }
    ctx->pc = 0x16FCF8u;
    // 0x16fcf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16fcf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fcfc: 0x0  nop
    ctx->pc = 0x16fcfcu;
    // NOP
    // 0x16fd00: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x16FD00u;
    {
        const bool branch_taken_0x16fd00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD00u;
        // 0x16fd04: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd00) {
            ctx->pc = 0x16FD68u;
            goto label_16fd68;
        }
    }
    ctx->pc = 0x16FD08u;
    // 0x16fd08: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x16fd08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x16fd0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16fd0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16fd10: 0x0  nop
    ctx->pc = 0x16fd10u;
    // NOP
    // 0x16fd14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fd14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fd18: 0x0  nop
    ctx->pc = 0x16fd18u;
    // NOP
    // 0x16fd1c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x16FD1Cu;
    {
        const bool branch_taken_0x16fd1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fd1c) {
            ctx->pc = 0x16FD68u;
            goto label_16fd68;
        }
    }
    ctx->pc = 0x16FD24u;
    // 0x16fd24: 0x46043002  mul.s       $f0, $f6, $f4
    ctx->pc = 0x16fd24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x16fd28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fd28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fd2c: 0x0  nop
    ctx->pc = 0x16fd2cu;
    // NOP
    // 0x16fd30: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x16FD30u;
    {
        const bool branch_taken_0x16fd30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fd30) {
            ctx->pc = 0x16FD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FD30u;
            // 0x16fd34: 0x46021002  mul.s       $f0, $f2, $f2 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FD40u;
            goto label_16fd40;
        }
    }
    ctx->pc = 0x16FD38u;
    // 0x16fd38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16FD38u;
    {
        const bool branch_taken_0x16fd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fd38) {
            ctx->pc = 0x16FD68u;
            goto label_16fd68;
        }
    }
    ctx->pc = 0x16FD40u;
label_16fd40:
    // 0x16fd40: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x16fd40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x16fd44: 0x460630c2  mul.s       $f3, $f6, $f6
    ctx->pc = 0x16fd44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x16fd48: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x16fd48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x16fd4c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x16fd4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x16fd50: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16fd50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x16fd54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16fd54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fd58: 0x0  nop
    ctx->pc = 0x16fd58u;
    // NOP
    // 0x16fd5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16FD5Cu;
    {
        const bool branch_taken_0x16fd5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD5Cu;
        // 0x16fd60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd5c) {
            ctx->pc = 0x16FD68u;
            goto label_16fd68;
        }
    }
    ctx->pc = 0x16FD64u;
    // 0x16fd64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16fd64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fd68:
    // 0x16fd68: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x16fd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x16fd6c: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x16fd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x16fd70: 0xb3a800b7  sdl         $t0, 0xB7($sp)
    ctx->pc = 0x16fd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fd74: 0xb7a800b0  sdr         $t0, 0xB0($sp)
    ctx->pc = 0x16fd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fd78: 0x6887000f  ldl         $a3, 0xF($a0)
    ctx->pc = 0x16fd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x16fd7c: 0x6c870008  ldr         $a3, 0x8($a0)
    ctx->pc = 0x16fd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x16fd80: 0xb3a700c7  sdl         $a3, 0xC7($sp)
    ctx->pc = 0x16fd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fd84: 0xb7a700c0  sdr         $a3, 0xC0($sp)
    ctx->pc = 0x16fd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fd88: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x16fd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x16fd8c: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x16fd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x16fd90: 0xb3a400d7  sdl         $a0, 0xD7($sp)
    ctx->pc = 0x16fd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fd94: 0xb7a400d0  sdr         $a0, 0xD0($sp)
    ctx->pc = 0x16fd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fd98: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x16fd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16fd9c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x16fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fda0: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x16fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16fda4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x16fda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fda8: 0x46030141  sub.s       $f5, $f0, $f3
    ctx->pc = 0x16fda8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16fdac: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x16fdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fdb0: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x16fdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16fdb4: 0x46040981  sub.s       $f6, $f1, $f4
    ctx->pc = 0x16fdb4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x16fdb8: 0x46040101  sub.s       $f4, $f0, $f4
    ctx->pc = 0x16fdb8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x16fdbc: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x16fdbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x16fdc0: 0x46042802  mul.s       $f0, $f5, $f4
    ctx->pc = 0x16fdc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x16fdc4: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x16fdc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x16fdc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fdc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fdcc: 0x0  nop
    ctx->pc = 0x16fdccu;
    // NOP
    // 0x16fdd0: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x16FDD0u;
    {
        const bool branch_taken_0x16fdd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDD0u;
        // 0x16fdd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fdd0) {
            ctx->pc = 0x16FE48u;
            goto label_16fe48;
        }
    }
    ctx->pc = 0x16FDD8u;
    // 0x16fdd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16fdd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fddc: 0x0  nop
    ctx->pc = 0x16fddcu;
    // NOP
    // 0x16fde0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x16FDE0u;
    {
        const bool branch_taken_0x16fde0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDE0u;
        // 0x16fde4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fde0) {
            ctx->pc = 0x16FE48u;
            goto label_16fe48;
        }
    }
    ctx->pc = 0x16FDE8u;
    // 0x16fde8: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x16fde8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x16fdec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16fdecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16fdf0: 0x0  nop
    ctx->pc = 0x16fdf0u;
    // NOP
    // 0x16fdf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fdf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fdf8: 0x0  nop
    ctx->pc = 0x16fdf8u;
    // NOP
    // 0x16fdfc: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x16FDFCu;
    {
        const bool branch_taken_0x16fdfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fdfc) {
            ctx->pc = 0x16FE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FDFCu;
            // 0x16fe00: 0x621018  mult        $v0, $v1, $v0 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FE4Cu;
            goto label_16fe4c;
        }
    }
    ctx->pc = 0x16FE04u;
    // 0x16fe04: 0x46043002  mul.s       $f0, $f6, $f4
    ctx->pc = 0x16fe04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x16fe08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fe08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fe0c: 0x0  nop
    ctx->pc = 0x16fe0cu;
    // NOP
    // 0x16fe10: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x16FE10u;
    {
        const bool branch_taken_0x16fe10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fe10) {
            ctx->pc = 0x16FE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FE10u;
            // 0x16fe14: 0x46021002  mul.s       $f0, $f2, $f2 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FE20u;
            goto label_16fe20;
        }
    }
    ctx->pc = 0x16FE18u;
    // 0x16fe18: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16FE18u;
    {
        const bool branch_taken_0x16fe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE18u;
        // 0x16fe1c: 0x621018  mult        $v0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe18) {
            ctx->pc = 0x16FE4Cu;
            goto label_16fe4c;
        }
    }
    ctx->pc = 0x16FE20u;
label_16fe20:
    // 0x16fe20: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x16fe20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x16fe24: 0x460630c2  mul.s       $f3, $f6, $f6
    ctx->pc = 0x16fe24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x16fe28: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x16fe28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x16fe2c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x16fe2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x16fe30: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16fe30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x16fe34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16fe34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fe38: 0x0  nop
    ctx->pc = 0x16fe38u;
    // NOP
    // 0x16fe3c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16FE3Cu;
    {
        const bool branch_taken_0x16fe3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE3Cu;
        // 0x16fe40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe3c) {
            ctx->pc = 0x16FE48u;
            goto label_16fe48;
        }
    }
    ctx->pc = 0x16FE44u;
    // 0x16fe44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16fe44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fe48:
    // 0x16fe48: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x16fe48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_16fe4c:
    // 0x16fe4c: 0x28450001  slti        $a1, $v0, 0x1
    ctx->pc = 0x16fe4cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x16fe50: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x16fe50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16fe54:
    // 0x16fe54: 0x3e00008  jr          $ra
    ctx->pc = 0x16FE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE54u;
        // 0x16fe58: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FE5Cu;
    // 0x16fe5c: 0x0  nop
    ctx->pc = 0x16fe5cu;
    // NOP
    ctx->pc = 0x16fe60u;
}

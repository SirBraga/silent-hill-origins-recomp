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

// Function: sub_00238390
// Address: 0x238390 - 0x2384d0
void sub_00238390_0x238390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238390_0x238390");
#endif

    ctx->pc = 0x238390u;

    // 0x238390: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x238390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x238394: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x238394u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F20u));
    // 0x238398: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238398u;
    {
        const bool branch_taken_0x238398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238398u;
        // 0x23839c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238398) {
            ctx->pc = 0x2383B0u;
            goto label_2383b0;
        }
    }
    ctx->pc = 0x2383A0u;
    // 0x2383a0: 0x2882005a  slti        $v0, $a0, 0x5A
    ctx->pc = 0x2383a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x2383a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2383A4u;
    {
        const bool branch_taken_0x2383a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383A4u;
        // 0x2383a8: 0x2882ffff  slti        $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383a4) {
            ctx->pc = 0x2383B0u;
            goto label_2383b0;
        }
    }
    ctx->pc = 0x2383ACu;
    // 0x2383ac: 0x38470001  xori        $a3, $v0, 0x1
    ctx->pc = 0x2383acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2383b0:
    // 0x2383b0: 0x10e00045  beqz        $a3, . + 4 + (0x45 << 2)
    ctx->pc = 0x2383B0u;
    {
        const bool branch_taken_0x2383b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383B0u;
        // 0x2383b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383b0) {
            ctx->pc = 0x2384C8u;
            goto label_2384c8;
        }
    }
    ctx->pc = 0x2383B8u;
    // 0x2383b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2383b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2383bc: 0xac243f18  sw          $a0, 0x3F18($at)
    ctx->pc = 0x2383bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B3F18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F18u, _value); } while (0);
    // 0x2383c0: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2383C0u;
    {
        const bool branch_taken_0x2383c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2383C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383C0u;
        // 0x2383c4: 0x3c060070  lui         $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383c0) {
            ctx->pc = 0x2384A8u;
            goto label_2384a8;
        }
    }
    ctx->pc = 0x2383C8u;
    // 0x2383c8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2383c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2383cc: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2383ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2383d0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2383d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2383d4: 0x24630478  addiu       $v1, $v1, 0x478
    ctx->pc = 0x2383d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1144));
    // 0x2383d8: 0x24c53c90  addiu       $a1, $a2, 0x3C90
    ctx->pc = 0x2383d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15504));
    // 0x2383dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2383dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2383e0: 0x24c93c90  addiu       $t1, $a2, 0x3C90
    ctx->pc = 0x2383e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 15504));
    // 0x2383e4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2383e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2383e8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2383e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2383ec: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2383ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2383f0: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2383f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2383f4: 0x68480017  ldl         $t0, 0x17($v0)
    ctx->pc = 0x2383f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2383f8: 0x6c480010  ldr         $t0, 0x10($v0)
    ctx->pc = 0x2383f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2383fc: 0xb1230007  sdl         $v1, 0x7($t1)
    ctx->pc = 0x2383fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x238400: 0xb5230000  sdr         $v1, 0x0($t1)
    ctx->pc = 0x238400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x238404: 0xb124000f  sdl         $a0, 0xF($t1)
    ctx->pc = 0x238404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x238408: 0xb5240008  sdr         $a0, 0x8($t1)
    ctx->pc = 0x238408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23840c: 0xb1280017  sdl         $t0, 0x17($t1)
    ctx->pc = 0x23840cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x238410: 0xb5280010  sdr         $t0, 0x10($t1)
    ctx->pc = 0x238410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x238414: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x238414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x238418: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x238418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x23841c: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x23841cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x238420: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x238420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x238424: 0x68480017  ldl         $t0, 0x17($v0)
    ctx->pc = 0x238424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x238428: 0x6c480010  ldr         $t0, 0x10($v0)
    ctx->pc = 0x238428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x23842c: 0xb0a3001f  sdl         $v1, 0x1F($a1)
    ctx->pc = 0x23842cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x238430: 0xb4a30018  sdr         $v1, 0x18($a1)
    ctx->pc = 0x238430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x238434: 0xb0a40027  sdl         $a0, 0x27($a1)
    ctx->pc = 0x238434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x238438: 0xb4a40020  sdr         $a0, 0x20($a1)
    ctx->pc = 0x238438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23843c: 0xb0a8002f  sdl         $t0, 0x2F($a1)
    ctx->pc = 0x23843cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x238440: 0xb4a80028  sdr         $t0, 0x28($a1)
    ctx->pc = 0x238440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x238444: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x238444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x238448: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x238448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x23844c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23844Cu;
    {
        const bool branch_taken_0x23844c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23844Cu;
        // 0x238450: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23844c) {
            ctx->pc = 0x23848Cu;
            goto label_23848c;
        }
    }
    ctx->pc = 0x238454u;
    // 0x238454: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x238454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x238458: 0x8f8484d0  lw          $a0, -0x7B30($gp)
    ctx->pc = 0x238458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x23845c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x23845cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x238460: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x238460u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x238464: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x238464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x238468: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238468u;
    {
        const bool branch_taken_0x238468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238468u;
        // 0x23846c: 0xa0a30030  sb          $v1, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238468) {
            ctx->pc = 0x238478u;
            goto label_238478;
        }
    }
    ctx->pc = 0x238470u;
    // 0x238470: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x238470u;
    {
        const bool branch_taken_0x238470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238470u;
        // 0x238474: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238470) {
            ctx->pc = 0x238480u;
            goto label_238480;
        }
    }
    ctx->pc = 0x238478u;
label_238478:
    // 0x238478: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x238478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23847c: 0xaf8284d0  sw          $v0, -0x7B30($gp)
    ctx->pc = 0x23847cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935760), GPR_U32(ctx, 2));
label_238480:
    // 0x238480: 0x24c23c90  addiu       $v0, $a2, 0x3C90
    ctx->pc = 0x238480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15504));
    // 0x238484: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x238484u;
    {
        const bool branch_taken_0x238484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238484u;
        // 0x238488: 0xa0400033  sb          $zero, 0x33($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238484) {
            ctx->pc = 0x2384A4u;
            goto label_2384a4;
        }
    }
    ctx->pc = 0x23848Cu;
label_23848c:
    // 0x23848c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238494: 0xa0a20033  sb          $v0, 0x33($a1)
    ctx->pc = 0x238494u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 51), (uint8_t)GPR_U32(ctx, 2));
    // 0x238498: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x238498u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x23849c: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x23849cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x2384a0: 0x24c23c90  addiu       $v0, $a2, 0x3C90
    ctx->pc = 0x2384a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15504));
label_2384a4:
    // 0x2384a4: 0xa0400032  sb          $zero, 0x32($v0)
    ctx->pc = 0x2384a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
label_2384a8:
    // 0x2384a8: 0x24c23c90  addiu       $v0, $a2, 0x3C90
    ctx->pc = 0x2384a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15504));
    // 0x2384ac: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2384acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2384b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2384b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2384b4: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2384B4u;
    {
        const bool branch_taken_0x2384b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2384B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384B4u;
        // 0x2384b8: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384b4) {
            ctx->pc = 0x2384C0u;
            goto label_2384c0;
        }
    }
    ctx->pc = 0x2384BCu;
    // 0x2384bc: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x2384bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_2384c0:
    // 0x2384c0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2384c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2384c4: 0xac223f1c  sw          $v0, 0x3F1C($at)
    ctx->pc = 0x2384c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F1Cu, _value); } while (0);
label_2384c8:
    // 0x2384c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2384C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2384CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384C8u;
        // 0x2384cc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2384C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2384D0u;
}

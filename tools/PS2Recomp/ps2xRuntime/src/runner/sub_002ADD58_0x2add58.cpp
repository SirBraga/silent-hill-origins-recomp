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

// Function: sub_002ADD58
// Address: 0x2add58 - 0x2adf58
void sub_002ADD58_0x2add58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADD58_0x2add58");
#endif

    switch (ctx->pc) {
        case 0x2addf8u: goto label_2addf8;
        case 0x2ade04u: goto label_2ade04;
        default: break;
    }

    ctx->pc = 0x2add58u;

    // 0x2add58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2add58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2add5c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2add5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add60: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2add60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2add64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2add64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2add68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2add68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2add6c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2add6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2add70: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2add70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2add74: 0x0  nop
    ctx->pc = 0x2add74u;
    // NOP
    // 0x2add78: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2ADD78u;
    {
        const bool branch_taken_0x2add78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ADD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD78u;
        // 0x2add7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add78) {
            ctx->pc = 0x2ADDA4u;
            goto label_2adda4;
        }
    }
    ctx->pc = 0x2ADD80u;
    // 0x2add80: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2add80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2add84: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2add84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2add88: 0x0  nop
    ctx->pc = 0x2add88u;
    // NOP
    // 0x2add8c: 0x45030067  bc1tl       . + 4 + (0x67 << 2)
    ctx->pc = 0x2ADD8Cu;
    {
        const bool branch_taken_0x2add8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2add8c) {
            ctx->pc = 0x2ADD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADD8Cu;
            // 0x2add90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF2Cu;
            goto label_2adf2c;
        }
    }
    ctx->pc = 0x2ADD94u;
    // 0x2add94: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2add94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2add98: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x2add98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2add9c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADD9Cu;
    {
        const bool branch_taken_0x2add9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2add9c) {
            ctx->pc = 0x2ADDACu;
            goto label_2addac;
        }
    }
    ctx->pc = 0x2ADDA4u;
label_2adda4:
    // 0x2adda4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2ADDA4u;
    {
        const bool branch_taken_0x2adda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDA4u;
        // 0x2adda8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adda4) {
            ctx->pc = 0x2ADF2Cu;
            goto label_2adf2c;
        }
    }
    ctx->pc = 0x2ADDACu;
label_2addac:
    // 0x2addac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2addacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2addb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2addb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2addb4: 0x46010056  rsqrt.s     $f1, $f0, $f1
    ctx->pc = 0x2addb4u;
    ctx->f[1] = FPU_RSQRT_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2addb8: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2addb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2addbc: 0x46020096  rsqrt.s     $f2, $f0, $f2
    ctx->pc = 0x2addbcu;
    ctx->f[2] = FPU_RSQRT_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x2addc0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2addc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2addc4: 0x46030016  rsqrt.s     $f0, $f0, $f3
    ctx->pc = 0x2addc4u;
    ctx->f[0] = FPU_RSQRT_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x2addc8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2addc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2addcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2addccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2addd0: 0x68430013  ldl         $v1, 0x13($v0)
    ctx->pc = 0x2addd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2addd4: 0x6c43000c  ldr         $v1, 0xC($v0)
    ctx->pc = 0x2addd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2addd8: 0x6846001b  ldl         $a2, 0x1B($v0)
    ctx->pc = 0x2addd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2adddc: 0x6c460014  ldr         $a2, 0x14($v0)
    ctx->pc = 0x2adddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2adde0: 0xb3a30073  sdl         $v1, 0x73($sp)
    ctx->pc = 0x2adde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adde4: 0xb7a3006c  sdr         $v1, 0x6C($sp)
    ctx->pc = 0x2adde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adde8: 0xb3a6007b  sdl         $a2, 0x7B($sp)
    ctx->pc = 0x2adde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2addec: 0xb7a60074  sdr         $a2, 0x74($sp)
    ctx->pc = 0x2addecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2addf0: 0xc0acc08  jal         func_2B3020
    ctx->pc = 0x2ADDF0u;
    SET_GPR_U32(ctx, 31, 0x2ADDF8u);
    ctx->pc = 0x2ADDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDF0u;
    // 0x2addf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3020u, 0x2ADDF0u, 0x2ADDF8u)) {
        return;
    }
    ctx->pc = 0x2ADDF8u;
label_2addf8:
    // 0x2addf8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2addf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2addfc: 0xc0acc08  jal         func_2B3020
    ctx->pc = 0x2ADDFCu;
    SET_GPR_U32(ctx, 31, 0x2ADE04u);
    ctx->pc = 0x2ADE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDFCu;
    // 0x2ade00: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3020u, 0x2ADDFCu, 0x2ADE04u)) {
        return;
    }
    ctx->pc = 0x2ADE04u;
label_2ade04:
    // 0x2ade04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ade04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ade08: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2ade08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ade0c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ade0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ade10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ade10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade14: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2ade14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ade18: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2ade18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ade1c: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x2ade1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2ade20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ade20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ade24: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x2ade24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ade28: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x2ade28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ade2c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2ade2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ade30: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x2ade30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ade34: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x2ade34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ade38: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2ade38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x2ade3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ade3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ade40: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ade40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ade44: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2ade44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ade48: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2ade48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ade4c: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x2ade4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2ade50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ade50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ade54: 0x6ba40013  ldl         $a0, 0x13($sp)
    ctx->pc = 0x2ade54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ade58: 0x6fa4000c  ldr         $a0, 0xC($sp)
    ctx->pc = 0x2ade58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ade5c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2ade5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2ade60: 0xb0640017  sdl         $a0, 0x17($v1)
    ctx->pc = 0x2ade60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ade64: 0xb4640010  sdr         $a0, 0x10($v1)
    ctx->pc = 0x2ade64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ade68: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x2ade68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x2ade6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ade6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ade70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ade70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ade74: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2ade74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ade78: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2ade78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ade7c: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x2ade7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2ade80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ade80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ade84: 0x6ba4001f  ldl         $a0, 0x1F($sp)
    ctx->pc = 0x2ade84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ade88: 0x6fa40018  ldr         $a0, 0x18($sp)
    ctx->pc = 0x2ade88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ade8c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2ade8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ade90: 0xb0640027  sdl         $a0, 0x27($v1)
    ctx->pc = 0x2ade90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ade94: 0xb4640020  sdr         $a0, 0x20($v1)
    ctx->pc = 0x2ade94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ade98: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x2ade98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
    // 0x2ade9c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ade9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adea0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2adea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adea4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2adea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2adea8: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2adea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2adeac: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x2adeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2adeb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2adeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2adeb4: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x2adeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2adeb8: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x2adeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2adebc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2adebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2adec0: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x2adec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adec4: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x2adec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adec8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2adec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x2adecc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2adeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aded0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2aded0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aded4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2aded4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2aded8: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2aded8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2adedc: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x2adedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2adee0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2adee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2adee4: 0x6ba40043  ldl         $a0, 0x43($sp)
    ctx->pc = 0x2adee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2adee8: 0x6fa4003c  ldr         $a0, 0x3C($sp)
    ctx->pc = 0x2adee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2adeec: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2adeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2adef0: 0xb0640017  sdl         $a0, 0x17($v1)
    ctx->pc = 0x2adef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adef4: 0xb4640010  sdr         $a0, 0x10($v1)
    ctx->pc = 0x2adef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adef8: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x2adef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x2adefc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2adefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adf00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2adf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adf04: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2adf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2adf08: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2adf08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2adf0c: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x2adf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2adf10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2adf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2adf14: 0x6ba4004f  ldl         $a0, 0x4F($sp)
    ctx->pc = 0x2adf14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2adf18: 0x6fa40048  ldr         $a0, 0x48($sp)
    ctx->pc = 0x2adf18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2adf1c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2adf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2adf20: 0xb0640027  sdl         $a0, 0x27($v1)
    ctx->pc = 0x2adf20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adf24: 0xb4640020  sdr         $a0, 0x20($v1)
    ctx->pc = 0x2adf24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adf28: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x2adf28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
label_2adf2c:
    // 0x2adf2c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2adf2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2adf30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2adf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2adf34: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF34u;
        // 0x2adf38: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADF3Cu;
    // 0x2adf3c: 0x0  nop
    ctx->pc = 0x2adf3cu;
    // NOP
    // 0x2adf40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2adf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2adf44: 0x0  nop
    ctx->pc = 0x2adf44u;
    // NOP
    // 0x2adf48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2adf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2adf4c: 0x0  nop
    ctx->pc = 0x2adf4cu;
    // NOP
    // 0x2adf50: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2adf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2adf54: 0x0  nop
    ctx->pc = 0x2adf54u;
    // NOP
    ctx->pc = 0x2adf58u;
}

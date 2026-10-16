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

// Function: sub_001AB918
// Address: 0x1ab918 - 0x1abca8
void sub_001AB918_0x1ab918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB918_0x1ab918");
#endif

    switch (ctx->pc) {
        case 0x1ab968u: goto label_1ab968;
        case 0x1ab9f0u: goto label_1ab9f0;
        case 0x1aba18u: goto label_1aba18;
        case 0x1abae0u: goto label_1abae0;
        case 0x1abb00u: goto label_1abb00;
        case 0x1abb38u: goto label_1abb38;
        case 0x1abb5cu: goto label_1abb5c;
        case 0x1abbe4u: goto label_1abbe4;
        default: break;
    }

    ctx->pc = 0x1ab918u;

    // 0x1ab918: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ab918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ab91c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1ab91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1ab920: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1ab920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1ab924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab928: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1ab928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1ab92c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ab92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ab930: 0x8e021078  lw          $v0, 0x1078($s0)
    ctx->pc = 0x1ab930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4216)));
    // 0x1ab934: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x1AB934u;
    {
        const bool branch_taken_0x1ab934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB934u;
        // 0x1ab938: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab934) {
            ctx->pc = 0x1ABC68u;
            goto label_1abc68;
        }
    }
    ctx->pc = 0x1AB93Cu;
    // 0x1ab93c: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x1ab93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1ab940: 0x8c451000  lw          $a1, 0x1000($v0)
    ctx->pc = 0x1ab940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4096)));
    // 0x1ab944: 0x18a000bc  blez        $a1, . + 4 + (0xBC << 2)
    ctx->pc = 0x1AB944u;
    {
        const bool branch_taken_0x1ab944 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x1AB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB944u;
        // 0x1ab948: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab944) {
            ctx->pc = 0x1ABC38u;
            goto label_1abc38;
        }
    }
    ctx->pc = 0x1AB94Cu;
    // 0x1ab94c: 0x8e031080  lw          $v1, 0x1080($s0)
    ctx->pc = 0x1ab94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4224)));
    // 0x1ab950: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1ab950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ab954: 0x54400068  bnel        $v0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x1AB954u;
    {
        const bool branch_taken_0x1ab954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab954) {
            ctx->pc = 0x1AB958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB954u;
            // 0x1ab958: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABAF8u;
            goto label_1abaf8;
        }
    }
    ctx->pc = 0x1AB95Cu;
    // 0x1ab95c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab960: 0xc06aff2  jal         func_1ABFC8
    ctx->pc = 0x1AB960u;
    SET_GPR_U32(ctx, 31, 0x1AB968u);
    ctx->pc = 0x1AB964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB960u;
    // 0x1ab964: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABFC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ABFC8u, 0x1AB960u, 0x1AB968u)) {
        return;
    }
    ctx->pc = 0x1AB968u;
label_1ab968:
    // 0x1ab968: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1ab968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ab96c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1ab96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ab970: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ab970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ab974: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1ab974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab978: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1ab978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab97c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1ab97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1ab980: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1ab980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab984: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1ab984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ab988: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x1ab988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ab98c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1ab98cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1ab990: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1ab990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ab994: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1ab994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ab998: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1ab998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab99c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1ab99cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1ab9a0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1ab9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ab9a4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1ab9a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1ab9a8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1ab9a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ab9ac: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1ab9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1ab9b0: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x1ab9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ab9b4: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x1ab9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ab9b8: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x1ab9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab9bc: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x1ab9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab9c0: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x1ab9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab9c4: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1ab9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x1ab9c8: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x1ab9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ab9cc: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x1ab9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ab9d0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1ab9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab9d4: 0xb2240027  sdl         $a0, 0x27($s1)
    ctx->pc = 0x1ab9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab9d8: 0xb6240020  sdr         $a0, 0x20($s1)
    ctx->pc = 0x1ab9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ab9dc: 0xae250028  sw          $a1, 0x28($s1)
    ctx->pc = 0x1ab9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
    // 0x1ab9e0: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x1ab9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1ab9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9e8: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1AB9E8u;
    SET_GPR_U32(ctx, 31, 0x1AB9F0u);
    ctx->pc = 0x1AB9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB9E8u;
    // 0x1ab9ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1AB9E8u, 0x1AB9F0u)) {
        return;
    }
    ctx->pc = 0x1AB9F0u;
label_1ab9f0:
    // 0x1ab9f0: 0x0  nop
    ctx->pc = 0x1ab9f0u;
    // NOP
    // 0x1ab9f4: 0x0  nop
    ctx->pc = 0x1ab9f4u;
    // NOP
    // 0x1ab9f8: 0x46000044  c1          0x44
    ctx->pc = 0x1ab9f8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ab9fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab9fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aba00: 0x0  nop
    ctx->pc = 0x1aba00u;
    // NOP
    // 0x1aba04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1aba04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aba08: 0x0  nop
    ctx->pc = 0x1aba08u;
    // NOP
    // 0x1aba0c: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x1ABA0Cu;
    {
        const bool branch_taken_0x1aba0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA0Cu;
        // 0x1aba10: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba0c) {
            ctx->pc = 0x1ABAC8u;
            goto label_1abac8;
        }
    }
    ctx->pc = 0x1ABA14u;
    // 0x1aba14: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1aba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aba18:
    // 0x1aba18: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1aba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aba1c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1aba1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aba20: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1aba20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1aba24: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1aba24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1aba28: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1aba28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1aba2c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1aba2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1aba30: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1aba30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1aba34: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1aba34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1aba38: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x1aba38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1aba3c: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x1aba3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1aba40: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1aba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aba44: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x1aba44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aba48: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x1aba48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aba4c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1aba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1aba50: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1aba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1aba54: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1aba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aba58: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1aba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aba5c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1aba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aba60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1aba60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1aba64: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1aba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aba68: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1aba68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1aba6c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1aba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aba70: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1aba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aba74: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1aba74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1aba78: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1aba78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1aba7c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1aba7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1aba80: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1aba80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1aba84: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1aba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aba88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aba88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aba8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1aba8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1aba90: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1aba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aba94: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1aba94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1aba98: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1aba98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aba9c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1aba9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1abaa0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1abaa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1abaa4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1abaa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1abaa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1abaa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1abaac: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1abaacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1abab0: 0x0  nop
    ctx->pc = 0x1abab0u;
    // NOP
    // 0x1abab4: 0x45010076  bc1t        . + 4 + (0x76 << 2)
    ctx->pc = 0x1ABAB4u;
    {
        const bool branch_taken_0x1abab4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAB4u;
        // 0x1abab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abab4) {
            ctx->pc = 0x1ABC90u;
            goto label_1abc90;
        }
    }
    ctx->pc = 0x1ABABCu;
    // 0x1ababc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1ABABCu;
    {
        const bool branch_taken_0x1ababc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABABCu;
        // 0x1abac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ababc) {
            ctx->pc = 0x1ABC90u;
            goto label_1abc90;
        }
    }
    ctx->pc = 0x1ABAC4u;
    // 0x1abac4: 0x0  nop
    ctx->pc = 0x1abac4u;
    // NOP
label_1abac8:
    // 0x1abac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1abac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1abacc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abaccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abad0: 0x0  nop
    ctx->pc = 0x1abad0u;
    // NOP
    // 0x1abad4: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1abad4u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1abad8: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x1ABAD8u;
    {
        const bool branch_taken_0x1abad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAD8u;
        // 0x1abadc: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abad8) {
            ctx->pc = 0x1ABA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aba18;
        }
    }
    ctx->pc = 0x1ABAE0u;
label_1abae0:
    // 0x1abae0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1abae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1abae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abae8: 0x0  nop
    ctx->pc = 0x1abae8u;
    // NOP
    // 0x1abaec: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1abaecu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1abaf0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1ABAF0u;
    {
        const bool branch_taken_0x1abaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAF0u;
        // 0x1abaf4: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abaf0) {
            ctx->pc = 0x1ABC10u;
            goto label_1abc10;
        }
    }
    ctx->pc = 0x1ABAF8u;
label_1abaf8:
    // 0x1abaf8: 0xc06aff2  jal         func_1ABFC8
    ctx->pc = 0x1ABAF8u;
    SET_GPR_U32(ctx, 31, 0x1ABB00u);
    ctx->pc = 0x1ABAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAF8u;
    // 0x1abafc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABFC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ABFC8u, 0x1ABAF8u, 0x1ABB00u)) {
        return;
    }
    ctx->pc = 0x1ABB00u;
label_1abb00:
    // 0x1abb00: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x1abb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1abb04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1abb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abb08: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1abb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1abb0c: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1abb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1abb10: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1abb10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1abb14: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x1abb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abb18: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x1abb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abb1c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ABB1Cu;
    {
        const bool branch_taken_0x1abb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1ABB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB1Cu;
        // 0x1abb20: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb1c) {
            ctx->pc = 0x1ABB40u;
            goto label_1abb40;
        }
    }
    ctx->pc = 0x1ABB24u;
    // 0x1abb24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1abb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1abb28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1abb28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1abb2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1abb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb30: 0xc0693da  jal         func_1A4F68
    ctx->pc = 0x1ABB30u;
    SET_GPR_U32(ctx, 31, 0x1ABB38u);
    ctx->pc = 0x1ABB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB30u;
    // 0x1abb34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4F68u, 0x1ABB30u, 0x1ABB38u)) {
        return;
    }
    ctx->pc = 0x1ABB38u;
label_1abb38:
    // 0x1abb38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ABB38u;
    {
        const bool branch_taken_0x1abb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abb38) {
            ctx->pc = 0x1ABB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABB38u;
            // 0x1abb3c: 0x8e051080  lw          $a1, 0x1080($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABB50u;
            goto label_1abb50;
        }
    }
    ctx->pc = 0x1ABB40u;
label_1abb40:
    // 0x1abb40: 0x8e021080  lw          $v0, 0x1080($s0)
    ctx->pc = 0x1abb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4224)));
    // 0x1abb44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1abb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1abb48: 0xae021080  sw          $v0, 0x1080($s0)
    ctx->pc = 0x1abb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4224), GPR_U32(ctx, 2));
    // 0x1abb4c: 0x8e051080  lw          $a1, 0x1080($s0)
    ctx->pc = 0x1abb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4224)));
label_1abb50:
    // 0x1abb50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb54: 0xc06aff2  jal         func_1ABFC8
    ctx->pc = 0x1ABB54u;
    SET_GPR_U32(ctx, 31, 0x1ABB5Cu);
    ctx->pc = 0x1ABB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB54u;
    // 0x1abb58: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABFC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ABFC8u, 0x1ABB54u, 0x1ABB5Cu)) {
        return;
    }
    ctx->pc = 0x1ABB5Cu;
label_1abb5c:
    // 0x1abb5c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1abb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1abb60: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1abb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1abb64: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1abb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1abb68: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1abb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abb6c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1abb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abb70: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1abb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1abb74: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1abb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abb78: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1abb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1abb7c: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x1abb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1abb80: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1abb80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1abb84: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1abb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abb88: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1abb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1abb8c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1abb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abb90: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1abb90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1abb94: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1abb94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1abb98: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1abb98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1abb9c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1abb9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1abba0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1abba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1abba4: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x1abba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1abba8: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x1abba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1abbac: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1abbacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1abbb0: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x1abbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abbb4: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x1abbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abbb8: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x1abbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x1abbbc: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x1abbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1abbc0: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x1abbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1abbc4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1abbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abbc8: 0xb2240027  sdl         $a0, 0x27($s1)
    ctx->pc = 0x1abbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abbcc: 0xb6240020  sdr         $a0, 0x20($s1)
    ctx->pc = 0x1abbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abbd0: 0xae250028  sw          $a1, 0x28($s1)
    ctx->pc = 0x1abbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
    // 0x1abbd4: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x1abbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1abbd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbdc: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1ABBDCu;
    SET_GPR_U32(ctx, 31, 0x1ABBE4u);
    ctx->pc = 0x1ABBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBDCu;
    // 0x1abbe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1ABBDCu, 0x1ABBE4u)) {
        return;
    }
    ctx->pc = 0x1ABBE4u;
label_1abbe4:
    // 0x1abbe4: 0x0  nop
    ctx->pc = 0x1abbe4u;
    // NOP
    // 0x1abbe8: 0x0  nop
    ctx->pc = 0x1abbe8u;
    // NOP
    // 0x1abbec: 0x46000044  c1          0x44
    ctx->pc = 0x1abbecu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1abbf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1abbf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abbf4: 0x0  nop
    ctx->pc = 0x1abbf4u;
    // NOP
    // 0x1abbf8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1abbf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1abbfc: 0x0  nop
    ctx->pc = 0x1abbfcu;
    // NOP
    // 0x1abc00: 0x4501ffb7  bc1t        . + 4 + (-0x49 << 2)
    ctx->pc = 0x1ABC00u;
    {
        const bool branch_taken_0x1abc00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC00u;
        // 0x1abc04: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc00) {
            ctx->pc = 0x1ABAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abae0;
        }
    }
    ctx->pc = 0x1ABC08u;
    // 0x1abc08: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1abc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abc0c: 0x0  nop
    ctx->pc = 0x1abc0cu;
    // NOP
label_1abc10:
    // 0x1abc10: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1abc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abc14: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1abc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abc18: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1abc18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1abc1c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1abc1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1abc20: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1abc20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1abc24: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1abc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1abc28: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1abc28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1abc2c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1abc2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1abc30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1ABC30u;
    {
        const bool branch_taken_0x1abc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC30u;
        // 0x1abc34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc30) {
            ctx->pc = 0x1ABC90u;
            goto label_1abc90;
        }
    }
    ctx->pc = 0x1ABC38u;
label_1abc38:
    // 0x1abc38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1abc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1abc3c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1abc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1abc40: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1abc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1abc44: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x1abc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1abc48: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x1abc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1abc4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1abc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abc50: 0xb2280027  sdl         $t0, 0x27($s1)
    ctx->pc = 0x1abc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abc54: 0xb6280020  sdr         $t0, 0x20($s1)
    ctx->pc = 0x1abc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abc58: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x1abc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x1abc5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1ABC5Cu;
    {
        const bool branch_taken_0x1abc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC5Cu;
        // 0x1abc60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc5c) {
            ctx->pc = 0x1ABC90u;
            goto label_1abc90;
        }
    }
    ctx->pc = 0x1ABC64u;
    // 0x1abc64: 0x0  nop
    ctx->pc = 0x1abc64u;
    // NOP
label_1abc68:
    // 0x1abc68: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1abc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1abc6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1abc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abc70: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1abc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1abc74: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1abc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1abc78: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x1abc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1abc7c: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x1abc7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1abc80: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1abc80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abc84: 0xb2260027  sdl         $a2, 0x27($s1)
    ctx->pc = 0x1abc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abc88: 0xb6260020  sdr         $a2, 0x20($s1)
    ctx->pc = 0x1abc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abc8c: 0xae270028  sw          $a3, 0x28($s1)
    ctx->pc = 0x1abc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
label_1abc90:
    // 0x1abc90: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1abc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1abc94: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1abc94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1abc98: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1abc98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1abc9c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1abc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1abca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCA0u;
        // 0x1abca4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABCA8u;
}

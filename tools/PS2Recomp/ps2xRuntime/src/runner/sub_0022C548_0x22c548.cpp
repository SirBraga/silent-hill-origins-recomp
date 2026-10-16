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

// Function: sub_0022C548
// Address: 0x22c548 - 0x22c6e0
void sub_0022C548_0x22c548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C548_0x22c548");
#endif

    switch (ctx->pc) {
        case 0x22c600u: goto label_22c600;
        case 0x22c618u: goto label_22c618;
        case 0x22c628u: goto label_22c628;
        default: break;
    }

    ctx->pc = 0x22c548u;

    // 0x22c548: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x22c548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x22c54c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x22c54cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22c550: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x22c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x22c554: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x22c554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22c558: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x22c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x22c55c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22c55cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c560: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x22c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x22c564: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x22c564u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c568: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x22c568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x22c56c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x22c56cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c570: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x22c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x22c574: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x22c574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x22c578: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x22c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x22c57c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x22c57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x22c580: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22c580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22c584: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x22c584u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x22c588: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x22c588u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x22c58c: 0xc6b40014  lwc1        $f20, 0x14($s5)
    ctx->pc = 0x22c58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22c590: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x22c590u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c594: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x22c594u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x22c598: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x22c598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22c59c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x22c59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22c5a0: 0x68a4000f  ldl         $a0, 0xF($a1)
    ctx->pc = 0x22c5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x22c5a4: 0x6ca40008  ldr         $a0, 0x8($a1)
    ctx->pc = 0x22c5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x22c5a8: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x22c5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x22c5ac: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x22c5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x22c5b0: 0x68a9001f  ldl         $t1, 0x1F($a1)
    ctx->pc = 0x22c5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x22c5b4: 0x6ca90018  ldr         $t1, 0x18($a1)
    ctx->pc = 0x22c5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x22c5b8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x22c5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c5bc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x22c5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c5c0: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x22c5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c5c4: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x22c5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c5c8: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x22c5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c5cc: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x22c5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c5d0: 0xb3a9001f  sdl         $t1, 0x1F($sp)
    ctx->pc = 0x22c5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c5d4: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x22c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x22c5d8: 0xb7a90018  sdr         $t1, 0x18($sp)
    ctx->pc = 0x22c5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c5dc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x22c5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22c5e0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x22C5E0u;
    {
        const bool branch_taken_0x22c5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5E0u;
        // 0x22c5e4: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c5e0) {
            ctx->pc = 0x22C6A8u;
            goto label_22c6a8;
        }
    }
    ctx->pc = 0x22C5E8u;
    // 0x22c5e8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x22c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22c5ec: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x22c5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x22c5f0: 0x46a021  addu        $s4, $v0, $a2
    ctx->pc = 0x22c5f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22c5f4: 0xc7b021  addu        $s6, $a2, $a3
    ctx->pc = 0x22c5f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x22c5f8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x22c5f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22c5fc: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x22c5fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_22c600:
    // 0x22c600: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22c600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c604: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x22c604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22c608: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22c608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c60c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x22c60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c610: 0xc08b138  jal         func_22C4E0
    ctx->pc = 0x22C610u;
    SET_GPR_U32(ctx, 31, 0x22C618u);
    ctx->pc = 0x22C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C610u;
    // 0x22c614: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C4E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C4E0u, 0x22C610u, 0x22C618u)) {
        return;
    }
    ctx->pc = 0x22C618u;
label_22c618:
    // 0x22c618: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x22c618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22c61c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22c61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c620: 0xc08aec2  jal         func_22BB08
    ctx->pc = 0x22C620u;
    SET_GPR_U32(ctx, 31, 0x22C628u);
    ctx->pc = 0x22C624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C620u;
    // 0x22c624: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BB08u, 0x22C620u, 0x22C628u)) {
        return;
    }
    ctx->pc = 0x22C628u;
label_22c628:
    // 0x22c628: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x22c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c62c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x22c62cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c630: 0x0  nop
    ctx->pc = 0x22c630u;
    // NOP
    // 0x22c634: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x22C634u;
    {
        const bool branch_taken_0x22c634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c634) {
            ctx->pc = 0x22C638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C634u;
            // 0x22c638: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C694u;
            goto label_22c694;
        }
    }
    ctx->pc = 0x22C63Cu;
    // 0x22c63c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x22c63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c640: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x22c640u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c644: 0x0  nop
    ctx->pc = 0x22c644u;
    // NOP
    // 0x22c648: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x22C648u;
    {
        const bool branch_taken_0x22c648 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c648) {
            ctx->pc = 0x22C64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C648u;
            // 0x22c64c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C694u;
            goto label_22c694;
        }
    }
    ctx->pc = 0x22C650u;
    // 0x22c650: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x22c650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c654: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x22c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c658: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22c658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22c65c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x22c65cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c660: 0x0  nop
    ctx->pc = 0x22c660u;
    // NOP
    // 0x22c664: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x22C664u;
    {
        const bool branch_taken_0x22c664 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c664) {
            ctx->pc = 0x22C668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C664u;
            // 0x22c668: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C680u;
            goto label_22c680;
        }
    }
    ctx->pc = 0x22C66Cu;
    // 0x22c66c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x22c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22c670: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x22c670u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x22c674: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x22c674u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x22c678: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x22c678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c67c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x22c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c680:
    // 0x22c680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22c680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c684: 0x0  nop
    ctx->pc = 0x22c684u;
    // NOP
    // 0x22c688: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x22C688u;
    {
        const bool branch_taken_0x22c688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c688) {
            ctx->pc = 0x22C68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C688u;
            // 0x22c68c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C694u;
            goto label_22c694;
        }
    }
    ctx->pc = 0x22C690u;
    // 0x22c690: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x22c690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c694:
    // 0x22c694: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x22c694u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x22c698: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x22c698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22c69c: 0x1040ffd8  beqz        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x22C69Cu;
    {
        const bool branch_taken_0x22c69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C69Cu;
        // 0x22c6a0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c69c) {
            ctx->pc = 0x22C600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c600;
        }
    }
    ctx->pc = 0x22C6A4u;
    // 0x22c6a4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x22c6a4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_22c6a8:
    // 0x22c6a8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x22c6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x22c6ac: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x22c6acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22c6b0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x22c6b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22c6b4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x22c6b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22c6b8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x22c6b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22c6bc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x22c6bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22c6c0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x22c6c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22c6c4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x22c6c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22c6c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22c6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c6cc: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x22c6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22c6d0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x22c6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22c6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x22C6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6D4u;
        // 0x22c6d8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C6DCu;
    // 0x22c6dc: 0x0  nop
    ctx->pc = 0x22c6dcu;
    // NOP
    ctx->pc = 0x22c6e0u;
}

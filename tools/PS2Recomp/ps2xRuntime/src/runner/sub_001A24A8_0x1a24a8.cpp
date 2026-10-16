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

// Function: sub_001A24A8
// Address: 0x1a24a8 - 0x1a25a8
void sub_001A24A8_0x1a24a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A24A8_0x1a24a8");
#endif

    switch (ctx->pc) {
        case 0x1a24e8u: goto label_1a24e8;
        case 0x1a24f0u: goto label_1a24f0;
        default: break;
    }

    ctx->pc = 0x1a24a8u;

    // 0x1a24a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a24a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a24ac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a24acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1a24b0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a24b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1a24b4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1a24b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a24b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1a24bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a24bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a24c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a24c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a24c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a24c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a24cc: 0x8e421340  lw          $v0, 0x1340($s2)
    ctx->pc = 0x1a24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4928)));
    // 0x1a24d0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1a24d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a24d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a24d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A24D8u;
    {
        const bool branch_taken_0x1a24d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24D8u;
        // 0x1a24dc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24d8) {
            ctx->pc = 0x1A24FCu;
            goto label_1a24fc;
        }
    }
    ctx->pc = 0x1A24E0u;
    // 0x1a24e0: 0xc0691ec  jal         func_1A47B0
    ctx->pc = 0x1A24E0u;
    SET_GPR_U32(ctx, 31, 0x1A24E8u);
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x1A24E0u, 0x1A24E8u)) {
        return;
    }
    ctx->pc = 0x1A24E8u;
label_1a24e8:
    // 0x1a24e8: 0xc0692ba  jal         func_1A4AE8
    ctx->pc = 0x1A24E8u;
    SET_GPR_U32(ctx, 31, 0x1A24F0u);
    ctx->pc = 0x1A24ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24E8u;
    // 0x1a24ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4AE8u, 0x1A24E8u, 0x1A24F0u)) {
        return;
    }
    ctx->pc = 0x1A24F0u;
label_1a24f0:
    // 0x1a24f0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a24f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a24f4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A24F4u;
    {
        const bool branch_taken_0x1a24f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A24F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24F4u;
        // 0x1a24f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24f4) {
            ctx->pc = 0x1A2588u;
            goto label_1a2588;
        }
    }
    ctx->pc = 0x1A24FCu;
label_1a24fc:
    // 0x1a24fc: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1a24fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2500: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a2500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2504: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1a2504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2508: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a2508u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a250c: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x1a250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2510: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1a2510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2514: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x1a2514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2518: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1a2518u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1a251c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1a251cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a2520: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a2520u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a2524: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1a2524u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a2528: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a2528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a252c: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a252cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a2530: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a2530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a2534: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2538: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a2538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a253c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a253cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2540: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a2540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1a2544: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a2544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2548: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1a2548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a254c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1a254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2550: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1a2550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a2554: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a2554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a2558: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1a2558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a255c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x1a255cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1a2560: 0xc46112bc  lwc1        $f1, 0x12BC($v1)
    ctx->pc = 0x1a2560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2564: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1a2564u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1a2568: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a2568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a256c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a256cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a2570: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a2570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a2574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2578: 0x0  nop
    ctx->pc = 0x1a2578u;
    // NOP
    // 0x1a257c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A257Cu;
    {
        const bool branch_taken_0x1a257c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A257Cu;
        // 0x1a2580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a257c) {
            ctx->pc = 0x1A2588u;
            goto label_1a2588;
        }
    }
    ctx->pc = 0x1A2584u;
    // 0x1a2584: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2588:
    // 0x1a2588: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a2588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a258c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a258cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2590: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a2590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2594: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a2594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a259c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A259Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A259Cu;
        // 0x1a25a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A259Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A25A4u;
    // 0x1a25a4: 0x0  nop
    ctx->pc = 0x1a25a4u;
    // NOP
    ctx->pc = 0x1a25a8u;
}

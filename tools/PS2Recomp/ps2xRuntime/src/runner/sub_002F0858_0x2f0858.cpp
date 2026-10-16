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

// Function: sub_002F0858
// Address: 0x2f0858 - 0x2f0950
void sub_002F0858_0x2f0858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0858_0x2f0858");
#endif

    switch (ctx->pc) {
        case 0x2f08c0u: goto label_2f08c0;
        case 0x2f08d8u: goto label_2f08d8;
        case 0x2f08f8u: goto label_2f08f8;
        case 0x2f090cu: goto label_2f090c;
        default: break;
    }

    ctx->pc = 0x2f0858u;

    // 0x2f0858: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f0858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f085c: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2f085cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2f0860: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2f0860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2f0864: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2f0864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2f0868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f086c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f0870: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2f0870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f0874: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x2f0874u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2f0878: 0x78a60030  lq          $a2, 0x30($a1)
    ctx->pc = 0x2f0878u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2f087c: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x2f087cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f0880: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x2f0880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2f0884: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x2f0884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x2f0888: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2f0888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2f088c: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x2f088cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x2f0890: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f0890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2f0894: 0x24e5ffe8  addiu       $a1, $a3, -0x18
    ctx->pc = 0x2f0894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967272));
    // 0x2f0898: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2f0898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f089c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2f089cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f08a0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2f08a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6AFFF0u));
    // 0x2f08a4: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x2f08a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f08a8: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x2f08a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f08ac: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x2f08acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x2f08b0: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2f08b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f08b4: 0xc7ad0000  lwc1        $f13, 0x0($sp)
    ctx->pc = 0x2f08b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f08b8: 0xc09b3a0  jal         func_26CE80
    ctx->pc = 0x2F08B8u;
    SET_GPR_U32(ctx, 31, 0x2F08C0u);
    ctx->pc = 0x2F08BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08B8u;
    // 0x2f08bc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CE80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CE80u, 0x2F08B8u, 0x2F08C0u)) {
        return;
    }
    ctx->pc = 0x2F08C0u;
label_2f08c0:
    // 0x2f08c0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f08c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f08c4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2f08c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2f08c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f08c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f08cc: 0x24a5ffb8  addiu       $a1, $a1, -0x48
    ctx->pc = 0x2f08ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967224));
    // 0x2f08d0: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x2F08D0u;
    SET_GPR_U32(ctx, 31, 0x2F08D8u);
    ctx->pc = 0x2F08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08D0u;
    // 0x2f08d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2F08D0u, 0x2F08D8u)) {
        return;
    }
    ctx->pc = 0x2F08D8u;
label_2f08d8:
    // 0x2f08d8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2f08d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f08dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f08dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f08e0: 0xc780832c  lwc1        $f0, -0x7CD4($gp)
    ctx->pc = 0x2f08e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f08e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f08e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f08e8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2f08e8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2f08ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f08ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f08f0: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x2F08F0u;
    SET_GPR_U32(ctx, 31, 0x2F08F8u);
    ctx->pc = 0x2F08F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08F0u;
    // 0x2f08f4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x2F08F0u, 0x2F08F8u)) {
        return;
    }
    ctx->pc = 0x2F08F8u;
label_2f08f8:
    // 0x2f08f8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f08f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f08fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f08fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0900: 0x24a5ffc8  addiu       $a1, $a1, -0x38
    ctx->pc = 0x2f0900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967240));
    // 0x2f0904: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x2F0904u;
    SET_GPR_U32(ctx, 31, 0x2F090Cu);
    ctx->pc = 0x2F0908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0904u;
    // 0x2f0908: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2F0904u, 0x2F090Cu)) {
        return;
    }
    ctx->pc = 0x2F090Cu;
label_2f090c:
    // 0x2f090c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2f090cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f0910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f0910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0914: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2f0914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0918: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f0918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f091c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2f091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0920: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x2f0920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f0924: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x2f0924u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2f0928: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2f0928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2f092c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2f092cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2f0930: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2f0930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2f0934: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x2f0934u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2f0938: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2f0938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f093c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2f093cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f0940: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f0940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f0944: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0944u;
        // 0x2f0948: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F094Cu;
    // 0x2f094c: 0x0  nop
    ctx->pc = 0x2f094cu;
    // NOP
    ctx->pc = 0x2f0950u;
}

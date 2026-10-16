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

// Function: sub_0015A878
// Address: 0x15a878 - 0x15a9a8
void sub_0015A878_0x15a878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A878_0x15a878");
#endif

    switch (ctx->pc) {
        case 0x15a8b0u: goto label_15a8b0;
        case 0x15a938u: goto label_15a938;
        default: break;
    }

    ctx->pc = 0x15a878u;

    // 0x15a878: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15a878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15a87c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15a880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15a884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a888: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15a888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15a88c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15a88cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a890: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15a890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15a894: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x15a894u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15a898: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x15a898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x15a89c: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x15A89Cu;
    {
        const bool branch_taken_0x15a89c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A89Cu;
        // 0x15a8a0: 0x8e30035c  lw          $s0, 0x35C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a89c) {
            ctx->pc = 0x15A98Cu;
            goto label_15a98c;
        }
    }
    ctx->pc = 0x15A8A4u;
    // 0x15a8a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a8a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15a8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15a8ac: 0x0  nop
    ctx->pc = 0x15a8acu;
    // NOP
label_15a8b0:
    // 0x15a8b0: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x15a8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15a8b4: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x15a8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15a8b8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x15a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15a8bc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x15a8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a8c0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x15a8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a8c4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x15a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x15a8c8: 0xc6220290  lwc1        $f2, 0x290($s1)
    ctx->pc = 0x15a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a8cc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x15a8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a8d0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x15a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a8d4: 0x0  nop
    ctx->pc = 0x15a8d4u;
    // NOP
    // 0x15a8d8: 0x0  nop
    ctx->pc = 0x15a8d8u;
    // NOP
    // 0x15a8dc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x15a8dcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x15a8e0: 0x0  nop
    ctx->pc = 0x15a8e0u;
    // NOP
    // 0x15a8e4: 0x0  nop
    ctx->pc = 0x15a8e4u;
    // NOP
    // 0x15a8e8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x15a8e8u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[2]);
    // 0x15a8ec: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x15a8ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x15a8f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15a8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15a8f4: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x15a8f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x15a8f8: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x15a8f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15a8fc: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x15a8fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a900: 0x0  nop
    ctx->pc = 0x15a900u;
    // NOP
    // 0x15a904: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15A904u;
    {
        const bool branch_taken_0x15a904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A904u;
        // 0x15a908: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a904) {
            ctx->pc = 0x15A914u;
            goto label_15a914;
        }
    }
    ctx->pc = 0x15A90Cu;
    // 0x15a90c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a910: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x15a910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_15a914:
    // 0x15a914: 0x0  nop
    ctx->pc = 0x15a914u;
    // NOP
    // 0x15a918: 0x4603a301  sub.s       $f12, $f20, $f3
    ctx->pc = 0x15a918u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x15a91c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x15a91cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x15a920: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x15a920u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a924: 0x0  nop
    ctx->pc = 0x15a924u;
    // NOP
    // 0x15a928: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x15A928u;
    {
        const bool branch_taken_0x15a928 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a928) {
            ctx->pc = 0x15A92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A928u;
            // 0x15a92c: 0x460000c7  neg.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A93Cu;
            goto label_15a93c;
        }
    }
    ctx->pc = 0x15A930u;
    // 0x15a930: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x15A930u;
    SET_GPR_U32(ctx, 31, 0x15A938u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x15A930u, 0x15A938u)) {
        return;
    }
    ctx->pc = 0x15A938u;
label_15a938:
    // 0x15a938: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x15a938u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
label_15a93c:
    // 0x15a93c: 0xc6210368  lwc1        $f1, 0x368($s1)
    ctx->pc = 0x15a93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a940: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15a940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a944: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15a944u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15a948: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15a948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a94c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x15a94cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15a950: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15a950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15a954: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x15a954u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x15a958: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x15a958u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15a95c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x15a95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15a960: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x15a960u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15a964: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x15a964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15a968: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x15a968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15a96c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x15a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15a970: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x15a970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a974: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x15a974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a978: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x15a978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x15a97c: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x15a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x15a980: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15a980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15a984: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x15A984u;
    {
        const bool branch_taken_0x15a984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A984u;
        // 0x15a988: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a984) {
            ctx->pc = 0x15A8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a8b0;
        }
    }
    ctx->pc = 0x15A98Cu;
label_15a98c:
    // 0x15a98c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15a98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a990: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15a990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a994: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a99c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x15a99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15a9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x15A9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9A0u;
        // 0x15a9a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A9A8u;
}

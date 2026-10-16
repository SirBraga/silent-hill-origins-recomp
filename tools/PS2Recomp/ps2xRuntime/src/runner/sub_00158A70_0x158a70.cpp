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

// Function: sub_00158A70
// Address: 0x158a70 - 0x158b70
void sub_00158A70_0x158a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158A70_0x158a70");
#endif

    switch (ctx->pc) {
        case 0x158aa0u: goto label_158aa0;
        case 0x158b44u: goto label_158b44;
        default: break;
    }

    ctx->pc = 0x158a70u;

    // 0x158a70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x158a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x158a74: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x158a74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x158a78: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x158a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x158a7c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x158a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x158a80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x158a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x158a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x158a88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x158a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a8c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x158a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x158a90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x158a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a94: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x158A94u;
    {
        const bool branch_taken_0x158a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A94u;
        // 0x158a98: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a94) {
            ctx->pc = 0x158B3Cu;
            goto label_158b3c;
        }
    }
    ctx->pc = 0x158A9Cu;
    // 0x158a9c: 0x0  nop
    ctx->pc = 0x158a9cu;
    // NOP
label_158aa0:
    // 0x158aa0: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x158aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x158aa4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x158aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158aa8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x158aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158aac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x158aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158ab0: 0x0  nop
    ctx->pc = 0x158ab0u;
    // NOP
    // 0x158ab4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x158AB4u;
    {
        const bool branch_taken_0x158ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AB4u;
        // 0x158ab8: 0x24620010  addiu       $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ab4) {
            ctx->pc = 0x158B38u;
            goto label_158b38;
        }
    }
    ctx->pc = 0x158ABCu;
    // 0x158abc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x158abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158ac0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x158ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158ac4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x158ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158ac8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x158ac8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x158acc: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x158accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x158ad0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x158ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x158ad4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x158ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158ad8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x158ad8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x158adc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x158adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x158ae0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x158ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158ae4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x158ae4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x158ae8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x158ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x158aec: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x158aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x158af0: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x158af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x158af4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x158af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x158af8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x158af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158afc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x158afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158b00: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x158b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x158b04: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x158b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158b08: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x158b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158b0c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x158b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x158b10: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x158b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158b14: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x158b14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x158b18: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x158b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x158b1c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x158b1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x158b20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x158b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x158b24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x158b24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x158b28: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x158b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158b2c: 0x0  nop
    ctx->pc = 0x158b2cu;
    // NOP
    // 0x158b30: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x158B30u;
    {
        const bool branch_taken_0x158b30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x158B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B30u;
        // 0x158b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b30) {
            ctx->pc = 0x158B54u;
            goto label_158b54;
        }
    }
    ctx->pc = 0x158B38u;
label_158b38:
    // 0x158b38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x158b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_158b3c:
    // 0x158b3c: 0xc056432  jal         func_1590C8
    ctx->pc = 0x158B3Cu;
    SET_GPR_U32(ctx, 31, 0x158B44u);
    ctx->pc = 0x158B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B3Cu;
    // 0x158b40: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1590C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1590C8u, 0x158B3Cu, 0x158B44u)) {
        return;
    }
    ctx->pc = 0x158B44u;
label_158b44:
    // 0x158b44: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x158b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x158b48: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x158B48u;
    {
        const bool branch_taken_0x158b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158b48) {
            ctx->pc = 0x158B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158B48u;
            // 0x158b4c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158aa0;
        }
    }
    ctx->pc = 0x158B50u;
    // 0x158b50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x158b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158b54:
    // 0x158b54: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x158b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158b58: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x158b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158b5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x158b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158b60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158b64: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x158b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x158b68: 0x3e00008  jr          $ra
    ctx->pc = 0x158B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B68u;
        // 0x158b6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158B70u;
}

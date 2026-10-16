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

// Function: sub_002F0598
// Address: 0x2f0598 - 0x2f0848
void sub_002F0598_0x2f0598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0598_0x2f0598");
#endif

    switch (ctx->pc) {
        case 0x2f061cu: goto label_2f061c;
        case 0x2f0630u: goto label_2f0630;
        case 0x2f064cu: goto label_2f064c;
        case 0x2f0660u: goto label_2f0660;
        case 0x2f0678u: goto label_2f0678;
        case 0x2f0758u: goto label_2f0758;
        default: break;
    }

    ctx->pc = 0x2f0598u;

    // 0x2f0598: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f0598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f059c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f05a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f05a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f05a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f05a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f05a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f05a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f05ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f05acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f05b0: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x2f05b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2f05b4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2f05b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f05b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2f05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2f05bc: 0x2448ffe8  addiu       $t0, $v0, -0x18
    ctx->pc = 0x2f05bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x2f05c0: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x2f05c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f05c4: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x2f05c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f05c8: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2f05c8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6AFFF0u));
    // 0x2f05cc: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x2f05ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f05d0: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x2f05d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f05d4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2f05d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2f05d8: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2f05d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2f05dc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2f05dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f05e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2f05e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2f05e4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2f05e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2f05e8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2f05e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2f05ec: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f05ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f05f0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2f05f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2f05f4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2f05f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2f05f8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2f05f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2f05fc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2f05fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2f0600: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2f0600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2f0604: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2f0604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0608: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2f0608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2f060c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2f060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0610: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2f0610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2f0614: 0xc092d94  jal         func_24B650
    ctx->pc = 0x2F0614u;
    SET_GPR_U32(ctx, 31, 0x2F061Cu);
    ctx->pc = 0x2F0618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0614u;
    // 0x2f0618: 0xe6010034  swc1        $f1, 0x34($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x2F0614u, 0x2F061Cu)) {
        return;
    }
    ctx->pc = 0x2F061Cu;
label_2f061c:
    // 0x2f061c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f061cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f0620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0624: 0x24a5ffb8  addiu       $a1, $a1, -0x48
    ctx->pc = 0x2f0624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967224));
    // 0x2f0628: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x2F0628u;
    SET_GPR_U32(ctx, 31, 0x2F0630u);
    ctx->pc = 0x2F062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0628u;
    // 0x2f062c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2F0628u, 0x2F0630u)) {
        return;
    }
    ctx->pc = 0x2F0630u;
label_2f0630:
    // 0x2f0630: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2f0630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0634: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f0634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0638: 0xc78c8308  lwc1        $f12, -0x7CF8($gp)
    ctx->pc = 0x2f0638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f063c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f063cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0640: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f0640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f0644: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x2F0644u;
    SET_GPR_U32(ctx, 31, 0x2F064Cu);
    ctx->pc = 0x2F0648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0644u;
    // 0x2f0648: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x2F0644u, 0x2F064Cu)) {
        return;
    }
    ctx->pc = 0x2F064Cu;
label_2f064c:
    // 0x2f064c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f064cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f0650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0654: 0x24a5ffc8  addiu       $a1, $a1, -0x38
    ctx->pc = 0x2f0654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967240));
    // 0x2f0658: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x2F0658u;
    SET_GPR_U32(ctx, 31, 0x2F0660u);
    ctx->pc = 0x2F065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0658u;
    // 0x2f065c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2F0658u, 0x2F0660u)) {
        return;
    }
    ctx->pc = 0x2F0660u;
label_2f0660:
    // 0x2f0660: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f0660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0664: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f0664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f066c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F066Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F066Cu;
        // 0x2f0670: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F066Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0674u;
    // 0x2f0674: 0x0  nop
    ctx->pc = 0x2f0674u;
    // NOP
label_2f0678:
    // 0x2f0678: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x2f0678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f067c: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x2f067cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f0680: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2f0680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0684: 0xc782830c  lwc1        $f2, -0x7CF4($gp)
    ctx->pc = 0x2f0684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0688: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2f0688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f068c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f068cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f0690: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2f0690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0694: 0x0  nop
    ctx->pc = 0x2f0694u;
    // NOP
    // 0x2f0698: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0698u;
    {
        const bool branch_taken_0x2f0698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0698u;
        // 0x2f069c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0698) {
            ctx->pc = 0x2F06B0u;
            goto label_2f06b0;
        }
    }
    ctx->pc = 0x2F06A0u;
    // 0x2f06a0: 0xc7808310  lwc1        $f0, -0x7CF0($gp)
    ctx->pc = 0x2f06a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f06a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F06A4u;
    {
        const bool branch_taken_0x2f06a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06A4u;
        // 0x2f06a8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f06a4) {
            ctx->pc = 0x2F06CCu;
            goto label_2f06cc;
        }
    }
    ctx->pc = 0x2F06ACu;
    // 0x2f06ac: 0x0  nop
    ctx->pc = 0x2f06acu;
    // NOP
label_2f06b0:
    // 0x2f06b0: 0xc7808314  lwc1        $f0, -0x7CEC($gp)
    ctx->pc = 0x2f06b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f06b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f06b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f06b8: 0x0  nop
    ctx->pc = 0x2f06b8u;
    // NOP
    // 0x2f06bc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2F06BCu;
    {
        const bool branch_taken_0x2f06bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f06bc) {
            ctx->pc = 0x2F06C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F06BCu;
            // 0x2f06c0: 0x46016042  mul.s       $f1, $f12, $f1 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F06D0u;
            goto label_2f06d0;
        }
    }
    ctx->pc = 0x2F06C4u;
    // 0x2f06c4: 0xc7808318  lwc1        $f0, -0x7CE8($gp)
    ctx->pc = 0x2f06c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f06c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f06c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2f06cc:
    // 0x2f06cc: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2f06ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_2f06d0:
    // 0x2f06d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f06d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f06d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f06d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f06d8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2f06d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2f06dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f06dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f06e0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2f06e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f06e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f06e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f06e8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f06e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f06ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f06ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f06f0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2f06f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f06f4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2f06f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f06f8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f06f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f06fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f06fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f0700: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f0700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f0704: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2f0704u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f0708: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2f0708u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f070c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2f070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0710: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2f0710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0714: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f0714u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f0718: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f0718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f071c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f071cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0720: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2f0720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f0724: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2f0724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0728: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2f0728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f072c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f072cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f0730: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f0730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f0734: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2f0734u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f0738: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2f0738u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2f073c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2f073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0740: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2f0740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0744: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f0744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f0748: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f0748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f074c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f074cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0750: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0750u;
        // 0x2f0754: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0758u;
label_2f0758:
    // 0x2f0758: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2f0758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f075c: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x2f075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f0760: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2f0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0764: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x2f0764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f0768: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x2f0768u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x2f076c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f076cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f0770: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2f0770u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x2f0774: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2f0774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0778: 0xc782831c  lwc1        $f2, -0x7CE4($gp)
    ctx->pc = 0x2f0778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f077c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2f077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0780: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f0780u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f0784: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2f0784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0788: 0x0  nop
    ctx->pc = 0x2f0788u;
    // NOP
    // 0x2f078c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2F078Cu;
    {
        const bool branch_taken_0x2f078c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F078Cu;
        // 0x2f0790: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f078c) {
            ctx->pc = 0x2F07A0u;
            goto label_2f07a0;
        }
    }
    ctx->pc = 0x2F0794u;
    // 0x2f0794: 0xc7808320  lwc1        $f0, -0x7CE0($gp)
    ctx->pc = 0x2f0794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0798: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0798u;
    {
        const bool branch_taken_0x2f0798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0798u;
        // 0x2f079c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0798) {
            ctx->pc = 0x2F07BCu;
            goto label_2f07bc;
        }
    }
    ctx->pc = 0x2F07A0u;
label_2f07a0:
    // 0x2f07a0: 0xc7808324  lwc1        $f0, -0x7CDC($gp)
    ctx->pc = 0x2f07a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f07a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f07a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f07a8: 0x0  nop
    ctx->pc = 0x2f07a8u;
    // NOP
    // 0x2f07ac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2F07ACu;
    {
        const bool branch_taken_0x2f07ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f07ac) {
            ctx->pc = 0x2F07B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F07ACu;
            // 0x2f07b0: 0x46016042  mul.s       $f1, $f12, $f1 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F07C0u;
            goto label_2f07c0;
        }
    }
    ctx->pc = 0x2F07B4u;
    // 0x2f07b4: 0xc7808328  lwc1        $f0, -0x7CD8($gp)
    ctx->pc = 0x2f07b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f07b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f07b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2f07bc:
    // 0x2f07bc: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2f07bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_2f07c0:
    // 0x2f07c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f07c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f07c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f07c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f07c8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2f07c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2f07cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f07ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f07d0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2f07d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f07d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f07d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f07d8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f07d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f07dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f07dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f07e0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2f07e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f07e4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2f07e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f07e8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f07e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f07ec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f07ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f07f0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f07f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f07f4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2f07f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f07f8: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2f07f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f07fc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2f07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0800: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2f0800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0804: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f0804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f0808: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f0808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f080c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f080cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0810: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2f0810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f0814: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2f0814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0818: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2f0818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f081c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f081cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f0820: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f0820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f0824: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2f0824u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f0828: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2f0828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2f082c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2f082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0830: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2f0830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0834: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f0834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f0838: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f0838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f083c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f083cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0840: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0840u;
        // 0x2f0844: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0848u;
}

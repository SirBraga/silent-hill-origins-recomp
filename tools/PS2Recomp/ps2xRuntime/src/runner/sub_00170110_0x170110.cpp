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

// Function: sub_00170110
// Address: 0x170110 - 0x170200
void sub_00170110_0x170110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170110_0x170110");
#endif

    switch (ctx->pc) {
        case 0x170140u: goto label_170140;
        case 0x1701c8u: goto label_1701c8;
        case 0x1701e0u: goto label_1701e0;
        default: break;
    }

    ctx->pc = 0x170110u;

    // 0x170110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x170110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x170114: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x170114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x170118: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x170118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17011c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17011cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170120: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x170120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x170124: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x170124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x170128: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x170128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17012c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x17012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170130: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x170130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170134: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x170134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x170138: 0xc065aa2  jal         func_196A88
    ctx->pc = 0x170138u;
    SET_GPR_U32(ctx, 31, 0x170140u);
    ctx->pc = 0x17013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170138u;
    // 0x17013c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x196A88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196A88u, 0x170138u, 0x170140u)) {
        return;
    }
    ctx->pc = 0x170140u;
label_170140:
    // 0x170140: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x170140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x170144: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x170144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x170148: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x170148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17014c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x17014cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170150: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x170150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x170154: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x170154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170158: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x170158u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17015c: 0x0  nop
    ctx->pc = 0x17015cu;
    // NOP
    // 0x170160: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x170160u;
    {
        const bool branch_taken_0x170160 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170160u;
        // 0x170164: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170160) {
            ctx->pc = 0x1701A8u;
            goto label_1701a8;
        }
    }
    ctx->pc = 0x170168u;
    // 0x170168: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x170168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17016c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x17016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170170: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x170170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170174: 0x0  nop
    ctx->pc = 0x170174u;
    // NOP
    // 0x170178: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x170178u;
    {
        const bool branch_taken_0x170178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170178) {
            ctx->pc = 0x1701A8u;
            goto label_1701a8;
        }
    }
    ctx->pc = 0x170180u;
    // 0x170180: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x170180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170184: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x170184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170188: 0x0  nop
    ctx->pc = 0x170188u;
    // NOP
    // 0x17018c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17018Cu;
    {
        const bool branch_taken_0x17018c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17018c) {
            ctx->pc = 0x1701A8u;
            goto label_1701a8;
        }
    }
    ctx->pc = 0x170194u;
    // 0x170194: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x170194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17019c: 0x0  nop
    ctx->pc = 0x17019cu;
    // NOP
    // 0x1701a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1701A0u;
    {
        const bool branch_taken_0x1701a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1701a0) {
            ctx->pc = 0x1701A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1701A0u;
            // 0x1701a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1701A8u;
            goto label_1701a8;
        }
    }
    ctx->pc = 0x1701A8u;
label_1701a8:
    // 0x1701a8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1701A8u;
    {
        const bool branch_taken_0x1701a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1701ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701A8u;
        // 0x1701ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701a8) {
            ctx->pc = 0x1701E8u;
            goto label_1701e8;
        }
    }
    ctx->pc = 0x1701B0u;
    // 0x1701b0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1701b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1701b4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1701b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1701b8: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1701b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1701bc: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1701bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1701c0: 0xc065aa0  jal         func_196A80
    ctx->pc = 0x1701C0u;
    SET_GPR_U32(ctx, 31, 0x1701C8u);
    ctx->pc = 0x1701C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1701C0u;
    // 0x1701c4: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196A80u, 0x1701C0u, 0x1701C8u)) {
        return;
    }
    ctx->pc = 0x1701C8u;
label_1701c8:
    // 0x1701c8: 0x9fa40024  lwu         $a0, 0x24($sp)
    ctx->pc = 0x1701c8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1701cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1701ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701d0: 0x9fa20020  lwu         $v0, 0x20($sp)
    ctx->pc = 0x1701d0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1701d4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1701d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1701d8: 0xc05be66  jal         func_16F998
    ctx->pc = 0x1701D8u;
    SET_GPR_U32(ctx, 31, 0x1701E0u);
    ctx->pc = 0x1701DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1701D8u;
    // 0x1701dc: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16F998u, 0x1701D8u, 0x1701E0u)) {
        return;
    }
    ctx->pc = 0x1701E0u;
label_1701e0:
    // 0x1701e0: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1701e0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1701e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1701e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1701e8:
    // 0x1701e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1701e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1701ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1701ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1701f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1701f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1701f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1701F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1701F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701F4u;
        // 0x1701f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1701F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1701FCu;
    // 0x1701fc: 0x0  nop
    ctx->pc = 0x1701fcu;
    // NOP
    ctx->pc = 0x170200u;
}

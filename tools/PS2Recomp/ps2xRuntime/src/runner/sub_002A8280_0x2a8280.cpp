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

// Function: sub_002A8280
// Address: 0x2a8280 - 0x2a84d0
void sub_002A8280_0x2a8280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8280_0x2a8280");
#endif

    switch (ctx->pc) {
        case 0x2a82c8u: goto label_2a82c8;
        case 0x2a82f0u: goto label_2a82f0;
        case 0x2a8350u: goto label_2a8350;
        case 0x2a8418u: goto label_2a8418;
        case 0x2a8468u: goto label_2a8468;
        default: break;
    }

    ctx->pc = 0x2a8280u;

    // 0x2a8280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a8280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a8284: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8288: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a8288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a828c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a8290: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a8290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8298: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a8298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a829c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a829cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82a0: 0xc6230040  lwc1        $f3, 0x40($s1)
    ctx->pc = 0x2a82a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a82a4: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x2a82a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a82a8: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x2a82a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a82ac: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2a82acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a82b0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2a82b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a82b4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2a82b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a82b8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a82b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a82bc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a82bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2a82c0: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x2A82C0u;
    SET_GPR_U32(ctx, 31, 0x2A82C8u);
    ctx->pc = 0x2A82C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A82C0u;
    // 0x2a82c4: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x2A82C0u, 0x2A82C8u)) {
        return;
    }
    ctx->pc = 0x2A82C8u;
label_2a82c8:
    // 0x2a82c8: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x2a82c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a82cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a82ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a82d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a82d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a82d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a82d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a82d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a82dc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2a82dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2a82e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a82e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a82e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A82E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82E4u;
        // 0x2a82e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A82E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A82ECu;
    // 0x2a82ec: 0x0  nop
    ctx->pc = 0x2a82ecu;
    // NOP
label_2a82f0:
    // 0x2a82f0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a82f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a82f4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2a82f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82f8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a82f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a82fc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a82fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8300: 0x0  nop
    ctx->pc = 0x2a8300u;
    // NOP
    // 0x2a8304: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8304u;
    {
        const bool branch_taken_0x2a8304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8304u;
        // 0x2a8308: 0xc4810040  lwc1        $f1, 0x40($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8304) {
            ctx->pc = 0x2A8310u;
            goto label_2a8310;
        }
    }
    ctx->pc = 0x2A830Cu;
    // 0x2a830c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a830cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2a8310:
    // 0x2a8310: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a8310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a8314: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2a8314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8318: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a8318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a831c: 0x0  nop
    ctx->pc = 0x2a831cu;
    // NOP
    // 0x2a8320: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8320u;
    {
        const bool branch_taken_0x2a8320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8320u;
        // 0x2a8324: 0xc4810044  lwc1        $f1, 0x44($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8320) {
            ctx->pc = 0x2A832Cu;
            goto label_2a832c;
        }
    }
    ctx->pc = 0x2A8328u;
    // 0x2a8328: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a8328u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2a832c:
    // 0x2a832c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a832cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a8330: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a8330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8334: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a8334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8338: 0x0  nop
    ctx->pc = 0x2a8338u;
    // NOP
    // 0x2a833c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A833Cu;
    {
        const bool branch_taken_0x2a833c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A833Cu;
        // 0x2a8340: 0xc4810048  lwc1        $f1, 0x48($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a833c) {
            ctx->pc = 0x2A8348u;
            goto label_2a8348;
        }
    }
    ctx->pc = 0x2A8344u;
    // 0x2a8344: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a8344u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2a8348:
    // 0x2a8348: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8348u;
        // 0x2a834c: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8350u;
label_2a8350:
    // 0x2a8350: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2a8350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a8354: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2a8354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a8358: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a8358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a835c: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x2a835cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8360: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x2a8360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8364: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2a8364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2a8368: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x2a8368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a836c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a836cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8370: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x2a8370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2a8374: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x2a8374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2a8378: 0x68aa0007  ldl         $t2, 0x7($a1)
    ctx->pc = 0x2a8378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2a837c: 0x6caa0000  ldr         $t2, 0x0($a1)
    ctx->pc = 0x2a837cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2a8380: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a8380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a8384: 0xb0ea0007  sdl         $t2, 0x7($a3)
    ctx->pc = 0x2a8384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8388: 0xb4ea0000  sdr         $t2, 0x0($a3)
    ctx->pc = 0x2a8388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a838c: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2a838cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2a8390: 0x68aa0017  ldl         $t2, 0x17($a1)
    ctx->pc = 0x2a8390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2a8394: 0x6caa0010  ldr         $t2, 0x10($a1)
    ctx->pc = 0x2a8394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2a8398: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2a8398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2a839c: 0xb0ca001b  sdl         $t2, 0x1B($a2)
    ctx->pc = 0x2a839cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a83a0: 0xb4ca0014  sdr         $t2, 0x14($a2)
    ctx->pc = 0x2a83a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a83a4: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x2a83a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x2a83a8: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x2a83a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a83ac: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a83acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a83b0: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x2a83b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x2a83b4: 0xe4c10020  swc1        $f1, 0x20($a2)
    ctx->pc = 0x2a83b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x2a83b8: 0x68aa0017  ldl         $t2, 0x17($a1)
    ctx->pc = 0x2a83b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2a83bc: 0x6caa0010  ldr         $t2, 0x10($a1)
    ctx->pc = 0x2a83bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2a83c0: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2a83c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2a83c4: 0xb0ea0013  sdl         $t2, 0x13($a3)
    ctx->pc = 0x2a83c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a83c8: 0xb4ea000c  sdr         $t2, 0xC($a3)
    ctx->pc = 0x2a83c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a83cc: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x2a83ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x2a83d0: 0x68aa0027  ldl         $t2, 0x27($a1)
    ctx->pc = 0x2a83d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2a83d4: 0x6caa0020  ldr         $t2, 0x20($a1)
    ctx->pc = 0x2a83d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2a83d8: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x2a83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2a83dc: 0xb0ca002f  sdl         $t2, 0x2F($a2)
    ctx->pc = 0x2a83dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a83e0: 0xb4ca0028  sdr         $t2, 0x28($a2)
    ctx->pc = 0x2a83e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a83e4: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x2a83e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x2a83e8: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x2a83e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a83ec: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a83ecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a83f0: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x2a83f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x2a83f4: 0xe4c10034  swc1        $f1, 0x34($a2)
    ctx->pc = 0x2a83f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x2a83f8: 0x68aa0027  ldl         $t2, 0x27($a1)
    ctx->pc = 0x2a83f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2a83fc: 0x6caa0020  ldr         $t2, 0x20($a1)
    ctx->pc = 0x2a83fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2a8400: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x2a8400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2a8404: 0xb0ea001f  sdl         $t2, 0x1F($a3)
    ctx->pc = 0x2a8404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8408: 0xb4ea0018  sdr         $t2, 0x18($a3)
    ctx->pc = 0x2a8408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a840c: 0xace30020  sw          $v1, 0x20($a3)
    ctx->pc = 0x2a840cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 3));
    // 0x2a8410: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8410u;
        // 0x2a8414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8418u;
label_2a8418:
    // 0x2a8418: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2a8418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a841c: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x2a841cu;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
    // 0x2a8420: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x2a8420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a8424: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x2a8424u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
    // 0x2a8428: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2a8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a842c: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x2a842cu;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
    // 0x2a8430: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x2a8430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a8434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8438: 0xc4820044  lwc1        $f2, 0x44($a0)
    ctx->pc = 0x2a8438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a843c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2a843cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2a8440: 0xc4810048  lwc1        $f1, 0x48($a0)
    ctx->pc = 0x2a8440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8444: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2a8444u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2a8448: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a8448u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a844c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a844cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a8450: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8454: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2a8454u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8458: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2a8458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2a845c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A845Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A845Cu;
        // 0x2a8460: 0xe4c20000  swc1        $f2, 0x0($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A845Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8464u;
    // 0x2a8464: 0x0  nop
    ctx->pc = 0x2a8464u;
    // NOP
label_2a8468:
    // 0x2a8468: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x2a8468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a846c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2a846cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2a8470: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2a8470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8474: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2a8474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8478: 0x0  nop
    ctx->pc = 0x2a8478u;
    // NOP
    // 0x2a847c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A847Cu;
    {
        const bool branch_taken_0x2a847c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A847Cu;
        // 0x2a8480: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a847c) {
            ctx->pc = 0x2A8488u;
            goto label_2a8488;
        }
    }
    ctx->pc = 0x2A8484u;
    // 0x2a8484: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2a8484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2a8488:
    // 0x2a8488: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a8488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a848c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a848cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8490: 0x0  nop
    ctx->pc = 0x2a8490u;
    // NOP
    // 0x2a8494: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A8494u;
    {
        const bool branch_taken_0x2a8494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8494) {
            ctx->pc = 0x2A8498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8494u;
            // 0x2a8498: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A849Cu;
            goto label_2a849c;
        }
    }
    ctx->pc = 0x2A849Cu;
label_2a849c:
    // 0x2a849c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a849cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a84a0: 0x0  nop
    ctx->pc = 0x2a84a0u;
    // NOP
    // 0x2a84a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A84A4u;
    {
        const bool branch_taken_0x2a84a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84A4u;
        // 0x2a84a8: 0x3c022131  lui         $v0, 0x2131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84a4) {
            ctx->pc = 0x2A84B0u;
            goto label_2a84b0;
        }
    }
    ctx->pc = 0x2A84ACu;
    // 0x2a84ac: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2a84acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_2a84b0:
    // 0x2a84b0: 0x34422300  ori         $v0, $v0, 0x2300
    ctx->pc = 0x2a84b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
    // 0x2a84b4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x2a84b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2a84b8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2a84b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a84bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a84c0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2a84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a84c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a84c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a84c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A84C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84C8u;
        // 0x2a84cc: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A84C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A84D0u;
}

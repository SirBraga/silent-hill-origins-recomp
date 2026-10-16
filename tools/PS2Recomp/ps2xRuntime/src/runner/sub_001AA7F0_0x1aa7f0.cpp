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

// Function: sub_001AA7F0
// Address: 0x1aa7f0 - 0x1aa9e8
void sub_001AA7F0_0x1aa7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA7F0_0x1aa7f0");
#endif

    switch (ctx->pc) {
        case 0x1aa86cu: goto label_1aa86c;
        case 0x1aa87cu: goto label_1aa87c;
        default: break;
    }

    ctx->pc = 0x1aa7f0u;

    // 0x1aa7f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1aa7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1aa7f4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1aa7f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1aa7f8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1aa7f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1aa7fc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1aa7fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1aa800: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1aa800u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1aa804: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1aa804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1aa808: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x1aa808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa80c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1aa80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1aa810: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1aa810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1aa814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa818: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA818u;
    {
        const bool branch_taken_0x1aa818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA818u;
        // 0x1aa81c: 0xe7b600a0  swc1        $f22, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa818) {
            ctx->pc = 0x1AA82Cu;
            goto label_1aa82c;
        }
    }
    ctx->pc = 0x1AA820u;
    // 0x1aa820: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1aa820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1aa824: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1aa824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1aa828: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1aa828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1aa82c:
    // 0x1aa82c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa830: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1aa830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1aa834: 0x0  nop
    ctx->pc = 0x1aa834u;
    // NOP
    // 0x1aa838: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x1aa838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa83c: 0x0  nop
    ctx->pc = 0x1aa83cu;
    // NOP
    // 0x1aa840: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA840u;
    {
        const bool branch_taken_0x1aa840 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA840u;
        // 0x1aa844: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa840) {
            ctx->pc = 0x1AA854u;
            goto label_1aa854;
        }
    }
    ctx->pc = 0x1AA848u;
    // 0x1aa848: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x1aa848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x1aa84c: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x1aa84cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x1aa850: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1aa850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1aa854:
    // 0x1aa854: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1aa854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1aa858: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aa858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa85c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1aa85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1aa860: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1aa860u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1aa864: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x1AA864u;
    SET_GPR_U32(ctx, 31, 0x1AA86Cu);
    ctx->pc = 0x1AA868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA864u;
    // 0x1aa868: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x1AA864u, 0x1AA86Cu)) {
        return;
    }
    ctx->pc = 0x1AA86Cu;
label_1aa86c:
    // 0x1aa86c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa870: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1aa870u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1aa874: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1AA874u;
    SET_GPR_U32(ctx, 31, 0x1AA87Cu);
    ctx->pc = 0x1AA878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA874u;
    // 0x1aa878: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1AA874u, 0x1AA87Cu)) {
        return;
    }
    ctx->pc = 0x1AA87Cu;
label_1aa87c:
    // 0x1aa87c: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x1aa87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa880: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1aa880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa884: 0x0  nop
    ctx->pc = 0x1aa884u;
    // NOP
    // 0x1aa888: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA888u;
    {
        const bool branch_taken_0x1aa888 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA888u;
        // 0x1aa88c: 0x4600b0c6  mov.s       $f3, $f22 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa888) {
            ctx->pc = 0x1AA898u;
            goto label_1aa898;
        }
    }
    ctx->pc = 0x1AA890u;
    // 0x1aa890: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1aa890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1aa894: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1aa894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1aa898:
    // 0x1aa898: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1aa898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa89c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1aa89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa8a0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1aa8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aa8a4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1aa8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1aa8a8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1aa8a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1aa8ac: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1aa8acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1aa8b0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1aa8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1aa8b4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1aa8b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1aa8b8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1aa8b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1aa8bc: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1aa8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1aa8c0: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1aa8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1aa8c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa8c8: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1aa8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa8cc: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1aa8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa8d0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1aa8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1aa8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa8d8: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x1aa8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1aa8dc: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1aa8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1aa8e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa8e4: 0xb2260037  sdl         $a2, 0x37($s1)
    ctx->pc = 0x1aa8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa8e8: 0xb6260030  sdr         $a2, 0x30($s1)
    ctx->pc = 0x1aa8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa8ec: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x1aa8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x1aa8f0: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x1aa8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1aa8f4: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x1aa8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1aa8f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1aa8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa8fc: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x1aa8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa900: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x1aa900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa904: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1aa904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1aa908: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1aa908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1aa90c: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x1aa90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1aa910: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1aa910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1aa914: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa918: 0xb22600a7  sdl         $a2, 0xA7($s1)
    ctx->pc = 0x1aa918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa91c: 0xb62600a0  sdr         $a2, 0xA0($s1)
    ctx->pc = 0x1aa91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa920: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x1aa920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x1aa924: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x1aa924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1aa928: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x1aa928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1aa92c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa930: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x1aa930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa934: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x1aa934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa938: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1aa938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1aa93c: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x1aa93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1aa940: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x1aa940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1aa944: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1aa944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa948: 0xb3a60057  sdl         $a2, 0x57($sp)
    ctx->pc = 0x1aa948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa94c: 0xb7a60050  sdr         $a2, 0x50($sp)
    ctx->pc = 0x1aa94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa950: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1aa950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1aa954: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x1aa954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1aa958: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1aa958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1aa95c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa960: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x1aa960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa964: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x1aa964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa968: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1aa968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1aa96c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1aa96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aa970: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1aa970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa974: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1aa974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa978: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1aa978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aa97c: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x1aa97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1aa980: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1aa980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aa984: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1aa984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aa988: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1aa988u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1aa98c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1aa98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa990: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x1aa990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1aa994: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1aa994u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1aa998: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1aa998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1aa99c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1aa99cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1aa9a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1aa9a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1aa9a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1aa9a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1aa9a8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1aa9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1aa9ac: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x1aa9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1aa9b0: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x1aa9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1aa9b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1aa9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aa9b8: 0xb22600b7  sdl         $a2, 0xB7($s1)
    ctx->pc = 0x1aa9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa9bc: 0xb62600b0  sdr         $a2, 0xB0($s1)
    ctx->pc = 0x1aa9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa9c0: 0xae2300b8  sw          $v1, 0xB8($s1)
    ctx->pc = 0x1aa9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x1aa9c4: 0xe63400d0  swc1        $f20, 0xD0($s1)
    ctx->pc = 0x1aa9c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x1aa9c8: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x1aa9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
    // 0x1aa9cc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1aa9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1aa9d0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1aa9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aa9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9D4u;
        // 0x1aa9d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA9DCu;
    // 0x1aa9dc: 0x0  nop
    ctx->pc = 0x1aa9dcu;
    // NOP
    // 0x1aa9e0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1aa9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1aa9e4: 0x0  nop
    ctx->pc = 0x1aa9e4u;
    // NOP
    ctx->pc = 0x1aa9e8u;
}

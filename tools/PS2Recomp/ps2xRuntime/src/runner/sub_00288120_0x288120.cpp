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

// Function: sub_00288120
// Address: 0x288120 - 0x2883e8
void sub_00288120_0x288120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288120_0x288120");
#endif

    switch (ctx->pc) {
        case 0x288160u: goto label_288160;
        case 0x28817cu: goto label_28817c;
        case 0x2881a0u: goto label_2881a0;
        case 0x2881c0u: goto label_2881c0;
        case 0x288228u: goto label_288228;
        case 0x288240u: goto label_288240;
        case 0x288254u: goto label_288254;
        case 0x288354u: goto label_288354;
        case 0x2883a8u: goto label_2883a8;
        default: break;
    }

    ctx->pc = 0x288120u;

    // 0x288120: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x288120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x288124: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x288124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x288128: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x288128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x28812c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28812cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288130: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x288130u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288134: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x288134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x288138: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x288138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x28813c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x28813cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x288140: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x288140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x288144: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x288144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x288148: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x288148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x28814c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x28814cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x288150: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x288150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x288154: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x288154u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x288158: 0xc0a1e54  jal         func_287950
    ctx->pc = 0x288158u;
    SET_GPR_U32(ctx, 31, 0x288160u);
    ctx->pc = 0x28815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288158u;
    // 0x28815c: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x287950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287950u, 0x288158u, 0x288160u)) {
        return;
    }
    ctx->pc = 0x288160u;
label_288160:
    // 0x288160: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x288160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x288164: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x288164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x288168: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x288168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28816c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28816Cu;
    {
        const bool branch_taken_0x28816c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x288170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28816Cu;
        // 0x288170: 0xe4406ab0  swc1        $f0, 0x6AB0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 27312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28816c) {
            ctx->pc = 0x288184u;
            goto label_288184;
        }
    }
    ctx->pc = 0x288174u;
    // 0x288174: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x288174u;
    SET_GPR_U32(ctx, 31, 0x28817Cu);
    ctx->pc = 0x288178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288174u;
    // 0x288178: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x288174u, 0x28817Cu)) {
        return;
    }
    ctx->pc = 0x28817Cu;
label_28817c:
    // 0x28817c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28817Cu;
    {
        const bool branch_taken_0x28817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28817Cu;
        // 0x288180: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28817c) {
            ctx->pc = 0x288188u;
            goto label_288188;
        }
    }
    ctx->pc = 0x288184u;
label_288184:
    // 0x288184: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x288184u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_288188:
    // 0x288188: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x288188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28818c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288190: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288190u;
    {
        const bool branch_taken_0x288190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288190u;
        // 0x288194: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288190) {
            ctx->pc = 0x2881A4u;
            goto label_2881a4;
        }
    }
    ctx->pc = 0x288198u;
    // 0x288198: 0xc09294c  jal         func_24A530
    ctx->pc = 0x288198u;
    SET_GPR_U32(ctx, 31, 0x2881A0u);
    ctx->pc = 0x28819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288198u;
    // 0x28819c: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x288198u, 0x2881A0u)) {
        return;
    }
    ctx->pc = 0x2881A0u;
label_2881a0:
    // 0x2881a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2881a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2881a4:
    // 0x2881a4: 0x1ac0007b  blez        $s6, . + 4 + (0x7B << 2)
    ctx->pc = 0x2881A4u;
    {
        const bool branch_taken_0x2881a4 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x2881A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881A4u;
        // 0x2881a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881a4) {
            ctx->pc = 0x288394u;
            goto label_288394;
        }
    }
    ctx->pc = 0x2881ACu;
    // 0x2881ac: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2881acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2881b0: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x2881b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2881b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2881b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2881b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2881b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2881bc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2881bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2881c0:
    // 0x2881c0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2881c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2881c4: 0x163e001a  bne         $s1, $fp, . + 4 + (0x1A << 2)
    ctx->pc = 0x2881C4u;
    {
        const bool branch_taken_0x2881c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 30));
        if (branch_taken_0x2881c4) {
            ctx->pc = 0x288230u;
            goto label_288230;
        }
    }
    ctx->pc = 0x2881CCu;
    // 0x2881cc: 0x6a02fff3  ldl         $v0, -0xD($s0)
    ctx->pc = 0x2881ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2881d0: 0x6e02ffec  ldr         $v0, -0x14($s0)
    ctx->pc = 0x2881d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2881d4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2881d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2881d8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2881d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2881dc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2881dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2881e0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x2881e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x2881e4: 0x6a06000b  ldl         $a2, 0xB($s0)
    ctx->pc = 0x2881e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2881e8: 0x6e060004  ldr         $a2, 0x4($s0)
    ctx->pc = 0x2881e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2881ec: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x2881ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2881f0: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x2881f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2881f4: 0x246363b0  addiu       $v1, $v1, 0x63B0
    ctx->pc = 0x2881f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25520));
    // 0x2881f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2881f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881fc: 0x8c660708  lw          $a2, 0x708($v1)
    ctx->pc = 0x2881fcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x706AB8u));
    // 0x288200: 0x6a070023  ldl         $a3, 0x23($s0)
    ctx->pc = 0x288200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x288204: 0x6e07001c  ldr         $a3, 0x1C($s0)
    ctx->pc = 0x288204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x288208: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x288208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28820c: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x28820cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288210: 0x6a07003b  ldl         $a3, 0x3B($s0)
    ctx->pc = 0x288210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x288214: 0x6e070034  ldr         $a3, 0x34($s0)
    ctx->pc = 0x288214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x288218: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x288218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28821c: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x28821cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288220: 0xc0a1f62  jal         func_287D88
    ctx->pc = 0x288220u;
    SET_GPR_U32(ctx, 31, 0x288228u);
    ctx->pc = 0x288224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288220u;
    // 0x288224: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287D88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287D88u, 0x288220u, 0x288228u)) {
        return;
    }
    ctx->pc = 0x288228u;
label_288228:
    // 0x288228: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x288228u;
    {
        const bool branch_taken_0x288228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288228u;
        // 0x28822c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288228) {
            ctx->pc = 0x288384u;
            goto label_288384;
        }
    }
    ctx->pc = 0x288230u;
label_288230:
    // 0x288230: 0x56370045  bnel        $s1, $s7, . + 4 + (0x45 << 2)
    ctx->pc = 0x288230u;
    {
        const bool branch_taken_0x288230 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        if (branch_taken_0x288230) {
            ctx->pc = 0x288234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288230u;
            // 0x288234: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288348u;
            goto label_288348;
        }
    }
    ctx->pc = 0x288238u;
    // 0x288238: 0xc09294c  jal         func_24A530
    ctx->pc = 0x288238u;
    SET_GPR_U32(ctx, 31, 0x288240u);
    ctx->pc = 0x28823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288238u;
    // 0x28823c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x288238u, 0x288240u)) {
        return;
    }
    ctx->pc = 0x288240u;
label_288240:
    // 0x288240: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x288240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x288244: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x288244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x288248: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x288248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28824c: 0xc09289c  jal         func_24A270
    ctx->pc = 0x28824Cu;
    SET_GPR_U32(ctx, 31, 0x288254u);
    ctx->pc = 0x288250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28824Cu;
    // 0x288250: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x28824Cu, 0x288254u)) {
        return;
    }
    ctx->pc = 0x288254u;
label_288254:
    // 0x288254: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x288254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288258: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x288258u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28825c: 0xc462fff0  lwc1        $f2, -0x10($v1)
    ctx->pc = 0x28825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x288260: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x288260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x288264: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x288264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x288268: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x288268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28826c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28826cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x288270: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x288270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288274: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x288274u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x288278: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x288278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28827c: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x28827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288280: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x288280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x288284: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x288284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x288288: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x288288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28828c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28828cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x288290: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x288290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x288294: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x288294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x288298: 0x46010044  c1          0x10044
    ctx->pc = 0x288298u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x28829c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x28829cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2882a0: 0x0  nop
    ctx->pc = 0x2882a0u;
    // NOP
    // 0x2882a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2882A4u;
    {
        const bool branch_taken_0x2882a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2882A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882A4u;
        // 0x2882a8: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882a4) {
            ctx->pc = 0x2882B0u;
            goto label_2882b0;
        }
    }
    ctx->pc = 0x2882ACu;
    // 0x2882ac: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x2882acu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[1]);
label_2882b0:
    // 0x2882b0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2882b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2882b4: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2882b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2882b8: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x2882b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2882bc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2882bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2882c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2882c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2882c4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2882c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2882c8: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x2882c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2882cc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2882ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2882d0: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2882d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2882d4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2882D4u;
    {
        const bool branch_taken_0x2882d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2882D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882D4u;
        // 0x2882d8: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882d4) {
            ctx->pc = 0x288330u;
            goto label_288330;
        }
    }
    ctx->pc = 0x2882DCu;
    // 0x2882dc: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x2882dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x2882e0: 0xc4437ff4  lwc1        $f3, 0x7FF4($v0)
    ctx->pc = 0x2882e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2882e4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2882e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2882e8: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2882e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2882ec: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2882ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2882f0: 0xc4417ff8  lwc1        $f1, 0x7FF8($v0)
    ctx->pc = 0x2882f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2882f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2882f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2882f8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2882f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2882fc: 0xc4407ff4  lwc1        $f0, 0x7FF4($v0)
    ctx->pc = 0x2882fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288300: 0xc4427ff8  lwc1        $f2, 0x7FF8($v0)
    ctx->pc = 0x288300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x288304: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x288304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x288308: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x288308u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28830c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28830cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x288310: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x288310u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x288314: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x288314u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x288318: 0xe4437ff4  swc1        $f3, 0x7FF4($v0)
    ctx->pc = 0x288318u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32756), bits); }
    // 0x28831c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x28831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288320: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x288320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x288324: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x288324u;
    {
        const bool branch_taken_0x288324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288324u;
        // 0x288328: 0xe4407ff8  swc1        $f0, 0x7FF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288324) {
            ctx->pc = 0x288384u;
            goto label_288384;
        }
    }
    ctx->pc = 0x28832Cu;
    // 0x28832c: 0x0  nop
    ctx->pc = 0x28832cu;
    // NOP
label_288330:
    // 0x288330: 0x68640013  ldl         $a0, 0x13($v1)
    ctx->pc = 0x288330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x288334: 0x6c64000c  ldr         $a0, 0xC($v1)
    ctx->pc = 0x288334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x288338: 0xb064fffb  sdl         $a0, -0x5($v1)
    ctx->pc = 0x288338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28833c: 0xb464fff4  sdr         $a0, -0xC($v1)
    ctx->pc = 0x28833cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288340: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x288340u;
    {
        const bool branch_taken_0x288340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288340u;
        // 0x288344: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288340) {
            ctx->pc = 0x288388u;
            goto label_288388;
        }
    }
    ctx->pc = 0x288348u;
label_288348:
    // 0x288348: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x288348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x28834c: 0xc09289c  jal         func_24A270
    ctx->pc = 0x28834Cu;
    SET_GPR_U32(ctx, 31, 0x288354u);
    ctx->pc = 0x288350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28834Cu;
    // 0x288350: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x28834Cu, 0x288354u)) {
        return;
    }
    ctx->pc = 0x288354u;
label_288354:
    // 0x288354: 0x6a080007  ldl         $t0, 0x7($s0)
    ctx->pc = 0x288354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x288358: 0x6e080000  ldr         $t0, 0x0($s0)
    ctx->pc = 0x288358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x28835c: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x28835cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x288360: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x288360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x288364: 0x6a040017  ldl         $a0, 0x17($s0)
    ctx->pc = 0x288364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x288368: 0x6e040010  ldr         $a0, 0x10($s0)
    ctx->pc = 0x288368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28836c: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x28836cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288370: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x288370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288374: 0xb043000f  sdl         $v1, 0xF($v0)
    ctx->pc = 0x288374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288378: 0xb4430008  sdr         $v1, 0x8($v0)
    ctx->pc = 0x288378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28837c: 0xb0440017  sdl         $a0, 0x17($v0)
    ctx->pc = 0x28837cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288380: 0xb4440010  sdr         $a0, 0x10($v0)
    ctx->pc = 0x288380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_288384:
    // 0x288384: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x288384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_288388:
    // 0x288388: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x288388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x28838c: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x28838Cu;
    {
        const bool branch_taken_0x28838c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28838Cu;
        // 0x288390: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28838c) {
            ctx->pc = 0x2881C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2881c0;
        }
    }
    ctx->pc = 0x288394u;
label_288394:
    // 0x288394: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x288394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x288398: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288398u;
    {
        const bool branch_taken_0x288398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288398u;
        // 0x28839c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288398) {
            ctx->pc = 0x2883ACu;
            goto label_2883ac;
        }
    }
    ctx->pc = 0x2883A0u;
    // 0x2883a0: 0xc0a1e7e  jal         func_2879F8
    ctx->pc = 0x2883A0u;
    SET_GPR_U32(ctx, 31, 0x2883A8u);
    ctx->pc = 0x2883A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883A0u;
    // 0x2883a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2879F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2879F8u, 0x2883A0u, 0x2883A8u)) {
        return;
    }
    ctx->pc = 0x2883A8u;
label_2883a8:
    // 0x2883a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2883a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2883ac:
    // 0x2883ac: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2883acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2883b0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2883b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2883b4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2883b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2883b8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2883b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2883bc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2883bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2883c0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2883c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2883c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2883c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2883c8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2883c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2883cc: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2883ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2883d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2883d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2883d4: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2883d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2883d8: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2883d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2883dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2883DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2883E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2883DCu;
        // 0x2883e0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2883DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2883E4u;
    // 0x2883e4: 0x0  nop
    ctx->pc = 0x2883e4u;
    // NOP
    ctx->pc = 0x2883e8u;
}

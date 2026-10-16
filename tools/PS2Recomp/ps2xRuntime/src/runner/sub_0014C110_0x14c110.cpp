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

// Function: sub_0014C110
// Address: 0x14c110 - 0x14c510
void sub_0014C110_0x14c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C110_0x14c110");
#endif

    switch (ctx->pc) {
        case 0x14c194u: goto label_14c194;
        case 0x14c1a0u: goto label_14c1a0;
        case 0x14c1b0u: goto label_14c1b0;
        case 0x14c1b8u: goto label_14c1b8;
        case 0x14c1f8u: goto label_14c1f8;
        case 0x14c228u: goto label_14c228;
        case 0x14c230u: goto label_14c230;
        case 0x14c250u: goto label_14c250;
        case 0x14c258u: goto label_14c258;
        case 0x14c278u: goto label_14c278;
        case 0x14c298u: goto label_14c298;
        case 0x14c2e8u: goto label_14c2e8;
        case 0x14c420u: goto label_14c420;
        case 0x14c4d0u: goto label_14c4d0;
        default: break;
    }

    ctx->pc = 0x14c110u;

    // 0x14c110: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x14c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x14c114: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x14c114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14c118: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x14c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x14c11c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x14c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x14c120: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14c120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c124: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x14c124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x14c128: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14c128u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c12c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x14c12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x14c130: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14c130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c134: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x14c134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x14c138: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14c138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14c13c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x14c13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x14c140: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14c140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14c144: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x14c144u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x14c148: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x14c148u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x14c14c: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x14c14cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x14c150: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x14c150u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x14c154: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x14c154u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x14c158: 0x6a42000f  ldl         $v0, 0xF($s2)
    ctx->pc = 0x14c158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14c15c: 0x6e420008  ldr         $v0, 0x8($s2)
    ctx->pc = 0x14c15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14c160: 0x6a430017  ldl         $v1, 0x17($s2)
    ctx->pc = 0x14c160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14c164: 0x6e430010  ldr         $v1, 0x10($s2)
    ctx->pc = 0x14c164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14c168: 0x6a44001f  ldl         $a0, 0x1F($s2)
    ctx->pc = 0x14c168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x14c16c: 0x6e440018  ldr         $a0, 0x18($s2)
    ctx->pc = 0x14c16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x14c170: 0xb2420027  sdl         $v0, 0x27($s2)
    ctx->pc = 0x14c170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14c174: 0xb6420020  sdr         $v0, 0x20($s2)
    ctx->pc = 0x14c174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14c178: 0xb243002f  sdl         $v1, 0x2F($s2)
    ctx->pc = 0x14c178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14c17c: 0xb6430028  sdr         $v1, 0x28($s2)
    ctx->pc = 0x14c17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14c180: 0xb2440037  sdl         $a0, 0x37($s2)
    ctx->pc = 0x14c180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14c184: 0xb6440030  sdr         $a0, 0x30($s2)
    ctx->pc = 0x14c184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14c188: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x14c188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x14c18c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14C18Cu;
    SET_GPR_U32(ctx, 31, 0x14C194u);
    ctx->pc = 0x14C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C18Cu;
    // 0x14c190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14C18Cu, 0x14C194u)) {
        return;
    }
    ctx->pc = 0x14C194u;
label_14c194:
    // 0x14c194: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x14c194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x14c198: 0xc095426  jal         func_255098
    ctx->pc = 0x14C198u;
    SET_GPR_U32(ctx, 31, 0x14C1A0u);
    ctx->pc = 0x14C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C198u;
    // 0x14c19c: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255098u, 0x14C198u, 0x14C1A0u)) {
        return;
    }
    ctx->pc = 0x14C1A0u;
label_14c1a0:
    // 0x14c1a0: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14C1A0u;
    {
        const bool branch_taken_0x14c1a0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x14C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1A0u;
        // 0x14c1a4: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1a0) {
            ctx->pc = 0x14C1CCu;
            goto label_14c1cc;
        }
    }
    ctx->pc = 0x14C1A8u;
    // 0x14c1a8: 0x265000e0  addiu       $s0, $s2, 0xE0
    ctx->pc = 0x14c1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x14c1ac: 0x0  nop
    ctx->pc = 0x14c1acu;
    // NOP
label_14c1b0:
    // 0x14c1b0: 0xc089892  jal         func_226248
    ctx->pc = 0x14C1B0u;
    SET_GPR_U32(ctx, 31, 0x14C1B8u);
    ctx->pc = 0x14C1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C1B0u;
    // 0x14c1b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x14C1B0u, 0x14C1B8u)) {
        return;
    }
    ctx->pc = 0x14C1B8u;
label_14c1b8:
    // 0x14c1b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14c1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14c1bc: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x14c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x14c1c0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14c1c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14c1c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14C1C4u;
    {
        const bool branch_taken_0x14c1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1C4u;
        // 0x14c1c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1c4) {
            ctx->pc = 0x14C1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c1b0;
        }
    }
    ctx->pc = 0x14C1CCu;
label_14c1cc:
    // 0x14c1cc: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x14c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x14c1d0: 0x26430100  addiu       $v1, $s2, 0x100
    ctx->pc = 0x14c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x14c1d4: 0x264200e0  addiu       $v0, $s2, 0xE0
    ctx->pc = 0x14c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x14c1d8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x14c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x14c1dc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x14c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x14c1e0: 0x24a5cd28  addiu       $a1, $a1, -0x32D8
    ctx->pc = 0x14c1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954280));
    // 0x14c1e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x14c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x14c1e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x14c1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c1ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14c1f0: 0xc09545a  jal         func_255168
    ctx->pc = 0x14C1F0u;
    SET_GPR_U32(ctx, 31, 0x14C1F8u);
    ctx->pc = 0x14C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C1F0u;
    // 0x14c1f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x14C1F0u, 0x14C1F8u)) {
        return;
    }
    ctx->pc = 0x14C1F8u;
label_14c1f8:
    // 0x14c1f8: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x14c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x14c1fc: 0x186000ae  blez        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x14C1FCu;
    {
        const bool branch_taken_0x14c1fc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x14C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1FCu;
        // 0x14c200: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1fc) {
            ctx->pc = 0x14C4B8u;
            goto label_14c4b8;
        }
    }
    ctx->pc = 0x14C204u;
    // 0x14c204: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14c204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14c208: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x14c208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x14c20c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x14c20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x14c210: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x14c210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x14c214: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x14c214u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14c218: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14c218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14c21c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x14c21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x14c220: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x14c220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x14c224: 0x0  nop
    ctx->pc = 0x14c224u;
    // NOP
label_14c228:
    // 0x14c228: 0xc0c580c  jal         func_316030
    ctx->pc = 0x14C228u;
    SET_GPR_U32(ctx, 31, 0x14C230u);
    ctx->pc = 0x14C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C228u;
    // 0x14c22c: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x14C228u, 0x14C230u)) {
        return;
    }
    ctx->pc = 0x14C230u;
label_14c230:
    // 0x14c230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c234: 0x0  nop
    ctx->pc = 0x14c234u;
    // NOP
    // 0x14c238: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14c238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14c23c: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x14c23cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x14c240: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x14c240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x14c244: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x14c244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x14c248: 0x46180500  add.s       $f20, $f0, $f24
    ctx->pc = 0x14c248u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x14c24c: 0x0  nop
    ctx->pc = 0x14c24cu;
    // NOP
label_14c250:
    // 0x14c250: 0xc0c580c  jal         func_316030
    ctx->pc = 0x14C250u;
    SET_GPR_U32(ctx, 31, 0x14C258u);
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x14C250u, 0x14C258u)) {
        return;
    }
    ctx->pc = 0x14C258u;
label_14c258:
    // 0x14c258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c25c: 0x0  nop
    ctx->pc = 0x14c25cu;
    // NOP
    // 0x14c260: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14c260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14c264: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x14c264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x14c268: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x14c268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x14c26c: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x14c26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x14c270: 0xc0c580c  jal         func_316030
    ctx->pc = 0x14C270u;
    SET_GPR_U32(ctx, 31, 0x14C278u);
    ctx->pc = 0x14C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C270u;
    // 0x14c274: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x14C270u, 0x14C278u)) {
        return;
    }
    ctx->pc = 0x14C278u;
label_14c278:
    // 0x14c278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c27c: 0x0  nop
    ctx->pc = 0x14c27cu;
    // NOP
    // 0x14c280: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14c280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14c284: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x14c284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x14c288: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x14c288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x14c28c: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x14c28cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x14c290: 0xc0c580c  jal         func_316030
    ctx->pc = 0x14C290u;
    SET_GPR_U32(ctx, 31, 0x14C298u);
    ctx->pc = 0x14C294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C290u;
    // 0x14c294: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x14C290u, 0x14C298u)) {
        return;
    }
    ctx->pc = 0x14C298u;
label_14c298:
    // 0x14c298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c29c: 0x0  nop
    ctx->pc = 0x14c29cu;
    // NOP
    // 0x14c2a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14c2a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14c2a4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x14c2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c2a8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x14c2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14c2ac: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x14c2acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x14c2b0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x14c2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x14c2b4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x14c2b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x14c2b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x14c2b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x14c2bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14c2bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14c2c0: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x14c2c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x14c2c4: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x14c2c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x14c2c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14c2c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14c2cc: 0x46150832  c.eq.s      $f1, $f21
    ctx->pc = 0x14c2ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c2d0: 0x0  nop
    ctx->pc = 0x14c2d0u;
    // NOP
    // 0x14c2d4: 0x4501ffde  bc1t        . + 4 + (-0x22 << 2)
    ctx->pc = 0x14C2D4u;
    {
        const bool branch_taken_0x14c2d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2D4u;
        // 0x14c2d8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2d4) {
            ctx->pc = 0x14C250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c250;
        }
    }
    ctx->pc = 0x14C2DCu;
    // 0x14c2dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2e0: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x14C2E0u;
    SET_GPR_U32(ctx, 31, 0x14C2E8u);
    ctx->pc = 0x14C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C2E0u;
    // 0x14c2e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x14C2E0u, 0x14C2E8u)) {
        return;
    }
    ctx->pc = 0x14C2E8u;
label_14c2e8:
    // 0x14c2e8: 0x0  nop
    ctx->pc = 0x14c2e8u;
    // NOP
    // 0x14c2ec: 0x0  nop
    ctx->pc = 0x14c2ecu;
    // NOP
    // 0x14c2f0: 0x46000004  c1          0x4
    ctx->pc = 0x14c2f0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x14c2f4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x14c2f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c2f8: 0x0  nop
    ctx->pc = 0x14c2f8u;
    // NOP
    // 0x14c2fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14C2FCu;
    {
        const bool branch_taken_0x14c2fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2FCu;
        // 0x14c300: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2fc) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C304u;
    // 0x14c304: 0x0  nop
    ctx->pc = 0x14c304u;
    // NOP
    // 0x14c308: 0x0  nop
    ctx->pc = 0x14c308u;
    // NOP
    // 0x14c30c: 0x4600c0c3  div.s       $f3, $f24, $f0
    ctx->pc = 0x14c30cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[24], ctx->f[0]);
    // 0x14c310: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14C310u;
    {
        const bool branch_taken_0x14c310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C310u;
        // 0x14c314: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c310) {
            ctx->pc = 0x14C320u;
            goto label_14c320;
        }
    }
    ctx->pc = 0x14C318u;
label_14c318:
    // 0x14c318: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x14c318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c31c: 0x0  nop
    ctx->pc = 0x14c31cu;
    // NOP
label_14c320:
    // 0x14c320: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x14c320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c324: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x14c324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14c328: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14c328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14c32c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x14c32cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x14c330: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14c330u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14c334: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x14c334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x14c338: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x14c338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x14c33c: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x14c33cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x14c340: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x14c340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x14c344: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x14c344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x14c348: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c34c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x14c34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14c350: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x14c350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14c354: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x14c354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x14c358: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x14c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x14c35c: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x14c35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14c360: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x14c360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14c364: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x14c364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c368: 0xb0450067  sdl         $a1, 0x67($v0)
    ctx->pc = 0x14c368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14c36c: 0xb4450060  sdr         $a1, 0x60($v0)
    ctx->pc = 0x14c36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14c370: 0xac460068  sw          $a2, 0x68($v0)
    ctx->pc = 0x14c370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 6));
    // 0x14c374: 0x1280001a  beqz        $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x14C374u;
    {
        const bool branch_taken_0x14c374 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C374u;
        // 0x14c378: 0x24420060  addiu       $v0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c374) {
            ctx->pc = 0x14C3E0u;
            goto label_14c3e0;
        }
    }
    ctx->pc = 0x14C37Cu;
    // 0x14c37c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x14c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c380: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x14c380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14c384: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c388: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x14c388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14c38c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14c38cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14c390: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x14c390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14c394: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x14c394u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x14c398: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x14c398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c39c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x14c39cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14c3a0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x14c3a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x14c3a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14c3a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14c3a8: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x14c3a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c3ac: 0x0  nop
    ctx->pc = 0x14c3acu;
    // NOP
    // 0x14c3b0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x14C3B0u;
    {
        const bool branch_taken_0x14c3b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C3B0u;
        // 0x14c3b4: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3b0) {
            ctx->pc = 0x14C3E0u;
            goto label_14c3e0;
        }
    }
    ctx->pc = 0x14C3B8u;
    // 0x14c3b8: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x14c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x14c3bc: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x14c3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c3c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14c3c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14c3c4: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x14c3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x14c3c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x14c3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c3cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14c3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c3d0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14c3d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14c3d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14c3d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14c3d8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x14c3d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14c3dc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14c3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_14c3e0:
    // 0x14c3e0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x14c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x14c3e4: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x14c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x14c3e8: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x14c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x14c3ec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14c3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c3f0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x14c3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c3f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14c3f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c3f8: 0x0  nop
    ctx->pc = 0x14c3f8u;
    // NOP
    // 0x14c3fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14C3FCu;
    {
        const bool branch_taken_0x14c3fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c3fc) {
            ctx->pc = 0x14C400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C3FCu;
            // 0x14c400: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C404u;
            goto label_14c404;
        }
    }
    ctx->pc = 0x14C404u;
label_14c404:
    // 0x14c404: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14c404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c408: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x14c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x14c40c: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x14c40cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x14c410: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x14c410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x14c414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c418: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x14C418u;
    SET_GPR_U32(ctx, 31, 0x14C420u);
    ctx->pc = 0x14C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C418u;
    // 0x14c41c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x14C418u, 0x14C420u)) {
        return;
    }
    ctx->pc = 0x14C420u;
label_14c420:
    // 0x14c420: 0x0  nop
    ctx->pc = 0x14c420u;
    // NOP
    // 0x14c424: 0x0  nop
    ctx->pc = 0x14c424u;
    // NOP
    // 0x14c428: 0x46000004  c1          0x4
    ctx->pc = 0x14c428u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x14c42c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x14c42cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c430: 0x0  nop
    ctx->pc = 0x14c430u;
    // NOP
    // 0x14c434: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14C434u;
    {
        const bool branch_taken_0x14c434 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C434u;
        // 0x14c438: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c434) {
            ctx->pc = 0x14C450u;
            goto label_14c450;
        }
    }
    ctx->pc = 0x14C43Cu;
    // 0x14c43c: 0x0  nop
    ctx->pc = 0x14c43cu;
    // NOP
    // 0x14c440: 0x0  nop
    ctx->pc = 0x14c440u;
    // NOP
    // 0x14c444: 0x4600c0c3  div.s       $f3, $f24, $f0
    ctx->pc = 0x14c444u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[24], ctx->f[0]);
    // 0x14c448: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14C448u;
    {
        const bool branch_taken_0x14c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C448u;
        // 0x14c44c: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c448) {
            ctx->pc = 0x14C458u;
            goto label_14c458;
        }
    }
    ctx->pc = 0x14C450u;
label_14c450:
    // 0x14c450: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x14c450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c454: 0x0  nop
    ctx->pc = 0x14c454u;
    // NOP
label_14c458:
    // 0x14c458: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x14c458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c45c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x14c45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14c460: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14c460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14c464: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x14c464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x14c468: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14c468u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14c46c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x14c46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x14c470: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x14c470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x14c474: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x14c474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x14c478: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x14c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x14c47c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x14c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x14c480: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14c480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c484: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x14c484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14c488: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x14c488u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x14c48c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14c48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c490: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x14c490u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x14c494: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14c494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14c498: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x14c498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14c49c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x14c49cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14c4a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14c4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14c4a4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x14c4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4a8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x14c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x14c4ac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14c4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14c4b0: 0x1440ff5d  bnez        $v0, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x14C4B0u;
    {
        const bool branch_taken_0x14c4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c4b0) {
            ctx->pc = 0x14C228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c228;
        }
    }
    ctx->pc = 0x14C4B8u;
label_14c4b8:
    // 0x14c4b8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x14c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x14c4bc: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x14c4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x14c4c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C4C0u;
    {
        const bool branch_taken_0x14c4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4C0u;
        // 0x14c4c4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4c0) {
            ctx->pc = 0x14C4D4u;
            goto label_14c4d4;
        }
    }
    ctx->pc = 0x14C4C8u;
    // 0x14c4c8: 0xc0532d4  jal         func_14CB50
    ctx->pc = 0x14C4C8u;
    SET_GPR_U32(ctx, 31, 0x14C4D0u);
    ctx->pc = 0x14C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C4C8u;
    // 0x14c4cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14CB50u, 0x14C4C8u, 0x14C4D0u)) {
        return;
    }
    ctx->pc = 0x14C4D0u;
label_14c4d0:
    // 0x14c4d0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x14c4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_14c4d4:
    // 0x14c4d4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x14c4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14c4d8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x14c4d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14c4dc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x14c4dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14c4e0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x14c4e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14c4e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14c4e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14c4e8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x14c4e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14c4ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14c4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c4f0: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x14c4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x14c4f4: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x14c4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14c4f8: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x14c4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14c4fc: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x14c4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14c500: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x14c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14c504: 0x3e00008  jr          $ra
    ctx->pc = 0x14C504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C504u;
        // 0x14c508: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C50Cu;
    // 0x14c50c: 0x0  nop
    ctx->pc = 0x14c50cu;
    // NOP
    ctx->pc = 0x14c510u;
}

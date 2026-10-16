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

// Function: sub_0018A170
// Address: 0x18a170 - 0x18a2a8
void sub_0018A170_0x18a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A170_0x18a170");
#endif

    switch (ctx->pc) {
        case 0x18a1acu: goto label_18a1ac;
        case 0x18a1c4u: goto label_18a1c4;
        case 0x18a1dcu: goto label_18a1dc;
        case 0x18a1f0u: goto label_18a1f0;
        case 0x18a200u: goto label_18a200;
        case 0x18a220u: goto label_18a220;
        case 0x18a274u: goto label_18a274;
        case 0x18a280u: goto label_18a280;
        default: break;
    }

    ctx->pc = 0x18a170u;

    // 0x18a170: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18a170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18a174: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x18a174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x18a178: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x18a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x18a17c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18a17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a180: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x18a184: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18a184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a188: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x18a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x18a18c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18a18cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a190: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x18a190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x18a194: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18a198: 0x8e6200d8  lw          $v0, 0xD8($s3)
    ctx->pc = 0x18a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x18a19c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A19Cu;
    {
        const bool branch_taken_0x18a19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A19Cu;
        // 0x18a1a0: 0x8e700004  lw          $s0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a19c) {
            ctx->pc = 0x18A1B4u;
            goto label_18a1b4;
        }
    }
    ctx->pc = 0x18A1A4u;
    // 0x18a1a4: 0xc062db2  jal         func_18B6C8
    ctx->pc = 0x18A1A4u;
    SET_GPR_U32(ctx, 31, 0x18A1ACu);
    ctx->pc = 0x18B6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B6C8u, 0x18A1A4u, 0x18A1ACu)) {
        return;
    }
    ctx->pc = 0x18A1ACu;
label_18a1ac:
    // 0x18a1ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18A1ACu;
    {
        const bool branch_taken_0x18a1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1ACu;
        // 0x18a1b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1ac) {
            ctx->pc = 0x18A1BCu;
            goto label_18a1bc;
        }
    }
    ctx->pc = 0x18A1B4u;
label_18a1b4:
    // 0x18a1b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18a1b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18a1bc:
    // 0x18a1bc: 0xc062de8  jal         func_18B7A0
    ctx->pc = 0x18A1BCu;
    SET_GPR_U32(ctx, 31, 0x18A1C4u);
    ctx->pc = 0x18A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1BCu;
    // 0x18a1c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B7A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B7A0u, 0x18A1BCu, 0x18A1C4u)) {
        return;
    }
    ctx->pc = 0x18A1C4u;
label_18a1c4:
    // 0x18a1c4: 0x26710040  addiu       $s1, $s3, 0x40
    ctx->pc = 0x18a1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x18a1c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18a1c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18a1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18a1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a1d4: 0xc062b12  jal         func_18AC48
    ctx->pc = 0x18A1D4u;
    SET_GPR_U32(ctx, 31, 0x18A1DCu);
    ctx->pc = 0x18A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1D4u;
    // 0x18a1d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AC48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18AC48u, 0x18A1D4u, 0x18A1DCu)) {
        return;
    }
    ctx->pc = 0x18A1DCu;
label_18a1dc:
    // 0x18a1dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18a1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1e0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18a1e4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18a1e8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18A1E8u;
    SET_GPR_U32(ctx, 31, 0x18A1F0u);
    ctx->pc = 0x18A1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1E8u;
    // 0x18a1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18A1E8u, 0x18A1F0u)) {
        return;
    }
    ctx->pc = 0x18A1F0u;
label_18a1f0:
    // 0x18a1f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1f8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x18A1F8u;
    SET_GPR_U32(ctx, 31, 0x18A200u);
    ctx->pc = 0x18A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1F8u;
    // 0x18a1fc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x18A1F8u, 0x18A200u)) {
        return;
    }
    ctx->pc = 0x18A200u;
label_18a200:
    // 0x18a200: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a204: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x18a204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a208: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x18a208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x18a20c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18a20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a210: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18a210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18a214: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x18a214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18a218: 0xc062d20  jal         func_18B480
    ctx->pc = 0x18A218u;
    SET_GPR_U32(ctx, 31, 0x18A220u);
    ctx->pc = 0x18A21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A218u;
    // 0x18a21c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B480u, 0x18A218u, 0x18A220u)) {
        return;
    }
    ctx->pc = 0x18A220u;
label_18a220:
    // 0x18a220: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x18a220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a224: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18a224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a22c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x18a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x18a230: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x18a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x18a234: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x18a234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x18a238: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x18a238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x18a23c: 0x68620037  ldl         $v0, 0x37($v1)
    ctx->pc = 0x18a23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x18a240: 0x6c620030  ldr         $v0, 0x30($v1)
    ctx->pc = 0x18a240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x18a244: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x18a244u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x18a248: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x18a248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a24c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x18a24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a250: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x18a250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x18a254: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x18a254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x18a258: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x18a258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x18a25c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18a260: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x18a260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a264: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x18a264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a268: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x18a268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x18a26c: 0xc062d68  jal         func_18B5A0
    ctx->pc = 0x18A26Cu;
    SET_GPR_U32(ctx, 31, 0x18A274u);
    ctx->pc = 0x18A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A26Cu;
    // 0x18a270: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B5A0u, 0x18A26Cu, 0x18A274u)) {
        return;
    }
    ctx->pc = 0x18A274u;
label_18a274:
    // 0x18a274: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x18a274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x18a278: 0xc062764  jal         func_189D90
    ctx->pc = 0x18A278u;
    SET_GPR_U32(ctx, 31, 0x18A280u);
    ctx->pc = 0x18A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A278u;
    // 0x18a27c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189D90u, 0x18A278u, 0x18A280u)) {
        return;
    }
    ctx->pc = 0x18A280u;
label_18a280:
    // 0x18a280: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x18a280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x18a284: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x18a284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18a288: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x18a288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18a28c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x18a28cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a290: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x18a290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a294: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18a294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a298: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18a298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a29c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A29Cu;
        // 0x18a2a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A2A4u;
    // 0x18a2a4: 0x0  nop
    ctx->pc = 0x18a2a4u;
    // NOP
    ctx->pc = 0x18a2a8u;
}

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

// Function: sub_00128FE8
// Address: 0x128fe8 - 0x1291d0
void sub_00128FE8_0x128fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128FE8_0x128fe8");
#endif

    switch (ctx->pc) {
        case 0x128fe8u: goto label_128fe8;
        case 0x128fecu: goto label_128fec;
        case 0x128ff0u: goto label_128ff0;
        case 0x128ff4u: goto label_128ff4;
        case 0x128ff8u: goto label_128ff8;
        case 0x128ffcu: goto label_128ffc;
        case 0x129000u: goto label_129000;
        case 0x129004u: goto label_129004;
        case 0x129008u: goto label_129008;
        case 0x12900cu: goto label_12900c;
        case 0x129010u: goto label_129010;
        case 0x129014u: goto label_129014;
        case 0x129018u: goto label_129018;
        case 0x12901cu: goto label_12901c;
        case 0x129020u: goto label_129020;
        case 0x129024u: goto label_129024;
        case 0x129028u: goto label_129028;
        case 0x12902cu: goto label_12902c;
        case 0x129030u: goto label_129030;
        case 0x129034u: goto label_129034;
        case 0x129038u: goto label_129038;
        case 0x12903cu: goto label_12903c;
        case 0x129040u: goto label_129040;
        case 0x129044u: goto label_129044;
        case 0x129048u: goto label_129048;
        case 0x12904cu: goto label_12904c;
        case 0x129050u: goto label_129050;
        case 0x129054u: goto label_129054;
        case 0x129058u: goto label_129058;
        case 0x12905cu: goto label_12905c;
        case 0x129060u: goto label_129060;
        case 0x129064u: goto label_129064;
        case 0x129068u: goto label_129068;
        case 0x12906cu: goto label_12906c;
        case 0x129070u: goto label_129070;
        case 0x129074u: goto label_129074;
        case 0x129078u: goto label_129078;
        case 0x12907cu: goto label_12907c;
        case 0x129080u: goto label_129080;
        case 0x129084u: goto label_129084;
        case 0x129088u: goto label_129088;
        case 0x12908cu: goto label_12908c;
        case 0x129090u: goto label_129090;
        case 0x129094u: goto label_129094;
        case 0x129098u: goto label_129098;
        case 0x12909cu: goto label_12909c;
        case 0x1290a0u: goto label_1290a0;
        case 0x1290a4u: goto label_1290a4;
        case 0x1290a8u: goto label_1290a8;
        case 0x1290acu: goto label_1290ac;
        case 0x1290b0u: goto label_1290b0;
        case 0x1290b4u: goto label_1290b4;
        case 0x1290b8u: goto label_1290b8;
        case 0x1290bcu: goto label_1290bc;
        case 0x1290c0u: goto label_1290c0;
        case 0x1290c4u: goto label_1290c4;
        case 0x1290c8u: goto label_1290c8;
        case 0x1290ccu: goto label_1290cc;
        case 0x1290d0u: goto label_1290d0;
        case 0x1290d4u: goto label_1290d4;
        case 0x1290d8u: goto label_1290d8;
        case 0x1290dcu: goto label_1290dc;
        case 0x1290e0u: goto label_1290e0;
        case 0x1290e4u: goto label_1290e4;
        case 0x1290e8u: goto label_1290e8;
        case 0x1290ecu: goto label_1290ec;
        case 0x1290f0u: goto label_1290f0;
        case 0x1290f4u: goto label_1290f4;
        case 0x1290f8u: goto label_1290f8;
        case 0x1290fcu: goto label_1290fc;
        case 0x129100u: goto label_129100;
        case 0x129104u: goto label_129104;
        case 0x129108u: goto label_129108;
        case 0x12910cu: goto label_12910c;
        case 0x129110u: goto label_129110;
        case 0x129114u: goto label_129114;
        case 0x129118u: goto label_129118;
        case 0x12911cu: goto label_12911c;
        case 0x129120u: goto label_129120;
        case 0x129124u: goto label_129124;
        case 0x129128u: goto label_129128;
        case 0x12912cu: goto label_12912c;
        case 0x129130u: goto label_129130;
        case 0x129134u: goto label_129134;
        case 0x129138u: goto label_129138;
        case 0x12913cu: goto label_12913c;
        case 0x129140u: goto label_129140;
        case 0x129144u: goto label_129144;
        case 0x129148u: goto label_129148;
        case 0x12914cu: goto label_12914c;
        case 0x129150u: goto label_129150;
        case 0x129154u: goto label_129154;
        case 0x129158u: goto label_129158;
        case 0x12915cu: goto label_12915c;
        case 0x129160u: goto label_129160;
        case 0x129164u: goto label_129164;
        case 0x129168u: goto label_129168;
        case 0x12916cu: goto label_12916c;
        case 0x129170u: goto label_129170;
        case 0x129174u: goto label_129174;
        case 0x129178u: goto label_129178;
        case 0x12917cu: goto label_12917c;
        case 0x129180u: goto label_129180;
        case 0x129184u: goto label_129184;
        case 0x129188u: goto label_129188;
        case 0x12918cu: goto label_12918c;
        case 0x129190u: goto label_129190;
        case 0x129194u: goto label_129194;
        case 0x129198u: goto label_129198;
        case 0x12919cu: goto label_12919c;
        case 0x1291a0u: goto label_1291a0;
        case 0x1291a4u: goto label_1291a4;
        case 0x1291a8u: goto label_1291a8;
        case 0x1291acu: goto label_1291ac;
        case 0x1291b0u: goto label_1291b0;
        case 0x1291b4u: goto label_1291b4;
        case 0x1291b8u: goto label_1291b8;
        case 0x1291bcu: goto label_1291bc;
        case 0x1291c0u: goto label_1291c0;
        case 0x1291c4u: goto label_1291c4;
        case 0x1291c8u: goto label_1291c8;
        case 0x1291ccu: goto label_1291cc;
        default: break;
    }

    ctx->pc = 0x128fe8u;

label_128fe8:
    // 0x128fe8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x128fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_128fec:
    // 0x128fec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x128fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_128ff0:
    // 0x128ff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_128ff4:
    // 0x128ff4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x128ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_128ff8:
    // 0x128ff8: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x128ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_128ffc:
    // 0x128ffc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x128ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_129000:
    // 0x129000: 0xc0495a4  jal         func_125690
label_129004:
    if (ctx->pc == 0x129004u) {
        ctx->pc = 0x129004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129000u;
        // 0x129004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129008u;
        goto label_129008;
    }
    ctx->pc = 0x129000u;
    SET_GPR_U32(ctx, 31, 0x129008u);
    ctx->pc = 0x129004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129000u;
    // 0x129004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125690u, 0x129000u, 0x129008u)) {
        return;
    }
    ctx->pc = 0x129008u;
label_129008:
    // 0x129008: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x129008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_12900c:
    // 0x12900c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12900cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129010:
    // 0x129010: 0xc0c493d  jal         func_3124F4
label_129014:
    if (ctx->pc == 0x129014u) {
        ctx->pc = 0x129014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129010u;
        // 0x129014: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129018u;
        goto label_129018;
    }
    ctx->pc = 0x129010u;
    SET_GPR_U32(ctx, 31, 0x129018u);
    ctx->pc = 0x129014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129010u;
    // 0x129014: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x129010u, 0x129018u)) {
        return;
    }
    ctx->pc = 0x129018u;
label_129018:
    // 0x129018: 0xc04f0f0  jal         func_13C3C0
label_12901c:
    if (ctx->pc == 0x12901Cu) {
        ctx->pc = 0x12901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129018u;
        // 0x12901c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129020u;
        goto label_129020;
    }
    ctx->pc = 0x129018u;
    SET_GPR_U32(ctx, 31, 0x129020u);
    ctx->pc = 0x12901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129018u;
    // 0x12901c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x129018u, 0x129020u)) {
        return;
    }
    ctx->pc = 0x129020u;
label_129020:
    // 0x129020: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x129020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129024:
    // 0x129024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129028:
    // 0x129028: 0xc04f0f0  jal         func_13C3C0
label_12902c:
    if (ctx->pc == 0x12902Cu) {
        ctx->pc = 0x12902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129028u;
        // 0x12902c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129030u;
        goto label_129030;
    }
    ctx->pc = 0x129028u;
    SET_GPR_U32(ctx, 31, 0x129030u);
    ctx->pc = 0x12902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129028u;
    // 0x12902c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x129028u, 0x129030u)) {
        return;
    }
    ctx->pc = 0x129030u;
label_129030:
    // 0x129030: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x129030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129034:
    // 0x129034: 0x8e022aa8  lw          $v0, 0x2AA8($s0)
    ctx->pc = 0x129034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10920)));
label_129038:
    // 0x129038: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x129038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12903c:
    // 0x12903c: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x12903cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_129040:
    // 0x129040: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x129040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_129044:
    // 0x129044: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x129044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129048:
    // 0x129048: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x129048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12904c:
    // 0x12904c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x12904cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_129050:
    // 0x129050: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x129050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_129054:
    // 0x129054: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x129054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129058:
    // 0x129058: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x129058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12905c:
    // 0x12905c: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x12905cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_129060:
    // 0x129060: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x129060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_129064:
    // 0x129064: 0xb0430043  sdl         $v1, 0x43($v0)
    ctx->pc = 0x129064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129068:
    // 0x129068: 0xb443003c  sdr         $v1, 0x3C($v0)
    ctx->pc = 0x129068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12906c:
    // 0x12906c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x12906cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_129070:
    // 0x129070: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x129070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_129074:
    // 0x129074: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x129074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129078:
    // 0x129078: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x129078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12907c:
    // 0x12907c: 0x8e022aa8  lw          $v0, 0x2AA8($s0)
    ctx->pc = 0x12907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10920)));
label_129080:
    // 0x129080: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x129080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_129084:
    // 0x129084: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x129084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_129088:
    // 0x129088: 0xb046004b  sdl         $a2, 0x4B($v0)
    ctx->pc = 0x129088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12908c:
    // 0x12908c: 0xb4460044  sdr         $a2, 0x44($v0)
    ctx->pc = 0x12908cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_129090:
    // 0x129090: 0xc0691ec  jal         func_1A47B0
label_129094:
    if (ctx->pc == 0x129094u) {
        ctx->pc = 0x129098u;
        goto label_129098;
    }
    ctx->pc = 0x129090u;
    SET_GPR_U32(ctx, 31, 0x129098u);
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x129090u, 0x129098u)) {
        return;
    }
    ctx->pc = 0x129098u;
label_129098:
    // 0x129098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x129098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12909c:
    // 0x12909c: 0xc069228  jal         func_1A48A0
label_1290a0:
    if (ctx->pc == 0x1290A0u) {
        ctx->pc = 0x1290A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12909Cu;
        // 0x1290a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1290A4u;
        goto label_1290a4;
    }
    ctx->pc = 0x12909Cu;
    SET_GPR_U32(ctx, 31, 0x1290A4u);
    ctx->pc = 0x1290A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12909Cu;
    // 0x1290a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A48A0u, 0x12909Cu, 0x1290A4u)) {
        return;
    }
    ctx->pc = 0x1290A4u;
label_1290a4:
    // 0x1290a4: 0xc04f0cc  jal         func_13C330
label_1290a8:
    if (ctx->pc == 0x1290A8u) {
        ctx->pc = 0x1290A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290A4u;
        // 0x1290a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1290ACu;
        goto label_1290ac;
    }
    ctx->pc = 0x1290A4u;
    SET_GPR_U32(ctx, 31, 0x1290ACu);
    ctx->pc = 0x1290A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1290A4u;
    // 0x1290a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1290A4u, 0x1290ACu)) {
        return;
    }
    ctx->pc = 0x1290ACu;
label_1290ac:
    // 0x1290ac: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x1290acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1290b0:
    // 0x1290b0: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x1290b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1290b4:
    // 0x1290b4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1290b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1290b8:
    // 0x1290b8: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x1290b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1290bc:
    // 0x1290bc: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x1290bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1290c0:
    // 0x1290c0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1290c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_1290c4:
    // 0x1290c4: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x1290c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1290c8:
    // 0x1290c8: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1290c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1290cc:
    // 0x1290cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1290ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1290d0:
    // 0x1290d0: 0xb2062747  sdl         $a2, 0x2747($s0)
    ctx->pc = 0x1290d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 10055); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1290d4:
    // 0x1290d4: 0xb6062740  sdr         $a2, 0x2740($s0)
    ctx->pc = 0x1290d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 10048); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1290d8:
    // 0x1290d8: 0xae022748  sw          $v0, 0x2748($s0)
    ctx->pc = 0x1290d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10056), GPR_U32(ctx, 2));
label_1290dc:
    // 0x1290dc: 0xc04f0f0  jal         func_13C3C0
label_1290e0:
    if (ctx->pc == 0x1290E0u) {
        ctx->pc = 0x1290E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290DCu;
        // 0x1290e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1290E4u;
        goto label_1290e4;
    }
    ctx->pc = 0x1290DCu;
    SET_GPR_U32(ctx, 31, 0x1290E4u);
    ctx->pc = 0x1290E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1290DCu;
    // 0x1290e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x1290DCu, 0x1290E4u)) {
        return;
    }
    ctx->pc = 0x1290E4u;
label_1290e4:
    // 0x1290e4: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x1290e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1290e8:
    // 0x1290e8: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x1290e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1290ec:
    // 0x1290ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1290ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1290f0:
    // 0x1290f0: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1290f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1290f4:
    // 0x1290f4: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1290f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1290f8:
    // 0x1290f8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1290f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1290fc:
    // 0x1290fc: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x1290fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_129100:
    // 0x129100: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x129100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_129104:
    // 0x129104: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x129104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_129108:
    // 0x129108: 0xb2062777  sdl         $a2, 0x2777($s0)
    ctx->pc = 0x129108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 10103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12910c:
    // 0x12910c: 0xb6062770  sdr         $a2, 0x2770($s0)
    ctx->pc = 0x12910cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 10096); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_129110:
    // 0x129110: 0xae032778  sw          $v1, 0x2778($s0)
    ctx->pc = 0x129110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10104), GPR_U32(ctx, 3));
label_129114:
    // 0x129114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129118:
    // 0x129118: 0xae02284c  sw          $v0, 0x284C($s0)
    ctx->pc = 0x129118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10316), GPR_U32(ctx, 2));
label_12911c:
    // 0x12911c: 0xae002780  sw          $zero, 0x2780($s0)
    ctx->pc = 0x12911cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10112), GPR_U32(ctx, 0));
label_129120:
    // 0x129120: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x129120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_129124:
    // 0x129124: 0x68460017  ldl         $a2, 0x17($v0)
    ctx->pc = 0x129124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_129128:
    // 0x129128: 0x6c460010  ldr         $a2, 0x10($v0)
    ctx->pc = 0x129128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_12912c:
    // 0x12912c: 0x6843001f  ldl         $v1, 0x1F($v0)
    ctx->pc = 0x12912cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_129130:
    // 0x129130: 0x6c430018  ldr         $v1, 0x18($v0)
    ctx->pc = 0x129130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_129134:
    // 0x129134: 0x68440027  ldl         $a0, 0x27($v0)
    ctx->pc = 0x129134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_129138:
    // 0x129138: 0x6c440020  ldr         $a0, 0x20($v0)
    ctx->pc = 0x129138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_12913c:
    // 0x12913c: 0x6845002f  ldl         $a1, 0x2F($v0)
    ctx->pc = 0x12913cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_129140:
    // 0x129140: 0x6c450028  ldr         $a1, 0x28($v0)
    ctx->pc = 0x129140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_129144:
    // 0x129144: 0xb2062c87  sdl         $a2, 0x2C87($s0)
    ctx->pc = 0x129144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129148:
    // 0x129148: 0xb6062c80  sdr         $a2, 0x2C80($s0)
    ctx->pc = 0x129148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12914c:
    // 0x12914c: 0xb2032c8f  sdl         $v1, 0x2C8F($s0)
    ctx->pc = 0x12914cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129150:
    // 0x129150: 0xb6032c88  sdr         $v1, 0x2C88($s0)
    ctx->pc = 0x129150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_129154:
    // 0x129154: 0xb2042c97  sdl         $a0, 0x2C97($s0)
    ctx->pc = 0x129154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11415); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129158:
    // 0x129158: 0xb6042c90  sdr         $a0, 0x2C90($s0)
    ctx->pc = 0x129158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11408); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12915c:
    // 0x12915c: 0xb2052c9f  sdl         $a1, 0x2C9F($s0)
    ctx->pc = 0x12915cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129160:
    // 0x129160: 0xb6052c98  sdr         $a1, 0x2C98($s0)
    ctx->pc = 0x129160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_129164:
    // 0x129164: 0x68460037  ldl         $a2, 0x37($v0)
    ctx->pc = 0x129164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_129168:
    // 0x129168: 0x6c460030  ldr         $a2, 0x30($v0)
    ctx->pc = 0x129168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_12916c:
    // 0x12916c: 0x6843003f  ldl         $v1, 0x3F($v0)
    ctx->pc = 0x12916cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_129170:
    // 0x129170: 0x6c430038  ldr         $v1, 0x38($v0)
    ctx->pc = 0x129170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_129174:
    // 0x129174: 0x68440047  ldl         $a0, 0x47($v0)
    ctx->pc = 0x129174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_129178:
    // 0x129178: 0x6c440040  ldr         $a0, 0x40($v0)
    ctx->pc = 0x129178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_12917c:
    // 0x12917c: 0x6845004f  ldl         $a1, 0x4F($v0)
    ctx->pc = 0x12917cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_129180:
    // 0x129180: 0x6c450048  ldr         $a1, 0x48($v0)
    ctx->pc = 0x129180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_129184:
    // 0x129184: 0xb2062ca7  sdl         $a2, 0x2CA7($s0)
    ctx->pc = 0x129184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129188:
    // 0x129188: 0xb6062ca0  sdr         $a2, 0x2CA0($s0)
    ctx->pc = 0x129188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12918c:
    // 0x12918c: 0xb2032caf  sdl         $v1, 0x2CAF($s0)
    ctx->pc = 0x12918cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129190:
    // 0x129190: 0xb6032ca8  sdr         $v1, 0x2CA8($s0)
    ctx->pc = 0x129190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_129194:
    // 0x129194: 0xb2042cb7  sdl         $a0, 0x2CB7($s0)
    ctx->pc = 0x129194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129198:
    // 0x129198: 0xb6042cb0  sdr         $a0, 0x2CB0($s0)
    ctx->pc = 0x129198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12919c:
    // 0x12919c: 0xb2052cbf  sdl         $a1, 0x2CBF($s0)
    ctx->pc = 0x12919cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1291a0:
    // 0x1291a0: 0xb6052cb8  sdr         $a1, 0x2CB8($s0)
    ctx->pc = 0x1291a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1291a4:
    // 0x1291a4: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1291a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1291a8:
    // 0x1291a8: 0x846401d0  lh          $a0, 0x1D0($v1)
    ctx->pc = 0x1291a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 464)));
label_1291ac:
    // 0x1291ac: 0x8c6201d4  lw          $v0, 0x1D4($v1)
    ctx->pc = 0x1291acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_1291b0:
    // 0x1291b0: 0x40f809  jalr        $v0
label_1291b4:
    if (ctx->pc == 0x1291B4u) {
        ctx->pc = 0x1291B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291B0u;
        // 0x1291b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1291B8u;
        goto label_1291b8;
    }
    ctx->pc = 0x1291B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1291B8u);
        ctx->pc = 0x1291B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291B0u;
        // 0x1291b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1291B0u, 0x1291B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1291B8u;
label_1291b8:
    // 0x1291b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1291b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1291bc:
    // 0x1291bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1291bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1291c0:
    // 0x1291c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1291c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1291c4:
    // 0x1291c4: 0x3e00008  jr          $ra
label_1291c8:
    if (ctx->pc == 0x1291C8u) {
        ctx->pc = 0x1291C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291C4u;
        // 0x1291c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1291CCu;
        goto label_1291cc;
    }
    ctx->pc = 0x1291C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1291C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291C4u;
        // 0x1291c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1291C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1291CCu;
label_1291cc:
    // 0x1291cc: 0x0  nop
    ctx->pc = 0x1291ccu;
    // NOP
    ctx->pc = 0x1291d0u;
}

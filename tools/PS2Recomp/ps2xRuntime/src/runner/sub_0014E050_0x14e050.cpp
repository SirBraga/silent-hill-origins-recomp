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

// Function: sub_0014E050
// Address: 0x14e050 - 0x14e2b8
void sub_0014E050_0x14e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E050_0x14e050");
#endif

    switch (ctx->pc) {
        case 0x14e050u: goto label_14e050;
        case 0x14e054u: goto label_14e054;
        case 0x14e058u: goto label_14e058;
        case 0x14e05cu: goto label_14e05c;
        case 0x14e060u: goto label_14e060;
        case 0x14e064u: goto label_14e064;
        case 0x14e068u: goto label_14e068;
        case 0x14e06cu: goto label_14e06c;
        case 0x14e070u: goto label_14e070;
        case 0x14e074u: goto label_14e074;
        case 0x14e078u: goto label_14e078;
        case 0x14e07cu: goto label_14e07c;
        case 0x14e080u: goto label_14e080;
        case 0x14e084u: goto label_14e084;
        case 0x14e088u: goto label_14e088;
        case 0x14e08cu: goto label_14e08c;
        case 0x14e090u: goto label_14e090;
        case 0x14e094u: goto label_14e094;
        case 0x14e098u: goto label_14e098;
        case 0x14e09cu: goto label_14e09c;
        case 0x14e0a0u: goto label_14e0a0;
        case 0x14e0a4u: goto label_14e0a4;
        case 0x14e0a8u: goto label_14e0a8;
        case 0x14e0acu: goto label_14e0ac;
        case 0x14e0b0u: goto label_14e0b0;
        case 0x14e0b4u: goto label_14e0b4;
        case 0x14e0b8u: goto label_14e0b8;
        case 0x14e0bcu: goto label_14e0bc;
        case 0x14e0c0u: goto label_14e0c0;
        case 0x14e0c4u: goto label_14e0c4;
        case 0x14e0c8u: goto label_14e0c8;
        case 0x14e0ccu: goto label_14e0cc;
        case 0x14e0d0u: goto label_14e0d0;
        case 0x14e0d4u: goto label_14e0d4;
        case 0x14e0d8u: goto label_14e0d8;
        case 0x14e0dcu: goto label_14e0dc;
        case 0x14e0e0u: goto label_14e0e0;
        case 0x14e0e4u: goto label_14e0e4;
        case 0x14e0e8u: goto label_14e0e8;
        case 0x14e0ecu: goto label_14e0ec;
        case 0x14e0f0u: goto label_14e0f0;
        case 0x14e0f4u: goto label_14e0f4;
        case 0x14e0f8u: goto label_14e0f8;
        case 0x14e0fcu: goto label_14e0fc;
        case 0x14e100u: goto label_14e100;
        case 0x14e104u: goto label_14e104;
        case 0x14e108u: goto label_14e108;
        case 0x14e10cu: goto label_14e10c;
        case 0x14e110u: goto label_14e110;
        case 0x14e114u: goto label_14e114;
        case 0x14e118u: goto label_14e118;
        case 0x14e11cu: goto label_14e11c;
        case 0x14e120u: goto label_14e120;
        case 0x14e124u: goto label_14e124;
        case 0x14e128u: goto label_14e128;
        case 0x14e12cu: goto label_14e12c;
        case 0x14e130u: goto label_14e130;
        case 0x14e134u: goto label_14e134;
        case 0x14e138u: goto label_14e138;
        case 0x14e13cu: goto label_14e13c;
        case 0x14e140u: goto label_14e140;
        case 0x14e144u: goto label_14e144;
        case 0x14e148u: goto label_14e148;
        case 0x14e14cu: goto label_14e14c;
        case 0x14e150u: goto label_14e150;
        case 0x14e154u: goto label_14e154;
        case 0x14e158u: goto label_14e158;
        case 0x14e15cu: goto label_14e15c;
        case 0x14e160u: goto label_14e160;
        case 0x14e164u: goto label_14e164;
        case 0x14e168u: goto label_14e168;
        case 0x14e16cu: goto label_14e16c;
        case 0x14e170u: goto label_14e170;
        case 0x14e174u: goto label_14e174;
        case 0x14e178u: goto label_14e178;
        case 0x14e17cu: goto label_14e17c;
        case 0x14e180u: goto label_14e180;
        case 0x14e184u: goto label_14e184;
        case 0x14e188u: goto label_14e188;
        case 0x14e18cu: goto label_14e18c;
        case 0x14e190u: goto label_14e190;
        case 0x14e194u: goto label_14e194;
        case 0x14e198u: goto label_14e198;
        case 0x14e19cu: goto label_14e19c;
        case 0x14e1a0u: goto label_14e1a0;
        case 0x14e1a4u: goto label_14e1a4;
        case 0x14e1a8u: goto label_14e1a8;
        case 0x14e1acu: goto label_14e1ac;
        case 0x14e1b0u: goto label_14e1b0;
        case 0x14e1b4u: goto label_14e1b4;
        case 0x14e1b8u: goto label_14e1b8;
        case 0x14e1bcu: goto label_14e1bc;
        case 0x14e1c0u: goto label_14e1c0;
        case 0x14e1c4u: goto label_14e1c4;
        case 0x14e1c8u: goto label_14e1c8;
        case 0x14e1ccu: goto label_14e1cc;
        case 0x14e1d0u: goto label_14e1d0;
        case 0x14e1d4u: goto label_14e1d4;
        case 0x14e1d8u: goto label_14e1d8;
        case 0x14e1dcu: goto label_14e1dc;
        case 0x14e1e0u: goto label_14e1e0;
        case 0x14e1e4u: goto label_14e1e4;
        case 0x14e1e8u: goto label_14e1e8;
        case 0x14e1ecu: goto label_14e1ec;
        case 0x14e1f0u: goto label_14e1f0;
        case 0x14e1f4u: goto label_14e1f4;
        case 0x14e1f8u: goto label_14e1f8;
        case 0x14e1fcu: goto label_14e1fc;
        case 0x14e200u: goto label_14e200;
        case 0x14e204u: goto label_14e204;
        case 0x14e208u: goto label_14e208;
        case 0x14e20cu: goto label_14e20c;
        case 0x14e210u: goto label_14e210;
        case 0x14e214u: goto label_14e214;
        case 0x14e218u: goto label_14e218;
        case 0x14e21cu: goto label_14e21c;
        case 0x14e220u: goto label_14e220;
        case 0x14e224u: goto label_14e224;
        case 0x14e228u: goto label_14e228;
        case 0x14e22cu: goto label_14e22c;
        case 0x14e230u: goto label_14e230;
        case 0x14e234u: goto label_14e234;
        case 0x14e238u: goto label_14e238;
        case 0x14e23cu: goto label_14e23c;
        case 0x14e240u: goto label_14e240;
        case 0x14e244u: goto label_14e244;
        case 0x14e248u: goto label_14e248;
        case 0x14e24cu: goto label_14e24c;
        case 0x14e250u: goto label_14e250;
        case 0x14e254u: goto label_14e254;
        case 0x14e258u: goto label_14e258;
        case 0x14e25cu: goto label_14e25c;
        case 0x14e260u: goto label_14e260;
        case 0x14e264u: goto label_14e264;
        case 0x14e268u: goto label_14e268;
        case 0x14e26cu: goto label_14e26c;
        case 0x14e270u: goto label_14e270;
        case 0x14e274u: goto label_14e274;
        case 0x14e278u: goto label_14e278;
        case 0x14e27cu: goto label_14e27c;
        case 0x14e280u: goto label_14e280;
        case 0x14e284u: goto label_14e284;
        case 0x14e288u: goto label_14e288;
        case 0x14e28cu: goto label_14e28c;
        case 0x14e290u: goto label_14e290;
        case 0x14e294u: goto label_14e294;
        case 0x14e298u: goto label_14e298;
        case 0x14e29cu: goto label_14e29c;
        case 0x14e2a0u: goto label_14e2a0;
        case 0x14e2a4u: goto label_14e2a4;
        case 0x14e2a8u: goto label_14e2a8;
        case 0x14e2acu: goto label_14e2ac;
        case 0x14e2b0u: goto label_14e2b0;
        case 0x14e2b4u: goto label_14e2b4;
        default: break;
    }

    ctx->pc = 0x14e050u;

label_14e050:
    // 0x14e050: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14e050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_14e054:
    // 0x14e054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e058:
    // 0x14e058: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x14e058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_14e05c:
    // 0x14e05c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14e05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_14e060:
    // 0x14e060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14e064:
    // 0x14e064: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x14e064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_14e068:
    // 0x14e068: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x14e068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_14e06c:
    // 0x14e06c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x14e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_14e070:
    // 0x14e070: 0x6a020083  ldl         $v0, 0x83($s0)
    ctx->pc = 0x14e070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_14e074:
    // 0x14e074: 0x6e02007c  ldr         $v0, 0x7C($s0)
    ctx->pc = 0x14e074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_14e078:
    // 0x14e078: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x14e078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_14e07c:
    // 0x14e07c: 0xb202008f  sdl         $v0, 0x8F($s0)
    ctx->pc = 0x14e07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14e080:
    // 0x14e080: 0xb6020088  sdr         $v0, 0x88($s0)
    ctx->pc = 0x14e080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14e084:
    // 0x14e084: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x14e084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
label_14e088:
    // 0x14e088: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x14e088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_14e08c:
    // 0x14e08c: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_14e090:
    if (ctx->pc == 0x14E090u) {
        ctx->pc = 0x14E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E08Cu;
        // 0x14e090: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E094u;
        goto label_14e094;
    }
    ctx->pc = 0x14E08Cu;
    {
        const bool branch_taken_0x14e08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e08c) {
            ctx->pc = 0x14E090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E08Cu;
            // 0x14e090: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E14Cu;
            goto label_14e14c;
        }
    }
    ctx->pc = 0x14E094u;
label_14e094:
    // 0x14e094: 0xc07600c  jal         func_1D8030
label_14e098:
    if (ctx->pc == 0x14E098u) {
        ctx->pc = 0x14E09Cu;
        goto label_14e09c;
    }
    ctx->pc = 0x14E094u;
    SET_GPR_U32(ctx, 31, 0x14E09Cu);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x14E094u, 0x14E09Cu)) {
        return;
    }
    ctx->pc = 0x14E09Cu;
label_14e09c:
    // 0x14e09c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x14e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_14e0a0:
    // 0x14e0a0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14e0a4:
    // 0x14e0a4: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x14e0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_14e0a8:
    // 0x14e0a8: 0xae0400b8  sw          $a0, 0xB8($s0)
    ctx->pc = 0x14e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 4));
label_14e0ac:
    // 0x14e0ac: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x14e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_14e0b0:
    // 0x14e0b0: 0x844302b0  lh          $v1, 0x2B0($v0)
    ctx->pc = 0x14e0b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 688)));
label_14e0b4:
    // 0x14e0b4: 0x8c4702b4  lw          $a3, 0x2B4($v0)
    ctx->pc = 0x14e0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_14e0b8:
    // 0x14e0b8: 0xe0f809  jalr        $a3
label_14e0bc:
    if (ctx->pc == 0x14E0BCu) {
        ctx->pc = 0x14E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0B8u;
        // 0x14e0bc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E0C0u;
        goto label_14e0c0;
    }
    ctx->pc = 0x14E0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x14E0C0u);
        ctx->pc = 0x14E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0B8u;
        // 0x14e0bc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E0B8u, 0x14E0C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E0C0u;
label_14e0c0:
    // 0x14e0c0: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x14e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e0c4:
    // 0x14e0c4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x14e0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e0c8:
    // 0x14e0c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x14e0c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14e0cc:
    // 0x14e0cc: 0x0  nop
    ctx->pc = 0x14e0ccu;
    // NOP
label_14e0d0:
    // 0x14e0d0: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
label_14e0d4:
    if (ctx->pc == 0x14E0D4u) {
        ctx->pc = 0x14E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0D0u;
        // 0x14e0d4: 0xc60000ec  lwc1        $f0, 0xEC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E0D8u;
        goto label_14e0d8;
    }
    ctx->pc = 0x14E0D0u;
    {
        const bool branch_taken_0x14e0d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e0d0) {
            ctx->pc = 0x14E0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E0D0u;
            // 0x14e0d4: 0xc60000ec  lwc1        $f0, 0xEC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E140u;
            goto label_14e140;
        }
    }
    ctx->pc = 0x14E0D8u;
label_14e0d8:
    // 0x14e0d8: 0xc0a074a  jal         func_281D28
label_14e0dc:
    if (ctx->pc == 0x14E0DCu) {
        ctx->pc = 0x14E0E0u;
        goto label_14e0e0;
    }
    ctx->pc = 0x14E0D8u;
    SET_GPR_U32(ctx, 31, 0x14E0E0u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x14E0D8u, 0x14E0E0u)) {
        return;
    }
    ctx->pc = 0x14E0E0u;
label_14e0e0:
    // 0x14e0e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_14e0e4:
    if (ctx->pc == 0x14E0E4u) {
        ctx->pc = 0x14E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0E0u;
        // 0x14e0e4: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E0E8u;
        goto label_14e0e8;
    }
    ctx->pc = 0x14E0E0u;
    {
        const bool branch_taken_0x14e0e0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x14E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0E0u;
        // 0x14e0e4: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0e0) {
            ctx->pc = 0x14E0FCu;
            goto label_14e0fc;
        }
    }
    ctx->pc = 0x14E0E8u;
label_14e0e8:
    // 0x14e0e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14e0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14e0ec:
    // 0x14e0ec: 0x0  nop
    ctx->pc = 0x14e0ecu;
    // NOP
label_14e0f0:
    // 0x14e0f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14e0f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_14e0f4:
    // 0x14e0f4: 0x10000009  b           . + 4 + (0x9 << 2)
label_14e0f8:
    if (ctx->pc == 0x14E0F8u) {
        ctx->pc = 0x14E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0F4u;
        // 0x14e0f8: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E0FCu;
        goto label_14e0fc;
    }
    ctx->pc = 0x14E0F4u;
    {
        const bool branch_taken_0x14e0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0F4u;
        // 0x14e0f8: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0f4) {
            ctx->pc = 0x14E11Cu;
            goto label_14e11c;
        }
    }
    ctx->pc = 0x14E0FCu;
label_14e0fc:
    // 0x14e0fc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x14e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_14e100:
    // 0x14e100: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14e104:
    // 0x14e104: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14e104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14e108:
    // 0x14e108: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14e108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14e10c:
    // 0x14e10c: 0x0  nop
    ctx->pc = 0x14e10cu;
    // NOP
label_14e110:
    // 0x14e110: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14e110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_14e114:
    // 0x14e114: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x14e114u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_14e118:
    // 0x14e118: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x14e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e11c:
    // 0x14e11c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x14e11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
label_14e120:
    // 0x14e120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14e124:
    // 0x14e124: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x14e124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_14e128:
    // 0x14e128: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_14e12c:
    // 0x14e12c: 0xc60200ec  lwc1        $f2, 0xEC($s0)
    ctx->pc = 0x14e12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14e130:
    // 0x14e130: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14e130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14e134:
    // 0x14e134: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x14e134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_14e138:
    // 0x14e138: 0x10000002  b           . + 4 + (0x2 << 2)
label_14e13c:
    if (ctx->pc == 0x14E13Cu) {
        ctx->pc = 0x14E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E138u;
        // 0x14e13c: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E140u;
        goto label_14e140;
    }
    ctx->pc = 0x14E138u;
    {
        const bool branch_taken_0x14e138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E138u;
        // 0x14e13c: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e138) {
            ctx->pc = 0x14E144u;
            goto label_14e144;
        }
    }
    ctx->pc = 0x14E140u;
label_14e140:
    // 0x14e140: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14e140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14e144:
    // 0x14e144: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x14e144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_14e148:
    // 0x14e148: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x14e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_14e14c:
    // 0x14e14c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_14e150:
    if (ctx->pc == 0x14E150u) {
        ctx->pc = 0x14E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E14Cu;
        // 0x14e150: 0x8e02009c  lw          $v0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E154u;
        goto label_14e154;
    }
    ctx->pc = 0x14E14Cu;
    {
        const bool branch_taken_0x14e14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e14c) {
            ctx->pc = 0x14E150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E14Cu;
            // 0x14e150: 0x8e02009c  lw          $v0, 0x9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E18Cu;
            goto label_14e18c;
        }
    }
    ctx->pc = 0x14E154u;
label_14e154:
    // 0x14e154: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x14e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_14e158:
    // 0x14e158: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_14e15c:
    if (ctx->pc == 0x14E15Cu) {
        ctx->pc = 0x14E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E158u;
        // 0x14e15c: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E160u;
        goto label_14e160;
    }
    ctx->pc = 0x14E158u;
    {
        const bool branch_taken_0x14e158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e158) {
            ctx->pc = 0x14E15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E158u;
            // 0x14e15c: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E180u;
            goto label_14e180;
        }
    }
    ctx->pc = 0x14E160u;
label_14e160:
    // 0x14e160: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14e164:
    // 0x14e164: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_14e168:
    if (ctx->pc == 0x14E168u) {
        ctx->pc = 0x14E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E164u;
        // 0x14e168: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E16Cu;
        goto label_14e16c;
    }
    ctx->pc = 0x14E164u;
    {
        const bool branch_taken_0x14e164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e164) {
            ctx->pc = 0x14E168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E164u;
            // 0x14e168: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E180u;
            goto label_14e180;
        }
    }
    ctx->pc = 0x14E16Cu;
label_14e16c:
    // 0x14e16c: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x14e16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
label_14e170:
    // 0x14e170: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14e170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14e174:
    // 0x14e174: 0xc053c54  jal         func_14F150
label_14e178:
    if (ctx->pc == 0x14E178u) {
        ctx->pc = 0x14E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E174u;
        // 0x14e178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E17Cu;
        goto label_14e17c;
    }
    ctx->pc = 0x14E174u;
    SET_GPR_U32(ctx, 31, 0x14E17Cu);
    ctx->pc = 0x14E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E174u;
    // 0x14e178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F150u, 0x14E174u, 0x14E17Cu)) {
        return;
    }
    ctx->pc = 0x14E17Cu;
label_14e17c:
    // 0x14e17c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x14e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_14e180:
    // 0x14e180: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
label_14e184:
    if (ctx->pc == 0x14E184u) {
        ctx->pc = 0x14E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E180u;
        // 0x14e184: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E188u;
        goto label_14e188;
    }
    ctx->pc = 0x14E180u;
    {
        const bool branch_taken_0x14e180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e180) {
            ctx->pc = 0x14E184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E180u;
            // 0x14e184: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E298u;
            goto label_14e298;
        }
    }
    ctx->pc = 0x14E188u;
label_14e188:
    // 0x14e188: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x14e188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_14e18c:
    // 0x14e18c: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_14e190:
    if (ctx->pc == 0x14E190u) {
        ctx->pc = 0x14E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E18Cu;
        // 0x14e190: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E194u;
        goto label_14e194;
    }
    ctx->pc = 0x14E18Cu;
    {
        const bool branch_taken_0x14e18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e18c) {
            ctx->pc = 0x14E190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E18Cu;
            // 0x14e190: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E298u;
            goto label_14e298;
        }
    }
    ctx->pc = 0x14E194u;
label_14e194:
    // 0x14e194: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_14e198:
    // 0x14e198: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x14e198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
label_14e19c:
    // 0x14e19c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x14e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_14e1a0:
    // 0x14e1a0: 0x5080003d  beql        $a0, $zero, . + 4 + (0x3D << 2)
label_14e1a4:
    if (ctx->pc == 0x14E1A4u) {
        ctx->pc = 0x14E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1A0u;
        // 0x14e1a4: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E1A8u;
        goto label_14e1a8;
    }
    ctx->pc = 0x14E1A0u;
    {
        const bool branch_taken_0x14e1a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e1a0) {
            ctx->pc = 0x14E1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E1A0u;
            // 0x14e1a4: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E298u;
            goto label_14e298;
        }
    }
    ctx->pc = 0x14E1A8u;
label_14e1a8:
    // 0x14e1a8: 0xc05e396  jal         func_178E58
label_14e1ac:
    if (ctx->pc == 0x14E1ACu) {
        ctx->pc = 0x14E1B0u;
        goto label_14e1b0;
    }
    ctx->pc = 0x14E1A8u;
    SET_GPR_U32(ctx, 31, 0x14E1B0u);
    ctx->pc = 0x178E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E58u, 0x14E1A8u, 0x14E1B0u)) {
        return;
    }
    ctx->pc = 0x14E1B0u;
label_14e1b0:
    // 0x14e1b0: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_14e1b4:
    if (ctx->pc == 0x14E1B4u) {
        ctx->pc = 0x14E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1B0u;
        // 0x14e1b4: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E1B8u;
        goto label_14e1b8;
    }
    ctx->pc = 0x14E1B0u;
    {
        const bool branch_taken_0x14e1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e1b0) {
            ctx->pc = 0x14E1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E1B0u;
            // 0x14e1b4: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E298u;
            goto label_14e298;
        }
    }
    ctx->pc = 0x14E1B8u;
label_14e1b8:
    // 0x14e1b8: 0x6a060083  ldl         $a2, 0x83($s0)
    ctx->pc = 0x14e1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_14e1bc:
    // 0x14e1bc: 0x6e06007c  ldr         $a2, 0x7C($s0)
    ctx->pc = 0x14e1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_14e1c0:
    // 0x14e1c0: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x14e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_14e1c4:
    // 0x14e1c4: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x14e1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14e1c8:
    // 0x14e1c8: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x14e1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14e1cc:
    // 0x14e1cc: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x14e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_14e1d0:
    // 0x14e1d0: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x14e1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14e1d4:
    // 0x14e1d4: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x14e1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e1d8:
    // 0x14e1d8: 0xc6060024  lwc1        $f6, 0x24($s0)
    ctx->pc = 0x14e1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_14e1dc:
    // 0x14e1dc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x14e1dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_14e1e0:
    // 0x14e1e0: 0xc6040028  lwc1        $f4, 0x28($s0)
    ctx->pc = 0x14e1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14e1e4:
    // 0x14e1e4: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x14e1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e1e8:
    // 0x14e1e8: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x14e1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14e1ec:
    // 0x14e1ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14e1ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_14e1f0:
    // 0x14e1f0: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x14e1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14e1f4:
    // 0x14e1f4: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x14e1f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_14e1f8:
    // 0x14e1f8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x14e1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e1fc:
    // 0x14e1fc: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x14e1fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_14e200:
    // 0x14e200: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14e204:
    // 0x14e204: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x14e204u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_14e208:
    // 0x14e208: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x14e208u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_14e20c:
    // 0x14e20c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x14e20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_14e210:
    // 0x14e210: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x14e210u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_14e214:
    // 0x14e214: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x14e214u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_14e218:
    // 0x14e218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e21c:
    // 0x14e21c: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x14e21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_14e220:
    // 0x14e220: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14e220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14e224:
    // 0x14e224: 0xc086156  jal         func_218558
label_14e228:
    if (ctx->pc == 0x14E228u) {
        ctx->pc = 0x14E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E224u;
        // 0x14e228: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E22Cu;
        goto label_14e22c;
    }
    ctx->pc = 0x14E224u;
    SET_GPR_U32(ctx, 31, 0x14E22Cu);
    ctx->pc = 0x14E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E224u;
    // 0x14e228: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x14E224u, 0x14E22Cu)) {
        return;
    }
    ctx->pc = 0x14E22Cu;
label_14e22c:
    // 0x14e22c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_14e230:
    if (ctx->pc == 0x14E230u) {
        ctx->pc = 0x14E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E22Cu;
        // 0x14e230: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E234u;
        goto label_14e234;
    }
    ctx->pc = 0x14E22Cu;
    {
        const bool branch_taken_0x14e22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E22Cu;
        // 0x14e230: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e22c) {
            ctx->pc = 0x14E280u;
            goto label_14e280;
        }
    }
    ctx->pc = 0x14E234u;
label_14e234:
    // 0x14e234: 0xc603007c  lwc1        $f3, 0x7C($s0)
    ctx->pc = 0x14e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14e238:
    // 0x14e238: 0xc6040080  lwc1        $f4, 0x80($s0)
    ctx->pc = 0x14e238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14e23c:
    // 0x14e23c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x14e23cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_14e240:
    // 0x14e240: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x14e240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14e244:
    // 0x14e244: 0xc6030084  lwc1        $f3, 0x84($s0)
    ctx->pc = 0x14e244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14e248:
    // 0x14e248: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x14e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e24c:
    // 0x14e24c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x14e24cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_14e250:
    // 0x14e250: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x14e250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_14e254:
    // 0x14e254: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x14e254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_14e258:
    // 0x14e258: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x14e258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_14e25c:
    // 0x14e25c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x14e25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_14e260:
    // 0x14e260: 0xc093aa8  jal         func_24EAA0
label_14e264:
    if (ctx->pc == 0x14E264u) {
        ctx->pc = 0x14E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E260u;
        // 0x14e264: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E268u;
        goto label_14e268;
    }
    ctx->pc = 0x14E260u;
    SET_GPR_U32(ctx, 31, 0x14E268u);
    ctx->pc = 0x14E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E260u;
    // 0x14e264: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x14E260u, 0x14E268u)) {
        return;
    }
    ctx->pc = 0x14E268u;
label_14e268:
    // 0x14e268: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x14e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e26c:
    // 0x14e26c: 0x0  nop
    ctx->pc = 0x14e26cu;
    // NOP
label_14e270:
    // 0x14e270: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14e270u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_14e274:
    // 0x14e274: 0x10000007  b           . + 4 + (0x7 << 2)
label_14e278:
    if (ctx->pc == 0x14E278u) {
        ctx->pc = 0x14E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E274u;
        // 0x14e278: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E27Cu;
        goto label_14e27c;
    }
    ctx->pc = 0x14E274u;
    {
        const bool branch_taken_0x14e274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E274u;
        // 0x14e278: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e274) {
            ctx->pc = 0x14E294u;
            goto label_14e294;
        }
    }
    ctx->pc = 0x14E27Cu;
label_14e27c:
    // 0x14e27c: 0x0  nop
    ctx->pc = 0x14e27cu;
    // NOP
label_14e280:
    // 0x14e280: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x14e280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_14e284:
    // 0x14e284: 0x34213c00  ori         $at, $at, 0x3C00
    ctx->pc = 0x14e284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15360);
label_14e288:
    // 0x14e288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14e28c:
    // 0x14e28c: 0x0  nop
    ctx->pc = 0x14e28cu;
    // NOP
label_14e290:
    // 0x14e290: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x14e290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_14e294:
    // 0x14e294: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x14e294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_14e298:
    // 0x14e298: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_14e29c:
    if (ctx->pc == 0x14E29Cu) {
        ctx->pc = 0x14E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E298u;
        // 0x14e29c: 0x2606007c  addiu       $a2, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E2A0u;
        goto label_14e2a0;
    }
    ctx->pc = 0x14E298u;
    {
        const bool branch_taken_0x14e298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E298u;
        // 0x14e29c: 0x2606007c  addiu       $a2, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e298) {
            ctx->pc = 0x14E2A8u;
            goto label_14e2a8;
        }
    }
    ctx->pc = 0x14E2A0u;
label_14e2a0:
    // 0x14e2a0: 0xc043c7c  jal         func_10F1F0
label_14e2a4:
    if (ctx->pc == 0x14E2A4u) {
        ctx->pc = 0x14E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2A0u;
        // 0x14e2a4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E2A8u;
        goto label_14e2a8;
    }
    ctx->pc = 0x14E2A0u;
    SET_GPR_U32(ctx, 31, 0x14E2A8u);
    ctx->pc = 0x14E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2A0u;
    // 0x14e2a4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x14E2A0u, 0x14E2A8u)) {
        return;
    }
    ctx->pc = 0x14E2A8u;
label_14e2a8:
    // 0x14e2a8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x14e2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14e2ac:
    // 0x14e2ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14e2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_14e2b0:
    // 0x14e2b0: 0x3e00008  jr          $ra
label_14e2b4:
    if (ctx->pc == 0x14E2B4u) {
        ctx->pc = 0x14E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2B0u;
        // 0x14e2b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E2B8u;
        goto label_fallthrough_0x14e2b0;
    }
    ctx->pc = 0x14E2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2B0u;
        // 0x14e2b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14e2b0:
    ctx->pc = 0x14E2B8u;
}

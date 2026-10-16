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

// Function: sub_001CD090
// Address: 0x1cd090 - 0x1cd350
void sub_001CD090_0x1cd090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD090_0x1cd090");
#endif

    switch (ctx->pc) {
        case 0x1cd090u: goto label_1cd090;
        case 0x1cd094u: goto label_1cd094;
        case 0x1cd098u: goto label_1cd098;
        case 0x1cd09cu: goto label_1cd09c;
        case 0x1cd0a0u: goto label_1cd0a0;
        case 0x1cd0a4u: goto label_1cd0a4;
        case 0x1cd0a8u: goto label_1cd0a8;
        case 0x1cd0acu: goto label_1cd0ac;
        case 0x1cd0b0u: goto label_1cd0b0;
        case 0x1cd0b4u: goto label_1cd0b4;
        case 0x1cd0b8u: goto label_1cd0b8;
        case 0x1cd0bcu: goto label_1cd0bc;
        case 0x1cd0c0u: goto label_1cd0c0;
        case 0x1cd0c4u: goto label_1cd0c4;
        case 0x1cd0c8u: goto label_1cd0c8;
        case 0x1cd0ccu: goto label_1cd0cc;
        case 0x1cd0d0u: goto label_1cd0d0;
        case 0x1cd0d4u: goto label_1cd0d4;
        case 0x1cd0d8u: goto label_1cd0d8;
        case 0x1cd0dcu: goto label_1cd0dc;
        case 0x1cd0e0u: goto label_1cd0e0;
        case 0x1cd0e4u: goto label_1cd0e4;
        case 0x1cd0e8u: goto label_1cd0e8;
        case 0x1cd0ecu: goto label_1cd0ec;
        case 0x1cd0f0u: goto label_1cd0f0;
        case 0x1cd0f4u: goto label_1cd0f4;
        case 0x1cd0f8u: goto label_1cd0f8;
        case 0x1cd0fcu: goto label_1cd0fc;
        case 0x1cd100u: goto label_1cd100;
        case 0x1cd104u: goto label_1cd104;
        case 0x1cd108u: goto label_1cd108;
        case 0x1cd10cu: goto label_1cd10c;
        case 0x1cd110u: goto label_1cd110;
        case 0x1cd114u: goto label_1cd114;
        case 0x1cd118u: goto label_1cd118;
        case 0x1cd11cu: goto label_1cd11c;
        case 0x1cd120u: goto label_1cd120;
        case 0x1cd124u: goto label_1cd124;
        case 0x1cd128u: goto label_1cd128;
        case 0x1cd12cu: goto label_1cd12c;
        case 0x1cd130u: goto label_1cd130;
        case 0x1cd134u: goto label_1cd134;
        case 0x1cd138u: goto label_1cd138;
        case 0x1cd13cu: goto label_1cd13c;
        case 0x1cd140u: goto label_1cd140;
        case 0x1cd144u: goto label_1cd144;
        case 0x1cd148u: goto label_1cd148;
        case 0x1cd14cu: goto label_1cd14c;
        case 0x1cd150u: goto label_1cd150;
        case 0x1cd154u: goto label_1cd154;
        case 0x1cd158u: goto label_1cd158;
        case 0x1cd15cu: goto label_1cd15c;
        case 0x1cd160u: goto label_1cd160;
        case 0x1cd164u: goto label_1cd164;
        case 0x1cd168u: goto label_1cd168;
        case 0x1cd16cu: goto label_1cd16c;
        case 0x1cd170u: goto label_1cd170;
        case 0x1cd174u: goto label_1cd174;
        case 0x1cd178u: goto label_1cd178;
        case 0x1cd17cu: goto label_1cd17c;
        case 0x1cd180u: goto label_1cd180;
        case 0x1cd184u: goto label_1cd184;
        case 0x1cd188u: goto label_1cd188;
        case 0x1cd18cu: goto label_1cd18c;
        case 0x1cd190u: goto label_1cd190;
        case 0x1cd194u: goto label_1cd194;
        case 0x1cd198u: goto label_1cd198;
        case 0x1cd19cu: goto label_1cd19c;
        case 0x1cd1a0u: goto label_1cd1a0;
        case 0x1cd1a4u: goto label_1cd1a4;
        case 0x1cd1a8u: goto label_1cd1a8;
        case 0x1cd1acu: goto label_1cd1ac;
        case 0x1cd1b0u: goto label_1cd1b0;
        case 0x1cd1b4u: goto label_1cd1b4;
        case 0x1cd1b8u: goto label_1cd1b8;
        case 0x1cd1bcu: goto label_1cd1bc;
        case 0x1cd1c0u: goto label_1cd1c0;
        case 0x1cd1c4u: goto label_1cd1c4;
        case 0x1cd1c8u: goto label_1cd1c8;
        case 0x1cd1ccu: goto label_1cd1cc;
        case 0x1cd1d0u: goto label_1cd1d0;
        case 0x1cd1d4u: goto label_1cd1d4;
        case 0x1cd1d8u: goto label_1cd1d8;
        case 0x1cd1dcu: goto label_1cd1dc;
        case 0x1cd1e0u: goto label_1cd1e0;
        case 0x1cd1e4u: goto label_1cd1e4;
        case 0x1cd1e8u: goto label_1cd1e8;
        case 0x1cd1ecu: goto label_1cd1ec;
        case 0x1cd1f0u: goto label_1cd1f0;
        case 0x1cd1f4u: goto label_1cd1f4;
        case 0x1cd1f8u: goto label_1cd1f8;
        case 0x1cd1fcu: goto label_1cd1fc;
        case 0x1cd200u: goto label_1cd200;
        case 0x1cd204u: goto label_1cd204;
        case 0x1cd208u: goto label_1cd208;
        case 0x1cd20cu: goto label_1cd20c;
        case 0x1cd210u: goto label_1cd210;
        case 0x1cd214u: goto label_1cd214;
        case 0x1cd218u: goto label_1cd218;
        case 0x1cd21cu: goto label_1cd21c;
        case 0x1cd220u: goto label_1cd220;
        case 0x1cd224u: goto label_1cd224;
        case 0x1cd228u: goto label_1cd228;
        case 0x1cd22cu: goto label_1cd22c;
        case 0x1cd230u: goto label_1cd230;
        case 0x1cd234u: goto label_1cd234;
        case 0x1cd238u: goto label_1cd238;
        case 0x1cd23cu: goto label_1cd23c;
        case 0x1cd240u: goto label_1cd240;
        case 0x1cd244u: goto label_1cd244;
        case 0x1cd248u: goto label_1cd248;
        case 0x1cd24cu: goto label_1cd24c;
        case 0x1cd250u: goto label_1cd250;
        case 0x1cd254u: goto label_1cd254;
        case 0x1cd258u: goto label_1cd258;
        case 0x1cd25cu: goto label_1cd25c;
        case 0x1cd260u: goto label_1cd260;
        case 0x1cd264u: goto label_1cd264;
        case 0x1cd268u: goto label_1cd268;
        case 0x1cd26cu: goto label_1cd26c;
        case 0x1cd270u: goto label_1cd270;
        case 0x1cd274u: goto label_1cd274;
        case 0x1cd278u: goto label_1cd278;
        case 0x1cd27cu: goto label_1cd27c;
        case 0x1cd280u: goto label_1cd280;
        case 0x1cd284u: goto label_1cd284;
        case 0x1cd288u: goto label_1cd288;
        case 0x1cd28cu: goto label_1cd28c;
        case 0x1cd290u: goto label_1cd290;
        case 0x1cd294u: goto label_1cd294;
        case 0x1cd298u: goto label_1cd298;
        case 0x1cd29cu: goto label_1cd29c;
        case 0x1cd2a0u: goto label_1cd2a0;
        case 0x1cd2a4u: goto label_1cd2a4;
        case 0x1cd2a8u: goto label_1cd2a8;
        case 0x1cd2acu: goto label_1cd2ac;
        case 0x1cd2b0u: goto label_1cd2b0;
        case 0x1cd2b4u: goto label_1cd2b4;
        case 0x1cd2b8u: goto label_1cd2b8;
        case 0x1cd2bcu: goto label_1cd2bc;
        case 0x1cd2c0u: goto label_1cd2c0;
        case 0x1cd2c4u: goto label_1cd2c4;
        case 0x1cd2c8u: goto label_1cd2c8;
        case 0x1cd2ccu: goto label_1cd2cc;
        case 0x1cd2d0u: goto label_1cd2d0;
        case 0x1cd2d4u: goto label_1cd2d4;
        case 0x1cd2d8u: goto label_1cd2d8;
        case 0x1cd2dcu: goto label_1cd2dc;
        case 0x1cd2e0u: goto label_1cd2e0;
        case 0x1cd2e4u: goto label_1cd2e4;
        case 0x1cd2e8u: goto label_1cd2e8;
        case 0x1cd2ecu: goto label_1cd2ec;
        case 0x1cd2f0u: goto label_1cd2f0;
        case 0x1cd2f4u: goto label_1cd2f4;
        case 0x1cd2f8u: goto label_1cd2f8;
        case 0x1cd2fcu: goto label_1cd2fc;
        case 0x1cd300u: goto label_1cd300;
        case 0x1cd304u: goto label_1cd304;
        case 0x1cd308u: goto label_1cd308;
        case 0x1cd30cu: goto label_1cd30c;
        case 0x1cd310u: goto label_1cd310;
        case 0x1cd314u: goto label_1cd314;
        case 0x1cd318u: goto label_1cd318;
        case 0x1cd31cu: goto label_1cd31c;
        case 0x1cd320u: goto label_1cd320;
        case 0x1cd324u: goto label_1cd324;
        case 0x1cd328u: goto label_1cd328;
        case 0x1cd32cu: goto label_1cd32c;
        case 0x1cd330u: goto label_1cd330;
        case 0x1cd334u: goto label_1cd334;
        case 0x1cd338u: goto label_1cd338;
        case 0x1cd33cu: goto label_1cd33c;
        case 0x1cd340u: goto label_1cd340;
        case 0x1cd344u: goto label_1cd344;
        case 0x1cd348u: goto label_1cd348;
        case 0x1cd34cu: goto label_1cd34c;
        default: break;
    }

    ctx->pc = 0x1cd090u;

label_1cd090:
    // 0x1cd090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1cd090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1cd094:
    // 0x1cd094: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1cd094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1cd098:
    // 0x1cd098: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1cd098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1cd09c:
    // 0x1cd09c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0a0:
    // 0x1cd0a0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1cd0a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1cd0a4:
    // 0x1cd0a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cd0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0a8:
    // 0x1cd0a8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1cd0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1cd0ac:
    // 0x1cd0ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cd0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1cd0b0:
    // 0x1cd0b0: 0x8e220290  lw          $v0, 0x290($s1)
    ctx->pc = 0x1cd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
label_1cd0b4:
    // 0x1cd0b4: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
label_1cd0b8:
    if (ctx->pc == 0x1CD0B8u) {
        ctx->pc = 0x1CD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0B4u;
        // 0x1cd0b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0BCu;
        goto label_1cd0bc;
    }
    ctx->pc = 0x1CD0B4u;
    {
        const bool branch_taken_0x1cd0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0B4u;
        // 0x1cd0b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0b4) {
            ctx->pc = 0x1CD310u;
            goto label_1cd310;
        }
    }
    ctx->pc = 0x1CD0BCu;
label_1cd0bc:
    // 0x1cd0bc: 0xc06ba6c  jal         func_1AE9B0
label_1cd0c0:
    if (ctx->pc == 0x1CD0C0u) {
        ctx->pc = 0x1CD0C4u;
        goto label_1cd0c4;
    }
    ctx->pc = 0x1CD0BCu;
    SET_GPR_U32(ctx, 31, 0x1CD0C4u);
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1CD0BCu, 0x1CD0C4u)) {
        return;
    }
    ctx->pc = 0x1CD0C4u;
label_1cd0c4:
    // 0x1cd0c4: 0x16400068  bnez        $s2, . + 4 + (0x68 << 2)
label_1cd0c8:
    if (ctx->pc == 0x1CD0C8u) {
        ctx->pc = 0x1CD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0C4u;
        // 0x1cd0c8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0CCu;
        goto label_1cd0cc;
    }
    ctx->pc = 0x1CD0C4u;
    {
        const bool branch_taken_0x1cd0c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0C4u;
        // 0x1cd0c8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0c4) {
            ctx->pc = 0x1CD268u;
            goto label_1cd268;
        }
    }
    ctx->pc = 0x1CD0CCu;
label_1cd0cc:
    // 0x1cd0cc: 0x8e220288  lw          $v0, 0x288($s1)
    ctx->pc = 0x1cd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
label_1cd0d0:
    // 0x1cd0d0: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
label_1cd0d4:
    if (ctx->pc == 0x1CD0D4u) {
        ctx->pc = 0x1CD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0D0u;
        // 0x1cd0d4: 0xae200288  sw          $zero, 0x288($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0D8u;
        goto label_1cd0d8;
    }
    ctx->pc = 0x1CD0D0u;
    {
        const bool branch_taken_0x1cd0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd0d0) {
            ctx->pc = 0x1CD0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD0D0u;
            // 0x1cd0d4: 0xae200288  sw          $zero, 0x288($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD1A8u;
            goto label_1cd1a8;
        }
    }
    ctx->pc = 0x1CD0D8u;
label_1cd0d8:
    // 0x1cd0d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cd0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0dc:
    // 0x1cd0dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0e0:
    // 0x1cd0e0: 0xc0c493d  jal         func_3124F4
label_1cd0e4:
    if (ctx->pc == 0x1CD0E4u) {
        ctx->pc = 0x1CD0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0E0u;
        // 0x1cd0e4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0E8u;
        goto label_1cd0e8;
    }
    ctx->pc = 0x1CD0E0u;
    SET_GPR_U32(ctx, 31, 0x1CD0E8u);
    ctx->pc = 0x1CD0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0E0u;
    // 0x1cd0e4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CD0E0u, 0x1CD0E8u)) {
        return;
    }
    ctx->pc = 0x1CD0E8u;
label_1cd0e8:
    // 0x1cd0e8: 0x6a2202a7  ldl         $v0, 0x2A7($s1)
    ctx->pc = 0x1cd0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 679); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1cd0ec:
    // 0x1cd0ec: 0x6e2202a0  ldr         $v0, 0x2A0($s1)
    ctx->pc = 0x1cd0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1cd0f0:
    // 0x1cd0f0: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1cd0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cd0f4:
    // 0x1cd0f4: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1cd0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cd0f8:
    // 0x1cd0f8: 0x9fa40024  lwu         $a0, 0x24($sp)
    ctx->pc = 0x1cd0f8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1cd0fc:
    // 0x1cd0fc: 0x9fa20020  lwu         $v0, 0x20($sp)
    ctx->pc = 0x1cd0fcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cd100:
    // 0x1cd100: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1cd100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1cd104:
    // 0x1cd104: 0xc06cdf0  jal         func_1B37C0
label_1cd108:
    if (ctx->pc == 0x1CD108u) {
        ctx->pc = 0x1CD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD104u;
        // 0x1cd108: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD10Cu;
        goto label_1cd10c;
    }
    ctx->pc = 0x1CD104u;
    SET_GPR_U32(ctx, 31, 0x1CD10Cu);
    ctx->pc = 0x1CD108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD104u;
    // 0x1cd108: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B37C0u, 0x1CD104u, 0x1CD10Cu)) {
        return;
    }
    ctx->pc = 0x1CD10Cu;
label_1cd10c:
    // 0x1cd10c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1cd10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1cd110:
    // 0x1cd110: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1cd110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1cd114:
    // 0x1cd114: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1cd114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1cd118:
    // 0x1cd118: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1cd118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1cd11c:
    // 0x1cd11c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1cd11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1cd120:
    // 0x1cd120: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1cd120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1cd124:
    // 0x1cd124: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1cd124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd128:
    // 0x1cd128: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1cd128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd12c:
    // 0x1cd12c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1cd12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cd130:
    // 0x1cd130: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cd130u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cd134:
    // 0x1cd134: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1cd134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cd138:
    // 0x1cd138: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd13c:
    // 0x1cd13c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1cd13cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1cd140:
    // 0x1cd140: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1cd140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1cd144:
    // 0x1cd144: 0xc093ab4  jal         func_24EAD0
label_1cd148:
    if (ctx->pc == 0x1CD148u) {
        ctx->pc = 0x1CD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD144u;
        // 0x1cd148: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD14Cu;
        goto label_1cd14c;
    }
    ctx->pc = 0x1CD144u;
    SET_GPR_U32(ctx, 31, 0x1CD14Cu);
    ctx->pc = 0x1CD148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD144u;
    // 0x1cd148: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAD0u, 0x1CD144u, 0x1CD14Cu)) {
        return;
    }
    ctx->pc = 0x1CD14Cu;
label_1cd14c:
    // 0x1cd14c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1cd14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd150:
    // 0x1cd150: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cd150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1cd154:
    // 0x1cd154: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cd154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cd158:
    // 0x1cd158: 0x0  nop
    ctx->pc = 0x1cd158u;
    // NOP
label_1cd15c:
    // 0x1cd15c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cd15cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cd160:
    // 0x1cd160: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cd160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cd164:
    // 0x1cd164: 0x0  nop
    ctx->pc = 0x1cd164u;
    // NOP
label_1cd168:
    // 0x1cd168: 0x45000069  bc1f        . + 4 + (0x69 << 2)
label_1cd16c:
    if (ctx->pc == 0x1CD16Cu) {
        ctx->pc = 0x1CD16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD168u;
        // 0x1cd16c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD170u;
        goto label_1cd170;
    }
    ctx->pc = 0x1CD168u;
    {
        const bool branch_taken_0x1cd168 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD168u;
        // 0x1cd16c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd168) {
            ctx->pc = 0x1CD310u;
            goto label_1cd310;
        }
    }
    ctx->pc = 0x1CD170u;
label_1cd170:
    // 0x1cd170: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x1cd170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1cd174:
    // 0x1cd174: 0xae300288  sw          $s0, 0x288($s1)
    ctx->pc = 0x1cd174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 16));
label_1cd178:
    // 0x1cd178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd17c:
    // 0x1cd17c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cd17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cd180:
    // 0x1cd180: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cd180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cd184:
    // 0x1cd184: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cd184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cd188:
    // 0x1cd188: 0x60f809  jalr        $v1
label_1cd18c:
    if (ctx->pc == 0x1CD18Cu) {
        ctx->pc = 0x1CD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD188u;
        // 0x1cd18c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD190u;
        goto label_1cd190;
    }
    ctx->pc = 0x1CD188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD190u);
        ctx->pc = 0x1CD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD188u;
        // 0x1cd18c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD188u, 0x1CD190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD190u;
label_1cd190:
    // 0x1cd190: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1cd190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1cd194:
    // 0x1cd194: 0xac5000f4  sw          $s0, 0xF4($v0)
    ctx->pc = 0x1cd194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 16));
label_1cd198:
    // 0x1cd198: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1cd198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1cd19c:
    // 0x1cd19c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_1cd1a0:
    if (ctx->pc == 0x1CD1A0u) {
        ctx->pc = 0x1CD1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD19Cu;
        // 0x1cd1a0: 0xac70002c  sw          $s0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD1A4u;
        goto label_1cd1a4;
    }
    ctx->pc = 0x1CD19Cu;
    {
        const bool branch_taken_0x1cd19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD19Cu;
        // 0x1cd1a0: 0xac70002c  sw          $s0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd19c) {
            ctx->pc = 0x1CD310u;
            goto label_1cd310;
        }
    }
    ctx->pc = 0x1CD1A4u;
label_1cd1a4:
    // 0x1cd1a4: 0x0  nop
    ctx->pc = 0x1cd1a4u;
    // NOP
label_1cd1a8:
    // 0x1cd1a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd1ac:
    // 0x1cd1ac: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x1cd1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1cd1b0:
    // 0x1cd1b0: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cd1b4:
    // 0x1cd1b4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cd1b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cd1b8:
    // 0x1cd1b8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cd1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cd1bc:
    // 0x1cd1bc: 0x60f809  jalr        $v1
label_1cd1c0:
    if (ctx->pc == 0x1CD1C0u) {
        ctx->pc = 0x1CD1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1BCu;
        // 0x1cd1c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD1C4u;
        goto label_1cd1c4;
    }
    ctx->pc = 0x1CD1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD1C4u);
        ctx->pc = 0x1CD1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1BCu;
        // 0x1cd1c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD1BCu, 0x1CD1C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD1C4u;
label_1cd1c4:
    // 0x1cd1c4: 0x8e270264  lw          $a3, 0x264($s1)
    ctx->pc = 0x1cd1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1cd1c8:
    // 0x1cd1c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1cd1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1cd1cc:
    // 0x1cd1cc: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x1cd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_1cd1d0:
    // 0x1cd1d0: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x1cd1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_1cd1d4:
    // 0x1cd1d4: 0x8ce60034  lw          $a2, 0x34($a3)
    ctx->pc = 0x1cd1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_1cd1d8:
    // 0x1cd1d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cd1dc:
    // 0x1cd1dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cd1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cd1e0:
    // 0x1cd1e0: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x1cd1e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_1cd1e4:
    // 0x1cd1e4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1cd1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cd1e8:
    // 0x1cd1e8: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x1cd1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_1cd1ec:
    // 0x1cd1ec: 0x40f809  jalr        $v0
label_1cd1f0:
    if (ctx->pc == 0x1CD1F0u) {
        ctx->pc = 0x1CD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1ECu;
        // 0x1cd1f0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD1F4u;
        goto label_1cd1f4;
    }
    ctx->pc = 0x1CD1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD1F4u);
        ctx->pc = 0x1CD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1ECu;
        // 0x1cd1f0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD1ECu, 0x1CD1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD1F4u;
label_1cd1f4:
    // 0x1cd1f4: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1cd1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1cd1f8:
    // 0x1cd1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cd1fc:
    // 0x1cd1fc: 0xac6000f4  sw          $zero, 0xF4($v1)
    ctx->pc = 0x1cd1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 0));
label_1cd200:
    // 0x1cd200: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1cd200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1cd204:
    // 0x1cd204: 0xc07351e  jal         func_1CD478
label_1cd208:
    if (ctx->pc == 0x1CD208u) {
        ctx->pc = 0x1CD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD204u;
        // 0x1cd208: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD20Cu;
        goto label_1cd20c;
    }
    ctx->pc = 0x1CD204u;
    SET_GPR_U32(ctx, 31, 0x1CD20Cu);
    ctx->pc = 0x1CD208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD204u;
    // 0x1cd208: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CD478u, 0x1CD204u, 0x1CD20Cu)) {
        return;
    }
    ctx->pc = 0x1CD20Cu;
label_1cd20c:
    // 0x1cd20c: 0xc07353c  jal         func_1CD4F0
label_1cd210:
    if (ctx->pc == 0x1CD210u) {
        ctx->pc = 0x1CD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD20Cu;
        // 0x1cd210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD214u;
        goto label_1cd214;
    }
    ctx->pc = 0x1CD20Cu;
    SET_GPR_U32(ctx, 31, 0x1CD214u);
    ctx->pc = 0x1CD210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD20Cu;
    // 0x1cd210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD4F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CD4F0u, 0x1CD20Cu, 0x1CD214u)) {
        return;
    }
    ctx->pc = 0x1CD214u;
label_1cd214:
    // 0x1cd214: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
label_1cd218:
    if (ctx->pc == 0x1CD218u) {
        ctx->pc = 0x1CD218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD214u;
        // 0x1cd218: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD21Cu;
        goto label_1cd21c;
    }
    ctx->pc = 0x1CD214u;
    {
        const bool branch_taken_0x1cd214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd214) {
            ctx->pc = 0x1CD218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD214u;
            // 0x1cd218: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD314u;
            goto label_1cd314;
        }
    }
    ctx->pc = 0x1CD21Cu;
label_1cd21c:
    // 0x1cd21c: 0x8e250264  lw          $a1, 0x264($s1)
    ctx->pc = 0x1cd21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1cd220:
    // 0x1cd220: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1cd220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1cd224:
    // 0x1cd224: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1cd224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1cd228:
    // 0x1cd228: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1cd228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1cd22c:
    // 0x1cd22c: 0x60f809  jalr        $v1
label_1cd230:
    if (ctx->pc == 0x1CD230u) {
        ctx->pc = 0x1CD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD22Cu;
        // 0x1cd230: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD234u;
        goto label_1cd234;
    }
    ctx->pc = 0x1CD22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD234u);
        ctx->pc = 0x1CD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD22Cu;
        // 0x1cd230: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD22Cu, 0x1CD234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD234u;
label_1cd234:
    // 0x1cd234: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x1cd234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1cd238:
    // 0x1cd238: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cd238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cd23c:
    // 0x1cd23c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cd23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cd240:
    // 0x1cd240: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cd240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cd244:
    // 0x1cd244: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cd244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cd248:
    // 0x1cd248: 0x60f809  jalr        $v1
label_1cd24c:
    if (ctx->pc == 0x1CD24Cu) {
        ctx->pc = 0x1CD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD248u;
        // 0x1cd24c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD250u;
        goto label_1cd250;
    }
    ctx->pc = 0x1CD248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD250u);
        ctx->pc = 0x1CD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD248u;
        // 0x1cd24c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD248u, 0x1CD250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD250u;
label_1cd250:
    // 0x1cd250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd254:
    // 0x1cd254: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x1cd254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
label_1cd258:
    // 0x1cd258: 0xae220290  sw          $v0, 0x290($s1)
    ctx->pc = 0x1cd258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 2));
label_1cd25c:
    // 0x1cd25c: 0xae220294  sw          $v0, 0x294($s1)
    ctx->pc = 0x1cd25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 2));
label_1cd260:
    // 0x1cd260: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1cd264:
    if (ctx->pc == 0x1CD264u) {
        ctx->pc = 0x1CD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD260u;
        // 0x1cd264: 0xae22028c  sw          $v0, 0x28C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD268u;
        goto label_1cd268;
    }
    ctx->pc = 0x1CD260u;
    {
        const bool branch_taken_0x1cd260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD260u;
        // 0x1cd264: 0xae22028c  sw          $v0, 0x28C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd260) {
            ctx->pc = 0x1CD310u;
            goto label_1cd310;
        }
    }
    ctx->pc = 0x1CD268u;
label_1cd268:
    // 0x1cd268: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_1cd26c:
    if (ctx->pc == 0x1CD26Cu) {
        ctx->pc = 0x1CD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD268u;
        // 0x1cd26c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD270u;
        goto label_1cd270;
    }
    ctx->pc = 0x1CD268u;
    {
        const bool branch_taken_0x1cd268 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD268u;
        // 0x1cd26c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd268) {
            ctx->pc = 0x1CD278u;
            goto label_1cd278;
        }
    }
    ctx->pc = 0x1CD270u;
label_1cd270:
    // 0x1cd270: 0x16420013  bne         $s2, $v0, . + 4 + (0x13 << 2)
label_1cd274:
    if (ctx->pc == 0x1CD274u) {
        ctx->pc = 0x1CD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD270u;
        // 0x1cd274: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD278u;
        goto label_1cd278;
    }
    ctx->pc = 0x1CD270u;
    {
        const bool branch_taken_0x1cd270 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD270u;
        // 0x1cd274: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd270) {
            ctx->pc = 0x1CD2C0u;
            goto label_1cd2c0;
        }
    }
    ctx->pc = 0x1CD278u;
label_1cd278:
    // 0x1cd278: 0x8e220288  lw          $v0, 0x288($s1)
    ctx->pc = 0x1cd278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
label_1cd27c:
    // 0x1cd27c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1cd280:
    if (ctx->pc == 0x1CD280u) {
        ctx->pc = 0x1CD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD27Cu;
        // 0x1cd280: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD284u;
        goto label_1cd284;
    }
    ctx->pc = 0x1CD27Cu;
    {
        const bool branch_taken_0x1cd27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD27Cu;
        // 0x1cd280: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd27c) {
            ctx->pc = 0x1CD2C0u;
            goto label_1cd2c0;
        }
    }
    ctx->pc = 0x1CD284u;
label_1cd284:
    // 0x1cd284: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x1cd284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_1cd288:
    // 0x1cd288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cd288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cd28c:
    // 0x1cd28c: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x1cd28cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cd290:
    // 0x1cd290: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1cd294:
    if (ctx->pc == 0x1CD294u) {
        ctx->pc = 0x1CD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD290u;
        // 0x1cd294: 0xae2202a8  sw          $v0, 0x2A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD298u;
        goto label_1cd298;
    }
    ctx->pc = 0x1CD290u;
    {
        const bool branch_taken_0x1cd290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD290u;
        // 0x1cd294: 0xae2202a8  sw          $v0, 0x2A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd290) {
            ctx->pc = 0x1CD29Cu;
            goto label_1cd29c;
        }
    }
    ctx->pc = 0x1CD298u;
label_1cd298:
    // 0x1cd298: 0xae2002a8  sw          $zero, 0x2A8($s1)
    ctx->pc = 0x1cd298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
label_1cd29c:
    // 0x1cd29c: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x1cd29cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1cd2a0:
    // 0x1cd2a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cd2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cd2a4:
    // 0x1cd2a4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cd2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cd2a8:
    // 0x1cd2a8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cd2a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cd2ac:
    // 0x1cd2ac: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cd2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cd2b0:
    // 0x1cd2b0: 0x60f809  jalr        $v1
label_1cd2b4:
    if (ctx->pc == 0x1CD2B4u) {
        ctx->pc = 0x1CD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2B0u;
        // 0x1cd2b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2B8u;
        goto label_1cd2b8;
    }
    ctx->pc = 0x1CD2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD2B8u);
        ctx->pc = 0x1CD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2B0u;
        // 0x1cd2b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD2B0u, 0x1CD2B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD2B8u;
label_1cd2b8:
    // 0x1cd2b8: 0x10000016  b           . + 4 + (0x16 << 2)
label_1cd2bc:
    if (ctx->pc == 0x1CD2BCu) {
        ctx->pc = 0x1CD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2B8u;
        // 0x1cd2bc: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2C0u;
        goto label_1cd2c0;
    }
    ctx->pc = 0x1CD2B8u;
    {
        const bool branch_taken_0x1cd2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2B8u;
        // 0x1cd2bc: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd2b8) {
            ctx->pc = 0x1CD314u;
            goto label_1cd314;
        }
    }
    ctx->pc = 0x1CD2C0u;
label_1cd2c0:
    // 0x1cd2c0: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_1cd2c4:
    if (ctx->pc == 0x1CD2C4u) {
        ctx->pc = 0x1CD2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2C0u;
        // 0x1cd2c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2C8u;
        goto label_1cd2c8;
    }
    ctx->pc = 0x1CD2C0u;
    {
        const bool branch_taken_0x1cd2c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2C0u;
        // 0x1cd2c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd2c0) {
            ctx->pc = 0x1CD2D0u;
            goto label_1cd2d0;
        }
    }
    ctx->pc = 0x1CD2C8u;
label_1cd2c8:
    // 0x1cd2c8: 0x56420012  bnel        $s2, $v0, . + 4 + (0x12 << 2)
label_1cd2cc:
    if (ctx->pc == 0x1CD2CCu) {
        ctx->pc = 0x1CD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2C8u;
        // 0x1cd2cc: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2D0u;
        goto label_1cd2d0;
    }
    ctx->pc = 0x1CD2C8u;
    {
        const bool branch_taken_0x1cd2c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cd2c8) {
            ctx->pc = 0x1CD2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD2C8u;
            // 0x1cd2cc: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD314u;
            goto label_1cd314;
        }
    }
    ctx->pc = 0x1CD2D0u;
label_1cd2d0:
    // 0x1cd2d0: 0x8e220288  lw          $v0, 0x288($s1)
    ctx->pc = 0x1cd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
label_1cd2d4:
    // 0x1cd2d4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_1cd2d8:
    if (ctx->pc == 0x1CD2D8u) {
        ctx->pc = 0x1CD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2D4u;
        // 0x1cd2d8: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2DCu;
        goto label_1cd2dc;
    }
    ctx->pc = 0x1CD2D4u;
    {
        const bool branch_taken_0x1cd2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd2d4) {
            ctx->pc = 0x1CD2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD2D4u;
            // 0x1cd2d8: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD314u;
            goto label_1cd314;
        }
    }
    ctx->pc = 0x1CD2DCu;
label_1cd2dc:
    // 0x1cd2dc: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x1cd2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_1cd2e0:
    // 0x1cd2e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cd2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cd2e4:
    // 0x1cd2e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1cd2e8:
    if (ctx->pc == 0x1CD2E8u) {
        ctx->pc = 0x1CD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2E4u;
        // 0x1cd2e8: 0xae2202a8  sw          $v0, 0x2A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2ECu;
        goto label_1cd2ec;
    }
    ctx->pc = 0x1CD2E4u;
    {
        const bool branch_taken_0x1cd2e4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1CD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2E4u;
        // 0x1cd2e8: 0xae2202a8  sw          $v0, 0x2A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd2e4) {
            ctx->pc = 0x1CD2F4u;
            goto label_1cd2f4;
        }
    }
    ctx->pc = 0x1CD2ECu;
label_1cd2ec:
    // 0x1cd2ec: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1cd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cd2f0:
    // 0x1cd2f0: 0xae2202a8  sw          $v0, 0x2A8($s1)
    ctx->pc = 0x1cd2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 2));
label_1cd2f4:
    // 0x1cd2f4: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x1cd2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1cd2f8:
    // 0x1cd2f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cd2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cd2fc:
    // 0x1cd2fc: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cd300:
    // 0x1cd300: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cd300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cd304:
    // 0x1cd304: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cd304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cd308:
    // 0x1cd308: 0x60f809  jalr        $v1
label_1cd30c:
    if (ctx->pc == 0x1CD30Cu) {
        ctx->pc = 0x1CD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD308u;
        // 0x1cd30c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD310u;
        goto label_1cd310;
    }
    ctx->pc = 0x1CD308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD310u);
        ctx->pc = 0x1CD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD308u;
        // 0x1cd30c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD308u, 0x1CD310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD310u;
label_1cd310:
    // 0x1cd310: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1cd310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1cd314:
    // 0x1cd314: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1cd318:
    if (ctx->pc == 0x1CD318u) {
        ctx->pc = 0x1CD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD314u;
        // 0x1cd318: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD31Cu;
        goto label_1cd31c;
    }
    ctx->pc = 0x1CD314u;
    {
        const bool branch_taken_0x1cd314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD314u;
        // 0x1cd318: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd314) {
            ctx->pc = 0x1CD338u;
            goto label_1cd338;
        }
    }
    ctx->pc = 0x1CD31Cu;
label_1cd31c:
    // 0x1cd31c: 0x8e220288  lw          $v0, 0x288($s1)
    ctx->pc = 0x1cd31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
label_1cd320:
    // 0x1cd320: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1cd324:
    if (ctx->pc == 0x1CD324u) {
        ctx->pc = 0x1CD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD320u;
        // 0x1cd324: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD328u;
        goto label_1cd328;
    }
    ctx->pc = 0x1CD320u;
    {
        const bool branch_taken_0x1cd320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD320u;
        // 0x1cd324: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd320) {
            ctx->pc = 0x1CD33Cu;
            goto label_1cd33c;
        }
    }
    ctx->pc = 0x1CD328u;
label_1cd328:
    // 0x1cd328: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cd328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cd32c:
    // 0x1cd32c: 0xc06dbc8  jal         func_1B6F20
label_1cd330:
    if (ctx->pc == 0x1CD330u) {
        ctx->pc = 0x1CD330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD32Cu;
        // 0x1cd330: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD334u;
        goto label_1cd334;
    }
    ctx->pc = 0x1CD32Cu;
    SET_GPR_U32(ctx, 31, 0x1CD334u);
    ctx->pc = 0x1CD330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD32Cu;
    // 0x1cd330: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6F20u, 0x1CD32Cu, 0x1CD334u)) {
        return;
    }
    ctx->pc = 0x1CD334u;
label_1cd334:
    // 0x1cd334: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1cd334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cd338:
    // 0x1cd338: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1cd338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cd33c:
    // 0x1cd33c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1cd33cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cd340:
    // 0x1cd340: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cd340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cd344:
    // 0x1cd344: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1cd344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cd348:
    // 0x1cd348: 0x3e00008  jr          $ra
label_1cd34c:
    if (ctx->pc == 0x1CD34Cu) {
        ctx->pc = 0x1CD34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD348u;
        // 0x1cd34c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD350u;
        goto label_fallthrough_0x1cd348;
    }
    ctx->pc = 0x1CD348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD348u;
        // 0x1cd34c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cd348:
    ctx->pc = 0x1CD350u;
}

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

// Function: sub_0017F0F0
// Address: 0x17f0f0 - 0x17f510
void sub_0017F0F0_0x17f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F0F0_0x17f0f0");
#endif

    switch (ctx->pc) {
        case 0x17f124u: goto label_17f124;
        case 0x17f138u: goto label_17f138;
        case 0x17f14cu: goto label_17f14c;
        case 0x17f160u: goto label_17f160;
        case 0x17f168u: goto label_17f168;
        case 0x17f17cu: goto label_17f17c;
        case 0x17f190u: goto label_17f190;
        case 0x17f1a4u: goto label_17f1a4;
        case 0x17f1acu: goto label_17f1ac;
        case 0x17f1c0u: goto label_17f1c0;
        case 0x17f1d4u: goto label_17f1d4;
        case 0x17f1e8u: goto label_17f1e8;
        case 0x17f1f0u: goto label_17f1f0;
        case 0x17f204u: goto label_17f204;
        case 0x17f218u: goto label_17f218;
        case 0x17f22cu: goto label_17f22c;
        case 0x17f244u: goto label_17f244;
        case 0x17f258u: goto label_17f258;
        case 0x17f26cu: goto label_17f26c;
        case 0x17f284u: goto label_17f284;
        case 0x17f298u: goto label_17f298;
        case 0x17f2acu: goto label_17f2ac;
        case 0x17f2c4u: goto label_17f2c4;
        case 0x17f2d8u: goto label_17f2d8;
        case 0x17f2ecu: goto label_17f2ec;
        case 0x17f304u: goto label_17f304;
        case 0x17f318u: goto label_17f318;
        case 0x17f32cu: goto label_17f32c;
        case 0x17f344u: goto label_17f344;
        case 0x17f358u: goto label_17f358;
        case 0x17f36cu: goto label_17f36c;
        case 0x17f384u: goto label_17f384;
        case 0x17f398u: goto label_17f398;
        case 0x17f3acu: goto label_17f3ac;
        case 0x17f3c4u: goto label_17f3c4;
        case 0x17f3d8u: goto label_17f3d8;
        case 0x17f3ecu: goto label_17f3ec;
        case 0x17f404u: goto label_17f404;
        case 0x17f418u: goto label_17f418;
        case 0x17f42cu: goto label_17f42c;
        case 0x17f444u: goto label_17f444;
        case 0x17f458u: goto label_17f458;
        case 0x17f46cu: goto label_17f46c;
        case 0x17f484u: goto label_17f484;
        case 0x17f498u: goto label_17f498;
        case 0x17f4acu: goto label_17f4ac;
        case 0x17f4c4u: goto label_17f4c4;
        case 0x17f4d8u: goto label_17f4d8;
        case 0x17f4ecu: goto label_17f4ec;
        default: break;
    }

    ctx->pc = 0x17f0f0u;

    // 0x17f0f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17f0f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f0f8: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x17f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x17f0fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17f100: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17f100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f104: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17f104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17f108: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17f108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17f10c: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x17f10cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x17f110: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17f110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17f114: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x17f114u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17f118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f11c: 0xc043a40  jal         func_10E900
    ctx->pc = 0x17F11Cu;
    SET_GPR_U32(ctx, 31, 0x17F124u);
    ctx->pc = 0x17F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F11Cu;
    // 0x17f120: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E900u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E900u, 0x17F11Cu, 0x17F124u)) {
        return;
    }
    ctx->pc = 0x17F124u;
label_17f124:
    // 0x17f124: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f128: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17f128u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x17f12c: 0x8e1089a8  lw          $s0, -0x7658($s0)
    ctx->pc = 0x17f12cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937000)));
    // 0x17f130: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F130u;
    SET_GPR_U32(ctx, 31, 0x17F138u);
    ctx->pc = 0x17F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F130u;
    // 0x17f134: 0x8c5189ac  lw          $s1, -0x7654($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937004)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F130u, 0x17F138u)) {
        return;
    }
    ctx->pc = 0x17F138u;
label_17f138:
    // 0x17f138: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F138u;
    {
        const bool branch_taken_0x17f138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F138u;
        // 0x17f13c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f138) {
            ctx->pc = 0x17F160u;
            goto label_17f160;
        }
    }
    ctx->pc = 0x17F140u;
    // 0x17f140: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f144: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F144u;
    SET_GPR_U32(ctx, 31, 0x17F14Cu);
    ctx->pc = 0x17F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F144u;
    // 0x17f148: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F144u, 0x17F14Cu)) {
        return;
    }
    ctx->pc = 0x17F14Cu;
label_17f14c:
    // 0x17f14c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F14Cu;
    {
        const bool branch_taken_0x17f14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F14Cu;
        // 0x17f150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f14c) {
            ctx->pc = 0x17F160u;
            goto label_17f160;
        }
    }
    ctx->pc = 0x17F154u;
    // 0x17f154: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f158: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x17F158u;
    SET_GPR_U32(ctx, 31, 0x17F160u);
    ctx->pc = 0x17F15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F158u;
    // 0x17f15c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x17F158u, 0x17F160u)) {
        return;
    }
    ctx->pc = 0x17F160u;
label_17f160:
    // 0x17f160: 0xc043a42  jal         func_10E908
    ctx->pc = 0x17F160u;
    SET_GPR_U32(ctx, 31, 0x17F168u);
    ctx->pc = 0x17F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F160u;
    // 0x17f164: 0x8e4482f0  lw          $a0, -0x7D10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E908u, 0x17F160u, 0x17F168u)) {
        return;
    }
    ctx->pc = 0x17F168u;
label_17f168:
    // 0x17f168: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f16c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17f16cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x17f170: 0x8e7089a8  lw          $s0, -0x7658($s3)
    ctx->pc = 0x17f170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    // 0x17f174: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F174u;
    SET_GPR_U32(ctx, 31, 0x17F17Cu);
    ctx->pc = 0x17F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F174u;
    // 0x17f178: 0x8c5189b0  lw          $s1, -0x7650($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937008)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F174u, 0x17F17Cu)) {
        return;
    }
    ctx->pc = 0x17F17Cu;
label_17f17c:
    // 0x17f17c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F17Cu;
    {
        const bool branch_taken_0x17f17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F17Cu;
        // 0x17f180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f17c) {
            ctx->pc = 0x17F1A4u;
            goto label_17f1a4;
        }
    }
    ctx->pc = 0x17F184u;
    // 0x17f184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f188: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F188u;
    SET_GPR_U32(ctx, 31, 0x17F190u);
    ctx->pc = 0x17F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F188u;
    // 0x17f18c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F188u, 0x17F190u)) {
        return;
    }
    ctx->pc = 0x17F190u;
label_17f190:
    // 0x17f190: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F190u;
    {
        const bool branch_taken_0x17f190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F190u;
        // 0x17f194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f190) {
            ctx->pc = 0x17F1A4u;
            goto label_17f1a4;
        }
    }
    ctx->pc = 0x17F198u;
    // 0x17f198: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f19c: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x17F19Cu;
    SET_GPR_U32(ctx, 31, 0x17F1A4u);
    ctx->pc = 0x17F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F19Cu;
    // 0x17f1a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x17F19Cu, 0x17F1A4u)) {
        return;
    }
    ctx->pc = 0x17F1A4u;
label_17f1a4:
    // 0x17f1a4: 0xc043a44  jal         func_10E910
    ctx->pc = 0x17F1A4u;
    SET_GPR_U32(ctx, 31, 0x17F1ACu);
    ctx->pc = 0x17F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1A4u;
    // 0x17f1a8: 0x8e4482f0  lw          $a0, -0x7D10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E910u, 0x17F1A4u, 0x17F1ACu)) {
        return;
    }
    ctx->pc = 0x17F1ACu;
label_17f1ac:
    // 0x17f1ac: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f1b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17f1b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x17f1b4: 0x8e7089a8  lw          $s0, -0x7658($s3)
    ctx->pc = 0x17f1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    // 0x17f1b8: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F1B8u;
    SET_GPR_U32(ctx, 31, 0x17F1C0u);
    ctx->pc = 0x17F1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1B8u;
    // 0x17f1bc: 0x8c5189b4  lw          $s1, -0x764C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937012)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F1B8u, 0x17F1C0u)) {
        return;
    }
    ctx->pc = 0x17F1C0u;
label_17f1c0:
    // 0x17f1c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F1C0u;
    {
        const bool branch_taken_0x17f1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1C0u;
        // 0x17f1c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1c0) {
            ctx->pc = 0x17F1E8u;
            goto label_17f1e8;
        }
    }
    ctx->pc = 0x17F1C8u;
    // 0x17f1c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f1cc: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F1CCu;
    SET_GPR_U32(ctx, 31, 0x17F1D4u);
    ctx->pc = 0x17F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1CCu;
    // 0x17f1d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F1CCu, 0x17F1D4u)) {
        return;
    }
    ctx->pc = 0x17F1D4u;
label_17f1d4:
    // 0x17f1d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F1D4u;
    {
        const bool branch_taken_0x17f1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1D4u;
        // 0x17f1d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1d4) {
            ctx->pc = 0x17F1E8u;
            goto label_17f1e8;
        }
    }
    ctx->pc = 0x17F1DCu;
    // 0x17f1dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f1e0: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x17F1E0u;
    SET_GPR_U32(ctx, 31, 0x17F1E8u);
    ctx->pc = 0x17F1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1E0u;
    // 0x17f1e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x17F1E0u, 0x17F1E8u)) {
        return;
    }
    ctx->pc = 0x17F1E8u;
label_17f1e8:
    // 0x17f1e8: 0xc043a46  jal         func_10E918
    ctx->pc = 0x17F1E8u;
    SET_GPR_U32(ctx, 31, 0x17F1F0u);
    ctx->pc = 0x17F1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1E8u;
    // 0x17f1ec: 0x8e4482f0  lw          $a0, -0x7D10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E918u, 0x17F1E8u, 0x17F1F0u)) {
        return;
    }
    ctx->pc = 0x17F1F0u;
label_17f1f0:
    // 0x17f1f0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f1f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17f1f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x17f1f8: 0x8e7089a8  lw          $s0, -0x7658($s3)
    ctx->pc = 0x17f1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    // 0x17f1fc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F1FCu;
    SET_GPR_U32(ctx, 31, 0x17F204u);
    ctx->pc = 0x17F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1FCu;
    // 0x17f200: 0x8c5189b8  lw          $s1, -0x7648($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937016)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F1FCu, 0x17F204u)) {
        return;
    }
    ctx->pc = 0x17F204u;
label_17f204:
    // 0x17f204: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F204u;
    {
        const bool branch_taken_0x17f204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F204u;
        // 0x17f208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f204) {
            ctx->pc = 0x17F22Cu;
            goto label_17f22c;
        }
    }
    ctx->pc = 0x17F20Cu;
    // 0x17f20c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f210: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F210u;
    SET_GPR_U32(ctx, 31, 0x17F218u);
    ctx->pc = 0x17F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F210u;
    // 0x17f214: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F210u, 0x17F218u)) {
        return;
    }
    ctx->pc = 0x17F218u;
label_17f218:
    // 0x17f218: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F218u;
    {
        const bool branch_taken_0x17f218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F218u;
        // 0x17f21c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f218) {
            ctx->pc = 0x17F22Cu;
            goto label_17f22c;
        }
    }
    ctx->pc = 0x17F220u;
    // 0x17f220: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f224: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x17F224u;
    SET_GPR_U32(ctx, 31, 0x17F22Cu);
    ctx->pc = 0x17F228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F224u;
    // 0x17f228: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x17F224u, 0x17F22Cu)) {
        return;
    }
    ctx->pc = 0x17F22Cu;
label_17f22c:
    // 0x17f22c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f230: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f234: 0x8c5289a0  lw          $s2, -0x7660($v0)
    ctx->pc = 0x17f234u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3389A0u));
    // 0x17f238: 0x8c7189bc  lw          $s1, -0x7644($v1)
    ctx->pc = 0x17f238u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389BCu));
    // 0x17f23c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F23Cu;
    SET_GPR_U32(ctx, 31, 0x17F244u);
    ctx->pc = 0x17F240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F23Cu;
    // 0x17f240: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F23Cu, 0x17F244u)) {
        return;
    }
    ctx->pc = 0x17F244u;
label_17f244:
    // 0x17f244: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F244u;
    {
        const bool branch_taken_0x17f244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F244u;
        // 0x17f248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f244) {
            ctx->pc = 0x17F26Cu;
            goto label_17f26c;
        }
    }
    ctx->pc = 0x17F24Cu;
    // 0x17f24c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f250: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F250u;
    SET_GPR_U32(ctx, 31, 0x17F258u);
    ctx->pc = 0x17F254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F250u;
    // 0x17f254: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F250u, 0x17F258u)) {
        return;
    }
    ctx->pc = 0x17F258u;
label_17f258:
    // 0x17f258: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F258u;
    {
        const bool branch_taken_0x17f258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F258u;
        // 0x17f25c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f258) {
            ctx->pc = 0x17F26Cu;
            goto label_17f26c;
        }
    }
    ctx->pc = 0x17F260u;
    // 0x17f260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f264: 0xc07d2f8  jal         func_1F4BE0
    ctx->pc = 0x17F264u;
    SET_GPR_U32(ctx, 31, 0x17F26Cu);
    ctx->pc = 0x17F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F264u;
    // 0x17f268: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x17F264u, 0x17F26Cu)) {
        return;
    }
    ctx->pc = 0x17F26Cu;
label_17f26c:
    // 0x17f26c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f270: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f274: 0x8c528974  lw          $s2, -0x768C($v0)
    ctx->pc = 0x17f274u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x338974u));
    // 0x17f278: 0x8c7189c0  lw          $s1, -0x7640($v1)
    ctx->pc = 0x17f278u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389C0u));
    // 0x17f27c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F27Cu;
    SET_GPR_U32(ctx, 31, 0x17F284u);
    ctx->pc = 0x17F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F27Cu;
    // 0x17f280: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F27Cu, 0x17F284u)) {
        return;
    }
    ctx->pc = 0x17F284u;
label_17f284:
    // 0x17f284: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F284u;
    {
        const bool branch_taken_0x17f284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F284u;
        // 0x17f288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f284) {
            ctx->pc = 0x17F2ACu;
            goto label_17f2ac;
        }
    }
    ctx->pc = 0x17F28Cu;
    // 0x17f28c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f290: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F290u;
    SET_GPR_U32(ctx, 31, 0x17F298u);
    ctx->pc = 0x17F294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F290u;
    // 0x17f294: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F290u, 0x17F298u)) {
        return;
    }
    ctx->pc = 0x17F298u;
label_17f298:
    // 0x17f298: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F298u;
    {
        const bool branch_taken_0x17f298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F298u;
        // 0x17f29c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f298) {
            ctx->pc = 0x17F2ACu;
            goto label_17f2ac;
        }
    }
    ctx->pc = 0x17F2A0u;
    // 0x17f2a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2a4: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17F2A4u;
    SET_GPR_U32(ctx, 31, 0x17F2ACu);
    ctx->pc = 0x17F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2A4u;
    // 0x17f2a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17F2A4u, 0x17F2ACu)) {
        return;
    }
    ctx->pc = 0x17F2ACu;
label_17f2ac:
    // 0x17f2ac: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f2b0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f2b4: 0x8c528980  lw          $s2, -0x7680($v0)
    ctx->pc = 0x17f2b4u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x338980u));
    // 0x17f2b8: 0x8c7189c4  lw          $s1, -0x763C($v1)
    ctx->pc = 0x17f2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389C4u));
    // 0x17f2bc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F2BCu;
    SET_GPR_U32(ctx, 31, 0x17F2C4u);
    ctx->pc = 0x17F2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2BCu;
    // 0x17f2c0: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F2BCu, 0x17F2C4u)) {
        return;
    }
    ctx->pc = 0x17F2C4u;
label_17f2c4:
    // 0x17f2c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F2C4u;
    {
        const bool branch_taken_0x17f2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2C4u;
        // 0x17f2c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2c4) {
            ctx->pc = 0x17F2ECu;
            goto label_17f2ec;
        }
    }
    ctx->pc = 0x17F2CCu;
    // 0x17f2cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2d0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F2D0u;
    SET_GPR_U32(ctx, 31, 0x17F2D8u);
    ctx->pc = 0x17F2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2D0u;
    // 0x17f2d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F2D0u, 0x17F2D8u)) {
        return;
    }
    ctx->pc = 0x17F2D8u;
label_17f2d8:
    // 0x17f2d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F2D8u;
    {
        const bool branch_taken_0x17f2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2D8u;
        // 0x17f2dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2d8) {
            ctx->pc = 0x17F2ECu;
            goto label_17f2ec;
        }
    }
    ctx->pc = 0x17F2E0u;
    // 0x17f2e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2e4: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17F2E4u;
    SET_GPR_U32(ctx, 31, 0x17F2ECu);
    ctx->pc = 0x17F2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2E4u;
    // 0x17f2e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17F2E4u, 0x17F2ECu)) {
        return;
    }
    ctx->pc = 0x17F2ECu;
label_17f2ec:
    // 0x17f2ec: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f2f0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f2f4: 0x8c528984  lw          $s2, -0x767C($v0)
    ctx->pc = 0x17f2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x338984u));
    // 0x17f2f8: 0x8c7189c8  lw          $s1, -0x7638($v1)
    ctx->pc = 0x17f2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389C8u));
    // 0x17f2fc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F2FCu;
    SET_GPR_U32(ctx, 31, 0x17F304u);
    ctx->pc = 0x17F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2FCu;
    // 0x17f300: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F2FCu, 0x17F304u)) {
        return;
    }
    ctx->pc = 0x17F304u;
label_17f304:
    // 0x17f304: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F304u;
    {
        const bool branch_taken_0x17f304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F304u;
        // 0x17f308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f304) {
            ctx->pc = 0x17F32Cu;
            goto label_17f32c;
        }
    }
    ctx->pc = 0x17F30Cu;
    // 0x17f30c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f310: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F310u;
    SET_GPR_U32(ctx, 31, 0x17F318u);
    ctx->pc = 0x17F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F310u;
    // 0x17f314: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F310u, 0x17F318u)) {
        return;
    }
    ctx->pc = 0x17F318u;
label_17f318:
    // 0x17f318: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F318u;
    {
        const bool branch_taken_0x17f318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F318u;
        // 0x17f31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f318) {
            ctx->pc = 0x17F32Cu;
            goto label_17f32c;
        }
    }
    ctx->pc = 0x17F320u;
    // 0x17f320: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f324: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17F324u;
    SET_GPR_U32(ctx, 31, 0x17F32Cu);
    ctx->pc = 0x17F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F324u;
    // 0x17f328: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17F324u, 0x17F32Cu)) {
        return;
    }
    ctx->pc = 0x17F32Cu;
label_17f32c:
    // 0x17f32c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f330: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f334: 0x8c528988  lw          $s2, -0x7678($v0)
    ctx->pc = 0x17f334u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x338988u));
    // 0x17f338: 0x8c7189cc  lw          $s1, -0x7634($v1)
    ctx->pc = 0x17f338u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389CCu));
    // 0x17f33c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F33Cu;
    SET_GPR_U32(ctx, 31, 0x17F344u);
    ctx->pc = 0x17F340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F33Cu;
    // 0x17f340: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F33Cu, 0x17F344u)) {
        return;
    }
    ctx->pc = 0x17F344u;
label_17f344:
    // 0x17f344: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F344u;
    {
        const bool branch_taken_0x17f344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F344u;
        // 0x17f348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f344) {
            ctx->pc = 0x17F36Cu;
            goto label_17f36c;
        }
    }
    ctx->pc = 0x17F34Cu;
    // 0x17f34c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f350: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F350u;
    SET_GPR_U32(ctx, 31, 0x17F358u);
    ctx->pc = 0x17F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F350u;
    // 0x17f354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F350u, 0x17F358u)) {
        return;
    }
    ctx->pc = 0x17F358u;
label_17f358:
    // 0x17f358: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F358u;
    {
        const bool branch_taken_0x17f358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F358u;
        // 0x17f35c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f358) {
            ctx->pc = 0x17F36Cu;
            goto label_17f36c;
        }
    }
    ctx->pc = 0x17F360u;
    // 0x17f360: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f364: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17F364u;
    SET_GPR_U32(ctx, 31, 0x17F36Cu);
    ctx->pc = 0x17F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F364u;
    // 0x17f368: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17F364u, 0x17F36Cu)) {
        return;
    }
    ctx->pc = 0x17F36Cu;
label_17f36c:
    // 0x17f36c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f370: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f374: 0x8c52898c  lw          $s2, -0x7674($v0)
    ctx->pc = 0x17f374u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x33898Cu));
    // 0x17f378: 0x8c7189d0  lw          $s1, -0x7630($v1)
    ctx->pc = 0x17f378u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389D0u));
    // 0x17f37c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F37Cu;
    SET_GPR_U32(ctx, 31, 0x17F384u);
    ctx->pc = 0x17F380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F37Cu;
    // 0x17f380: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F37Cu, 0x17F384u)) {
        return;
    }
    ctx->pc = 0x17F384u;
label_17f384:
    // 0x17f384: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F384u;
    {
        const bool branch_taken_0x17f384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F384u;
        // 0x17f388: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f384) {
            ctx->pc = 0x17F3ACu;
            goto label_17f3ac;
        }
    }
    ctx->pc = 0x17F38Cu;
    // 0x17f38c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f390: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F390u;
    SET_GPR_U32(ctx, 31, 0x17F398u);
    ctx->pc = 0x17F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F390u;
    // 0x17f394: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F390u, 0x17F398u)) {
        return;
    }
    ctx->pc = 0x17F398u;
label_17f398:
    // 0x17f398: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F398u;
    {
        const bool branch_taken_0x17f398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F398u;
        // 0x17f39c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f398) {
            ctx->pc = 0x17F3ACu;
            goto label_17f3ac;
        }
    }
    ctx->pc = 0x17F3A0u;
    // 0x17f3a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3a4: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17F3A4u;
    SET_GPR_U32(ctx, 31, 0x17F3ACu);
    ctx->pc = 0x17F3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F3A4u;
    // 0x17f3a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17F3A4u, 0x17F3ACu)) {
        return;
    }
    ctx->pc = 0x17F3ACu;
label_17f3ac:
    // 0x17f3ac: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f3b0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f3b4: 0x8c528990  lw          $s2, -0x7670($v0)
    ctx->pc = 0x17f3b4u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x338990u));
    // 0x17f3b8: 0x8c7189d4  lw          $s1, -0x762C($v1)
    ctx->pc = 0x17f3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389D4u));
    // 0x17f3bc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F3BCu;
    SET_GPR_U32(ctx, 31, 0x17F3C4u);
    ctx->pc = 0x17F3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F3BCu;
    // 0x17f3c0: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F3BCu, 0x17F3C4u)) {
        return;
    }
    ctx->pc = 0x17F3C4u;
label_17f3c4:
    // 0x17f3c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F3C4u;
    {
        const bool branch_taken_0x17f3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3C4u;
        // 0x17f3c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3c4) {
            ctx->pc = 0x17F3ECu;
            goto label_17f3ec;
        }
    }
    ctx->pc = 0x17F3CCu;
    // 0x17f3cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3d0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F3D0u;
    SET_GPR_U32(ctx, 31, 0x17F3D8u);
    ctx->pc = 0x17F3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F3D0u;
    // 0x17f3d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F3D0u, 0x17F3D8u)) {
        return;
    }
    ctx->pc = 0x17F3D8u;
label_17f3d8:
    // 0x17f3d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F3D8u;
    {
        const bool branch_taken_0x17f3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3D8u;
        // 0x17f3dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3d8) {
            ctx->pc = 0x17F3ECu;
            goto label_17f3ec;
        }
    }
    ctx->pc = 0x17F3E0u;
    // 0x17f3e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3e4: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17F3E4u;
    SET_GPR_U32(ctx, 31, 0x17F3ECu);
    ctx->pc = 0x17F3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F3E4u;
    // 0x17f3e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17F3E4u, 0x17F3ECu)) {
        return;
    }
    ctx->pc = 0x17F3ECu;
label_17f3ec:
    // 0x17f3ec: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f3f0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f3f4: 0x8c528994  lw          $s2, -0x766C($v0)
    ctx->pc = 0x17f3f4u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x338994u));
    // 0x17f3f8: 0x8c7189d8  lw          $s1, -0x7628($v1)
    ctx->pc = 0x17f3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389D8u));
    // 0x17f3fc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F3FCu;
    SET_GPR_U32(ctx, 31, 0x17F404u);
    ctx->pc = 0x17F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F3FCu;
    // 0x17f400: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F3FCu, 0x17F404u)) {
        return;
    }
    ctx->pc = 0x17F404u;
label_17f404:
    // 0x17f404: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F404u;
    {
        const bool branch_taken_0x17f404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F404u;
        // 0x17f408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f404) {
            ctx->pc = 0x17F42Cu;
            goto label_17f42c;
        }
    }
    ctx->pc = 0x17F40Cu;
    // 0x17f40c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f410: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F410u;
    SET_GPR_U32(ctx, 31, 0x17F418u);
    ctx->pc = 0x17F414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F410u;
    // 0x17f414: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F410u, 0x17F418u)) {
        return;
    }
    ctx->pc = 0x17F418u;
label_17f418:
    // 0x17f418: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F418u;
    {
        const bool branch_taken_0x17f418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F418u;
        // 0x17f41c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f418) {
            ctx->pc = 0x17F42Cu;
            goto label_17f42c;
        }
    }
    ctx->pc = 0x17F420u;
    // 0x17f420: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f424: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17F424u;
    SET_GPR_U32(ctx, 31, 0x17F42Cu);
    ctx->pc = 0x17F428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F424u;
    // 0x17f428: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17F424u, 0x17F42Cu)) {
        return;
    }
    ctx->pc = 0x17F42Cu;
label_17f42c:
    // 0x17f42c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f430: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f434: 0x8c528998  lw          $s2, -0x7668($v0)
    ctx->pc = 0x17f434u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x338998u));
    // 0x17f438: 0x8c7189dc  lw          $s1, -0x7624($v1)
    ctx->pc = 0x17f438u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389DCu));
    // 0x17f43c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F43Cu;
    SET_GPR_U32(ctx, 31, 0x17F444u);
    ctx->pc = 0x17F440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F43Cu;
    // 0x17f440: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F43Cu, 0x17F444u)) {
        return;
    }
    ctx->pc = 0x17F444u;
label_17f444:
    // 0x17f444: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F444u;
    {
        const bool branch_taken_0x17f444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F444u;
        // 0x17f448: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f444) {
            ctx->pc = 0x17F46Cu;
            goto label_17f46c;
        }
    }
    ctx->pc = 0x17F44Cu;
    // 0x17f44c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f450: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F450u;
    SET_GPR_U32(ctx, 31, 0x17F458u);
    ctx->pc = 0x17F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F450u;
    // 0x17f454: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F450u, 0x17F458u)) {
        return;
    }
    ctx->pc = 0x17F458u;
label_17f458:
    // 0x17f458: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F458u;
    {
        const bool branch_taken_0x17f458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F458u;
        // 0x17f45c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f458) {
            ctx->pc = 0x17F46Cu;
            goto label_17f46c;
        }
    }
    ctx->pc = 0x17F460u;
    // 0x17f460: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f464: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17F464u;
    SET_GPR_U32(ctx, 31, 0x17F46Cu);
    ctx->pc = 0x17F468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F464u;
    // 0x17f468: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17F464u, 0x17F46Cu)) {
        return;
    }
    ctx->pc = 0x17F46Cu;
label_17f46c:
    // 0x17f46c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f470: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f474: 0x8c52899c  lw          $s2, -0x7664($v0)
    ctx->pc = 0x17f474u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x33899Cu));
    // 0x17f478: 0x8c7189e0  lw          $s1, -0x7620($v1)
    ctx->pc = 0x17f478u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389E0u));
    // 0x17f47c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F47Cu;
    SET_GPR_U32(ctx, 31, 0x17F484u);
    ctx->pc = 0x17F480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F47Cu;
    // 0x17f480: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F47Cu, 0x17F484u)) {
        return;
    }
    ctx->pc = 0x17F484u;
label_17f484:
    // 0x17f484: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F484u;
    {
        const bool branch_taken_0x17f484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F484u;
        // 0x17f488: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f484) {
            ctx->pc = 0x17F4ACu;
            goto label_17f4ac;
        }
    }
    ctx->pc = 0x17F48Cu;
    // 0x17f48c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f490: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F490u;
    SET_GPR_U32(ctx, 31, 0x17F498u);
    ctx->pc = 0x17F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F490u;
    // 0x17f494: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F490u, 0x17F498u)) {
        return;
    }
    ctx->pc = 0x17F498u;
label_17f498:
    // 0x17f498: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F498u;
    {
        const bool branch_taken_0x17f498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F498u;
        // 0x17f49c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f498) {
            ctx->pc = 0x17F4ACu;
            goto label_17f4ac;
        }
    }
    ctx->pc = 0x17F4A0u;
    // 0x17f4a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4a4: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17F4A4u;
    SET_GPR_U32(ctx, 31, 0x17F4ACu);
    ctx->pc = 0x17F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4A4u;
    // 0x17f4a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17F4A4u, 0x17F4ACu)) {
        return;
    }
    ctx->pc = 0x17F4ACu;
label_17f4ac:
    // 0x17f4ac: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f4b0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f4b4: 0x8c5289a4  lw          $s2, -0x765C($v0)
    ctx->pc = 0x17f4b4u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3389A4u));
    // 0x17f4b8: 0x8c7189e4  lw          $s1, -0x761C($v1)
    ctx->pc = 0x17f4b8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389E4u));
    // 0x17f4bc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F4BCu;
    SET_GPR_U32(ctx, 31, 0x17F4C4u);
    ctx->pc = 0x17F4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4BCu;
    // 0x17f4c0: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F4BCu, 0x17F4C4u)) {
        return;
    }
    ctx->pc = 0x17F4C4u;
label_17f4c4:
    // 0x17f4c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F4C4u;
    {
        const bool branch_taken_0x17f4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4C4u;
        // 0x17f4c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4c4) {
            ctx->pc = 0x17F4ECu;
            goto label_17f4ec;
        }
    }
    ctx->pc = 0x17F4CCu;
    // 0x17f4cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4d0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F4D0u;
    SET_GPR_U32(ctx, 31, 0x17F4D8u);
    ctx->pc = 0x17F4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4D0u;
    // 0x17f4d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F4D0u, 0x17F4D8u)) {
        return;
    }
    ctx->pc = 0x17F4D8u;
label_17f4d8:
    // 0x17f4d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F4D8u;
    {
        const bool branch_taken_0x17f4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4D8u;
        // 0x17f4dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4d8) {
            ctx->pc = 0x17F4ECu;
            goto label_17f4ec;
        }
    }
    ctx->pc = 0x17F4E0u;
    // 0x17f4e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4e4: 0xc07d2f8  jal         func_1F4BE0
    ctx->pc = 0x17F4E4u;
    SET_GPR_U32(ctx, 31, 0x17F4ECu);
    ctx->pc = 0x17F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4E4u;
    // 0x17f4e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x17F4E4u, 0x17F4ECu)) {
        return;
    }
    ctx->pc = 0x17F4ECu;
label_17f4ec:
    // 0x17f4ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17f4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f4f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17f4f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f4f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f4f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f4fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17f4fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f504: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17f504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f508: 0x3e00008  jr          $ra
    ctx->pc = 0x17F508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F508u;
        // 0x17f50c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F510u;
}

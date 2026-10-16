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

// Function: sub_0017EAE0
// Address: 0x17eae0 - 0x17f0f0
void sub_0017EAE0_0x17eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EAE0_0x17eae0");
#endif

    switch (ctx->pc) {
        case 0x17eb1cu: goto label_17eb1c;
        case 0x17eb28u: goto label_17eb28;
        case 0x17eb34u: goto label_17eb34;
        case 0x17eb40u: goto label_17eb40;
        case 0x17eb54u: goto label_17eb54;
        case 0x17eb68u: goto label_17eb68;
        case 0x17eb7cu: goto label_17eb7c;
        case 0x17eb90u: goto label_17eb90;
        case 0x17eba4u: goto label_17eba4;
        case 0x17ebb8u: goto label_17ebb8;
        case 0x17ebccu: goto label_17ebcc;
        case 0x17ebe0u: goto label_17ebe0;
        case 0x17ebf4u: goto label_17ebf4;
        case 0x17ec08u: goto label_17ec08;
        case 0x17ec1cu: goto label_17ec1c;
        case 0x17ec30u: goto label_17ec30;
        case 0x17ec44u: goto label_17ec44;
        case 0x17ec50u: goto label_17ec50;
        case 0x17ec5cu: goto label_17ec5c;
        case 0x17ec68u: goto label_17ec68;
        case 0x17ec84u: goto label_17ec84;
        case 0x17ec98u: goto label_17ec98;
        case 0x17ecacu: goto label_17ecac;
        case 0x17ecc4u: goto label_17ecc4;
        case 0x17ece0u: goto label_17ece0;
        case 0x17ecf4u: goto label_17ecf4;
        case 0x17ed08u: goto label_17ed08;
        case 0x17ed34u: goto label_17ed34;
        case 0x17ed48u: goto label_17ed48;
        case 0x17ed5cu: goto label_17ed5c;
        case 0x17ed80u: goto label_17ed80;
        case 0x17eda4u: goto label_17eda4;
        case 0x17edb8u: goto label_17edb8;
        case 0x17edccu: goto label_17edcc;
        case 0x17edf8u: goto label_17edf8;
        case 0x17ee0cu: goto label_17ee0c;
        case 0x17ee20u: goto label_17ee20;
        case 0x17ee4cu: goto label_17ee4c;
        case 0x17ee60u: goto label_17ee60;
        case 0x17ee74u: goto label_17ee74;
        case 0x17eea0u: goto label_17eea0;
        case 0x17eeb4u: goto label_17eeb4;
        case 0x17eec8u: goto label_17eec8;
        case 0x17eef4u: goto label_17eef4;
        case 0x17ef08u: goto label_17ef08;
        case 0x17ef1cu: goto label_17ef1c;
        case 0x17ef28u: goto label_17ef28;
        case 0x17ef50u: goto label_17ef50;
        case 0x17ef74u: goto label_17ef74;
        case 0x17ef88u: goto label_17ef88;
        case 0x17ef9cu: goto label_17ef9c;
        case 0x17efb4u: goto label_17efb4;
        case 0x17efd0u: goto label_17efd0;
        case 0x17efe4u: goto label_17efe4;
        case 0x17eff8u: goto label_17eff8;
        case 0x17f00cu: goto label_17f00c;
        case 0x17f018u: goto label_17f018;
        case 0x17f034u: goto label_17f034;
        case 0x17f048u: goto label_17f048;
        case 0x17f05cu: goto label_17f05c;
        case 0x17f090u: goto label_17f090;
        case 0x17f0a0u: goto label_17f0a0;
        case 0x17f0b0u: goto label_17f0b0;
        case 0x17f0c0u: goto label_17f0c0;
        default: break;
    }

    ctx->pc = 0x17eae0u;

    // 0x17eae0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17eae4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x17eae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x17eae8: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x17eae8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x17eaec: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x17eaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x17eaf0: 0x8e0482f0  lw          $a0, -0x7D10($s0)
    ctx->pc = 0x17eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x17eaf4: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x17eaf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x17eaf8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x17eaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x17eafc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x17eafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x17eb00: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x17eb00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb04: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x17eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x17eb08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17eb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17eb0c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x17eb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x17eb10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17eb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17eb14: 0xc043a40  jal         func_10E900
    ctx->pc = 0x17EB14u;
    SET_GPR_U32(ctx, 31, 0x17EB1Cu);
    ctx->pc = 0x17EB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB14u;
    // 0x17eb18: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E900u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E900u, 0x17EB14u, 0x17EB1Cu)) {
        return;
    }
    ctx->pc = 0x17EB1Cu;
label_17eb1c:
    // 0x17eb1c: 0x8e0482f0  lw          $a0, -0x7D10($s0)
    ctx->pc = 0x17eb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    // 0x17eb20: 0xc043a42  jal         func_10E908
    ctx->pc = 0x17EB20u;
    SET_GPR_U32(ctx, 31, 0x17EB28u);
    ctx->pc = 0x17EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB20u;
    // 0x17eb24: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E908u, 0x17EB20u, 0x17EB28u)) {
        return;
    }
    ctx->pc = 0x17EB28u;
label_17eb28:
    // 0x17eb28: 0x8e0482f0  lw          $a0, -0x7D10($s0)
    ctx->pc = 0x17eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    // 0x17eb2c: 0xc043a44  jal         func_10E910
    ctx->pc = 0x17EB2Cu;
    SET_GPR_U32(ctx, 31, 0x17EB34u);
    ctx->pc = 0x17EB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB2Cu;
    // 0x17eb30: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E910u, 0x17EB2Cu, 0x17EB34u)) {
        return;
    }
    ctx->pc = 0x17EB34u;
label_17eb34:
    // 0x17eb34: 0x8e0482f0  lw          $a0, -0x7D10($s0)
    ctx->pc = 0x17eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    // 0x17eb38: 0xc043a46  jal         func_10E918
    ctx->pc = 0x17EB38u;
    SET_GPR_U32(ctx, 31, 0x17EB40u);
    ctx->pc = 0x17EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB38u;
    // 0x17eb3c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E918u, 0x17EB38u, 0x17EB40u)) {
        return;
    }
    ctx->pc = 0x17EB40u;
label_17eb40:
    // 0x17eb40: 0x8e3089a8  lw          $s0, -0x7658($s1)
    ctx->pc = 0x17eb40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937000)));
    // 0x17eb44: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17eb48: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x17eb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17eb4c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17EB4Cu;
    SET_GPR_U32(ctx, 31, 0x17EB54u);
    ctx->pc = 0x17EB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB4Cu;
    // 0x17eb50: 0x8c5189ac  lw          $s1, -0x7654($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937004)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17EB4Cu, 0x17EB54u)) {
        return;
    }
    ctx->pc = 0x17EB54u;
label_17eb54:
    // 0x17eb54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EB54u;
    {
        const bool branch_taken_0x17eb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB54u;
        // 0x17eb58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb54) {
            ctx->pc = 0x17EB7Cu;
            goto label_17eb7c;
        }
    }
    ctx->pc = 0x17EB5Cu;
    // 0x17eb5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17eb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb60: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17EB60u;
    SET_GPR_U32(ctx, 31, 0x17EB68u);
    ctx->pc = 0x17EB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB60u;
    // 0x17eb64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17EB60u, 0x17EB68u)) {
        return;
    }
    ctx->pc = 0x17EB68u;
label_17eb68:
    // 0x17eb68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EB68u;
    {
        const bool branch_taken_0x17eb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB68u;
        // 0x17eb6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb68) {
            ctx->pc = 0x17EB7Cu;
            goto label_17eb7c;
        }
    }
    ctx->pc = 0x17EB70u;
    // 0x17eb70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17eb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb74: 0xc07d368  jal         func_1F4DA0
    ctx->pc = 0x17EB74u;
    SET_GPR_U32(ctx, 31, 0x17EB7Cu);
    ctx->pc = 0x17EB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB74u;
    // 0x17eb78: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x17EB74u, 0x17EB7Cu)) {
        return;
    }
    ctx->pc = 0x17EB7Cu;
label_17eb7c:
    // 0x17eb7c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17eb80: 0x8e7089a8  lw          $s0, -0x7658($s3)
    ctx->pc = 0x17eb80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    // 0x17eb84: 0x8c5189b0  lw          $s1, -0x7650($v0)
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389B0u));
    // 0x17eb88: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17EB88u;
    SET_GPR_U32(ctx, 31, 0x17EB90u);
    ctx->pc = 0x17EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB88u;
    // 0x17eb8c: 0x27b20004  addiu       $s2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17EB88u, 0x17EB90u)) {
        return;
    }
    ctx->pc = 0x17EB90u;
label_17eb90:
    // 0x17eb90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EB90u;
    {
        const bool branch_taken_0x17eb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB90u;
        // 0x17eb94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb90) {
            ctx->pc = 0x17EBB8u;
            goto label_17ebb8;
        }
    }
    ctx->pc = 0x17EB98u;
    // 0x17eb98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17eb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb9c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17EB9Cu;
    SET_GPR_U32(ctx, 31, 0x17EBA4u);
    ctx->pc = 0x17EBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB9Cu;
    // 0x17eba0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17EB9Cu, 0x17EBA4u)) {
        return;
    }
    ctx->pc = 0x17EBA4u;
label_17eba4:
    // 0x17eba4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EBA4u;
    {
        const bool branch_taken_0x17eba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBA4u;
        // 0x17eba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eba4) {
            ctx->pc = 0x17EBB8u;
            goto label_17ebb8;
        }
    }
    ctx->pc = 0x17EBACu;
    // 0x17ebac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ebacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebb0: 0xc07d368  jal         func_1F4DA0
    ctx->pc = 0x17EBB0u;
    SET_GPR_U32(ctx, 31, 0x17EBB8u);
    ctx->pc = 0x17EBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBB0u;
    // 0x17ebb4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x17EBB0u, 0x17EBB8u)) {
        return;
    }
    ctx->pc = 0x17EBB8u;
label_17ebb8:
    // 0x17ebb8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17ebbc: 0x8e7089a8  lw          $s0, -0x7658($s3)
    ctx->pc = 0x17ebbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    // 0x17ebc0: 0x8c5189b4  lw          $s1, -0x764C($v0)
    ctx->pc = 0x17ebc0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389B4u));
    // 0x17ebc4: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17EBC4u;
    SET_GPR_U32(ctx, 31, 0x17EBCCu);
    ctx->pc = 0x17EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBC4u;
    // 0x17ebc8: 0x27b20008  addiu       $s2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17EBC4u, 0x17EBCCu)) {
        return;
    }
    ctx->pc = 0x17EBCCu;
label_17ebcc:
    // 0x17ebcc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EBCCu;
    {
        const bool branch_taken_0x17ebcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBCCu;
        // 0x17ebd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebcc) {
            ctx->pc = 0x17EBF4u;
            goto label_17ebf4;
        }
    }
    ctx->pc = 0x17EBD4u;
    // 0x17ebd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ebd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebd8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17EBD8u;
    SET_GPR_U32(ctx, 31, 0x17EBE0u);
    ctx->pc = 0x17EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBD8u;
    // 0x17ebdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17EBD8u, 0x17EBE0u)) {
        return;
    }
    ctx->pc = 0x17EBE0u;
label_17ebe0:
    // 0x17ebe0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EBE0u;
    {
        const bool branch_taken_0x17ebe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBE0u;
        // 0x17ebe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebe0) {
            ctx->pc = 0x17EBF4u;
            goto label_17ebf4;
        }
    }
    ctx->pc = 0x17EBE8u;
    // 0x17ebe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ebe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebec: 0xc07d368  jal         func_1F4DA0
    ctx->pc = 0x17EBECu;
    SET_GPR_U32(ctx, 31, 0x17EBF4u);
    ctx->pc = 0x17EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBECu;
    // 0x17ebf0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x17EBECu, 0x17EBF4u)) {
        return;
    }
    ctx->pc = 0x17EBF4u;
label_17ebf4:
    // 0x17ebf4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17ebf8: 0x8e7089a8  lw          $s0, -0x7658($s3)
    ctx->pc = 0x17ebf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    // 0x17ebfc: 0x8c5189b8  lw          $s1, -0x7648($v0)
    ctx->pc = 0x17ebfcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389B8u));
    // 0x17ec00: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17EC00u;
    SET_GPR_U32(ctx, 31, 0x17EC08u);
    ctx->pc = 0x17EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC00u;
    // 0x17ec04: 0x27b2000c  addiu       $s2, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17EC00u, 0x17EC08u)) {
        return;
    }
    ctx->pc = 0x17EC08u;
label_17ec08:
    // 0x17ec08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EC08u;
    {
        const bool branch_taken_0x17ec08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC08u;
        // 0x17ec0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec08) {
            ctx->pc = 0x17EC30u;
            goto label_17ec30;
        }
    }
    ctx->pc = 0x17EC10u;
    // 0x17ec10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec14: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17EC14u;
    SET_GPR_U32(ctx, 31, 0x17EC1Cu);
    ctx->pc = 0x17EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC14u;
    // 0x17ec18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17EC14u, 0x17EC1Cu)) {
        return;
    }
    ctx->pc = 0x17EC1Cu;
label_17ec1c:
    // 0x17ec1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EC1Cu;
    {
        const bool branch_taken_0x17ec1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC1Cu;
        // 0x17ec20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec1c) {
            ctx->pc = 0x17EC30u;
            goto label_17ec30;
        }
    }
    ctx->pc = 0x17EC24u;
    // 0x17ec24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ec24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec28: 0xc07d368  jal         func_1F4DA0
    ctx->pc = 0x17EC28u;
    SET_GPR_U32(ctx, 31, 0x17EC30u);
    ctx->pc = 0x17EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC28u;
    // 0x17ec2c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x17EC28u, 0x17EC30u)) {
        return;
    }
    ctx->pc = 0x17EC30u;
label_17ec30:
    // 0x17ec30: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x17ec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ec34: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x17ec34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x17ec38: 0x8e8482f0  lw          $a0, -0x7D10($s4)
    ctx->pc = 0x17ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935280)));
    // 0x17ec3c: 0xc043a48  jal         func_10E920
    ctx->pc = 0x17EC3Cu;
    SET_GPR_U32(ctx, 31, 0x17EC44u);
    ctx->pc = 0x17EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC3Cu;
    // 0x17ec40: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E920u, 0x17EC3Cu, 0x17EC44u)) {
        return;
    }
    ctx->pc = 0x17EC44u;
label_17ec44:
    // 0x17ec44: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x17ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ec48: 0xc043a80  jal         func_10EA00
    ctx->pc = 0x17EC48u;
    SET_GPR_U32(ctx, 31, 0x17EC50u);
    ctx->pc = 0x17EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC48u;
    // 0x17ec4c: 0x8e8482f0  lw          $a0, -0x7D10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10EA00u, 0x17EC48u, 0x17EC50u)) {
        return;
    }
    ctx->pc = 0x17EC50u;
label_17ec50:
    // 0x17ec50: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x17ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ec54: 0xc043ab8  jal         func_10EAE0
    ctx->pc = 0x17EC54u;
    SET_GPR_U32(ctx, 31, 0x17EC5Cu);
    ctx->pc = 0x17EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC54u;
    // 0x17ec58: 0x8e8482f0  lw          $a0, -0x7D10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EAE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10EAE0u, 0x17EC54u, 0x17EC5Cu)) {
        return;
    }
    ctx->pc = 0x17EC5Cu;
label_17ec5c:
    // 0x17ec5c: 0xc7ac000c  lwc1        $f12, 0xC($sp)
    ctx->pc = 0x17ec5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ec60: 0xc043af2  jal         func_10EBC8
    ctx->pc = 0x17EC60u;
    SET_GPR_U32(ctx, 31, 0x17EC68u);
    ctx->pc = 0x17EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC60u;
    // 0x17ec64: 0x8e8482f0  lw          $a0, -0x7D10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10EBC8u, 0x17EC60u, 0x17EC68u)) {
        return;
    }
    ctx->pc = 0x17EC68u;
label_17ec68:
    // 0x17ec68: 0x8e0389a0  lw          $v1, -0x7660($s0)
    ctx->pc = 0x17ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936992)));
    // 0x17ec6c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17ec70: 0x8e7189a8  lw          $s1, -0x7658($s3)
    ctx->pc = 0x17ec70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    // 0x17ec74: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x17ec74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17ec78: 0x8c5089bc  lw          $s0, -0x7644($v0)
    ctx->pc = 0x17ec78u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3389BCu));
    // 0x17ec7c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17EC7Cu;
    SET_GPR_U32(ctx, 31, 0x17EC84u);
    ctx->pc = 0x17EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC7Cu;
    // 0x17ec80: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17EC7Cu, 0x17EC84u)) {
        return;
    }
    ctx->pc = 0x17EC84u;
label_17ec84:
    // 0x17ec84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EC84u;
    {
        const bool branch_taken_0x17ec84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC84u;
        // 0x17ec88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec84) {
            ctx->pc = 0x17ECACu;
            goto label_17ecac;
        }
    }
    ctx->pc = 0x17EC8Cu;
    // 0x17ec8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ec8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec90: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17EC90u;
    SET_GPR_U32(ctx, 31, 0x17EC98u);
    ctx->pc = 0x17EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC90u;
    // 0x17ec94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17EC90u, 0x17EC98u)) {
        return;
    }
    ctx->pc = 0x17EC98u;
label_17ec98:
    // 0x17ec98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EC98u;
    {
        const bool branch_taken_0x17ec98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC98u;
        // 0x17ec9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec98) {
            ctx->pc = 0x17ECACu;
            goto label_17ecac;
        }
    }
    ctx->pc = 0x17ECA0u;
    // 0x17eca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17eca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eca4: 0xc07d352  jal         func_1F4D48
    ctx->pc = 0x17ECA4u;
    SET_GPR_U32(ctx, 31, 0x17ECACu);
    ctx->pc = 0x17ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECA4u;
    // 0x17eca8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D48u, 0x17ECA4u, 0x17ECACu)) {
        return;
    }
    ctx->pc = 0x17ECACu;
label_17ecac:
    // 0x17ecac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ecb0: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x17ecb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x17ecb4: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x17ecb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ecb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecbc: 0xc079238  jal         func_1E48E0
    ctx->pc = 0x17ECBCu;
    SET_GPR_U32(ctx, 31, 0x17ECC4u);
    ctx->pc = 0x17ECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECBCu;
    // 0x17ecc0: 0xaec289a0  sw          $v0, -0x7660($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294936992), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48E0u, 0x17ECBCu, 0x17ECC4u)) {
        return;
    }
    ctx->pc = 0x17ECC4u;
label_17ecc4:
    // 0x17ecc4: 0x8e038974  lw          $v1, -0x768C($s0)
    ctx->pc = 0x17ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936948)));
    // 0x17ecc8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17eccc: 0x8e7189a8  lw          $s1, -0x7658($s3)
    ctx->pc = 0x17ecccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    // 0x17ecd0: 0x27b20014  addiu       $s2, $sp, 0x14
    ctx->pc = 0x17ecd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x17ecd4: 0x8c5089c0  lw          $s0, -0x7640($v0)
    ctx->pc = 0x17ecd4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3389C0u));
    // 0x17ecd8: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17ECD8u;
    SET_GPR_U32(ctx, 31, 0x17ECE0u);
    ctx->pc = 0x17ECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECD8u;
    // 0x17ecdc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17ECD8u, 0x17ECE0u)) {
        return;
    }
    ctx->pc = 0x17ECE0u;
label_17ece0:
    // 0x17ece0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17ECE0u;
    {
        const bool branch_taken_0x17ece0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECE0u;
        // 0x17ece4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ece0) {
            ctx->pc = 0x17ED08u;
            goto label_17ed08;
        }
    }
    ctx->pc = 0x17ECE8u;
    // 0x17ece8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ece8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecec: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17ECECu;
    SET_GPR_U32(ctx, 31, 0x17ECF4u);
    ctx->pc = 0x17ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECECu;
    // 0x17ecf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17ECECu, 0x17ECF4u)) {
        return;
    }
    ctx->pc = 0x17ECF4u;
label_17ecf4:
    // 0x17ecf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17ECF4u;
    {
        const bool branch_taken_0x17ecf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECF4u;
        // 0x17ecf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecf4) {
            ctx->pc = 0x17ED08u;
            goto label_17ed08;
        }
    }
    ctx->pc = 0x17ECFCu;
    // 0x17ecfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ecfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed00: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x17ED00u;
    SET_GPR_U32(ctx, 31, 0x17ED08u);
    ctx->pc = 0x17ED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED00u;
    // 0x17ed04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x17ED00u, 0x17ED08u)) {
        return;
    }
    ctx->pc = 0x17ED08u;
label_17ed08:
    // 0x17ed08: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17ed0c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x17ed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x17ed10: 0x8c458980  lw          $a1, -0x7680($v0)
    ctx->pc = 0x17ed10u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338980u));
    // 0x17ed14: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17ed18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17ed18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed1c: 0xaea48974  sw          $a0, -0x768C($s5)
    ctx->pc = 0x17ed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294936948), GPR_U32(ctx, 4));
    // 0x17ed20: 0x8c7189c4  lw          $s1, -0x763C($v1)
    ctx->pc = 0x17ed20u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389C4u));
    // 0x17ed24: 0x27b20018  addiu       $s2, $sp, 0x18
    ctx->pc = 0x17ed24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x17ed28: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x17ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x17ed2c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17ED2Cu;
    SET_GPR_U32(ctx, 31, 0x17ED34u);
    ctx->pc = 0x17ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED2Cu;
    // 0x17ed30: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17ED2Cu, 0x17ED34u)) {
        return;
    }
    ctx->pc = 0x17ED34u;
label_17ed34:
    // 0x17ed34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17ED34u;
    {
        const bool branch_taken_0x17ed34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED34u;
        // 0x17ed38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed34) {
            ctx->pc = 0x17ED5Cu;
            goto label_17ed5c;
        }
    }
    ctx->pc = 0x17ED3Cu;
    // 0x17ed3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ed3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed40: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17ED40u;
    SET_GPR_U32(ctx, 31, 0x17ED48u);
    ctx->pc = 0x17ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED40u;
    // 0x17ed44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17ED40u, 0x17ED48u)) {
        return;
    }
    ctx->pc = 0x17ED48u;
label_17ed48:
    // 0x17ed48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17ED48u;
    {
        const bool branch_taken_0x17ed48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED48u;
        // 0x17ed4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed48) {
            ctx->pc = 0x17ED5Cu;
            goto label_17ed5c;
        }
    }
    ctx->pc = 0x17ED50u;
    // 0x17ed50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ed50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed54: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x17ED54u;
    SET_GPR_U32(ctx, 31, 0x17ED5Cu);
    ctx->pc = 0x17ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED54u;
    // 0x17ed58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x17ED54u, 0x17ED5Cu)) {
        return;
    }
    ctx->pc = 0x17ED5Cu;
label_17ed5c:
    // 0x17ed5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ed60: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17ed64: 0x8c64870c  lw          $a0, -0x78F4($v1)
    ctx->pc = 0x17ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x17ed68: 0xae828980  sw          $v0, -0x7680($s4)
    ctx->pc = 0x17ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294936960), GPR_U32(ctx, 2));
    // 0x17ed6c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x17ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17ed70: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17ED70u;
    {
        const bool branch_taken_0x17ed70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED70u;
        // 0x17ed74: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed70) {
            ctx->pc = 0x17ED84u;
            goto label_17ed84;
        }
    }
    ctx->pc = 0x17ED78u;
    // 0x17ed78: 0xc05e280  jal         func_178A00
    ctx->pc = 0x17ED78u;
    SET_GPR_U32(ctx, 31, 0x17ED80u);
    ctx->pc = 0x178A00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178A00u, 0x17ED78u, 0x17ED80u)) {
        return;
    }
    ctx->pc = 0x17ED80u;
label_17ed80:
    // 0x17ed80: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_17ed84:
    // 0x17ed84: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17ed88: 0x8c448984  lw          $a0, -0x767C($v0)
    ctx->pc = 0x17ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936964)));
    // 0x17ed8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17ed8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed90: 0x8c7189c8  lw          $s1, -0x7638($v1)
    ctx->pc = 0x17ed90u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389C8u));
    // 0x17ed94: 0x27b2001c  addiu       $s2, $sp, 0x1C
    ctx->pc = 0x17ed94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x17ed98: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x17ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x17ed9c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17ED9Cu;
    SET_GPR_U32(ctx, 31, 0x17EDA4u);
    ctx->pc = 0x17EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED9Cu;
    // 0x17eda0: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17ED9Cu, 0x17EDA4u)) {
        return;
    }
    ctx->pc = 0x17EDA4u;
label_17eda4:
    // 0x17eda4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EDA4u;
    {
        const bool branch_taken_0x17eda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDA4u;
        // 0x17eda8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eda4) {
            ctx->pc = 0x17EDCCu;
            goto label_17edcc;
        }
    }
    ctx->pc = 0x17EDACu;
    // 0x17edac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17edacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17edb0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17EDB0u;
    SET_GPR_U32(ctx, 31, 0x17EDB8u);
    ctx->pc = 0x17EDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDB0u;
    // 0x17edb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17EDB0u, 0x17EDB8u)) {
        return;
    }
    ctx->pc = 0x17EDB8u;
label_17edb8:
    // 0x17edb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EDB8u;
    {
        const bool branch_taken_0x17edb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDB8u;
        // 0x17edbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edb8) {
            ctx->pc = 0x17EDCCu;
            goto label_17edcc;
        }
    }
    ctx->pc = 0x17EDC0u;
    // 0x17edc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17edc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17edc4: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x17EDC4u;
    SET_GPR_U32(ctx, 31, 0x17EDCCu);
    ctx->pc = 0x17EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDC4u;
    // 0x17edc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x17EDC4u, 0x17EDCCu)) {
        return;
    }
    ctx->pc = 0x17EDCCu;
label_17edcc:
    // 0x17edcc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17edccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17edd0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x17edd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x17edd4: 0x8c458988  lw          $a1, -0x7678($v0)
    ctx->pc = 0x17edd4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338988u));
    // 0x17edd8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17eddc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17eddcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ede0: 0xae848984  sw          $a0, -0x767C($s4)
    ctx->pc = 0x17ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294936964), GPR_U32(ctx, 4));
    // 0x17ede4: 0x8c7189cc  lw          $s1, -0x7634($v1)
    ctx->pc = 0x17ede4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389CCu));
    // 0x17ede8: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x17ede8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17edec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17edecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17edf0: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17EDF0u;
    SET_GPR_U32(ctx, 31, 0x17EDF8u);
    ctx->pc = 0x17EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDF0u;
    // 0x17edf4: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17EDF0u, 0x17EDF8u)) {
        return;
    }
    ctx->pc = 0x17EDF8u;
label_17edf8:
    // 0x17edf8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EDF8u;
    {
        const bool branch_taken_0x17edf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDF8u;
        // 0x17edfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edf8) {
            ctx->pc = 0x17EE20u;
            goto label_17ee20;
        }
    }
    ctx->pc = 0x17EE00u;
    // 0x17ee00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ee00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee04: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17EE04u;
    SET_GPR_U32(ctx, 31, 0x17EE0Cu);
    ctx->pc = 0x17EE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE04u;
    // 0x17ee08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17EE04u, 0x17EE0Cu)) {
        return;
    }
    ctx->pc = 0x17EE0Cu;
label_17ee0c:
    // 0x17ee0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EE0Cu;
    {
        const bool branch_taken_0x17ee0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE0Cu;
        // 0x17ee10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee0c) {
            ctx->pc = 0x17EE20u;
            goto label_17ee20;
        }
    }
    ctx->pc = 0x17EE14u;
    // 0x17ee14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ee14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee18: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x17EE18u;
    SET_GPR_U32(ctx, 31, 0x17EE20u);
    ctx->pc = 0x17EE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE18u;
    // 0x17ee1c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x17EE18u, 0x17EE20u)) {
        return;
    }
    ctx->pc = 0x17EE20u;
label_17ee20:
    // 0x17ee20: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17ee24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ee28: 0x8c45898c  lw          $a1, -0x7674($v0)
    ctx->pc = 0x17ee28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33898Cu));
    // 0x17ee2c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17ee30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17ee30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee34: 0xaea48988  sw          $a0, -0x7678($s5)
    ctx->pc = 0x17ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294936968), GPR_U32(ctx, 4));
    // 0x17ee38: 0x8c7189d0  lw          $s1, -0x7630($v1)
    ctx->pc = 0x17ee38u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389D0u));
    // 0x17ee3c: 0x27b20024  addiu       $s2, $sp, 0x24
    ctx->pc = 0x17ee3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x17ee40: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x17ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x17ee44: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17EE44u;
    SET_GPR_U32(ctx, 31, 0x17EE4Cu);
    ctx->pc = 0x17EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE44u;
    // 0x17ee48: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17EE44u, 0x17EE4Cu)) {
        return;
    }
    ctx->pc = 0x17EE4Cu;
label_17ee4c:
    // 0x17ee4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EE4Cu;
    {
        const bool branch_taken_0x17ee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE4Cu;
        // 0x17ee50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee4c) {
            ctx->pc = 0x17EE74u;
            goto label_17ee74;
        }
    }
    ctx->pc = 0x17EE54u;
    // 0x17ee54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ee54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee58: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17EE58u;
    SET_GPR_U32(ctx, 31, 0x17EE60u);
    ctx->pc = 0x17EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE58u;
    // 0x17ee5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17EE58u, 0x17EE60u)) {
        return;
    }
    ctx->pc = 0x17EE60u;
label_17ee60:
    // 0x17ee60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EE60u;
    {
        const bool branch_taken_0x17ee60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE60u;
        // 0x17ee64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee60) {
            ctx->pc = 0x17EE74u;
            goto label_17ee74;
        }
    }
    ctx->pc = 0x17EE68u;
    // 0x17ee68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ee68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee6c: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x17EE6Cu;
    SET_GPR_U32(ctx, 31, 0x17EE74u);
    ctx->pc = 0x17EE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE6Cu;
    // 0x17ee70: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x17EE6Cu, 0x17EE74u)) {
        return;
    }
    ctx->pc = 0x17EE74u;
label_17ee74:
    // 0x17ee74: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17ee78: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x17ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17ee7c: 0x8c458990  lw          $a1, -0x7670($v0)
    ctx->pc = 0x17ee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338990u));
    // 0x17ee80: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17ee84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17ee84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee88: 0xae84898c  sw          $a0, -0x7674($s4)
    ctx->pc = 0x17ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294936972), GPR_U32(ctx, 4));
    // 0x17ee8c: 0x8c7189d4  lw          $s1, -0x762C($v1)
    ctx->pc = 0x17ee8cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389D4u));
    // 0x17ee90: 0x27b20028  addiu       $s2, $sp, 0x28
    ctx->pc = 0x17ee90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x17ee94: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x17ee94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x17ee98: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17EE98u;
    SET_GPR_U32(ctx, 31, 0x17EEA0u);
    ctx->pc = 0x17EE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE98u;
    // 0x17ee9c: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17EE98u, 0x17EEA0u)) {
        return;
    }
    ctx->pc = 0x17EEA0u;
label_17eea0:
    // 0x17eea0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EEA0u;
    {
        const bool branch_taken_0x17eea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEA0u;
        // 0x17eea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eea0) {
            ctx->pc = 0x17EEC8u;
            goto label_17eec8;
        }
    }
    ctx->pc = 0x17EEA8u;
    // 0x17eea8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17eea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eeac: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17EEACu;
    SET_GPR_U32(ctx, 31, 0x17EEB4u);
    ctx->pc = 0x17EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EEACu;
    // 0x17eeb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17EEACu, 0x17EEB4u)) {
        return;
    }
    ctx->pc = 0x17EEB4u;
label_17eeb4:
    // 0x17eeb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EEB4u;
    {
        const bool branch_taken_0x17eeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEB4u;
        // 0x17eeb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eeb4) {
            ctx->pc = 0x17EEC8u;
            goto label_17eec8;
        }
    }
    ctx->pc = 0x17EEBCu;
    // 0x17eebc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17eebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eec0: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x17EEC0u;
    SET_GPR_U32(ctx, 31, 0x17EEC8u);
    ctx->pc = 0x17EEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EEC0u;
    // 0x17eec4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x17EEC0u, 0x17EEC8u)) {
        return;
    }
    ctx->pc = 0x17EEC8u;
label_17eec8:
    // 0x17eec8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17eecc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17eed0: 0x8c458994  lw          $a1, -0x766C($v0)
    ctx->pc = 0x17eed0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338994u));
    // 0x17eed4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17eed8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17eed8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eedc: 0xaea48990  sw          $a0, -0x7670($s5)
    ctx->pc = 0x17eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294936976), GPR_U32(ctx, 4));
    // 0x17eee0: 0x8c7189d8  lw          $s1, -0x7628($v1)
    ctx->pc = 0x17eee0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389D8u));
    // 0x17eee4: 0x27b2002c  addiu       $s2, $sp, 0x2C
    ctx->pc = 0x17eee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x17eee8: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x17eee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x17eeec: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17EEECu;
    SET_GPR_U32(ctx, 31, 0x17EEF4u);
    ctx->pc = 0x17EEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EEECu;
    // 0x17eef0: 0x8e7089a8  lw          $s0, -0x7658($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17EEECu, 0x17EEF4u)) {
        return;
    }
    ctx->pc = 0x17EEF4u;
label_17eef4:
    // 0x17eef4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EEF4u;
    {
        const bool branch_taken_0x17eef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEF4u;
        // 0x17eef8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eef4) {
            ctx->pc = 0x17EF1Cu;
            goto label_17ef1c;
        }
    }
    ctx->pc = 0x17EEFCu;
    // 0x17eefc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17eefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef00: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17EF00u;
    SET_GPR_U32(ctx, 31, 0x17EF08u);
    ctx->pc = 0x17EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF00u;
    // 0x17ef04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17EF00u, 0x17EF08u)) {
        return;
    }
    ctx->pc = 0x17EF08u;
label_17ef08:
    // 0x17ef08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EF08u;
    {
        const bool branch_taken_0x17ef08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF08u;
        // 0x17ef0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef08) {
            ctx->pc = 0x17EF1Cu;
            goto label_17ef1c;
        }
    }
    ctx->pc = 0x17EF10u;
    // 0x17ef10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ef10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef14: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x17EF14u;
    SET_GPR_U32(ctx, 31, 0x17EF1Cu);
    ctx->pc = 0x17EF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF14u;
    // 0x17ef18: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x17EF14u, 0x17EF1Cu)) {
        return;
    }
    ctx->pc = 0x17EF1Cu;
label_17ef1c:
    // 0x17ef1c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x17ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x17ef20: 0xc0561b6  jal         func_1586D8
    ctx->pc = 0x17EF20u;
    SET_GPR_U32(ctx, 31, 0x17EF28u);
    ctx->pc = 0x17EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF20u;
    // 0x17ef24: 0xae828994  sw          $v0, -0x766C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294936980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1586D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1586D8u, 0x17EF20u, 0x17EF28u)) {
        return;
    }
    ctx->pc = 0x17EF28u;
label_17ef28:
    // 0x17ef28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ef28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17ef2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17ef30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17ef30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ef34: 0x8e828994  lw          $v0, -0x766C($s4)
    ctx->pc = 0x17ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936980)));
    // 0x17ef38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EF38u;
    {
        const bool branch_taken_0x17ef38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ef38) {
            ctx->pc = 0x17EF48u;
            goto label_17ef48;
        }
    }
    ctx->pc = 0x17EF40u;
    // 0x17ef40: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x17ef40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x17ef44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17ef44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17ef48:
    // 0x17ef48: 0xc056202  jal         func_158808
    ctx->pc = 0x17EF48u;
    SET_GPR_U32(ctx, 31, 0x17EF50u);
    ctx->pc = 0x158808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158808u, 0x17EF48u, 0x17EF50u)) {
        return;
    }
    ctx->pc = 0x17EF50u;
label_17ef50:
    // 0x17ef50: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17ef54: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17ef58: 0x8c448998  lw          $a0, -0x7668($v0)
    ctx->pc = 0x17ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338998u));
    // 0x17ef5c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17ef5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef60: 0x8e7089a8  lw          $s0, -0x7658($s3)
    ctx->pc = 0x17ef60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    // 0x17ef64: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x17ef64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17ef68: 0x8c7189dc  lw          $s1, -0x7624($v1)
    ctx->pc = 0x17ef68u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3389DCu));
    // 0x17ef6c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17EF6Cu;
    SET_GPR_U32(ctx, 31, 0x17EF74u);
    ctx->pc = 0x17EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF6Cu;
    // 0x17ef70: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17EF6Cu, 0x17EF74u)) {
        return;
    }
    ctx->pc = 0x17EF74u;
label_17ef74:
    // 0x17ef74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EF74u;
    {
        const bool branch_taken_0x17ef74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF74u;
        // 0x17ef78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef74) {
            ctx->pc = 0x17EF9Cu;
            goto label_17ef9c;
        }
    }
    ctx->pc = 0x17EF7Cu;
    // 0x17ef7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ef7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef80: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17EF80u;
    SET_GPR_U32(ctx, 31, 0x17EF88u);
    ctx->pc = 0x17EF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF80u;
    // 0x17ef84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17EF80u, 0x17EF88u)) {
        return;
    }
    ctx->pc = 0x17EF88u;
label_17ef88:
    // 0x17ef88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EF88u;
    {
        const bool branch_taken_0x17ef88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF88u;
        // 0x17ef8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef88) {
            ctx->pc = 0x17EF9Cu;
            goto label_17ef9c;
        }
    }
    ctx->pc = 0x17EF90u;
    // 0x17ef90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ef90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef94: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x17EF94u;
    SET_GPR_U32(ctx, 31, 0x17EF9Cu);
    ctx->pc = 0x17EF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF94u;
    // 0x17ef98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x17EF94u, 0x17EF9Cu)) {
        return;
    }
    ctx->pc = 0x17EF9Cu;
label_17ef9c:
    // 0x17ef9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17efa0: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x17efa0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x17efa4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x17efa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17efa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17efa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17efac: 0xc07923e  jal         func_1E48F8
    ctx->pc = 0x17EFACu;
    SET_GPR_U32(ctx, 31, 0x17EFB4u);
    ctx->pc = 0x17EFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFACu;
    // 0x17efb0: 0xaea28998  sw          $v0, -0x7668($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294936984), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48F8u, 0x17EFACu, 0x17EFB4u)) {
        return;
    }
    ctx->pc = 0x17EFB4u;
label_17efb4:
    // 0x17efb4: 0x8e03899c  lw          $v1, -0x7664($s0)
    ctx->pc = 0x17efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936988)));
    // 0x17efb8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17efbc: 0x8e7189a8  lw          $s1, -0x7658($s3)
    ctx->pc = 0x17efbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    // 0x17efc0: 0x27b20034  addiu       $s2, $sp, 0x34
    ctx->pc = 0x17efc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x17efc4: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x17efc4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3389E0u));
    // 0x17efc8: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17EFC8u;
    SET_GPR_U32(ctx, 31, 0x17EFD0u);
    ctx->pc = 0x17EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFC8u;
    // 0x17efcc: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17EFC8u, 0x17EFD0u)) {
        return;
    }
    ctx->pc = 0x17EFD0u;
label_17efd0:
    // 0x17efd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EFD0u;
    {
        const bool branch_taken_0x17efd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFD0u;
        // 0x17efd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efd0) {
            ctx->pc = 0x17EFF8u;
            goto label_17eff8;
        }
    }
    ctx->pc = 0x17EFD8u;
    // 0x17efd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17efd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17efdc: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17EFDCu;
    SET_GPR_U32(ctx, 31, 0x17EFE4u);
    ctx->pc = 0x17EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFDCu;
    // 0x17efe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17EFDCu, 0x17EFE4u)) {
        return;
    }
    ctx->pc = 0x17EFE4u;
label_17efe4:
    // 0x17efe4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EFE4u;
    {
        const bool branch_taken_0x17efe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFE4u;
        // 0x17efe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efe4) {
            ctx->pc = 0x17EFF8u;
            goto label_17eff8;
        }
    }
    ctx->pc = 0x17EFECu;
    // 0x17efec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17efecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eff0: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x17EFF0u;
    SET_GPR_U32(ctx, 31, 0x17EFF8u);
    ctx->pc = 0x17EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFF0u;
    // 0x17eff4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x17EFF0u, 0x17EFF8u)) {
        return;
    }
    ctx->pc = 0x17EFF8u;
label_17eff8:
    // 0x17eff8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x17eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x17effc: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x17effcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x17f000: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x17f000u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f004: 0xc0561b6  jal         func_1586D8
    ctx->pc = 0x17F004u;
    SET_GPR_U32(ctx, 31, 0x17F00Cu);
    ctx->pc = 0x17F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F004u;
    // 0x17f008: 0xae82899c  sw          $v0, -0x7664($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294936988), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1586D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1586D8u, 0x17F004u, 0x17F00Cu)) {
        return;
    }
    ctx->pc = 0x17F00Cu;
label_17f00c:
    // 0x17f00c: 0x8e85899c  lw          $a1, -0x7664($s4)
    ctx->pc = 0x17f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936988)));
    // 0x17f010: 0xc056206  jal         func_158818
    ctx->pc = 0x17F010u;
    SET_GPR_U32(ctx, 31, 0x17F018u);
    ctx->pc = 0x17F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F010u;
    // 0x17f014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158818u, 0x17F010u, 0x17F018u)) {
        return;
    }
    ctx->pc = 0x17F018u;
label_17f018:
    // 0x17f018: 0x8e0389a4  lw          $v1, -0x765C($s0)
    ctx->pc = 0x17f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936996)));
    // 0x17f01c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f020: 0x8e7189a8  lw          $s1, -0x7658($s3)
    ctx->pc = 0x17f020u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937000)));
    // 0x17f024: 0x27b20038  addiu       $s2, $sp, 0x38
    ctx->pc = 0x17f024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x17f028: 0x8c5089e4  lw          $s0, -0x761C($v0)
    ctx->pc = 0x17f028u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3389E4u));
    // 0x17f02c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17F02Cu;
    SET_GPR_U32(ctx, 31, 0x17F034u);
    ctx->pc = 0x17F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F02Cu;
    // 0x17f030: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17F02Cu, 0x17F034u)) {
        return;
    }
    ctx->pc = 0x17F034u;
label_17f034:
    // 0x17f034: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F034u;
    {
        const bool branch_taken_0x17f034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F034u;
        // 0x17f038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f034) {
            ctx->pc = 0x17F05Cu;
            goto label_17f05c;
        }
    }
    ctx->pc = 0x17F03Cu;
    // 0x17f03c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f040: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17F040u;
    SET_GPR_U32(ctx, 31, 0x17F048u);
    ctx->pc = 0x17F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F040u;
    // 0x17f044: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17F040u, 0x17F048u)) {
        return;
    }
    ctx->pc = 0x17F048u;
label_17f048:
    // 0x17f048: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F048u;
    {
        const bool branch_taken_0x17f048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F048u;
        // 0x17f04c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f048) {
            ctx->pc = 0x17F05Cu;
            goto label_17f05c;
        }
    }
    ctx->pc = 0x17F050u;
    // 0x17f050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f054: 0xc07d352  jal         func_1F4D48
    ctx->pc = 0x17F054u;
    SET_GPR_U32(ctx, 31, 0x17F05Cu);
    ctx->pc = 0x17F058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F054u;
    // 0x17f058: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D48u, 0x17F054u, 0x17F05Cu)) {
        return;
    }
    ctx->pc = 0x17F05Cu;
label_17f05c:
    // 0x17f05c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x17f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17f060: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17f060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f064: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17f064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f068: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F068u;
    {
        const bool branch_taken_0x17f068 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x17F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F068u;
        // 0x17f06c: 0xaea389a4  sw          $v1, -0x765C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294936996), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f068) {
            ctx->pc = 0x17F074u;
            goto label_17f074;
        }
    }
    ctx->pc = 0x17F070u;
    // 0x17f070: 0x28440005  slti        $a0, $v0, 0x5
    ctx->pc = 0x17f070u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_17f074:
    // 0x17f074: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17F074u;
    {
        const bool branch_taken_0x17f074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F074u;
        // 0x17f078: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f074) {
            ctx->pc = 0x17F0B8u;
            goto label_17f0b8;
        }
    }
    ctx->pc = 0x17F07Cu;
    // 0x17f07c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f080: 0x24428960  addiu       $v0, $v0, -0x76A0
    ctx->pc = 0x17f080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936928));
    // 0x17f084: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17f084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f088: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x17F088u;
    SET_GPR_U32(ctx, 31, 0x17F090u);
    ctx->pc = 0x17F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F088u;
    // 0x17f08c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x17F088u, 0x17F090u)) {
        return;
    }
    ctx->pc = 0x17F090u;
label_17f090:
    // 0x17f090: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F090u;
    {
        const bool branch_taken_0x17f090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f090) {
            ctx->pc = 0x17F0A8u;
            goto label_17f0a8;
        }
    }
    ctx->pc = 0x17F098u;
    // 0x17f098: 0xc051a9e  jal         func_146A78
    ctx->pc = 0x17F098u;
    SET_GPR_U32(ctx, 31, 0x17F0A0u);
    ctx->pc = 0x17F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F098u;
    // 0x17f09c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146A78u, 0x17F098u, 0x17F0A0u)) {
        return;
    }
    ctx->pc = 0x17F0A0u;
label_17f0a0:
    // 0x17f0a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17F0A0u;
    {
        const bool branch_taken_0x17f0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0A0u;
        // 0x17f0a4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0a0) {
            ctx->pc = 0x17F0C4u;
            goto label_17f0c4;
        }
    }
    ctx->pc = 0x17F0A8u;
label_17f0a8:
    // 0x17f0a8: 0xc051a9e  jal         func_146A78
    ctx->pc = 0x17F0A8u;
    SET_GPR_U32(ctx, 31, 0x17F0B0u);
    ctx->pc = 0x17F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F0A8u;
    // 0x17f0ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146A78u, 0x17F0A8u, 0x17F0B0u)) {
        return;
    }
    ctx->pc = 0x17F0B0u;
label_17f0b0:
    // 0x17f0b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17F0B0u;
    {
        const bool branch_taken_0x17f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0B0u;
        // 0x17f0b4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0b0) {
            ctx->pc = 0x17F0C4u;
            goto label_17f0c4;
        }
    }
    ctx->pc = 0x17F0B8u;
label_17f0b8:
    // 0x17f0b8: 0xc051a9e  jal         func_146A78
    ctx->pc = 0x17F0B8u;
    SET_GPR_U32(ctx, 31, 0x17F0C0u);
    ctx->pc = 0x17F0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F0B8u;
    // 0x17f0bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146A78u, 0x17F0B8u, 0x17F0C0u)) {
        return;
    }
    ctx->pc = 0x17F0C0u;
label_17f0c0:
    // 0x17f0c0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x17f0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_17f0c4:
    // 0x17f0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f0c8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x17f0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17f0cc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x17f0ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f0d0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x17f0d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17f0d4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x17f0d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17f0d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17f0d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17f0dc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x17f0dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f0e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17f0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0E4u;
        // 0x17f0e8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F0ECu;
    // 0x17f0ec: 0x0  nop
    ctx->pc = 0x17f0ecu;
    // NOP
    ctx->pc = 0x17f0f0u;
}

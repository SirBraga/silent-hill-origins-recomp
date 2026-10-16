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

// Function: sub_00149EF8
// Address: 0x149ef8 - 0x14a000
void sub_00149EF8_0x149ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149EF8_0x149ef8");
#endif

    switch (ctx->pc) {
        case 0x149f14u: goto label_149f14;
        case 0x149f48u: goto label_149f48;
        case 0x149f7cu: goto label_149f7c;
        case 0x149fa0u: goto label_149fa0;
        case 0x149fbcu: goto label_149fbc;
        case 0x149fc4u: goto label_149fc4;
        default: break;
    }

    ctx->pc = 0x149ef8u;

    // 0x149ef8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x149ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x149efc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x149efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x149f00: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x149f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x149f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x149f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x149f0c: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x149F0Cu;
    SET_GPR_U32(ctx, 31, 0x149F14u);
    ctx->pc = 0x149F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149F0Cu;
    // 0x149f10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x149F0Cu, 0x149F14u)) {
        return;
    }
    ctx->pc = 0x149F14u;
label_149f14:
    // 0x149f14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149f18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x149f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149f1c: 0x8c43eea0  lw          $v1, -0x1160($v0)
    ctx->pc = 0x149f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BEEA0u));
    // 0x149f20: 0x54830018  bnel        $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x149F20u;
    {
        const bool branch_taken_0x149f20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x149f20) {
            ctx->pc = 0x149F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149F20u;
            // 0x149f24: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149F84u;
            goto label_149f84;
        }
    }
    ctx->pc = 0x149F28u;
    // 0x149f28: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x149f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x149f2c: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x149f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x149f30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x149f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149f34: 0x5483002e  bnel        $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x149F34u;
    {
        const bool branch_taken_0x149f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x149f34) {
            ctx->pc = 0x149F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149F34u;
            // 0x149f38: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149FF0u;
            goto label_149ff0;
        }
    }
    ctx->pc = 0x149F3Cu;
    // 0x149f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f40: 0xc04f0fe  jal         func_13C3F8
    ctx->pc = 0x149F40u;
    SET_GPR_U32(ctx, 31, 0x149F48u);
    ctx->pc = 0x149F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149F40u;
    // 0x149f44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3F8u, 0x149F40u, 0x149F48u)) {
        return;
    }
    ctx->pc = 0x149F48u;
label_149f48:
    // 0x149f48: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149f4c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x149f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x149f50: 0x8c45eea8  lw          $a1, -0x1158($v0)
    ctx->pc = 0x149f50u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BEEA8u));
    // 0x149f54: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x149f54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x149f58: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x149F58u;
    {
        const bool branch_taken_0x149f58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x149F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F58u;
        // 0x149f5c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f58) {
            ctx->pc = 0x149FF0u;
            goto label_149ff0;
        }
    }
    ctx->pc = 0x149F60u;
    // 0x149f60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149f64: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x149F64u;
    {
        const bool branch_taken_0x149f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F64u;
        // 0x149f68: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f64) {
            ctx->pc = 0x149FF0u;
            goto label_149ff0;
        }
    }
    ctx->pc = 0x149F6Cu;
    // 0x149f6c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x149f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x149f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x149f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f74: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x149F74u;
    SET_GPR_U32(ctx, 31, 0x149F7Cu);
    ctx->pc = 0x149F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149F74u;
    // 0x149f78: 0xac5d0004  sw          $sp, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x149F74u, 0x149F7Cu)) {
        return;
    }
    ctx->pc = 0x149F7Cu;
label_149f7c:
    // 0x149f7c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x149F7Cu;
    {
        const bool branch_taken_0x149f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F7Cu;
        // 0x149f80: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f7c) {
            ctx->pc = 0x149FF0u;
            goto label_149ff0;
        }
    }
    ctx->pc = 0x149F84u;
label_149f84:
    // 0x149f84: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x149F84u;
    {
        const bool branch_taken_0x149f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x149F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F84u;
        // 0x149f88: 0x26110044  addiu       $s1, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f84) {
            ctx->pc = 0x149FCCu;
            goto label_149fcc;
        }
    }
    ctx->pc = 0x149F8Cu;
    // 0x149f8c: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x149f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x149f90: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x149F90u;
    {
        const bool branch_taken_0x149f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149f90) {
            ctx->pc = 0x149F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149F90u;
            // 0x149f94: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149FF0u;
            goto label_149ff0;
        }
    }
    ctx->pc = 0x149F98u;
    // 0x149f98: 0xc052850  jal         func_14A140
    ctx->pc = 0x149F98u;
    SET_GPR_U32(ctx, 31, 0x149FA0u);
    ctx->pc = 0x149F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149F98u;
    // 0x149f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14A140u, 0x149F98u, 0x149FA0u)) {
        return;
    }
    ctx->pc = 0x149FA0u;
label_149fa0:
    // 0x149fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149fa4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x149fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x149fa8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x149FA8u;
    {
        const bool branch_taken_0x149fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FA8u;
        // 0x149fac: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fa8) {
            ctx->pc = 0x149FECu;
            goto label_149fec;
        }
    }
    ctx->pc = 0x149FB0u;
    // 0x149fb0: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x149fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x149fb4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x149FB4u;
    SET_GPR_U32(ctx, 31, 0x149FBCu);
    ctx->pc = 0x149FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149FB4u;
    // 0x149fb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x149FB4u, 0x149FBCu)) {
        return;
    }
    ctx->pc = 0x149FBCu;
label_149fbc:
    // 0x149fbc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149FBCu;
    SET_GPR_U32(ctx, 31, 0x149FC4u);
    ctx->pc = 0x149FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149FBCu;
    // 0x149fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149FBCu, 0x149FC4u)) {
        return;
    }
    ctx->pc = 0x149FC4u;
label_149fc4:
    // 0x149fc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x149FC4u;
    {
        const bool branch_taken_0x149fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FC4u;
        // 0x149fc8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fc4) {
            ctx->pc = 0x149FF0u;
            goto label_149ff0;
        }
    }
    ctx->pc = 0x149FCCu;
label_149fcc:
    // 0x149fcc: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x149fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x149fd0: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149FD0u;
    {
        const bool branch_taken_0x149fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x149fd0) {
            ctx->pc = 0x149FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149FD0u;
            // 0x149fd4: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149FE4u;
            goto label_149fe4;
        }
    }
    ctx->pc = 0x149FD8u;
    // 0x149fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149fdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149FDCu;
    {
        const bool branch_taken_0x149fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FDCu;
        // 0x149fe0: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fdc) {
            ctx->pc = 0x149FECu;
            goto label_149fec;
        }
    }
    ctx->pc = 0x149FE4u;
label_149fe4:
    // 0x149fe4: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x149FE4u;
    {
        const bool branch_taken_0x149fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x149fe4) {
            ctx->pc = 0x149FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149FE4u;
            // 0x149fe8: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149FECu;
            goto label_149fec;
        }
    }
    ctx->pc = 0x149FECu;
label_149fec:
    // 0x149fec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x149fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_149ff0:
    // 0x149ff0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x149ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149ff4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x149ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x149FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FF8u;
        // 0x149ffc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A000u;
}

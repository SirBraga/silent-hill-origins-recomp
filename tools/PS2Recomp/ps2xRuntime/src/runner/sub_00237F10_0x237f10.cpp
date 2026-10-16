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

// Function: sub_00237F10
// Address: 0x237f10 - 0x238150
void sub_00237F10_0x237f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237F10_0x237f10");
#endif

    switch (ctx->pc) {
        case 0x237f5cu: goto label_237f5c;
        case 0x237f8cu: goto label_237f8c;
        case 0x237f98u: goto label_237f98;
        case 0x237fc0u: goto label_237fc0;
        case 0x237fd4u: goto label_237fd4;
        case 0x237fecu: goto label_237fec;
        case 0x23800cu: goto label_23800c;
        case 0x238034u: goto label_238034;
        case 0x238040u: goto label_238040;
        case 0x238050u: goto label_238050;
        case 0x238060u: goto label_238060;
        case 0x238074u: goto label_238074;
        case 0x238080u: goto label_238080;
        case 0x238114u: goto label_238114;
        case 0x238120u: goto label_238120;
        default: break;
    }

    ctx->pc = 0x237f10u;

    // 0x237f10: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x237f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x237f14: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x237f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x237f18: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x237f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x237f1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x237f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f20: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x237f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x237f24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x237f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f28: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x237f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x237f2c: 0x27b60120  addiu       $s6, $sp, 0x120
    ctx->pc = 0x237f2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x237f30: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x237f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x237f34: 0x27b70124  addiu       $s7, $sp, 0x124
    ctx->pc = 0x237f34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x237f38: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x237f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x237f3c: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x237f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x237f40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x237f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237f44: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x237f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x237f48: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x237f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f4c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x237f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x237f50: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x237f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f54: 0xc09270a  jal         func_249C28
    ctx->pc = 0x237F54u;
    SET_GPR_U32(ctx, 31, 0x237F5Cu);
    ctx->pc = 0x237F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F54u;
    // 0x237f58: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x237F54u, 0x237F5Cu)) {
        return;
    }
    ctx->pc = 0x237F5Cu;
label_237f5c:
    // 0x237f5c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x237F5Cu;
    {
        const bool branch_taken_0x237f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F5Cu;
        // 0x237f60: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f5c) {
            ctx->pc = 0x237F98u;
            goto label_237f98;
        }
    }
    ctx->pc = 0x237F64u;
    // 0x237f64: 0x3c10fffc  lui         $s0, 0xFFFC
    ctx->pc = 0x237f64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65532 << 16));
    // 0x237f68: 0x3610b000  ori         $s0, $s0, 0xB000
    ctx->pc = 0x237f68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)45056);
    // 0x237f6c: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x237f6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x237f70: 0x2e732003  sltiu       $s3, $s3, 0x2003
    ctx->pc = 0x237f70u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x237f74: 0x12600062  beqz        $s3, . + 4 + (0x62 << 2)
    ctx->pc = 0x237F74u;
    {
        const bool branch_taken_0x237f74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F74u;
        // 0x237f78: 0x8fa60120  lw          $a2, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f74) {
            ctx->pc = 0x238100u;
            goto label_238100;
        }
    }
    ctx->pc = 0x237F7Cu;
    // 0x237f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f80: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x237f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x237f84: 0xc093546  jal         func_24D518
    ctx->pc = 0x237F84u;
    SET_GPR_U32(ctx, 31, 0x237F8Cu);
    ctx->pc = 0x237F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F84u;
    // 0x237f88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x237F84u, 0x237F8Cu)) {
        return;
    }
    ctx->pc = 0x237F8Cu;
label_237f8c:
    // 0x237f8c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x237f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x237f90: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x237F90u;
    {
        const bool branch_taken_0x237f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x237F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F90u;
        // 0x237f94: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f90) {
            ctx->pc = 0x237FA0u;
            goto label_237fa0;
        }
    }
    ctx->pc = 0x237F98u;
label_237f98:
    // 0x237f98: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x237F98u;
    {
        const bool branch_taken_0x237f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F98u;
        // 0x237f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f98) {
            ctx->pc = 0x238124u;
            goto label_238124;
        }
    }
    ctx->pc = 0x237FA0u;
label_237fa0:
    // 0x237fa0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x237fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237fa4: 0x34425350  ori         $v0, $v0, 0x5350
    ctx->pc = 0x237fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21328);
    // 0x237fa8: 0x1462005e  bne         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x237FA8u;
    {
        const bool branch_taken_0x237fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FA8u;
        // 0x237fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fa8) {
            ctx->pc = 0x238124u;
            goto label_238124;
        }
    }
    ctx->pc = 0x237FB0u;
    // 0x237fb0: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x237fb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x237fb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fb8: 0xc093d92  jal         func_24F648
    ctx->pc = 0x237FB8u;
    SET_GPR_U32(ctx, 31, 0x237FC0u);
    ctx->pc = 0x237FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FB8u;
    // 0x237fbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F648u, 0x237FB8u, 0x237FC0u)) {
        return;
    }
    ctx->pc = 0x237FC0u;
label_237fc0:
    // 0x237fc0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x237FC0u;
    {
        const bool branch_taken_0x237fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FC0u;
        // 0x237fc4: 0x27b40090  addiu       $s4, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fc0) {
            ctx->pc = 0x237F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237f98;
        }
    }
    ctx->pc = 0x237FC8u;
    // 0x237fc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fcc: 0xc093d92  jal         func_24F648
    ctx->pc = 0x237FCCu;
    SET_GPR_U32(ctx, 31, 0x237FD4u);
    ctx->pc = 0x237FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FCCu;
    // 0x237fd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F648u, 0x237FCCu, 0x237FD4u)) {
        return;
    }
    ctx->pc = 0x237FD4u;
label_237fd4:
    // 0x237fd4: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x237FD4u;
    {
        const bool branch_taken_0x237fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FD4u;
        // 0x237fd8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fd4) {
            ctx->pc = 0x237F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237f98;
        }
    }
    ctx->pc = 0x237FDCu;
    // 0x237fdc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x237fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fe4: 0xc09270a  jal         func_249C28
    ctx->pc = 0x237FE4u;
    SET_GPR_U32(ctx, 31, 0x237FECu);
    ctx->pc = 0x237FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FE4u;
    // 0x237fe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x237FE4u, 0x237FECu)) {
        return;
    }
    ctx->pc = 0x237FECu;
label_237fec:
    // 0x237fec: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x237FECu;
    {
        const bool branch_taken_0x237fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FECu;
        // 0x237ff0: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fec) {
            ctx->pc = 0x237F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237f98;
        }
    }
    ctx->pc = 0x237FF4u;
    // 0x237ff4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x237ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x237ff8: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x237ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x237ffc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x237FFCu;
    {
        const bool branch_taken_0x237ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FFCu;
        // 0x238000: 0x8fa50120  lw          $a1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ffc) {
            ctx->pc = 0x238020u;
            goto label_238020;
        }
    }
    ctx->pc = 0x238004u;
    // 0x238004: 0xc08dea0  jal         func_237A80
    ctx->pc = 0x238004u;
    SET_GPR_U32(ctx, 31, 0x23800Cu);
    ctx->pc = 0x238008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238004u;
    // 0x238008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x237A80u, 0x238004u, 0x23800Cu)) {
        return;
    }
    ctx->pc = 0x23800Cu;
label_23800c:
    // 0x23800c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23800cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238010: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x238010u;
    {
        const bool branch_taken_0x238010 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x238014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238010u;
        // 0x238014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238010) {
            ctx->pc = 0x238048u;
            goto label_238048;
        }
    }
    ctx->pc = 0x238018u;
    // 0x238018: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x238018u;
    {
        const bool branch_taken_0x238018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238018u;
        // 0x23801c: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238018) {
            ctx->pc = 0x238128u;
            goto label_238128;
        }
    }
    ctx->pc = 0x238020u;
label_238020:
    // 0x238020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238024: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x238024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x238028: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x238028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x23802c: 0xc092848  jal         func_24A120
    ctx->pc = 0x23802Cu;
    SET_GPR_U32(ctx, 31, 0x238034u);
    ctx->pc = 0x238030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23802Cu;
    // 0x238030: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x23802Cu, 0x238034u)) {
        return;
    }
    ctx->pc = 0x238034u;
label_238034:
    // 0x238034: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x238034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x238038: 0xc09281a  jal         func_24A068
    ctx->pc = 0x238038u;
    SET_GPR_U32(ctx, 31, 0x238040u);
    ctx->pc = 0x23803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238038u;
    // 0x23803c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x238038u, 0x238040u)) {
        return;
    }
    ctx->pc = 0x238040u;
label_238040:
    // 0x238040: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x238040u;
    {
        const bool branch_taken_0x238040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238040u;
        // 0x238044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238040) {
            ctx->pc = 0x238124u;
            goto label_238124;
        }
    }
    ctx->pc = 0x238048u;
label_238048:
    // 0x238048: 0xc08ab50  jal         func_22AD40
    ctx->pc = 0x238048u;
    SET_GPR_U32(ctx, 31, 0x238050u);
    ctx->pc = 0x23804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238048u;
    // 0x23804c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x238048u, 0x238050u)) {
        return;
    }
    ctx->pc = 0x238050u;
label_238050:
    // 0x238050: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238050u;
    {
        const bool branch_taken_0x238050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238050u;
        // 0x238054: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238050) {
            ctx->pc = 0x238068u;
            goto label_238068;
        }
    }
    ctx->pc = 0x238058u;
    // 0x238058: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x238058u;
    SET_GPR_U32(ctx, 31, 0x238060u);
    ctx->pc = 0x23805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238058u;
    // 0x23805c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x238058u, 0x238060u)) {
        return;
    }
    ctx->pc = 0x238060u;
label_238060:
    // 0x238060: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x238060u;
    {
        const bool branch_taken_0x238060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238060u;
        // 0x238064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238060) {
            ctx->pc = 0x238124u;
            goto label_238124;
        }
    }
    ctx->pc = 0x238068u;
label_238068:
    // 0x238068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x238068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23806c: 0xc08ab82  jal         func_22AE08
    ctx->pc = 0x23806Cu;
    SET_GPR_U32(ctx, 31, 0x238074u);
    ctx->pc = 0x238070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23806Cu;
    // 0x238070: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AE08u, 0x23806Cu, 0x238074u)) {
        return;
    }
    ctx->pc = 0x238074u;
label_238074:
    // 0x238074: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x238074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x238078: 0xc08abaa  jal         func_22AEA8
    ctx->pc = 0x238078u;
    SET_GPR_U32(ctx, 31, 0x238080u);
    ctx->pc = 0x23807Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238078u;
    // 0x23807c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AEA8u, 0x238078u, 0x238080u)) {
        return;
    }
    ctx->pc = 0x238080u;
label_238080:
    // 0x238080: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x238080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x238084: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x238084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x238088: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x238088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23808c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x23808cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x238090: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x238090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x238094: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x238094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x238098: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x238098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x23809c: 0x34c6f0ff  ori         $a2, $a2, 0xF0FF
    ctx->pc = 0x23809cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61695);
    // 0x2380a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2380a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2380a4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2380a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2380a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2380a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2380ac: 0x34e70fff  ori         $a3, $a3, 0xFFF
    ctx->pc = 0x2380acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4095);
    // 0x2380b0: 0xaca20050  sw          $v0, 0x50($a1)
    ctx->pc = 0x2380b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
    // 0x2380b4: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x2380b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2380b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2380b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2380bc: 0x8d040050  lw          $a0, 0x50($t0)
    ctx->pc = 0x2380bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x2380c0: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x2380c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2380c4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2380c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2380c8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x2380c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2380cc: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x2380ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2380d0: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x2380d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x2380d4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2380d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2380d8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2380d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2380dc: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x2380dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x2380e0: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x2380e0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x2380e4: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x2380e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2380e8: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x2380e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x2380ec: 0x8d020050  lw          $v0, 0x50($t0)
    ctx->pc = 0x2380ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x2380f0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2380f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2380f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2380f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2380f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2380F8u;
    {
        const bool branch_taken_0x2380f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2380FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380F8u;
        // 0x2380fc: 0xad020050  sw          $v0, 0x50($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380f8) {
            ctx->pc = 0x238120u;
            goto label_238120;
        }
    }
    ctx->pc = 0x238100u;
label_238100:
    // 0x238100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238104: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x238104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x238108: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x238108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x23810c: 0xc092848  jal         func_24A120
    ctx->pc = 0x23810Cu;
    SET_GPR_U32(ctx, 31, 0x238114u);
    ctx->pc = 0x238110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23810Cu;
    // 0x238110: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x23810Cu, 0x238114u)) {
        return;
    }
    ctx->pc = 0x238114u;
label_238114:
    // 0x238114: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x238114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x238118: 0xc09281a  jal         func_24A068
    ctx->pc = 0x238118u;
    SET_GPR_U32(ctx, 31, 0x238120u);
    ctx->pc = 0x23811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238118u;
    // 0x23811c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x238118u, 0x238120u)) {
        return;
    }
    ctx->pc = 0x238120u;
label_238120:
    // 0x238120: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x238120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_238124:
    // 0x238124: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x238124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_238128:
    // 0x238128: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x238128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x23812c: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x23812cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x238130: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x238130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x238134: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x238134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x238138: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x238138u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x23813c: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x23813cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x238140: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x238140u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x238144: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x238144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x238148: 0x3e00008  jr          $ra
    ctx->pc = 0x238148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238148u;
        // 0x23814c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238150u;
}

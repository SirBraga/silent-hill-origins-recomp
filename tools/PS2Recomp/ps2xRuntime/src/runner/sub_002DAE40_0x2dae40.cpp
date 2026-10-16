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

// Function: sub_002DAE40
// Address: 0x2dae40 - 0x2dafa8
void sub_002DAE40_0x2dae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAE40_0x2dae40");
#endif

    switch (ctx->pc) {
        case 0x2dae90u: goto label_2dae90;
        case 0x2daea0u: goto label_2daea0;
        case 0x2daed4u: goto label_2daed4;
        case 0x2daf08u: goto label_2daf08;
        case 0x2daf18u: goto label_2daf18;
        case 0x2daf4cu: goto label_2daf4c;
        default: break;
    }

    ctx->pc = 0x2dae40u;

    // 0x2dae40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2dae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2dae44: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2dae44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2dae48: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2dae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2dae4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dae4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae50: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2dae50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2dae54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2dae54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae58: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2dae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2dae5c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2dae5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dae60: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2dae60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2dae64: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2dae64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2dae68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dae6c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2dae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2dae70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dae74: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2dae74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2dae78: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2dae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2dae7c: 0x8cb7004c  lw          $s7, 0x4C($a1)
    ctx->pc = 0x2dae7cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2dae80: 0x96960014  lhu         $s6, 0x14($s4)
    ctx->pc = 0x2dae80u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2dae84: 0x12c0001a  beqz        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DAE84u;
    {
        const bool branch_taken_0x2dae84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE84u;
        // 0x2dae88: 0x96f5000c  lhu         $s5, 0xC($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae84) {
            ctx->pc = 0x2DAEF0u;
            goto label_2daef0;
        }
    }
    ctx->pc = 0x2DAE8Cu;
    // 0x2dae8c: 0x0  nop
    ctx->pc = 0x2dae8cu;
    // NOP
label_2dae90:
    // 0x2dae90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2dae90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dae94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae98: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x2dae98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dae9c: 0x0  nop
    ctx->pc = 0x2dae9cu;
    // NOP
label_2daea0:
    // 0x2daea0: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x2daea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2daea4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2DAEA4u;
    {
        const bool branch_taken_0x2daea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEA4u;
        // 0x2daea8: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daea4) {
            ctx->pc = 0x2DAEE0u;
            goto label_2daee0;
        }
    }
    ctx->pc = 0x2DAEACu;
    // 0x2daeac: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2daeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2daeb0: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x2daeb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2daeb4: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x2daeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2daeb8: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x2daeb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2daebc: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x2daebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2daec0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2daec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2daec4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2daec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2daec8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2daec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2daecc: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DAECCu;
    SET_GPR_U32(ctx, 31, 0x2DAED4u);
    ctx->pc = 0x2DAED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAECCu;
    // 0x2daed0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DAECCu, 0x2DAED4u)) {
        return;
    }
    ctx->pc = 0x2DAED4u;
label_2daed4:
    // 0x2daed4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2DAED4u;
    {
        const bool branch_taken_0x2daed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2daed4) {
            ctx->pc = 0x2DAED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAED4u;
            // 0x2daed8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2daea0;
        }
    }
    ctx->pc = 0x2DAEDCu;
    // 0x2daedc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2daedcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2daee0:
    // 0x2daee0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2daee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daee4: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x2daee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2daee8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2DAEE8u;
    {
        const bool branch_taken_0x2daee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEE8u;
        // 0x2daeec: 0x13f00a  movz        $fp, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daee8) {
            ctx->pc = 0x2DAE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DAEF0u;
label_2daef0:
    // 0x2daef0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2daef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2daef4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2daef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daef8: 0x96960016  lhu         $s6, 0x16($s4)
    ctx->pc = 0x2daef8u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x2daefc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2daefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2daf00: 0x12c00019  beqz        $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DAF00u;
    {
        const bool branch_taken_0x2daf00 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF00u;
        // 0x2daf04: 0x9455000e  lhu         $s5, 0xE($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf00) {
            ctx->pc = 0x2DAF68u;
            goto label_2daf68;
        }
    }
    ctx->pc = 0x2DAF08u;
label_2daf08:
    // 0x2daf08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2daf08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2daf0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf10: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x2daf10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2daf14: 0x0  nop
    ctx->pc = 0x2daf14u;
    // NOP
label_2daf18:
    // 0x2daf18: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x2daf18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2daf1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2DAF1Cu;
    {
        const bool branch_taken_0x2daf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF1Cu;
        // 0x2daf20: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf1c) {
            ctx->pc = 0x2DAF58u;
            goto label_2daf58;
        }
    }
    ctx->pc = 0x2DAF24u;
    // 0x2daf24: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x2daf24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2daf28: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x2daf28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2daf2c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2daf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2daf30: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x2daf30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2daf34: 0x8ee40014  lw          $a0, 0x14($s7)
    ctx->pc = 0x2daf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x2daf38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2daf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2daf3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2daf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2daf40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2daf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2daf44: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DAF44u;
    SET_GPR_U32(ctx, 31, 0x2DAF4Cu);
    ctx->pc = 0x2DAF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF44u;
    // 0x2daf48: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DAF44u, 0x2DAF4Cu)) {
        return;
    }
    ctx->pc = 0x2DAF4Cu;
label_2daf4c:
    // 0x2daf4c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2DAF4Cu;
    {
        const bool branch_taken_0x2daf4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF4Cu;
        // 0x2daf50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf4c) {
            ctx->pc = 0x2DAF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2daf18;
        }
    }
    ctx->pc = 0x2DAF54u;
    // 0x2daf54: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2daf54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2daf58:
    // 0x2daf58: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2daf58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf5c: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x2daf5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2daf60: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2DAF60u;
    {
        const bool branch_taken_0x2daf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF60u;
        // 0x2daf64: 0x13f00a  movz        $fp, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf60) {
            ctx->pc = 0x2DAF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2daf08;
        }
    }
    ctx->pc = 0x2DAF68u;
label_2daf68:
    // 0x2daf68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2daf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf6c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2daf6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2daf70: 0x29e100b  movn        $v0, $s4, $fp
    ctx->pc = 0x2daf70u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20));
    // 0x2daf74: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2daf74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2daf78: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2daf78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2daf7c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2daf7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2daf80: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2daf80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2daf84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2daf84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2daf88: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2daf88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2daf8c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2daf8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2daf90: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2daf90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2daf94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2daf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daf98: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF98u;
        // 0x2daf9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAFA0u;
    // 0x2dafa0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2dafa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2dafa4: 0x0  nop
    ctx->pc = 0x2dafa4u;
    // NOP
    ctx->pc = 0x2dafa8u;
}

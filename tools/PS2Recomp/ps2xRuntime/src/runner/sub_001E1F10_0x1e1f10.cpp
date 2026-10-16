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

// Function: sub_001E1F10
// Address: 0x1e1f10 - 0x1e2078
void sub_001E1F10_0x1e1f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1F10_0x1e1f10");
#endif

    switch (ctx->pc) {
        case 0x1e1f10u: goto label_1e1f10;
        case 0x1e1f14u: goto label_1e1f14;
        case 0x1e1f18u: goto label_1e1f18;
        case 0x1e1f1cu: goto label_1e1f1c;
        case 0x1e1f20u: goto label_1e1f20;
        case 0x1e1f24u: goto label_1e1f24;
        case 0x1e1f28u: goto label_1e1f28;
        case 0x1e1f2cu: goto label_1e1f2c;
        case 0x1e1f30u: goto label_1e1f30;
        case 0x1e1f34u: goto label_1e1f34;
        case 0x1e1f38u: goto label_1e1f38;
        case 0x1e1f3cu: goto label_1e1f3c;
        case 0x1e1f40u: goto label_1e1f40;
        case 0x1e1f44u: goto label_1e1f44;
        case 0x1e1f48u: goto label_1e1f48;
        case 0x1e1f4cu: goto label_1e1f4c;
        case 0x1e1f50u: goto label_1e1f50;
        case 0x1e1f54u: goto label_1e1f54;
        case 0x1e1f58u: goto label_1e1f58;
        case 0x1e1f5cu: goto label_1e1f5c;
        case 0x1e1f60u: goto label_1e1f60;
        case 0x1e1f64u: goto label_1e1f64;
        case 0x1e1f68u: goto label_1e1f68;
        case 0x1e1f6cu: goto label_1e1f6c;
        case 0x1e1f70u: goto label_1e1f70;
        case 0x1e1f74u: goto label_1e1f74;
        case 0x1e1f78u: goto label_1e1f78;
        case 0x1e1f7cu: goto label_1e1f7c;
        case 0x1e1f80u: goto label_1e1f80;
        case 0x1e1f84u: goto label_1e1f84;
        case 0x1e1f88u: goto label_1e1f88;
        case 0x1e1f8cu: goto label_1e1f8c;
        case 0x1e1f90u: goto label_1e1f90;
        case 0x1e1f94u: goto label_1e1f94;
        case 0x1e1f98u: goto label_1e1f98;
        case 0x1e1f9cu: goto label_1e1f9c;
        case 0x1e1fa0u: goto label_1e1fa0;
        case 0x1e1fa4u: goto label_1e1fa4;
        case 0x1e1fa8u: goto label_1e1fa8;
        case 0x1e1facu: goto label_1e1fac;
        case 0x1e1fb0u: goto label_1e1fb0;
        case 0x1e1fb4u: goto label_1e1fb4;
        case 0x1e1fb8u: goto label_1e1fb8;
        case 0x1e1fbcu: goto label_1e1fbc;
        case 0x1e1fc0u: goto label_1e1fc0;
        case 0x1e1fc4u: goto label_1e1fc4;
        case 0x1e1fc8u: goto label_1e1fc8;
        case 0x1e1fccu: goto label_1e1fcc;
        case 0x1e1fd0u: goto label_1e1fd0;
        case 0x1e1fd4u: goto label_1e1fd4;
        case 0x1e1fd8u: goto label_1e1fd8;
        case 0x1e1fdcu: goto label_1e1fdc;
        case 0x1e1fe0u: goto label_1e1fe0;
        case 0x1e1fe4u: goto label_1e1fe4;
        case 0x1e1fe8u: goto label_1e1fe8;
        case 0x1e1fecu: goto label_1e1fec;
        case 0x1e1ff0u: goto label_1e1ff0;
        case 0x1e1ff4u: goto label_1e1ff4;
        case 0x1e1ff8u: goto label_1e1ff8;
        case 0x1e1ffcu: goto label_1e1ffc;
        case 0x1e2000u: goto label_1e2000;
        case 0x1e2004u: goto label_1e2004;
        case 0x1e2008u: goto label_1e2008;
        case 0x1e200cu: goto label_1e200c;
        case 0x1e2010u: goto label_1e2010;
        case 0x1e2014u: goto label_1e2014;
        case 0x1e2018u: goto label_1e2018;
        case 0x1e201cu: goto label_1e201c;
        case 0x1e2020u: goto label_1e2020;
        case 0x1e2024u: goto label_1e2024;
        case 0x1e2028u: goto label_1e2028;
        case 0x1e202cu: goto label_1e202c;
        case 0x1e2030u: goto label_1e2030;
        case 0x1e2034u: goto label_1e2034;
        case 0x1e2038u: goto label_1e2038;
        case 0x1e203cu: goto label_1e203c;
        case 0x1e2040u: goto label_1e2040;
        case 0x1e2044u: goto label_1e2044;
        case 0x1e2048u: goto label_1e2048;
        case 0x1e204cu: goto label_1e204c;
        case 0x1e2050u: goto label_1e2050;
        case 0x1e2054u: goto label_1e2054;
        case 0x1e2058u: goto label_1e2058;
        case 0x1e205cu: goto label_1e205c;
        case 0x1e2060u: goto label_1e2060;
        case 0x1e2064u: goto label_1e2064;
        case 0x1e2068u: goto label_1e2068;
        case 0x1e206cu: goto label_1e206c;
        case 0x1e2070u: goto label_1e2070;
        case 0x1e2074u: goto label_1e2074;
        default: break;
    }

    ctx->pc = 0x1e1f10u;

label_1e1f10:
    // 0x1e1f10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e1f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e1f14:
    // 0x1e1f14: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1e1f18:
    // 0x1e1f18: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e1f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1e1f1c:
    // 0x1e1f1c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1e1f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1e1f20:
    // 0x1e1f20: 0x8c50e6d8  lw          $s0, -0x1928($v0)
    ctx->pc = 0x1e1f20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960856)));
label_1e1f24:
    // 0x1e1f24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e1f24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f28:
    // 0x1e1f28: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e1f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1e1f2c:
    // 0x1e1f2c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e1f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1e1f30:
    // 0x1e1f30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e1f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1e1f34:
    // 0x1e1f34: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1e1f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1e1f38:
    // 0x1e1f38: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1e1f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_1e1f3c:
    // 0x1e1f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1f40:
    // 0x1e1f40: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
label_1e1f44:
    if (ctx->pc == 0x1E1F44u) {
        ctx->pc = 0x1E1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F40u;
        // 0x1e1f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F48u;
        goto label_1e1f48;
    }
    ctx->pc = 0x1E1F40u;
    {
        const bool branch_taken_0x1e1f40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F40u;
        // 0x1e1f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f40) {
            ctx->pc = 0x1E204Cu;
            goto label_1e204c;
        }
    }
    ctx->pc = 0x1E1F48u;
label_1e1f48:
    // 0x1e1f48: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1e1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e1f4c:
    // 0x1e1f4c: 0x0  nop
    ctx->pc = 0x1e1f4cu;
    // NOP
label_1e1f50:
    // 0x1e1f50: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
label_1e1f54:
    if (ctx->pc == 0x1E1F54u) {
        ctx->pc = 0x1E1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F50u;
        // 0x1e1f54: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F58u;
        goto label_1e1f58;
    }
    ctx->pc = 0x1E1F50u;
    {
        const bool branch_taken_0x1e1f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e1f50) {
            ctx->pc = 0x1E1F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1F50u;
            // 0x1e1f54: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1f40;
        }
    }
    ctx->pc = 0x1E1F58u;
label_1e1f58:
    // 0x1e1f58: 0x5200003d  beql        $s0, $zero, . + 4 + (0x3D << 2)
label_1e1f5c:
    if (ctx->pc == 0x1E1F5Cu) {
        ctx->pc = 0x1E1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F58u;
        // 0x1e1f5c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F60u;
        goto label_1e1f60;
    }
    ctx->pc = 0x1E1F58u;
    {
        const bool branch_taken_0x1e1f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1f58) {
            ctx->pc = 0x1E1F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1F58u;
            // 0x1e1f5c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2050u;
            goto label_1e2050;
        }
    }
    ctx->pc = 0x1E1F60u;
label_1e1f60:
    // 0x1e1f60: 0x50a00029  beql        $a1, $zero, . + 4 + (0x29 << 2)
label_1e1f64:
    if (ctx->pc == 0x1E1F64u) {
        ctx->pc = 0x1E1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F60u;
        // 0x1e1f64: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F68u;
        goto label_1e1f68;
    }
    ctx->pc = 0x1E1F60u;
    {
        const bool branch_taken_0x1e1f60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1f60) {
            ctx->pc = 0x1E1F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1F60u;
            // 0x1e1f64: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2008u;
            goto label_1e2008;
        }
    }
    ctx->pc = 0x1E1F68u;
label_1e1f68:
    // 0x1e1f68: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e1f6c:
    // 0x1e1f6c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_1e1f70:
    if (ctx->pc == 0x1E1F70u) {
        ctx->pc = 0x1E1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F6Cu;
        // 0x1e1f70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F74u;
        goto label_1e1f74;
    }
    ctx->pc = 0x1E1F6Cu;
    {
        const bool branch_taken_0x1e1f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F6Cu;
        // 0x1e1f70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f6c) {
            ctx->pc = 0x1E204Cu;
            goto label_1e204c;
        }
    }
    ctx->pc = 0x1E1F74u;
label_1e1f74:
    // 0x1e1f74: 0x8eb2e6d8  lw          $s2, -0x1928($s5)
    ctx->pc = 0x1e1f74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960856)));
label_1e1f78:
    // 0x1e1f78: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_1e1f7c:
    if (ctx->pc == 0x1E1F7Cu) {
        ctx->pc = 0x1E1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F78u;
        // 0x1e1f7c: 0xaea0e6d8  sw          $zero, -0x1928($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294960856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F80u;
        goto label_1e1f80;
    }
    ctx->pc = 0x1E1F78u;
    {
        const bool branch_taken_0x1e1f78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F78u;
        // 0x1e1f7c: 0xaea0e6d8  sw          $zero, -0x1928($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294960856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f78) {
            ctx->pc = 0x1E1FECu;
            goto label_1e1fec;
        }
    }
    ctx->pc = 0x1E1F80u;
label_1e1f80:
    // 0x1e1f80: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1e1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1e1f84:
    // 0x1e1f84: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x1e1f84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
label_1e1f88:
    // 0x1e1f88: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x1e1f88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_1e1f8c:
    // 0x1e1f8c: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x1e1f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f90:
    // 0x1e1f90: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1e1f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f94:
    // 0x1e1f94: 0x0  nop
    ctx->pc = 0x1e1f94u;
    // NOP
label_1e1f98:
    // 0x1e1f98: 0x1630000f  bne         $s1, $s0, . + 4 + (0xF << 2)
label_1e1f9c:
    if (ctx->pc == 0x1E1F9Cu) {
        ctx->pc = 0x1E1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F98u;
        // 0x1e1f9c: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FA0u;
        goto label_1e1fa0;
    }
    ctx->pc = 0x1E1F98u;
    {
        const bool branch_taken_0x1e1f98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F98u;
        // 0x1e1f9c: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f98) {
            ctx->pc = 0x1E1FD8u;
            goto label_1e1fd8;
        }
    }
    ctx->pc = 0x1E1FA0u;
label_1e1fa0:
    // 0x1e1fa0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1e1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e1fa4:
    // 0x1e1fa4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e1fa8:
    if (ctx->pc == 0x1E1FA8u) {
        ctx->pc = 0x1E1FACu;
        goto label_1e1fac;
    }
    ctx->pc = 0x1E1FA4u;
    {
        const bool branch_taken_0x1e1fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1fa4) {
            ctx->pc = 0x1E1FC0u;
            goto label_1e1fc0;
        }
    }
    ctx->pc = 0x1E1FACu;
label_1e1fac:
    // 0x1e1fac: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x1e1facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_1e1fb0:
    // 0x1e1fb0: 0x40f809  jalr        $v0
label_1e1fb4:
    if (ctx->pc == 0x1E1FB4u) {
        ctx->pc = 0x1E1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FB0u;
        // 0x1e1fb4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FB8u;
        goto label_1e1fb8;
    }
    ctx->pc = 0x1E1FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1FB8u);
        ctx->pc = 0x1E1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FB0u;
        // 0x1e1fb4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1FB0u, 0x1E1FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1FB8u;
label_1e1fb8:
    // 0x1e1fb8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e1fbc:
    if (ctx->pc == 0x1E1FBCu) {
        ctx->pc = 0x1E1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FB8u;
        // 0x1e1fbc: 0x8e82e6dc  lw          $v0, -0x1924($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FC0u;
        goto label_1e1fc0;
    }
    ctx->pc = 0x1E1FB8u;
    {
        const bool branch_taken_0x1e1fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FB8u;
        // 0x1e1fbc: 0x8e82e6dc  lw          $v0, -0x1924($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fb8) {
            ctx->pc = 0x1E1FCCu;
            goto label_1e1fcc;
        }
    }
    ctx->pc = 0x1E1FC0u;
label_1e1fc0:
    // 0x1e1fc0: 0xc080d12  jal         func_203448
label_1e1fc4:
    if (ctx->pc == 0x1E1FC4u) {
        ctx->pc = 0x1E1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FC0u;
        // 0x1e1fc4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FC8u;
        goto label_1e1fc8;
    }
    ctx->pc = 0x1E1FC0u;
    SET_GPR_U32(ctx, 31, 0x1E1FC8u);
    ctx->pc = 0x1E1FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1FC0u;
    // 0x1e1fc4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203448u, 0x1E1FC0u, 0x1E1FC8u)) {
        return;
    }
    ctx->pc = 0x1E1FC8u;
label_1e1fc8:
    // 0x1e1fc8: 0x8e82e6dc  lw          $v0, -0x1924($s4)
    ctx->pc = 0x1e1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960860)));
label_1e1fcc:
    // 0x1e1fcc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e1fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1fd0:
    // 0x1e1fd0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e1fd4:
    if (ctx->pc == 0x1E1FD4u) {
        ctx->pc = 0x1E1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FD0u;
        // 0x1e1fd4: 0xae91e6dc  sw          $s1, -0x1924($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960860), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FD8u;
        goto label_1e1fd8;
    }
    ctx->pc = 0x1E1FD0u;
    {
        const bool branch_taken_0x1e1fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FD0u;
        // 0x1e1fd4: 0xae91e6dc  sw          $s1, -0x1924($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960860), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fd0) {
            ctx->pc = 0x1E1FE4u;
            goto label_1e1fe4;
        }
    }
    ctx->pc = 0x1E1FD8u;
label_1e1fd8:
    // 0x1e1fd8: 0x8e62e6d8  lw          $v0, -0x1928($s3)
    ctx->pc = 0x1e1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960856)));
label_1e1fdc:
    // 0x1e1fdc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e1fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1fe0:
    // 0x1e1fe0: 0xae71e6d8  sw          $s1, -0x1928($s3)
    ctx->pc = 0x1e1fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294960856), GPR_U32(ctx, 17));
label_1e1fe4:
    // 0x1e1fe4: 0x1640ffec  bnez        $s2, . + 4 + (-0x14 << 2)
label_1e1fe8:
    if (ctx->pc == 0x1E1FE8u) {
        ctx->pc = 0x1E1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FE4u;
        // 0x1e1fe8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FECu;
        goto label_1e1fec;
    }
    ctx->pc = 0x1E1FE4u;
    {
        const bool branch_taken_0x1e1fe4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FE4u;
        // 0x1e1fe8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fe4) {
            ctx->pc = 0x1E1F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1f98;
        }
    }
    ctx->pc = 0x1E1FECu;
label_1e1fec:
    // 0x1e1fec: 0x8ea2e6d8  lw          $v0, -0x1928($s5)
    ctx->pc = 0x1e1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960856)));
label_1e1ff0:
    // 0x1e1ff0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_1e1ff4:
    if (ctx->pc == 0x1E1FF4u) {
        ctx->pc = 0x1E1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FF0u;
        // 0x1e1ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FF8u;
        goto label_1e1ff8;
    }
    ctx->pc = 0x1E1FF0u;
    {
        const bool branch_taken_0x1e1ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ff0) {
            ctx->pc = 0x1E1FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1FF0u;
            // 0x1e1ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E204Cu;
            goto label_1e204c;
        }
    }
    ctx->pc = 0x1E1FF8u;
label_1e1ff8:
    // 0x1e1ff8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1e1ffc:
    // 0x1e1ffc: 0xac40e6e8  sw          $zero, -0x1918($v0)
    ctx->pc = 0x1e1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960872), GPR_U32(ctx, 0));
label_1e2000:
    // 0x1e2000: 0x10000012  b           . + 4 + (0x12 << 2)
label_1e2004:
    if (ctx->pc == 0x1E2004u) {
        ctx->pc = 0x1E2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2000u;
        // 0x1e2004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2008u;
        goto label_1e2008;
    }
    ctx->pc = 0x1E2000u;
    {
        const bool branch_taken_0x1e2000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2000u;
        // 0x1e2004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2000) {
            ctx->pc = 0x1E204Cu;
            goto label_1e204c;
        }
    }
    ctx->pc = 0x1E2008u;
label_1e2008:
    // 0x1e2008: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e2008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_1e200c:
    // 0x1e200c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1e200cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e2010:
    // 0x1e2010: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1e2014:
    if (ctx->pc == 0x1E2014u) {
        ctx->pc = 0x1E2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2010u;
        // 0x1e2014: 0x24031101  addiu       $v1, $zero, 0x1101 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2018u;
        goto label_1e2018;
    }
    ctx->pc = 0x1E2010u;
    {
        const bool branch_taken_0x1e2010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2010u;
        // 0x1e2014: 0x24031101  addiu       $v1, $zero, 0x1101 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2010) {
            ctx->pc = 0x1E2048u;
            goto label_1e2048;
        }
    }
    ctx->pc = 0x1E2018u;
label_1e2018:
    // 0x1e2018: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e2018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e201c:
    // 0x1e201c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e201cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2020:
    // 0x1e2020: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_1e2024:
    if (ctx->pc == 0x1E2024u) {
        ctx->pc = 0x1E2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2020u;
        // 0x1e2024: 0x24021102  addiu       $v0, $zero, 0x1102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2028u;
        goto label_1e2028;
    }
    ctx->pc = 0x1E2020u;
    {
        const bool branch_taken_0x1e2020 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2020u;
        // 0x1e2024: 0x24021102  addiu       $v0, $zero, 0x1102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2020) {
            ctx->pc = 0x1E2038u;
            goto label_1e2038;
        }
    }
    ctx->pc = 0x1E2028u;
label_1e2028:
    // 0x1e2028: 0xc07835c  jal         func_1E0D70
label_1e202c:
    if (ctx->pc == 0x1E202Cu) {
        ctx->pc = 0x1E202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2028u;
        // 0x1e202c: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2030u;
        goto label_1e2030;
    }
    ctx->pc = 0x1E2028u;
    SET_GPR_U32(ctx, 31, 0x1E2030u);
    ctx->pc = 0x1E202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2028u;
    // 0x1e202c: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0D70u, 0x1E2028u, 0x1E2030u)) {
        return;
    }
    ctx->pc = 0x1E2030u;
label_1e2030:
    // 0x1e2030: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e2034:
    if (ctx->pc == 0x1E2034u) {
        ctx->pc = 0x1E2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2030u;
        // 0x1e2034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2038u;
        goto label_1e2038;
    }
    ctx->pc = 0x1E2030u;
    {
        const bool branch_taken_0x1e2030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2030u;
        // 0x1e2034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2030) {
            ctx->pc = 0x1E204Cu;
            goto label_1e204c;
        }
    }
    ctx->pc = 0x1E2038u;
label_1e2038:
    // 0x1e2038: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_1e203c:
    if (ctx->pc == 0x1E203Cu) {
        ctx->pc = 0x1E203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2038u;
        // 0x1e203c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2040u;
        goto label_1e2040;
    }
    ctx->pc = 0x1E2038u;
    {
        const bool branch_taken_0x1e2038 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2038u;
        // 0x1e203c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2038) {
            ctx->pc = 0x1E204Cu;
            goto label_1e204c;
        }
    }
    ctx->pc = 0x1E2040u;
label_1e2040:
    // 0x1e2040: 0xc078478  jal         func_1E11E0
label_1e2044:
    if (ctx->pc == 0x1E2044u) {
        ctx->pc = 0x1E2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2040u;
        // 0x1e2044: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2048u;
        goto label_1e2048;
    }
    ctx->pc = 0x1E2040u;
    SET_GPR_U32(ctx, 31, 0x1E2048u);
    ctx->pc = 0x1E2044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2040u;
    // 0x1e2044: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E11E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E11E0u, 0x1E2040u, 0x1E2048u)) {
        return;
    }
    ctx->pc = 0x1E2048u;
label_1e2048:
    // 0x1e2048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e204c:
    // 0x1e204c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e204cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e2050:
    // 0x1e2050: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e2050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e2054:
    // 0x1e2054: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e2054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e2058:
    // 0x1e2058: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e2058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e205c:
    // 0x1e205c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1e205cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e2060:
    // 0x1e2060: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1e2060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2064:
    // 0x1e2064: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1e2064u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2068:
    // 0x1e2068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e206c:
    // 0x1e206c: 0x3e00008  jr          $ra
label_1e2070:
    if (ctx->pc == 0x1E2070u) {
        ctx->pc = 0x1E2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E206Cu;
        // 0x1e2070: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2074u;
        goto label_1e2074;
    }
    ctx->pc = 0x1E206Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E206Cu;
        // 0x1e2070: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E206Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2074u;
label_1e2074:
    // 0x1e2074: 0x0  nop
    ctx->pc = 0x1e2074u;
    // NOP
    ctx->pc = 0x1e2078u;
}
